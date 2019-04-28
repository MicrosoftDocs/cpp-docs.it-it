---
title: 'TN045: Supporto di MFC-Database per Long Varchar-Varbinary'
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.data
helpviewer_keywords:
- TN045
- Varbinary data type
- Varchar data type
ms.assetid: cf572c35-5275-45b5-83df-5f0e36114f40
ms.openlocfilehash: d356f094759775f709838de149769b1671fdf9ba
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62305372"
---
# <a name="tn045-mfcdatabase-support-for-long-varcharvarbinary"></a>TN045: Supporto di MFC/Database per Long Varchar/Varbinary

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota viene descritto come recuperare e inviare ODBC **SQL_LONGVARCHAR** e **SQL_LONGVARBINARY** classi di database di tipi di dati tramite MFC.

## <a name="overview-of-long-varcharvarbinary-support"></a>Panoramica del supporto per Long Varchar/Varbinary

ODBC **SQL_LONG_VARCHAR** e **SQL_LONGBINARY** i tipi di dati (definiti qui come colonne di dati long) possono contenere enormi quantità di dati. Esistono 3 modi per gestire questi dati:

- Associarlo a un `CString` / `CByteArray`.

- Associarlo a un `CLongBinary`.

- Non eseguirne l'associazione affatto e recuperare e inviare il valore di dati di tipo long che manualmente, indipendente da classi di database.

Ognuno dei tre metodi presenta vantaggi e svantaggi.

Le colonne di dati Long non sono supportate per i parametri a una query. Sono supportati solo per outputColumns.

## <a name="binding-a-long-data-column-to-a-cstringcbytearray"></a>Associazione di una colonna di dati Long a un'oggetto CString/CByteArray

Vantaggi:

Questo approccio è semplice da comprendere e si lavora con le familiari classi. Il framework offre `CFormView` Sopporto `CString` con `DDX_Text`. Sono disponibili numerose funzionalità generali di stringa o una raccolta con il `CString` e `CByteArray` classi ed è possibile controllare la quantità di memoria allocata in locale per contenere il valore dei dati. Il framework gestisce una copia precedente dei dati di campo durante `Edit` o `AddNew` chiamate di funzione e l'oggetto può framework rileva automaticamente le modifiche ai dati per l'utente.

> [!NOTE]
>  Poiché `CString` è progettato per l'uso in dati di tipo carattere, e `CByteArray` per l'utilizzo di dati binari, è consigliabile inserire i dati di tipo carattere (**SQL_LONGVARCHAR**) in `CString`e i dati binari ( **SQL_LONGVARBINARY**) in `CByteArray`.

Le funzioni RFX per `CString` e `CByteArray` dispongono di un argomento aggiuntivo che consente eseguire l'override le dimensioni predefinite della memoria allocata per contenere il valore recuperato per la colonna di dati. Si noti l'argomento nMaxLength nelle dichiarazioni di funzione seguente:

```
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

Se si recupera una colonna di dati long in un `CString` o `CByteArray`, il valore massimo restituito quantità di dati è, per impostazione predefinita, 255 byte. Nient'altro che questo viene ignorato. In questo caso, il framework genererà l'eccezione **AFX_SQL_ERROR_DATA_TRUNCATED**. Fortunatamente, è possibile in modo esplicito aumentare nMaxLength per valori superiori, fino a **MAXINT**.

> [!NOTE]
>  Il valore di nMaxLength utilizzato da MFC per impostare il buffer locale del `SQLBindColumn` (funzione). Questo è il buffer locale per l'archiviazione dei dati e non influenza concretamente la quantità di dati restituiti dal driver ODBC. `RFX_Text` e `RFX_Binary` solo effettuare una chiamata tramite `SQLFetch` per recuperare i dati dal database back-end. Ogni driver ODBC prevede una limitazione diversi per la quantità di dati che possono restituire in un'unica operazione di recupero. Questo limite può essere molto più piccolo rispetto al valore impostato in nMaxLength, nel qual caso l'eccezione **AFX_SQL_ERROR_DATA_TRUNCATED** verrà generata. In queste circostanze, passare all'uso `RFX_LongBinary` invece di `RFX_Text` o `RFX_Binary` in modo che tutti i dati possono essere recuperati.

ClassWizard eseguirà l'associazione una **SQL_LONGVARCHAR** a un `CString`, o una **SQL_LONGVARBINARY** a un `CByteArray` automaticamente. Se si desidera allocare più di 255 byte in cui si recupera la colonna di dati long, è quindi possibile fornire un valore esplicito per nMaxLength.

Quando una colonna di dati long è associata a un `CString` oppure `CByteArray`, quando si aggiorna il campo funziona esattamente come quando è associato a un SQL _**VARCHAR** o SQL _**VARBINARY**. Durante `Edit`, il valore dei dati viene memorizzato nella cache da subito e in un secondo momento quando confrontato `Update` viene chiamato per rilevare le modifiche ai dati di valore e impostato il Dirty e i valori Null per la colonna in modo appropriato.

## <a name="binding-a-long-data-column-to-a-clongbinary"></a>Associazione di una colonna di dati Long a un CLongBinary

Se la colonna di dati long può contenere più **MAXINT** byte di dati, è probabilmente opportuno recuperarli in un `CLongBinary`.

Vantaggi:

Ciò consente di recuperare una colonna di dati long intero, un massimo di memoria disponibile.

Svantaggi:

I dati sono conservati in memoria. Inoltre, questo approccio è eccessivamente costoso per grandi quantità di dati. È necessario chiamare `SetFieldDirty` per i dati associati membro per verificare che il campo è incluso in un `Update` operazione.

Se si recuperano colonne di dati long in un `CLongBinary`, le classi di database verranno controllare le dimensioni totali della colonna di dati long, quindi allocare un `HGLOBAL` segmento di memoria sufficientemente grande da contenere l'intero valore dei dati. Le classi di database, quindi recupero il valore di tutti i dati in allocato `HGLOBAL`.

Se l'origine dati non può restituire la dimensione prevista della colonna di dati long, il framework genererà l'eccezione **AFX_SQL_ERROR_SQL_NO_TOTAL**. Se il tentativo di allocare il `HGLOBAL` ha esito negativo, viene generata un'eccezione di memoria standard.

ClassWizard eseguirà l'associazione un' **SQL_LONGVARCHAR** oppure **SQL_LONGVARBINARY** a un `CLongBinary` automaticamente. Selezionare `CLongBinary` come il tipo di variabile nella finestra di dialogo Aggiunta guidata variabile membro. ClassWizard verrà quindi aggiunta un' `RFX_LongBinary` le chiamate al `DoFieldExchange` chiamare e incrementare il numero totale di campi associati.

Per aggiornare lungo i valori di colonna dei dati, assicurarsi innanzitutto di allocati `HGLOBAL` è sufficientemente grande da contenere i nuovi dati tramite una chiamata **:: GlobalSize** sul *denominato m_hData* membro del `CLongBinary`. Se è troppo piccola, rilasciare il `HGLOBAL` e allocare una delle dimensioni appropriate. Quindi impostare *m_dwDataLength* in modo da riflettere la nuova dimensione.

In caso contrario, se *m_dwDataLength* è maggiore delle dimensioni dei dati di cui si desidera sostituire, è possibile liberare e riallocare i `HGLOBAL`, o lasciare il campo allocata. Assicurarsi di indicare il numero di byte usati effettivamente durante *m_dwDataLength*.

## <a name="how-updating-a-clongbinary-works"></a>Funziona come l'aggiornamento un CLongBinary

Non è necessario conoscere il modo in cui l'aggiornamento una `CLongBinary` funziona, ma può essere utile ad esempio su come inviare i valori di dati long a un'origine dati, se si sceglie questo metodo terzo, descritto di seguito.

> [!NOTE]
>  Affinché un `CLongBinary` campo da includere in un aggiornamento, è necessario chiamare esplicitamente `SetFieldDirty` per il campo. Se si apportano modifiche a un campo, inclusa l'impostazione è Null, è necessario chiamare `SetFieldDirty`. È anche necessario chiamare `SetFieldNull`, mentre il secondo parametro diventa **FALSE**, per contrassegnare il campo come se avesse un valore.

Quando si aggiorna un `CLongBinary` campo, le classi di database usano ODBC **DATA_AT_EXEC** meccanismo (vedere la documentazione di ODBC in `SQLSetPos`dell'argomento rgbValue). Quando il framework si prepara l'istruzione insert o update, invece di puntare al `HGLOBAL` che contiene i dati, il *indirizzi* del `CLongBinary` viene impostato come il *valore* della colonna al contrario e il set di indicatori di lunghezza **SQL_DATA_AT_EXEC**. Successivamente, quando l'istruzione update viene inviata all'origine dati, `SQLExecDirect` restituirà **SQL_NEED_DATA**. In questo modo il framework che il valore del parametro per questa colonna sia effettivamente l'indirizzo di un `CLongBinary`. Il framework chiama `SQLGetData` una volta con un buffer di piccole dimensioni, è previsto il driver per restituire la lunghezza effettiva dei dati. Se il driver restituisce la lunghezza effettiva dell'oggetto binario di grandi dimensioni (BLOB), MFC rialloca una quantità di spazio necessario per recuperare il BLOB. Se l'origine dati restituisce **SQL_NO_TOTAL**, che indica che non può determinare le dimensioni del BLOB, MFC creerà i blocchi più piccoli. La dimensione iniziale predefinita è 64 KB e i blocchi successivi saranno raddoppierà le dimensioni; ad esempio, il secondo sarà 128 KB, il terzo è 256 KB e così via. La dimensione iniziale è configurabile.

## <a name="not-binding-retrievingsending-data-directly-from-odbc-with-sqlgetdata"></a>Non è vincolante: Il recupero o l'invio di dati dirette da ODBC con SQLGetData

Con questo metodo completamente ignorano le classi di database e affrontare la colonna di dati di tipo long.

Vantaggi:

È possibile memorizzare nella cache i dati su disco se necessario, o decidere in modo dinamico la quantità di dati da recuperare.

Svantaggi:

Il framework non si ottiene `Edit` oppure `AddNew` supporto ed è necessario scrivere codice per eseguire le funzionalità di base (`Delete` funziona tuttavia, poiché non è un'operazione a livello di colonna).

In questo caso, la colonna di dati long deve essere nell'elenco di selezione del set di record, ma non deve essere associata a dal framework. A tal fine si tratta di fornire un'istruzione SQL personalizzata tramite `GetDefaultSQL` o come argomento lpszSQL `CRecordset`del `Open` funzionare e non vengono associati neanche la colonna aggiuntiva con una chiamata di funzione RFX_. ODBC è necessario che i campi non associati vengono visualizzati a destra di campi associati, quindi aggiungere la colonna non associata o colonne alla fine dell'elenco di selezione.

> [!NOTE]
>  Perché la colonna di dati long non è associata dal framework, le modifiche a esso non verranno gestite con `CRecordset::Update` chiamate. È necessario creare e inviare il codice SQL necessario **inserire** e **UPDATE** istruzioni manualmente.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
