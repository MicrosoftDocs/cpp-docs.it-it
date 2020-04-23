---
title: Macro e funzioni globali di database
ms.date: 11/04/2016
f1_keywords:
- AFXDB/AFX_ODBC_CALL
- AFXDB/AFX_SQL_ASYNC
- AFXDB/AFX_SQL_SYNC
- AFXDB/AfxGetHENV
helpviewer_keywords:
- global database functions [MFC]
- database macros [MFC]
- database globals [MFC]
- global functions [MFC], database functions
- macros [MFC], MFC database
ms.assetid: 5b9b9e61-1cf9-4345-9f29-3807dd466488
ms.openlocfilehash: 6d8bd56c0bfe4f9b35e34d067dd1042ed11066d5
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81751667"
---
# <a name="database-macros-and-globals"></a>Macro e funzioni globali di database

Le macro e le variabili globali elencate di seguito si applicano alle applicazioni di database basate su ODBC. Non vengono utilizzati con applicazioni basate su DAO.

Prima di MFC 4.2, le macro `AFX_SQL_ASYNC` e `AFX_SQL_SYNC` ha dato operazioni asincrone l'opportunità di restituire tempo ad altri processi. A partire da MFC 4.2, l'implementazione di queste macro è stata modificata perché le classi ODBC MFC utilizzavano solo operazioni sincrone. La `AFX_ODBC_CALL` macro era una novità di MFC 4.2.

### <a name="database-macros"></a>Macro di database

|||
|-|-|
|[AFX_ODBC_CALL](#afx_odbc_call)|Chiama una funzione API `SQL_STILL_EXECUTING`ODBC che restituisce . `AFX_ODBC_CALL`chiamerà ripetutamente la funzione fino `SQL_STILL_EXECUTING`a quando non ritorna più.|
|[AFX_SQL_ASYNC](#afx_sql_async)|Chiama `AFX_ODBC_CALL`.|
|[AFX_SQL_SYNC](#afx_sql_sync)|Chiama una funzione API ODBC `SQL_STILL_EXECUTING`che non restituisce .|

### <a name="database-globals"></a>Globali database

|||
|-|-|
|[AfxDbInitModule](#afxdbinitmodule)|Aggiunge il supporto del database per una DLL MFC regolare collegata in modo dinamico a MFC.|
|[AfxGetHENV](#afxgethenv)|Recupera un handle per l'ambiente ODBC attualmente utilizzato da MFC. È possibile utilizzare questo handle nelle chiamate ODBC dirette.|

## <a name="afxdbinitmodule"></a><a name="afxdbinitmodule"></a>Modulo AfxDbInitModule

Per il supporto del database MFC (o DAO) da una DLL MFC regolare collegata in `CWinApp::InitInstance` modo dinamico a MFC, aggiungere una chiamata a questa funzione nella funzione della DLL MFC regolare per inizializzare la DLL di database MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxDbInitModule( );
```

### <a name="remarks"></a>Osservazioni

Assicurarsi che questa chiamata si verifichi prima di qualsiasi chiamata della classe base o di qualsiasi codice aggiunto che accede alla DLL del database MFC. La DLL di database MFC è una DLL di estensione MFC; affinché una DLL di estensione MFC `CDynLinkLibrary` venga collegata a `CDynLinkLibrary` una catena, è necessario creare un oggetto nel contesto di ogni modulo che verrà utilizzato. `AfxDbInitModule`crea `CDynLinkLibrary` l'oggetto nel contesto della DLL MFC regolare `CDynLinkLibrary` in modo che venga collegato alla catena di oggetti della DLL MFC regolare.

### <a name="requirements"></a>Requisiti

**Intestazione:** \<> afxdll_.h

## <a name="afx_odbc_call"></a><a name="afx_odbc_call"></a>AFX_ODBC_CALL

Utilizzare questa macro per chiamare qualsiasi `SQL_STILL_EXECUTING`funzione API ODBC che può restituire .

```
AFX_ODBC_CALL(SQLFunc)
```

### <a name="parameters"></a>Parametri

*SQLFunc (informazioni in lingua inglese)*<br/>
Funzione API ODBC. Per ulteriori informazioni sulle funzioni dell'API ODBC, vedere Windows SDK.

### <a name="remarks"></a>Osservazioni

`AFX_ODBC_CALL`chiama ripetutamente la funzione fino `SQL_STILL_EXECUTING`a quando non restituisce più .

Prima di `AFX_ODBC_CALL`richiamare , è `nRetCode`necessario dichiarare una variabile, di tipo RETCODE.

Si noti che le classi ODBC MFC ora utilizzano solo l'elaborazione sincrona. Per eseguire un'operazione asincrona, è necessario `SQLSetConnectOption`chiamare la funzione API ODBC . Per ulteriori informazioni, vedere l'argomento "Esecuzione di funzioni in modo asincrono" in Windows SDK.

### <a name="example"></a>Esempio

In questo `AFX_ODBC_CALL` esempio `SQLColumns` viene utilizzato per chiamare la funzione API ODBC, `strTableName`che restituisce un elenco delle colonne della tabella denominata da . Si noti `nRetCode` la dichiarazione e l'utilizzo dei membri dati recordset per passare parametri alla funzione. Nell'esempio viene inoltre illustrato il `Check`controllo dei risultati `CRecordset`della chiamata con , una funzione membro della classe . La `prs` variabile è un `CRecordset` puntatore a un oggetto, dichiarato altrove.

[!code-cpp[NVC_MFCDatabase#39](../../mfc/codesnippet/cpp/database-macros-and-globals_1.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="afx_sql_async"></a><a name="afx_sql_async"></a>AFX_SQL_ASYNC

L'implementazione di questa macro è stata modificata in MFC 4.2.

```
AFX_SQL_ASYNC(prs, SQLFunc)
```

### <a name="parameters"></a>Parametri

*Prs*<br/>
Puntatore a un oggetto `CRecordset` o a un oggetto `CDatabase`. A partire da MFC 4.2 il valore di questo parametro viene ignorato.

*SQLFunc (informazioni in lingua inglese)*<br/>
Funzione API ODBC. Per ulteriori informazioni sulle funzioni dell'API ODBC, vedere Windows SDK.

### <a name="remarks"></a>Osservazioni

`AFX_SQL_ASYNC`chiama semplicemente la [macro AFX_ODBC_CALL](#afx_odbc_call) e ignora il parametro *prs.* Nelle versioni di MFC precedenti alla 4.2, `AFX_SQL_ASYNC` viene utilizzato per chiamare funzioni API ODBC che potrebbero restituire `SQL_STILL_EXECUTING`. Se una funzione API ODBC restituisse `SQL_STILL_EXECUTING`, `AFX_SQL_ASYNC` chiamerebbe `prs->OnWaitForDataSource`.

> [!NOTE]
> Le classi ODBC MFC utilizzano ora solo l'elaborazione sincrona. Per eseguire un'operazione asincrona, è necessario `SQLSetConnectOption`chiamare la funzione API ODBC . Per ulteriori informazioni, vedere l'argomento "Esecuzione di funzioni in modo asincrono" in Windows SDK.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdb.h

## <a name="afx_sql_sync"></a><a name="afx_sql_sync"></a>AFX_SQL_SYNC

La `AFX_SQL_SYNC` macro chiama `SQLFunc`semplicemente la funzione .

```
AFX_SQL_SYNC(SQLFunc)
```

### <a name="parameters"></a>Parametri

*SQLFunc (informazioni in lingua inglese)*<br/>
Funzione API ODBC. Per ulteriori informazioni su queste funzioni, vedere Windows SDK.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per chiamare funzioni `SQL_STILL_EXECUTING`dell'API ODBC che non restituiranno .

Prima `AFX_SQL_SYNC`di chiamare , è `nRetCode`necessario dichiarare una variabile, , di tipo RETCODE. È possibile controllare `nRetCode` il valore di dopo la chiamata di macro.

Si noti `AFX_SQL_SYNC` che l'implementazione di modificata in MFC 4.2. Poiché il controllo dello stato `AFX_SQL_SYNC` del server non `nRetCode`era più necessario, è sufficiente assegnare un valore a . Ad esempio, invece di effettuare la chiamata

[!code-cpp[NVC_MFCDatabase#40](../../mfc/codesnippet/cpp/database-macros-and-globals_2.cpp)]

si può semplicemente fare l'incarico

[!code-cpp[NVC_MFCDatabase#41](../../mfc/codesnippet/cpp/database-macros-and-globals_3.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdb.h

## <a name="afxgethenv"></a><a name="afxgethenv"></a>AfxGetHENV (informazioni in cui è systeme

È possibile utilizzare l'handle restituito nelle chiamate ODBC dirette, ma non è necessario chiudere `CDatabase`l'handle o presupporre che l'handle sia ancora valido e disponibile dopo che tutti gli oggetti esistenti, o `CRecordset`derivati, sono stati eliminati.

```
HENV AFXAPI AfxGetHENV();
```

### <a name="return-value"></a>Valore restituito

Handle per l'ambiente ODBC attualmente utilizzato da MFC. Può `SQL_HENV_NULL` essere se non sono presenti oggetti [CDatabase](../../mfc/reference/cdatabase-class.md) e nessun [oggetto CRecordset](../../mfc/reference/crecordset-class.md) in uso.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdb.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
