---
description: 'Altre informazioni su: TN042: suggerimenti per sviluppatori di driver ODBC'
title: 'TN042: suggerimenti per gli sviluppatori di driver ODBC'
ms.date: 11/04/2016
f1_keywords:
- vc.odbc
helpviewer_keywords:
- ODBC drivers [MFC], writing
- databases [MFC], ODBC
- TN042
ms.assetid: ecc6b5d9-f480-4582-9e22-8309fe561dad
ms.openlocfilehash: 896c99ffeba98f1ea38771676475c85abf13d983
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215300"
---
# <a name="tn042-odbc-driver-developer-recommendations"></a>TN042: suggerimenti per gli sviluppatori di driver ODBC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota descrive le linee guida per i writer di driver ODBC. Vengono descritti i requisiti generali e i presupposti della funzionalità ODBC che vengono apportate dalle classi di database MFC e diversi dettagli semantici previsti. Sono descritte le funzionalità del driver necessarie per supportare le tre `CRecordset` modalità di apertura (**ForwardOnly**, **snapshot** e **Dynaset**).

## <a name="odbcs-cursor-library"></a>Libreria di cursori ODBC

Le classi di database MFC presentano funzionalità all'utente che in molti casi superano la funzionalità fornita dalla maggior parte dei driver ODBC di livello 1. Fortunatamente, la libreria di cursori di ODBC verrà stratificata tra le classi di database e il driver e fornirà automaticamente gran parte di queste funzionalità aggiuntive.

Ad esempio, la maggior parte dei driver 1,0 non supporta lo scorrimento all'indietro. La libreria di cursori può rilevare questo problema e memorizza nella cache le righe dal driver e le presenta come richiesto in FETCH_PREV le chiamate in `SQLExtendedFetch` .

Un altro esempio importante di dipendenza dalla libreria di cursori è la posizione degli aggiornamenti. Per la maggior parte dei driver 1,0 non sono inoltre disponibili aggiornamenti posizionati, ma la libreria di cursori genera istruzioni Update che identificano una riga di destinazione nell'origine dati in base ai valori dei dati memorizzati nella cache correnti o a un valore di timestamp memorizzato nella cache.

La libreria di classi non utilizza mai più set di righe. Pertanto, le poche `SQLSetPos` istruzioni vengono sempre applicate alla riga 1 del set di righe.

## <a name="cdatabases"></a>CDatabases

Ogni `CDatabase` alloca un singolo **HDBC**. Se `CDatabase` `ExecuteSQL` viene utilizzata la funzione, viene allocato temporaneamente un **HSTMT** . Se pertanto `CDatabase` sono necessari più oggetti, è necessario che siano supportati più **HDBC** s per ogni **HENV** .

Per le classi di database è richiesta la libreria di cursori. Si riflette in una `SQLSetConnections` chiamata **SQL_ODBC_CURSORS**, **SQL_CUR_USE_ODBC**.

`SQLDriverConnect`, **SQL_DRIVER_COMPLETE** viene utilizzato da `CDatabase::Open` per stabilire la connessione all'origine dati.

Il driver deve supportare `SQLGetInfo SQL_ODBC_API_CONFORMANCE`  >=  **SQL_OAC_LEVEL1**, `SQLGetInfo SQL_ODBC_SQL_CONFORMANCE`  >=  **SQL_OSC_MINIMUM**.

Per consentire il supporto delle transazioni per e i `CDatabase` relativi recordset dipendenti, `SQLGetInfo SQL_CURSOR_COMMIT_BEHAVIOR` è necessario che **SQL_CURSOR_ROLLBACK_BEHAVIOR** dispongano di **SQL_CR_PRESERVE**. In caso contrario, i tentativi di eseguire il controllo delle transazioni verranno ignorati.

`SQLGetInfo SQL_DATA_SOURCE_READ_ONLY` deve essere supportato. Se restituisce "Y", non verrà eseguita alcuna operazione di aggiornamento nell'origine dati.

Se `CDatabase` viene aperto ReadOnly, un tentativo di impostare l'origine dati di sola lettura verrà eseguito con `SQLSetConnectOption SQL_ACCESS_MODE` **SQL_MODE_READ_ONLY**.

Se gli identificatori richiedono la quota, queste informazioni devono essere restituite dal driver con una `SQLGetInfo SQL_IDENTIFIER_QUOTE_CHAR` chiamata.

A scopo di debug, `SQLGetInfo SQL_DBMS_VER` e **SQL_DBMS_NAME** vengono recuperate dal driver.

`SQLSetStmtOption SQL_QUERY_TIMEOUT` e **SQL_ASYNC_ENABLE** possono essere chiamati su un `CDatabase` **HDBC** di.

`SQLError` può essere chiamato con uno o tutti gli argomenti NULL.

Naturalmente,, `SQLAllocEnv` `SQLAllocConnect` `SQLDisconnect` e `SQLFreeConnect` devono essere supportati.

## <a name="executesql"></a>ExecuteSQL

Oltre ad allocare e liberare un **HSTMT** temporaneo, `ExecuteSQL` chiama `SQLExecDirect` , `SQLFetch` `SQLNumResultCol` e `SQLMoreResults` . `SQLCancel` può essere chiamato in **HSTMT**.

## <a name="getdatabasename"></a>GetDatabaseName

`SQLGetInfo SQL_DATABASE_NAME` verrà chiamato.

## <a name="begintrans-committrans-rollback"></a>BeginTrans, CommitTrans, rollback

`SQLSetConnectOption SQL_AUTOCOMMIT` e `SQLTransact SQL_COMMIT` , **SQL_ROLLBACK** e **SQL_AUTOCOMMIT** verranno chiamati se vengono eseguite richieste di transazione.

## <a name="crecordsets"></a>CRecordset

`SQLAllocStmt`, `SQLPrepare` , `SQLExecute` (Per `Open` e `Requery` ), `SQLExecDirect` per le operazioni di aggiornamento, `SQLFreeStmt` deve essere supportato. `SQLNumResultCols` e `SQLDescribeCol` verranno chiamati sul set di risultati in diversi momenti.

`SQLSetParam` viene utilizzato estensivamente per l'associazione di dati di parametri e **DATA_AT_EXEC** funzionalità.

`SQLBindCol` viene utilizzato ampiamente per registrare i percorsi di archiviazione dei dati della colonna di output con ODBC.

`SQLGetData`Vengono usate due chiamate per recuperare **SQL_LONG_VARCHAR** e **SQL_LONG_VARBINARY** i dati. La prima chiamata tenta di trovare la lunghezza totale del valore della colonna chiamando `SQLGetData` con cbMaxValue 0, ma con un pcbValue valido. Se pcbValue include **SQL_NO_TOTAL**, viene generata un'eccezione. In caso contrario, viene allocato un **HGLOBAL** e un'altra `SQLGetData` chiamata eseguita per recuperare l'intero risultato.

## <a name="updating"></a>Aggiornamento

Se è richiesto il blocco pessimistico, `SQLGetInfo SQL_LOCK_TYPES` verrà eseguita una query su. Se **SQL_LCK_EXCLUSIVE** non è supportato, verrà generata un'eccezione.

I tentativi di aggiornare `CRecordset` (**snapshot** o **Dynaset**) determineranno l'allocazione di un secondo **HSTMT** . Per i driver che non supportano Second **HSTMT**, questa funzionalità verrà simulata dalla libreria di cursori. Sfortunatamente, questo può talvolta significare forzare l'esecuzione della query corrente sul primo **HSTMT** prima di elaborare la richiesta del secondo **HSTMT**.

`SQLFreeStmt SQL_CLOSE` e **SQL_RESET_PARAMS** e `SQLGetCursorName` verranno chiamati durante le operazioni di aggiornamento.

Se sono presenti **CLongBinarys** in **outputColumns**, è necessario che sia supportata la funzionalità **DATA_AT_EXEC** di ODBC. Ciò include la restituzione **SQL_NEED_DATA** da `SQLExecDirect` , `SQLParamData` e `SQLPutData` .

`SQLRowCount` viene chiamato dopo l'esecuzione di per verificare che un solo record sia stato aggiornato da `SQLExecDirect` .

## <a name="forwardonly-cursors"></a>Cursori ForwardOnly

`SQLFetch`È necessario solo per le `Move` operazioni. Si noti che i cursori **ForwardOnly** non supportano gli aggiornamenti.

## <a name="snapshot-cursors"></a>Cursori snapshot

Per la funzionalità snapshot è richiesto il `SQLExtendedFetch` supporto. Come indicato in precedenza, la libreria di cursori ODBC rileva il momento in cui un driver non supporta `SQLExtendedFetch` e fornisce il supporto necessario.

`SQLGetInfo`, **SQL_SCROLL_OPTIONS** necessario supportare **SQL_SO_STATIC**.

## <a name="dynaset-cursors"></a>Cursori dynaset

Di seguito è riportato il supporto minimo necessario per aprire un dynaset:

`SQLGetInfo`, **SQL_ODBC_VER** deve restituire > "01".

`SQLGetInfo`, **SQL_SCROLL_OPTIONS** necessario supportare **SQL_SO_KEYSET_DRIVEN**.

`SQLGetInfo`, **SQL_ROW_UPDATES** deve restituire "Y".

`SQLGetInfo`, **SQL_POSITIONED_UPDATES** necessario supportare **SQL_PS_POSITIONED_DELETE** e **SQL_PS_POSITIONED_UPDATE**.

Inoltre, se è richiesto il blocco pessimistico, verrà eseguita una chiamata a `SQLSetPos` con IRow 1, FREFRESH false e fLock **SQL_LCK_EXCLUSIVE** .

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
