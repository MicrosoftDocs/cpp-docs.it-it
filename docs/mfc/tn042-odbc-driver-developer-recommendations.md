---
title: 'TN042: Suggerimenti per sviluppatori di Driver ODBC | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.odbc
dev_langs:
- C++
helpviewer_keywords:
- ODBC drivers [MFC], writing
- databases [MFC], ODBC
- TN042
ms.assetid: ecc6b5d9-f480-4582-9e22-8309fe561dad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 35c75f5c5bae3a1b56abe91340de00f373663792
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="tn042-odbc-driver-developer-recommendations"></a>TN042: suggerimenti per gli sviluppatori di driver ODBC
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota descrive le linee guida per gli sviluppatori di driver ODBC. Vengono descritti i requisiti generali e presupposti di utilizzare la funzionalità che rendono le classi di Database MFC ODBC e vari dettagli di semantici previsti. Necessario per supportare tre funzionalità del driver `CRecordset` aprire modalità (**forwardOnly**, **snapshot** e **dynaset**) sono descritti.  
  
## <a name="odbcs-cursor-library"></a>Libreria di cursori ODBC  
 Le classi di Database MFC presentano funzionalità all'utente che in molti casi supera la funzionalità fornita dalla maggior parte dei driver ODBC di livello 1. Fortunatamente, la libreria di cursori ODBC livello collocarsi tra le classi di database e il driver e viene fornito automaticamente la maggior parte di questa funzionalità aggiuntiva.  
  
 Ad esempio, la maggior parte dei driver 1.0 non supportano lo scorrimento all'indietro. La libreria di cursori può rilevare e verrà memorizzare nella cache le righe il driver e li presenti come richiesto nelle chiamate FETCH_PREV in **SQLExtendedFetch**.  
  
 Un altro esempio importante di dipendenza della libreria di cursore è aggiornamenti posizionati. La maggior parte dei driver 1.0 non dispongono inoltre gli aggiornamenti posizionati, ma la libreria di cursori genererà le istruzioni di aggiornamento che consentono di identificare una riga nell'origine dei dati basato su valori memorizzati nella cache i dati correnti o un valore di timestamp memorizzati nella cache di destinazione.  
  
 La libreria di classi mai si avvalgono di più set di righe. Pertanto, di alcuni **SQLSetPos** istruzioni vengono sempre applicate per riga 1 del set di righe.  
  
## <a name="cdatabases"></a>CDatabases  
 Ogni `CDatabase` alloca un singolo **HDBC**. (Se `CDatabase`del `ExecuteSQL` funzione viene utilizzata, un **HSTMT** temporaneamente allocato.) Pertanto, se più `CDatabase`del sono necessarie, più **HDBC**s per **HENV** deve essere supportato.  
  
 Le classi di database richiedono la libreria di cursori. Ciò si riflette un **SQLSetConnections** chiamare **SQL_ODBC_CURSORS**, **SQL_CUR_USE_ODBC**.  
  
 **SQLDriverConnect**, **SQL_DRIVER_COMPLETE** viene utilizzato da `CDatabase::Open` per stabilire la connessione all'origine dati.  
  
 Il driver deve supportare **SQLGetInfo SQL_ODBC_API_CONFORMANCE** >= **SQL_OAC_LEVEL1**, **SQLGetInfo SQL_ODBC_SQL_CONFORMANCE**  >=  **SQL_OSC_MINIMUM**.  
  
 Affinché le transazioni devono essere supportati per il `CDatabase` e i relativi dipendenti recordset, **SQLGetInfo SQL_CURSOR_COMMIT_BEHAVIOR** e **SQL_CURSOR_ROLLBACK_BEHAVIOR** deve avere **SQL_CR_PRESERVE**. In caso contrario, i tentativi di eseguire il controllo delle transazioni verranno ignorati.  
  
 **SQLGetInfo SQL_DATA_SOURCE_READ_ONLY** deve essere supportato. Se viene restituito "Y", non verranno eseguita alcuna operazione di aggiornamento nell'origine dati.  
  
 Se il `CDatabase` aperto è ReadOnly, un tentativo di impostare l'origine dati di lettura verrà solo con **SQLSetConnectOption SQL_ACCESS_MODE**, **SQL_MODE_READ_ONLY**.  
  
 Se gli identificatori è necessario racchiudere tra virgolette, queste informazioni devono essere restituite dal driver con un **SQL_IDENTIFIER_QUOTE_CHAR SQLGetInfo** chiamare.  
  
 Per il debugging, **SQLGetInfo SQL_DBMS_VER** e **SQL_DBMS_NAME** vengono recuperati dal driver.  
  
 **SQLSetStmtOption SQL_QUERY_TIMEOUT** e **SQL_ASYNC_ENABLE** può essere chiamato su un `CDatabase`del **HDBC**.  
  
 **SQLError** può essere chiamato a qualsiasi o tutti gli argomenti NULL.  
  
 Naturalmente, **SQLAllocEnv**, **SQLAllocConnect**, **SQLDisconnect** e **SQLFreeConnect** deve essere supportato.  
  
## <a name="executesql"></a>ExecuteSQL  
 Oltre a allocando e liberando temporanea **HSTMT**, `ExecuteSQL` chiamate **SQLExecDirect**, **SQLFetch**, **SQLNumResultCol**e `SQLMoreResults`. **SQLCancel** può essere chiamato sul **HSTMT**.  
  
## <a name="getdatabasename"></a>GetDatabaseName  
 **SQLGetInfo SQL_DATABASE_NAME** verrà chiamato.  
  
## <a name="begintrans-committrans-rollback"></a>BeginTrans, CommitTrans e Rollback  
 **SQLSetConnectOption SQL_AUTOCOMMIT** e **SQLTransact SQL_COMMIT**, **SQL_ROLLBACK** e **SQL_AUTOCOMMIT** verrà chiamato se le richieste di transazione vengono apportate.  
  
## <a name="crecordsets"></a>CRecordsets  
 **SQLAllocStmt**, **SQLPrepare**, **SQLExecute** (per **aperti** e **Requery**), **SQLExecDirect**  (per operazioni di aggiornamento), **SQLFreeStmt** deve essere supportato. **SQLNumResultCols** e **SQLDescribeCol** verrà chiamato su set in vari momenti di risultati.  
  
 **SQLSetParam** viene ampiamente utilizzata per i dati dei parametri di associazione e **DATA_AT_EXEC** funzionalità.  
  
 **SQLBindCol** viene ampiamente utilizzata per registrare l'output di percorsi di archiviazione di dati di colonna con ODBC.  
  
 Due **SQLGetData** chiamate vengono utilizzate per recuperare **SQL_LONG_VARCHAR** e **SQL_LONG_VARBINARY** dati. La prima chiamata tenta di trovare la lunghezza totale del valore della colonna chiamando **SQLGetData** cbMaxValue pari a 0, ma con un pcbValue valido. Se contiene pcbValue **SQL_NO_TOTAL**, viene generata un'eccezione. In caso contrario, un `HGLOBAL` viene allocato e un altro **SQLGetData** chiamata eseguita per recuperare il risultato intero.  
  
## <a name="updating"></a>Updating  
 Se viene richiesto il blocco pessimistico, **SQL_LOCK_TYPES SQLGetInfo** verrà eseguita la query. Se **SQL_LCK_EXCLUSIVE** non è supportato, verrà generata un'eccezione.  
  
 Tenta di aggiornare un `CRecordset` (**snapshot** o **dynaset**) causerà un secondo **HSTMT** da allocare. Per i driver che non supportano secondo **HSTMT**, la libreria di cursori consente di simulare questa funzionalità. Sfortunatamente, talvolta ciò potrebbe significare forzare la query corrente il primo **HSTMT** fino al completamento prima di elaborare la seconda **HSTMT**della richiesta.  
  
 **SQLFreeStmt SQL_CLOSE** e **SQL_RESET_PARAMS** e **SQLGetCursorName** verrà chiamata durante le operazioni di aggiornamento.  
  
 Se sono presenti **CLongBinarys** nel **outputColumns**, ODBC **DATA_AT_EXEC** funzionalità deve essere supportata. Ciò include la restituzione **SQL_NEED_DATA** da **SQLExecDirect**, **SQLParamData** e **SQLPutData**.  
  
 **SQLRowCount** viene chiamato dopo l'esecuzione per verificare che solo 1 record è stato aggiornato per il **SQLExecDirect**.  
  
## <a name="forwardonly-cursors"></a>Cursori ForwardOnly  
 Solo **SQLFetch** è necessaria per il **spostare** operazioni. Si noti che **forwardOnly** non supportano gli aggiornamenti.  
  
## <a name="snapshot-cursors"></a>Cursori snapshot  
 La funzionalità snapshot richiede **SQLExtendedFetch** supportano. Come indicato in precedenza, la libreria di cursori ODBC consentirà di rilevare quando un driver non supporta **SQLExtendedFetch**e fornire il supporto necessario stesso.  
  
 **SQLGetInfo**, **SQL_SCROLL_OPTIONS** deve supportare **SQL_SO_STATIC**.  
  
## <a name="dynaset-cursors"></a>Cursori di dynaset  
 Di seguito è riportato il supporto minimo richiesto di aprire un dynaset:  
  
 **SQLGetInfo**, **SQL_ODBC_VER** deve restituire > "01".  
  
 **SQLGetInfo**, **SQL_SCROLL_OPTIONS** deve supportare **SQL_SO_KEYSET_DRIVEN**.  
  
 **SQLGetInfo**, **SQL_ROW_UPDATES** deve restituire "Y".  
  
 **SQLGetInfo**, **SQL_POSITIONED_UPDATES** deve supportare **SQL_PS_POSITIONED_DELETE** e **SQL_PS_POSITIONED_UPDATE**.  
  
 Inoltre, se è richiesto il blocco pessimistico, una chiamata a **SQLSetPos** con irow 1, fRefresh FALSE e gruppo **SQL_LCK_EXCLUSIVE** verrà effettuata.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

