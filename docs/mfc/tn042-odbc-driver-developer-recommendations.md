---
title: 'TN042: Suggerimenti per gli sviluppatori di Driver ODBC | Microsoft Docs'
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
ms.openlocfilehash: 87e31fa0884adc78d3f1026afc59dd0b46ac7602
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46375255"
---
# <a name="tn042-odbc-driver-developer-recommendations"></a>TN042: suggerimenti per gli sviluppatori di driver ODBC

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota descrive le linee guida per gli sviluppatori di driver ODBC. Vengono descritti i requisiti generali e i presupposti di ODBC funzionalità che rendono le classi di Database MFC e vari dettagli semantici previsti. Necessarie funzionalità del driver per supportare i tre `CRecordset` aprire le modalità (**forwardOnly**, **snapshot** e **dynaset**) sono descritte.

## <a name="odbcs-cursor-library"></a>Libreria di cursori ODBC

Le classi di Database MFC presentano funzionalità all'utente che in molti casi supera le funzionalità fornite dalla maggior parte dei driver ODBC di livello 1. Fortunatamente, libreria di cursori del ODBC livello collocarsi tra le classi di database e il driver e vengono forniti automaticamente gran parte di questa funzionalità aggiuntiva.

La maggior parte dei driver 1.0, ad esempio, non supportano lo scorrimento all'indietro. La libreria di cursori possono rilevare e verrà memorizzare nella cache le righe il driver e presentarli come richiesto nelle chiamate FETCH_PREV in `SQLExtendedFetch`.

Un altro esempio importante di dipendenza dalla libreria di cursore è aggiornamenti posizionati. La maggior parte dei driver 1.0 non dispongono inoltre gli aggiornamenti posizionati, ma la libreria di cursori genererà istruzioni update che consentono di identificare una riga di destinazione nell'origine dei dati in base al relativo valori memorizzati nella cache i dati correnti o un valore di timestamp memorizzati nella cache.

La libreria di classi non usa più set di righe. Di conseguenza, i pochi `SQLSetPos` istruzioni vengono sempre applicate riga 1 del set di righe.

## <a name="cdatabases"></a>CDatabases

Ciascuna `CDatabase` alloca un unico **HDBC**. (Se `CDatabase`del `ExecuteSQL` viene usata una funzione, un **HSTMT** temporaneamente viene allocato.) Pertanto, se più `CDatabase`del sono necessari, più **HDBC**s per ogni **HENV** devono essere supportate.

Le classi di database richiedono la libreria di cursori. Ciò si riflette una `SQLSetConnections` chiamare **SQL_ODBC_CURSORS**, **SQL_CUR_USE_ODBC**.

`SQLDriverConnect`, **SQL_DRIVER_COMPLETE** viene usato da `CDatabase::Open` per stabilire la connessione all'origine dati.

Il driver deve supportare `SQLGetInfo SQL_ODBC_API_CONFORMANCE`  >=  **SQL_OAC_LEVEL1**, `SQLGetInfo SQL_ODBC_SQL_CONFORMANCE`  >=  **SQL_OSC_MINIMUM**.

Affinché le transazioni devono essere supportati per il `CDatabase` e i relativi dipendenti recordset, `SQLGetInfo SQL_CURSOR_COMMIT_BEHAVIOR` e **SQL_CURSOR_ROLLBACK_BEHAVIOR** deve avere **SQL_CR_PRESERVE**. In caso contrario, tenta di eseguire il controllo delle transazioni verrà ignorato.

`SQLGetInfo SQL_DATA_SOURCE_READ_ONLY` deve essere supportato. Se la funzione restituisce "Y", non verranno eseguita alcuna operazione di aggiornamento nell'origine dati.

Se il `CDatabase` viene aperto ReadOnly, effettuato un tentativo per impostare l'origine dei dati letto solo verrà con `SQLSetConnectOption SQL_ACCESS_MODE`, **SQL_MODE_READ_ONLY**.

Se gli identificatori richiedono virgolette, queste informazioni devono essere restituite dal driver con un `SQLGetInfo SQL_IDENTIFIER_QUOTE_CHAR` chiamare.

Scopo di debug `SQLGetInfo SQL_DBMS_VER` e **SQL_DBMS_NAME** vengono recuperati dal driver.

`SQLSetStmtOption SQL_QUERY_TIMEOUT` e **SQL_ASYNC_ENABLE** può essere chiamato su un `CDatabase`del **HDBC**.

`SQLError` può essere chiamato con uno o tutti gli argomenti NULL.

Ovviamente `SQLAllocEnv`, `SQLAllocConnect`, `SQLDisconnect` e `SQLFreeConnect` devono essere supportate.

## <a name="executesql"></a>ExecuteSQL

Oltre all'allocazione e liberazione di una password temporanea **HSTMT**, `ExecuteSQL` chiamate `SQLExecDirect`, `SQLFetch`, `SQLNumResultCol` e `SQLMoreResults`. `SQLCancel` può essere chiamato sul **HSTMT**.

## <a name="getdatabasename"></a>GetDatabaseName

`SQLGetInfo SQL_DATABASE_NAME` verrà chiamato.

## <a name="begintrans-committrans-rollback"></a>BeginTrans, CommitTrans e Rollback

`SQLSetConnectOption SQL_AUTOCOMMIT` e `SQLTransact SQL_COMMIT`, **SQL_ROLLBACK** e **SQL_AUTOCOMMIT** verrà chiamato se vengono effettuate le richieste di transazione.

## <a name="crecordsets"></a>CRecordsets

`SQLAllocStmt`, `SQLPrepare`, `SQLExecute` (Per `Open` e `Requery`), `SQLExecDirect` (per operazioni di aggiornamento), `SQLFreeStmt` devono essere supportate. `SQLNumResultCols` e `SQLDescribeCol` verrà chiamato sul set in vari momenti di risultati.

`SQLSetParam` viene ampiamente usato per i dati dei parametri di associazione e **DATA_AT_EXEC** funzionalità.

`SQLBindCol` è ampiamente utilizzata per registrare l'output di percorsi di archiviazione di dati di colonna ODBC.

Due `SQLGetData` chiamate vengono utilizzate per recuperare **SQL_LONG_VARCHAR** e **SQL_LONG_VARBINARY** dati. La prima chiamata tenta di trovare la lunghezza totale del valore della colonna chiamando `SQLGetData` cbMaxValue pari a 0, ma con un pcbValue valido. Se contiene pcbValue **SQL_NO_TOTAL**, viene generata un'eccezione. In caso contrario, un **HGLOBAL** allocata e un altro `SQLGetData` chiamata eseguita per recuperare il risultato intero.

## <a name="updating"></a>Updating

Se viene richiesto il blocco pessimistico, `SQLGetInfo SQL_LOCK_TYPES` verranno eseguite query. Se **SQL_LCK_EXCLUSIVE** non è supportato, verrà generata un'eccezione.

Tenta di aggiornare una `CRecordset` (**snapshot** oppure **dynaset**) causerà una seconda **HSTMT** da allocare. Per i driver che non supportano la seconda **HSTMT**, la libreria di cursori consente di simulare tale funzionalità. Sfortunatamente, questo può significare talvolta forzare la query corrente in corrispondenza del primo **HSTMT** fino al completamento prima di elaborare la seconda **HSTMT**della richiesta.

`SQLFreeStmt SQL_CLOSE` e **SQL_RESET_PARAMS** e `SQLGetCursorName` verrà chiamato durante le operazioni di aggiornamento.

Se sono presenti **CLongBinarys** nel **outputColumns**, di ODBC **DATA_AT_EXEC** funzionalità devono essere supportate. Ciò include la restituzione **SQL_NEED_DATA** dalla `SQLExecDirect`, `SQLParamData` e `SQLPutData`.

`SQLRowCount` viene chiamato dopo l'esecuzione per verificare che solo 1 record è stato aggiornato dal `SQLExecDirect`.

## <a name="forwardonly-cursors"></a>Cursori ForwardOnly

Solo `SQLFetch` è obbligatorio per il `Move` operazioni. Si noti che **forwardOnly** non supportano gli aggiornamenti.

## <a name="snapshot-cursors"></a>Cursori di snapshot

La funzionalità snapshot richiede `SQLExtendedFetch` supportano. Come indicato in precedenza, la libreria di cursori ODBC rileva quando un driver non supporta `SQLExtendedFetch`e fornire il supporto necessario se stesso.

`SQLGetInfo`, **SQL_SCROLL_OPTIONS** deve supportare **SQL_SO_STATIC**.

## <a name="dynaset-cursors"></a>Cursori dynaset

Di seguito è riportato il supporto minimo richiesto per aprire dynaset:

`SQLGetInfo`, **SQL_ODBC_VER** deve restituire > "01".

`SQLGetInfo`, **SQL_SCROLL_OPTIONS** deve supportare **SQL_SO_KEYSET_DRIVEN**.

`SQLGetInfo`, **SQL_ROW_UPDATES** deve restituire "Y".

`SQLGetInfo`, **SQL_POSITIONED_UPDATES** deve supportare **SQL_PS_POSITIONED_DELETE** e **SQL_PS_POSITIONED_UPDATE**.

Inoltre, se viene richiesto il blocco pessimistico, una chiamata a `SQLSetPos` irow 1, fRefresh FALSE e branco **SQL_LCK_EXCLUSIVE** verrà effettuata.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

