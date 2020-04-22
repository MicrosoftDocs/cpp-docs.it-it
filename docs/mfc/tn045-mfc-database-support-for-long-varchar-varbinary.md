---
title: 'TN045: supporto di database MFC per Varchar-Varbinary lungo'
ms.date: 11/04/2016
helpviewer_keywords:
- TN045
- Varbinary data type
- Varchar data type
ms.assetid: cf572c35-5275-45b5-83df-5f0e36114f40
ms.openlocfilehash: 55a68ba970d0a26163f426d51818c701c13ed051
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81750289"
---
# <a name="tn045-mfcdatabase-support-for-long-varcharvarbinary"></a>TN045: supporto di MFC/database per Long Varchar/Varbinary

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota viene descritto come recuperare e inviare i **SQL_LONGVARCHAR** ODBC e **SQL_LONGVARBINARY** tipi di dati utilizzando le classi di database MFC.

## <a name="overview-of-long-varcharvarbinary-support"></a>Panoramica del supporto Long Varchar/Varbinary

Il **SQL_LONG_VARCHAR** ODBC e **SQL_LONGBINARY** tipi di dati (denominati qui come colonne di dati lunghe) possono contenere enormi quantità di dati. Esistono 3 modi per gestire questi dati:There are 3 ways you can handle this data:

- Associarlo a `CString` / `CByteArray`un file .

- Associarlo a `CLongBinary`un file .

- Non associarlo affatto e recuperare e inviare manualmente il valore di dati long, indipendentemente dalle classi di database.

Ognuno dei tre metodi presenta vantaggi e svantaggi.

Le colonne di dati lunghe non sono supportate per i parametri di una query. Sono supportati solo per outputColumns.

## <a name="binding-a-long-data-column-to-a-cstringcbytearray"></a>Associazione di una colonna di dati long a un CString/CByteArray

Vantaggi:

Questo approccio è semplice da comprendere e si lavora con classi familiari. Il framework `CFormView` fornisce `CString` `DDX_Text`supporto per con . Si dispone di molte funzionalità di `CString` `CByteArray` stringa o raccolta generale con le classi e ed è possibile controllare la quantità di memoria allocata localmente per contenere il valore dei dati. Il framework gestisce una copia `Edit` precedente `AddNew` dei dati di campo durante o chiamate di funzione e il framework può rilevare automaticamente le modifiche ai dati per l'utente.

> [!NOTE]
> Poiché `CString` è progettato per `CByteArray` lavorare su dati di tipo carattere e per lavorare `CString`su dati binari, è consigliabile inserire i dati di tipo carattere (**SQL_LONGVARCHAR**) in , e i dati binari (**SQL_LONGVARBINARY**) in `CByteArray`.

Il RFX `CString` funziona `CByteArray` per e dispone di un argomento aggiuntivo che consente di eseguire l'override delle dimensioni predefinite della memoria allocata per contenere il valore recuperato per la colonna di dati. Si noti l'argomento nMaxLength nelle seguenti dichiarazioni di funzione:

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

Se si recupera una colonna `CString` `CByteArray`di dati long in un oggetto o , la quantità massima di dati restituita è, per impostazione predefinita, 255 byte. Qualsiasi cosa al di là di questo viene ignorata. In questo caso, il framework genererà l'eccezione **AFX_SQL_ERROR_DATA_TRUNCATED**. Fortunatamente, è possibile aumentare in modo esplicito nMaxLength a valori maggiori, fino a **MAXINT**.

> [!NOTE]
> Il valore di nMaxLength viene utilizzato da MFC `SQLBindColumn` per impostare il buffer locale della funzione. Si tratta del buffer locale per l'archiviazione dei dati e non influisce effettivamente sulla quantità di dati restituiti dal driver ODBC. `RFX_Text`ed `RFX_Binary` effettuare una `SQLFetch` sola chiamata per recuperare i dati dal database back-end. Ogni driver ODBC ha una limitazione diversa sulla quantità di dati che possono restituire in un unico recupero. Questo limite può essere molto inferiore al valore impostato in nMaxLength, nel qual caso verrà generata l'eccezione **AFX_SQL_ERROR_DATA_TRUNCATED.** In queste circostanze, `RFX_LongBinary` passare `RFX_Text` all'utilizzo anziché o `RFX_Binary` in modo che tutti i dati possano essere recuperati.

ClassWizard associa **SQL_LONGVARCHAR** un SQL_LONGVARCHAR `CString`a , o `CByteArray` un **SQL_LONGVARBINARY** a. Se si desidera allocare più di 255 byte in cui recuperare la colonna di dati long, è quindi possibile fornire un valore esplicito per nMaxLength.

Quando una colonna di dati `CString` `CByteArray`long è associata a un oggetto o , l'aggiornamento del campo funziona come quando è associato a un SQL_**VARCHAR** o**SQL_.** Durante `Edit`, il valore dei dati `Update` viene memorizzato nella cache e successivamente confrontato quando viene chiamato per rilevare le modifiche al valore dei dati e impostare i valori Dirty e Null per la colonna in modo appropriato.

## <a name="binding-a-long-data-column-to-a-clongbinary"></a>Associazione di una colonna di dati long a un CLongBinaryBinding a Long Data Column to a CLongBinary

Se la colonna di dati long può contenere più **MAXINT** byte `CLongBinary`di dati, è consigliabile probabilmente recuperarla in un file .

Vantaggi:

In questo modo viene recuperata un'intera colonna di dati lunga, fino alla memoria disponibile.

Svantaggi:

I dati vengono conservati in memoria. Questo approccio è inoltre proibitivo per grandi quantità di dati. È necessario `SetFieldDirty` chiamare il membro dati associato per `Update` assicurarsi che il campo sia incluso in un'operazione.

Se si recuperano colonne `CLongBinary`di dati lunghe in un oggetto , le classi `HGLOBAL` di database controlleranno la dimensione totale della colonna di dati long, quindi allocheranno un segmento di memoria sufficientemente grande da contenere l'intero valore di dati. Le classi di database recuperano quindi `HGLOBAL`l'intero valore di dati nell'oggetto allocato.

Se l'origine dati non può restituire la dimensione prevista della colonna di dati long, il framework genererà l'eccezione **AFX_SQL_ERROR_SQL_NO_TOTAL**. Se il tentativo `HGLOBAL` di allocare l'operazione ha esito negativo, viene generata un'eccezione di memoria standard.

ClassWizard associa un **SQL_LONGVARCHAR** o `CLongBinary` un **SQL_LONGVARBINARY** a un per l'utente. Selezionare `CLongBinary` come Tipo di variabile nella finestra di dialogo Aggiungi variabile membro. ClassWizard aggiungerà `RFX_LongBinary` quindi una `DoFieldExchange` chiamata alla chiamata e incrementerà il numero totale di campi associati.

Per aggiornare i valori lunghi della `HGLOBAL` colonna di dati, assicurarsi innanzitutto che l'allocato sia sufficientemente grande da contenere i nuovi dati chiamando **::GlobalSize** sul *membro m_hData* di `CLongBinary`. Se è troppo piccolo, `HGLOBAL` rilasciare e allocare uno delle dimensioni appropriate. Quindi impostare *m_dwDataLength* per riflettere la nuova dimensione.

In caso contrario, se *m_dwDataLength* è maggiore della dimensione dei dati che `HGLOBAL`si stanno sostituendo, è possibile liberare e riassegnare l'oggetto o lasciarlo allocato. Assicurarsi di indicare il numero di byte effettivamente utilizzati in *m_dwDataLength*.

## <a name="how-updating-a-clongbinary-works"></a>Funzionamento dell'aggiornamento di CLongBinary

Non è necessario comprendere come `CLongBinary` funziona l'aggiornamento di un oggetto, ma può essere utile come esempio su come inviare valori di dati lunghi a un'origine dati, se si sceglie questo terzo metodo, descritto di seguito.

> [!NOTE]
> Affinché un `CLongBinary` campo venga incluso in un `SetFieldDirty` aggiornamento, è necessario chiamare in modo esplicito per il campo. Se si apportano modifiche a un campo, inclusa l'impostazione Null, è necessario chiamare `SetFieldDirty`. È inoltre `SetFieldNull`necessario chiamare , con il secondo parametro **FALSE**, per contrassegnare il campo come con valore.

Quando si `CLongBinary` aggiorna un campo, le classi di database `SQLSetPos`utilizzano il meccanismo di **DATA_AT_EXEC** di ODBC (vedere la documentazione ODBC sull'argomento rgbValue di odbc). Quando il framework prepara l'istruzione insert o update, anziché puntare `HGLOBAL` ai dati che li contengono, l'indirizzo dell'oggetto *address* `CLongBinary` viene impostato come *valore* della colonna e l'indicatore di lunghezza impostato su **SQL_DATA_AT_EXEC**. Successivamente, quando l'istruzione update viene `SQLExecDirect` inviata all'origine dati, verrà **restituito SQL_NEED_DATA**. In questo modo viene visualizzato un framework che il valore `CLongBinary`del parametro per questa colonna è in realtà l'indirizzo di un oggetto . Il framework `SQLGetData` chiama una volta con un buffer di piccole dimensioni, prevedendo che il driver restituisca la lunghezza effettiva dei dati. Se il driver restituisce la lunghezza effettiva dell'oggetto binario di grandi dimensioni (blob), MFC rialloca la quantità di spazio necessaria per recuperare il BLOB. Se l'origine dati restituisce **SQL_NO_TOTAL**, a indicare che non è possibile determinare le dimensioni del BLOB, MFC creerà blocchi più piccoli. La dimensione iniziale predefinita è 64K e i blocchi successivi saranno il doppio della dimensione; ad esempio, il secondo sarà 128K, il terzo è 256K e così via. La dimensione iniziale è configurabile.

## <a name="not-binding-retrievingsending-data-directly-from-odbc-with-sqlgetdata"></a>Non associazione: recupero/invio di dati direttamente da ODBC con SQLGetData

Con questo metodo si ignorano completamente le classi di database e si gestisce la colonna di dati long.

Vantaggi:

Se necessario, è possibile memorizzare i dati nella cache su disco o decidere in modo dinamico la quantità di dati da recuperare.

Svantaggi:

Non si ottiene il framework `Edit` `AddNew` o il supporto ed è necessario scrivere`Delete` codice manualmente per eseguire funzionalità di base ( funziona comunque, poiché non si tratta di un'operazione a livello di colonna).

In questo caso, la colonna di dati long deve essere nell'elenco di selezione del recordset, ma non deve essere associata dal framework. Un modo per eseguire questa operazione consiste `GetDefaultSQL` nel fornire la propria `CRecordset`istruzione `Open` SQL tramite o come argomento lpszSQL alla funzione di 'e non associare la colonna aggiuntiva con una chiamata di funzione RFX_. ODBC richiede che i campi non associati vengano visualizzati a destra dei campi associati, quindi aggiungere la colonna o le colonne non associate alla fine dell'elenco di selezione.

> [!NOTE]
> Poiché la colonna di dati long non è associata dal `CRecordset::Update` framework, le modifiche ad essa non verranno gestite con le chiamate. È necessario creare e inviare manualmente le istruzioni SQL **INSERT** e **UPDATE** necessarie.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
