---
title: 'TN042: suggerimenti per gli sviluppatori di driver ODBC'
ms.date: 11/04/2016
f1_keywords:
- vc.odbc
helpviewer_keywords:
- ODBC drivers [MFC], writing
- databases [MFC], ODBC
- TN042
ms.assetid: ecc6b5d9-f480-4582-9e22-8309fe561dad
ms.openlocfilehash: 67f7a86a247b60be66dabb0a89f04d39ce76222b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372141"
---
# <a name="tn042-odbc-driver-developer-recommendations"></a>TN042: suggerimenti per gli sviluppatori di driver ODBC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota vengono descritte le linee guida per i writer di driver ODBC. Vengono descritti i requisiti generali e i presupposti della funzionalità ODBC che le classi di database MFC costituiscono e vari dettagli semantici previsti. Vengono descritte le `CRecordset` funzionalità del driver necessarie per supportare le tre modalità Open (**forwardOnly**, **snapshot** e **dynaset**).

## <a name="odbcs-cursor-library"></a>Libreria di cursori di ODBC

Le classi di database MFC presentano all'utente funzionalità che in molti casi superano le funzionalità fornite dalla maggior parte dei driver ODBC di livello 1. Fortunatamente, la libreria di cursori di ODBC si sovrapporre tra le classi di database e il driver e fornirà automaticamente gran parte di questa funzionalità aggiuntiva.

Ad esempio, la maggior parte dei driver 1.0 non supporta lo scorrimento all'indietro. La libreria di cursori è in grado di rilevarlo e memorizzerà nella cache le righe del driver e le presenterà come richiesto in FETCH_PREV chiamate in `SQLExtendedFetch`.

Un altro importante esempio di dipendenza della libreria di cursori è l'aggiornamento posizionato. La maggior parte dei driver 1.0 non dispone di aggiornamenti posizionati, ma la libreria di cursori genererà istruzioni di aggiornamento che identificano una riga di destinazione nell'origine dati in base ai valori correnti dei dati memorizzati nella cache o un valore timestamp memorizzato nella cache.

La libreria di classi non utilizza mai più set di righe. Di conseguenza, le poche `SQLSetPos` istruzioni vengono sempre applicate alla riga 1 del set di righe.

## <a name="cdatabases"></a>CDatabase

Ognuna `CDatabase` assegna un singolo **HDBC**. (Se `CDatabase`viene `ExecuteSQL` utilizzata la funzione ', viene allocato temporaneamente un **HSTMT.** Quindi, `CDatabase`se sono necessari più 's, più **HDBC**s per **HENV** devono essere supportati.

Le classi di database richiedono la libreria di cursori. Ciò si riflette `SQLSetConnections` in una chiamata **SQL_ODBC_CURSORS,** **SQL_CUR_USE_ODBC**.

`SQLDriverConnect`, **SQL_DRIVER_COMPLETE** viene `CDatabase::Open` utilizzato da per stabilire la connessione all'origine dati.

Il driver `SQLGetInfo SQL_ODBC_API_CONFORMANCE`  >= deve supportare **SQL_OAC_LEVEL1** `SQLGetInfo SQL_ODBC_SQL_CONFORMANCE`  >=  **SQL_OSC_MINIMUM**.

Affinché le transazioni siano `CDatabase` supportate per i `SQLGetInfo SQL_CURSOR_COMMIT_BEHAVIOR` recordset dipendenti e **SQL_CURSOR_ROLLBACK_BEHAVIOR** deve disporre di **SQL_CR_PRESERVE**. In caso contrario, i tentativi di eseguire il controllo delle transazioni verranno ignorati.

`SQLGetInfo SQL_DATA_SOURCE_READ_ONLY`deve essere supportato. Se restituisce "Y", non verrà eseguita alcuna operazione di aggiornamento sull'origine dati.

Se `CDatabase` l'oggetto viene aperto ReadOnly, verrà effettuato un `SQLSetConnectOption SQL_ACCESS_MODE`tentativo di impostare l'origine dati di sola lettura con **SQL_MODE_READ_ONLY**.

Se gli identificatori richiedono la citazione, queste informazioni `SQLGetInfo SQL_IDENTIFIER_QUOTE_CHAR` devono essere restituite dal driver con una chiamata.

A scopo di `SQLGetInfo SQL_DBMS_VER` debug e **SQL_DBMS_NAME** vengono recuperati dal driver.

`SQLSetStmtOption SQL_QUERY_TIMEOUT`e **SQL_ASYNC_ENABLE** può essere `CDatabase`chiamato su un **'s HDBC**.

`SQLError`può essere chiamato con uno o tutti gli argomenti NULL.

Naturalmente, `SQLAllocEnv`, `SQLAllocConnect` `SQLDisconnect` , `SQLFreeConnect` e deve essere supportato.

## <a name="executesql"></a>ExecuteSQL

Oltre ad allocare e liberare un **HSTMT**temporaneo, `ExecuteSQL` chiama `SQLExecDirect` `SQLFetch`, e `SQLNumResultCol` `SQLMoreResults`. `SQLCancel`può essere chiamato **sull'HSTMT**.

## <a name="getdatabasename"></a>GetDatabaseName

`SQLGetInfo SQL_DATABASE_NAME`sarà chiamato.

## <a name="begintrans-committrans-rollback"></a>BeginTrans, CommitTrans, Rollback

`SQLSetConnectOption SQL_AUTOCOMMIT`e `SQLTransact SQL_COMMIT`, **SQL_ROLLBACK** e **SQL_AUTOCOMMIT** verranno chiamati se vengono effettuate richieste di transazione.

## <a name="crecordsets"></a>CRecordsets

`SQLAllocStmt`, `SQLPrepare` `SQLExecute` , `Open` (For e `Requery`), `SQLExecDirect` `SQLFreeStmt` (per le operazioni di aggiornamento), deve essere supportato. `SQLNumResultCols`e `SQLDescribeCol` saranno chiamati sui risultati impostati in vari momenti.

`SQLSetParam`viene ampiamente utilizzato per l'associazione dei dati dei parametri **e** DATA_AT_EXEC funzionalità.

`SQLBindCol`viene ampiamente utilizzato per registrare i percorsi di archiviazione dei dati di output colonna con ODBC.

Due `SQLGetData` chiamate vengono utilizzate per recuperare i dati **SQL_LONG_VARCHAR** e **SQL_LONG_VARBINARY.** La prima chiamata tenta di trovare la lunghezza `SQLGetData` totale del valore della colonna chiamando con cbMaxValue pari a 0, ma con un valore pcbValue valido. Se pcbValue contiene **SQL_NO_TOTAL**, viene generata un'eccezione. In caso contrario, viene `SQLGetData` allocato un **HGLOBAL** e viene effettuata un'altra chiamata per recuperare l'intero risultato.

## <a name="updating"></a>Updating

Se viene richiesto il `SQLGetInfo SQL_LOCK_TYPES` blocco pessimistico, verrà eseguita una query. Se **SQL_LCK_EXCLUSIVE** non è supportato, verrà generata un'eccezione.

I tentativi `CRecordset` di aggiornare un (**snapshot** o **dynaset**) causeranno un secondo **HSTMT** da allocare. Per i driver che non supportano il secondo **HSTMT**, la libreria di cursori simulerà questa funzionalità. Sfortunatamente, questo può talvolta significa forzare la query corrente sul primo **HSTMT** fino al completamento prima di elaborare la seconda richiesta di **HSTMT.**

`SQLFreeStmt SQL_CLOSE`e **SQL_RESET_PARAMS** SQL_RESET_PARAMS `SQLGetCursorName` e verrà chiamato durante le operazioni di aggiornamento.

Se sono presenti **CLongBinarys** in **outputColumns**, è necessario che la funzionalità **di ODBC DATA_AT_EXEC** sia supportata. Ciò include la `SQLExecDirect` `SQLParamData` restituzione **di SQL_NEED_DATA** da e `SQLPutData`.

`SQLRowCount`viene chiamato dopo l'esecuzione per verificare `SQLExecDirect`che solo 1 record è stato aggiornato dal file .

## <a name="forwardonly-cursors"></a>Cursori ForwardOnly

Solo `SQLFetch` è necessario `Move` per le operazioni. Si noti che i cursori **forwardOnly** non supportano gli aggiornamenti.

## <a name="snapshot-cursors"></a>Cursori istantanei

La funzionalità `SQLExtendedFetch` snapshot richiede il supporto. Come indicato in precedenza, la libreria di `SQLExtendedFetch`cursori ODBC rileverà quando un driver non supporta e fornirà il supporto necessario.

`SQLGetInfo`, **SQL_SCROLL_OPTIONS** necessario supportare **SQL_SO_STATIC**.

## <a name="dynaset-cursors"></a>Cursori Dynaset

Di seguito è riportato il supporto minimo necessario per aprire un dynaset:

`SQLGetInfo`, **SQL_ODBC_VER** deve restituire > "01".

`SQLGetInfo`, **SQL_SCROLL_OPTIONS** deve supportare **SQL_SO_KEYSET_DRIVEN**.

`SQLGetInfo`, **SQL_ROW_UPDATES** deve restituire "Y".

`SQLGetInfo`, **SQL_POSITIONED_UPDATES** deve supportare **SQL_PS_POSITIONED_DELETE** e **SQL_PS_POSITIONED_UPDATE**.

Inoltre, se viene richiesto il blocco `SQLSetPos` pessimistico, verrà effettuata una chiamata a con irow 1, fRefresh FALSE e fLock **SQL_LCK_EXCLUSIVE.**

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
