---
description: 'Altre informazioni su: TN045: supporto di MFC/database per Long varchar/varbinary'
title: 'TN045: supporto MFC-Database per Varchar-Varbinary Long'
ms.date: 11/04/2016
helpviewer_keywords:
- TN045
- Varbinary data type
- Varchar data type
ms.assetid: cf572c35-5275-45b5-83df-5f0e36114f40
ms.openlocfilehash: 4e19147ab5ca392307f331b12d3cf24eb5fcc06f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215183"
---
# <a name="tn045-mfcdatabase-support-for-long-varcharvarbinary"></a>TN045: supporto di MFC/database per Long Varchar/Varbinary

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota viene descritto come recuperare e inviare i tipi di dati ODBC **SQL_LONGVARCHAR** e **SQL_LONGVARBINARY** utilizzando le classi di database MFC.

## <a name="overview-of-long-varcharvarbinary-support"></a>Panoramica del supporto Long varchar/varbinary

Il **SQL_LONG_VARCHAR** ODBC e i tipi di dati di **SQL_LONGBINARY** (indicati qui come colonne di dati lunghe) possono avere grandi quantità di dati. È possibile gestire questi dati in tre modi:

- Associarlo a un `CString` / `CByteArray` .

- Associarlo a un `CLongBinary` .

- Non associarlo e recuperare e inviare il valore di dati Long manualmente, indipendentemente dalle classi di database.

Ognuno dei tre metodi presenta vantaggi e svantaggi.

Le colonne di dati Long non sono supportate per i parametri di una query. Sono supportate solo per outputColumns.

## <a name="binding-a-long-data-column-to-a-cstringcbytearray"></a>Associazione di una colonna di dati Long a un oggetto CString/CByteArray

Vantaggi:

Questo approccio è semplice da comprendere e si lavora con classi familiari. Il Framework fornisce il `CFormView` supporto per `CString` con `DDX_Text` . Sono disponibili molte funzionalità generali di stringa o di raccolta con `CString` le `CByteArray` classi e ed è possibile controllare la quantità di memoria allocata localmente per contenere il valore dei dati. Il Framework mantiene una copia precedente dei dati del campo `Edit` durante `AddNew` le chiamate di funzione o e il Framework può rilevare automaticamente le modifiche apportate ai dati.

> [!NOTE]
> Poiché `CString` è progettato per l'utilizzo di dati di tipo carattere e `CByteArray` per l'utilizzo di dati binari, è consigliabile inserire i dati di tipo carattere (**SQL_LONGVARCHAR**) in `CString` e i dati binari (**SQL_LONGVARBINARY**) in `CByteArray` .

Le funzioni RFX per `CString` e `CByteArray` includono un argomento aggiuntivo che consente di eseguire l'override delle dimensioni predefinite della memoria allocata per contenere il valore recuperato per la colonna di dati. Si noti l'argomento nMaxLength nelle dichiarazioni di funzione seguenti:

```cpp
void AFXAPI RFX_Text(CFieldExchange* pFX,
    const char *szName,
    CString& value,
    int nMaxLength = 255,
    int nColumnType =
    SQL_VARCHAR);

void AFXAPI RFX_Binary(CFieldExchange* pFX,
    const char *szName,
    CByteArray& value,
    int nMaxLength = 255);
```

Se si recupera una colonna di dati Long in `CString` o `CByteArray` , la quantità massima di dati restituita è, per impostazione predefinita, 255 byte. Qualsiasi elemento oltre questo viene ignorato. In questo caso, il Framework genererà l'eccezione **AFX_SQL_ERROR_DATA_TRUNCATED**. Fortunatamente, è possibile aumentare in modo esplicito nMaxLength a valori maggiori, fino a **MaxInt**.

> [!NOTE]
> Il valore di nMaxLength viene utilizzato da MFC per impostare il buffer locale della `SQLBindColumn` funzione. Si tratta del buffer locale per l'archiviazione dei dati e non influisce effettivamente sulla quantità di dati restituiti dal driver ODBC. `RFX_Text` e `RFX_Binary` eseguono una sola chiamata usando `SQLFetch` per recuperare i dati dal database back-end. Ogni driver ODBC presenta una limitazione diversa sulla quantità di dati che possono essere restituiti in una singola operazione di recupero. Questo limite può essere molto più piccolo del valore impostato in nMaxLength, nel qual caso verrà generata l'eccezione **AFX_SQL_ERROR_DATA_TRUNCATED** . In queste circostanze, passare a utilizzando `RFX_LongBinary` anziché `RFX_Text` o in `RFX_Binary` modo che tutti i dati possano essere recuperati.

ClassWizard eseguirà il binding di un **SQL_LONGVARCHAR** a un oggetto `CString` o di un **SQL_LONGVARBINARY** a un `CByteArray` . Se si desidera allocare più di 255 byte in cui recuperare la colonna di dati Long, è possibile specificare un valore esplicito per nMaxLength.

Quando una colonna di dati Long è associata a un oggetto `CString` o `CByteArray` , l'aggiornamento del campo funziona esattamente come quando è associato a un SQL_ **varchar** o SQL_ **varbinary**. Durante `Edit` , il valore dei dati viene memorizzato nella cache e successivamente viene confrontato quando `Update` viene chiamato il metodo per rilevare le modifiche apportate al valore dei dati e impostare i valori Dirty e null per la colonna in modo appropriato.

## <a name="binding-a-long-data-column-to-a-clongbinary"></a>Associazione di una colonna di dati Long a un CLongBinary

Se la colonna di dati Long può contenere più di **MaxInt** byte di dati, è consigliabile prenderne in considerazione il recupero in un oggetto `CLongBinary` .

Vantaggi:

Viene recuperata un'intera colonna di dati Long, fino alla memoria disponibile.

Svantaggi:

I dati vengono mantenuti in memoria. Questo approccio è anche eccessivamente costoso per quantità molto elevate di dati. È necessario chiamare `SetFieldDirty` il membro dati associato per verificare che il campo sia incluso in un' `Update` operazione.

Se si recuperano le colonne di dati Long in un `CLongBinary` , le classi di database verificheranno la dimensione totale della colonna di dati Long, quindi allocano un `HGLOBAL` segmento di memoria sufficientemente grande da contenerlo l'intero valore di dati. Le classi di database recuperano quindi l'intero valore dei dati nell'oggetto allocato `HGLOBAL` .

Se l'origine dati non è in grado di restituire le dimensioni previste della colonna di dati Long, il Framework genererà l'eccezione **AFX_SQL_ERROR_SQL_NO_TOTAL**. Se il tentativo di allocare l'oggetto `HGLOBAL` ha esito negativo, viene generata un'eccezione di memoria standard.

ClassWizard eseguirà il binding di un **SQL_LONGVARCHAR** o **SQL_LONGVARBINARY** a un `CLongBinary` . Selezionare `CLongBinary` come tipo di variabile nella finestra di dialogo Aggiungi variabile membro. ClassWizard aggiungerà quindi una `RFX_LongBinary` chiamata alla `DoFieldExchange` chiamata e incrementerà il numero totale di campi associati.

Per aggiornare i valori delle colonne di dati lunghe, assicurarsi prima di tutto che la dimensione allocata `HGLOBAL` sia sufficiente per conservare i nuovi dati chiamando **:: GlobalSize** sul membro *m_hData* di `CLongBinary` . Se è troppo piccolo, rilasciare `HGLOBAL` e allocare una delle dimensioni appropriate. Impostare quindi *m_dwDataLength* per riflettere la nuova dimensione.

In caso contrario, se la *m_dwDataLength* è maggiore della dimensione dei dati che si sta sostituendo, è possibile liberare e riallocare `HGLOBAL` o lasciare allocata. Assicurarsi di indicare il numero di byte effettivamente utilizzati in *m_dwDataLength*.

## <a name="how-updating-a-clongbinary-works"></a>Funzionamento dell'aggiornamento di un CLongBinary

Non è necessario comprendere il funzionamento dell'aggiornamento di un `CLongBinary` , ma può essere utile come esempio per inviare valori di dati lunghi a un'origine dati, se si sceglie questo terzo metodo, come descritto di seguito.

> [!NOTE]
> Affinché un `CLongBinary` campo venga incluso in un aggiornamento, è necessario chiamare in modo esplicito `SetFieldDirty` per il campo. Se si apportano modifiche a un campo, inclusa l'impostazione di un valore null, è necessario chiamare `SetFieldDirty` . È inoltre necessario chiamare `SetFieldNull` , con il secondo parametro su **false**, per contrassegnare il campo come avente un valore.

Quando si aggiorna un `CLongBinary` campo, le classi di database utilizzano il meccanismo di **DATA_AT_EXEC** di ODBC (vedere la documentazione ODBC sull' `SQLSetPos` argomento rgbValue). Quando il Framework prepara l'istruzione INSERT o Update, anziché puntare a `HGLOBAL` che contiene i dati, l' *Indirizzo* di `CLongBinary` viene impostato come *valore* della colonna e l'indicatore di lunghezza impostato su **SQL_DATA_AT_EXEC**. Successivamente, quando l'istruzione Update viene inviata all'origine dati, `SQLExecDirect` restituirà **SQL_NEED_DATA**. Viene avvisato il Framework che il valore del parametro per questa colonna è effettivamente l'indirizzo di un oggetto `CLongBinary` . Il Framework chiama `SQLGetData` una sola volta con un buffer di piccole dimensioni, aspettando che il driver restituisca la lunghezza effettiva dei dati. Se il driver restituisce la lunghezza effettiva dell'oggetto binario di grandi dimensioni (BLOB), MFC rialloca la quantità di spazio necessaria per recuperare il BLOB. Se l'origine dati restituisce **SQL_NO_TOTAL**, a indicare che non è in grado di determinare le dimensioni del BLOB, MFC creerà blocchi più piccoli. La dimensione iniziale predefinita è 64K e i blocchi successivi saranno di due dimensioni. ad esempio, il secondo sarà 128 KB, il terzo è 256K e così via. Le dimensioni iniziali sono configurabili.

## <a name="not-binding-retrievingsending-data-directly-from-odbc-with-sqlgetdata"></a>Not binding: recupero/invio di dati direttamente da ODBC con SQLGetData

Con questo metodo è possibile ignorare completamente le classi di database e gestire manualmente la colonna di dati Long.

Vantaggi:

È possibile memorizzare i dati nella cache su disco, se necessario, o decidere dinamicamente la quantità di dati da recuperare.

Svantaggi:

Non è possibile ottenere il Framework `Edit` o il `AddNew` supporto ed è necessario scrivere codice per eseguire le funzionalità di base (funziona `Delete` comunque, perché non si tratta di un'operazione a livello di colonna).

In questo caso, la colonna di dati Long deve trovarsi nell'elenco di selezione del recordset, ma non deve essere associata dal Framework. Un modo per eseguire questa operazione è fornire una propria istruzione SQL tramite `GetDefaultSQL` o come argomento lpszSQL per la `CRecordset` `Open` funzione di e non associare la colonna aggiuntiva con una chiamata di funzione RFX_. Per ODBC è necessario che i campi non associati siano visualizzati a destra dei campi associati, quindi aggiungere la colonna o le colonne non associate alla fine dell'elenco di selezione.

> [!NOTE]
> Poiché la colonna di dati Long non è associata dal Framework, le modifiche apportate non verranno gestite con le `CRecordset::Update` chiamate. È necessario creare e inviare le istruzioni SQL **Insert** e **Update** richieste manualmente.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
