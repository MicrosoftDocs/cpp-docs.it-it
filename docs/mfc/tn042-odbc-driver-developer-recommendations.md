---
title: "TN042: suggerimenti per gli sviluppatori di driver ODBC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.odbc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "database [C++], ODBC"
  - "driver ODBC [C++], scrittura"
  - "TN042"
ms.assetid: ecc6b5d9-f480-4582-9e22-8309fe561dad
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# TN042: suggerimenti per gli sviluppatori di driver ODBC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota sono riportate le linee guida per i writer driver ODBC.  Vengono descritti i requisiti generali e le ipotesi di funzionalità ODBC che le classi di database MFC fanno e le varie dettagli semantici previsti.  La funzionalità driver per supportare le tre modalità aperte di `CRecordset` \(**forwardOnly**, **snapshot** e **dynaset**\) viene descritta.  
  
## La libreria di cursori ODBC  
 Le classi di database MFC verificano la funzionalità all'utente in molti casi supera la funzionalità fornita dalla maggior parte dei driver ODBC di Livello 1.  Fortunatamente, la libreria di cursori ODBC si svilupperà su più livelli tra le classi di database e il driver e viene fornito automaticamente da gran parte di questa funzionalità aggiuntive.  
  
 Ad esempio, la maggior parte 1,0 driver non supportano lo scorrimento indietro.  La libreria di cursori può rilevare questa e memorizza nella cache le righe dal driver e di verifica necessarie sulle chiamate di FETCH\_PREV in **SQLExtendedFetch**.  
  
 Un altro esempio importante di dipendenza della libreria di cursori è aggiornamenti posizionati.  La maggior parte 1,0 driver inoltre non dispongono degli aggiornamenti posizionati, ma la libreria di cursori genererà le istruzioni di aggiornamento che identificano una riga di destinazione nell'origine dati basata sui relativi valori dei dati memorizzati nella cache corrente, o un valore memorizzato nella cache di timestamp.  
  
 La libreria di classi non vengono mai più rowset.  Di conseguenza, le poche istruzioni di **SQLSetPos** si applicano sempre alle 1 del rowset.  
  
## CDatabases  
 Ogni `CDatabase` alloca singolo **HDBC**. Se la funzione di `CDatabase``ExecuteSQL` viene utilizzata, **HSTMT** temporaneamente è sovrallocato.\) Se pertanto più `CDatabase` necessario, **HDBC**più s per **HENV** deve essere supportato.  
  
 Le classi di database richiedono la libreria di cursori.  Ciò viene riportata in una chiamata **SQL\_ODBC\_CURSORS**, **SQL\_CUR\_USE\_ODBC**di **SQLSetConnections**.  
  
 **SQLDriverConnect**, **SQL\_DRIVER\_COMPLETE** viene utilizzato da `CDatabase::Open` per stabilire la connessione all'origine dati.  
  
 Il driver deve supportare **SQLGetInfo SQL\_ODBC\_API\_CONFORMANCE** \>\= **SQL\_OAC\_LEVEL1**, **SQLGetInfo SQL\_ODBC\_SQL\_CONFORMANCE** \>\= **SQL\_OSC\_MINIMUM**.  
  
 In modo che le transazioni da supportare per `CDatabase` e i relativi dipendenti recordset, **SQLGetInfo SQL\_CURSOR\_COMMIT\_BEHAVIOR** e **SQL\_CURSOR\_ROLLBACK\_BEHAVIOR** devono avere **SQL\_CR\_PRESERVE**.  In caso contrario, i tentativi di eseguire il controllo delle transazioni vengono ignorati.  
  
 **SQLGetInfo SQL\_DATA\_SOURCE\_READ\_ONLY** deve essere supportato.  Se restituisce "Y", nessuna operazione di aggiornamento verrà eseguita nell'origine dati.  
  
 Se `CDatabase` è di sola lettura aperto, un tentativo di impostare l'origine dati di sola lettura verrà eseguito con **SQLSetConnectOption SQL\_ACCESS\_MODE**, **SQL\_MODE\_READ\_ONLY**.  
  
 Se gli identificatori richiedono le virgolette, queste informazioni devono essere restituite dal driver a una chiamata di **SQLGetInfoSQL\_IDENTIFIER\_QUOTE\_CHAR**.  
  
 Ai fini del debug, **SQLGetInfo SQL\_DBMS\_VER** e **SQL\_DBMS\_NAME** vengono recuperati dal driver.  
  
 **SQLSetStmtOption SQL\_QUERY\_TIMEOUT** e **SQL\_ASYNC\_ENABLE** possono essere chiamati su `CDatabase`**HDBC**.  
  
 **SQLError** può essere chiamato con qualsiasi NULL degli argomenti.  
  
 Naturalmente, **SQLAllocEnv**, **SQLAllocConnect**, **SQLDisconnect** e **SQLFreeConnect** devono essere supportati.  
  
## ExecuteSQL  
 Oltre all'allocare e liberare **HSTMT**temporaneo, `ExecuteSQL` chiama **SQLExecDirect**, **SQLFetch**, **SQLNumResultCol** e `SQLMoreResults`.  **SQLCancel** può essere chiamato in **HSTMT**.  
  
## GetDatabaseName  
 **SQLGetInfo SQL\_DATABASE\_NAME** verrà chiamato.  
  
## BeginTrans, CommitTrans, rollback  
 **SQLSetConnectOption SQL\_AUTOCOMMIT** e **SQLTransact SQL\_COMMIT**, **SQL\_ROLLBACK** e **SQL\_AUTOCOMMIT** verranno chiamati se le richieste di transazione vengono effettuate.  
  
## CRecordsets  
 **SQLAllocStmt**, **SQLPrepare**, **SQLExecute** ad **Apri** e **Riesegui query**\), **SQLExecDirect** \(per le operazioni di aggiornamento\), **SQLFreeStmt** deve essere supportato.  **SQLNumResultCols** e **SQLDescribeCol** verranno chiamati i risultati in diversi momenti.  
  
 **SQLSetParam** viene utilizzato ampiamente per i dati dei parametri e le funzionalità necessari per **DATA\_AT\_EXEC**.  
  
 **SQLBindCol** viene utilizzato ampiamente per registrare le posizioni di archiviazione dei dati della colonna di output con ODBC.  
  
 Due chiamate di **SQLGetData** vengono utilizzate per recuperare i dati di **SQL\_LONG\_VARBINARY** e di **SQL\_LONG\_VARCHAR**.  Tentativo di chiamare prima di determinare la lunghezza totale del valore della colonna chiamando **SQLGetData** con un cbMaxValue di 0, ma con un pcbValue valido.  Se il pcbValue utilizza **SQL\_NO\_TOTAL**, viene generata un'eccezione.  In caso contrario, `HGLOBAL` viene allocato e un'altra chiamata di **SQLGetData** viene eseguita per recuperare l'intero risultato.  
  
## Aggiornamento  
 Se il blocco pessimistico è necessario, **SQLGetInfo SQL\_LOCK\_TYPES** verrà eseguita la query.  Se **SQL\_LCK\_EXCLUSIVE** non è supportato, verrà generata un'eccezione.  
  
 Tentativo di aggiornare `CRecordset` \(**snapshot** o **dynaset**\) determinerà l'interruzione di un secondo **HSTMT** a essere allocati.  Per i driver che non supportano secondo **HSTMT**, la libreria di cursori simulerà questa funzionalità.  Sfortunatamente, questo può talvolta essere forzare la query corrente in primo **HSTMT** completata prima di avviare la seconda richiesta di **HSTMT**.  
  
 **SQLFreeStmt SQL\_CLOSE** e **SQL\_RESET\_PARAMS** e **SQLGetCursorName** verranno chiamati durante le operazioni di aggiornamento.  
  
 Se è presente **CLongBinarys** in **outputColumns**, la funzionalità di **DATA\_AT\_EXEC** ODBC deve essere supportata.  Ciò include restituire **SQL\_NEED\_DATA** da **SQLExecDirect**, da **SQLParamData** e da **SQLPutData**.  
  
 **SQLRowCount** viene chiamato dopo l'esecuzione di verificare che solo 1 record sia stato aggiornato da **SQLExecDirect**.  
  
## Cursori di ForwardOnly  
 Solo **SQLFetch** è obbligatorio per le operazioni di **Sposta**.  Si noti che i cursori di **forwardOnly** non supportano gli aggiornamenti.  
  
## Cursori di snapshot  
 La funzionalità di snapshot richiede il supporto di **SQLExtendedFetch**.  Come accennato in precedenza, la libreria di cursori ODBC quando rileva un driver non supporta **SQLExtendedFetch** e fornisce il supporto necessario stesso.  
  
 **SQLGetInfo**, **SQL\_SCROLL\_OPTIONS** deve supportare **SQL\_SO\_STATIC**.  
  
## Cursori dei dynaset  
 Di seguito viene fornito il supporto minimo richiesto per aprire un dynaset:  
  
 **SQLGetInfo**, **SQL\_ODBC\_VER** deve restituire \> "01 ".  
  
 **SQLGetInfo**, **SQL\_SCROLL\_OPTIONS** deve supportare **SQL\_SO\_KEYSET\_DRIVEN**.  
  
 **SQLGetInfo**, **SQL\_ROW\_UPDATES** deve restituire "Y".  
  
 **SQLGetInfo**, **SQL\_POSITIONED\_UPDATES** deve supportare **SQL\_PS\_POSITIONED\_DELETE** e **SQL\_PS\_POSITIONED\_UPDATE**.  
  
 Inoltre, se il blocco pessimistico è obbligatorio, una chiamata a **SQLSetPos** con irow 1, FALSE di fRefresh e la moltitudine **SQL\_LCK\_EXCLUSIVE** verrà eseguita.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)