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
ms.openlocfilehash: 47a1bb434801c24ab8eee048d9ef8f93793101cc
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57268720"
---
# <a name="database-macros-and-globals"></a>Macro e funzioni globali di database

Le macro e funzioni globali elencati di seguito si applicano alle applicazioni di database basato su ODBC. Non sono utilizzati con le applicazioni basate su DAO.

Prima di MFC 4.2, le macro `AFX_SQL_ASYNC` e `AFX_SQL_SYNC` assegnato operazioni asincrone un'opportunità per produrre tempo ad altri processi. Partire da MFC 4.2, l'implementazione di queste macro modificato perché le classi ODBC MFC utilizzate solo le operazioni sincrone. La macro `AFX_ODBC_CALL` sono state introdotte per MFC 4.2.

### <a name="database-macros"></a>Macro di database

|||
|-|-|
|[AFX_ODBC_CALL](#afx_odbc_call)|Chiama una funzione API ODBC che restituisce `SQL_STILL_EXECUTING`. `AFX_ODBC_CALL` ripetutamente chiamerà la funzione fino a raggiungere non è più restituisce `SQL_STILL_EXECUTING`.|
|[AFX_SQL_ASYNC](#afx_sql_async)|Chiama `AFX_ODBC_CALL`.|
|[AFX_SQL_SYNC](#afx_sql_sync)|Chiama una funzione API ODBC che non restituisce `SQL_STILL_EXECUTING`.|

### <a name="database-globals"></a>Funzioni globali di database

|||
|-|-|
|[AfxDbInitModule](#afxdbinitmodule)|Aggiunge il supporto di database per una DLL MFC regolare collegata in modo dinamico a MFC.|
|[AfxGetHENV](#afxgethenv)|Recupera un handle per l'ambiente ODBC attualmente in uso in MFC. È possibile usare questo handle in chiamate dirette per ODBC.|

## <a name="afxdbinitmodule"></a> AfxDbInitModule

Per i database MFC (o DAO) supporta da una DLL MFC regolare collegata in modo dinamico a MFC, aggiungere una chiamata a questa funzione nel regolare MFC DLL `CWinApp::InitInstance` DLL di database per l'inizializzazione di MFC.

### <a name="syntax"></a>Sintassi

```
void AFXAPI AfxDbInitModule( );
```

### <a name="remarks"></a>Note

Assicurarsi che questa chiamata si verifica prima di qualsiasi chiamata di classe di base o qualsiasi codice che accede al database MFC DLL aggiunto. Il database MFC DLL è un'estensione MFC DLL. Affinché una DLL di estensione MFC per ottenere cablate in una `CDynLinkLibrary` catena, è necessario creare un `CDynLinkLibrary` oggetto nel contesto di ogni modulo che verrà utilizzato. `AfxDbInitModule` Crea il `CDynLinkLibrary` dell'oggetto nel contesto di MFC DLL la regolare in modo che si ottiene è connessa la `CDynLinkLibrary` catena della DLL MFC regolari dell'oggetto.

### <a name="requirements"></a>Requisiti

**Intestazione:** \<AFXDLL . h >

##  <a name="afx_odbc_call"></a>  AFX_ODBC_CALL

Usare questa macro per chiamare una funzione API ODBC che può restituire `SQL_STILL_EXECUTING`.

```
AFX_ODBC_CALL(SQLFunc)
```

### <a name="parameters"></a>Parametri

*SQLFunc*<br/>
Funzione API ODBC. Per altre informazioni sulle funzioni API ODBC, vedere il SDK di Windows.

### <a name="remarks"></a>Note

`AFX_ODBC_CALL` chiama ripetutamente la funzione fino a raggiungere non è più restituisce `SQL_STILL_EXECUTING`.

Prima di richiamare `AFX_ODBC_CALL`, è necessario dichiarare una variabile, `nRetCode`, di tipo RETCODE.

Si noti che ODBC MFC classi ora Usa solo l'elaborazione sincrona. Per eseguire un'operazione asincrona, è necessario chiamare la funzione API ODBC `SQLSetConnectOption`. Per altre informazioni, vedere l'argomento "Esecuzione asincrona delle funzioni" in Windows SDK.

### <a name="example"></a>Esempio

Questo esempio viene usato `AFX_ODBC_CALL` per chiamare il `SQLColumns` funzione API ODBC, che restituisce un elenco delle colonne nella tabella denominata da `strTableName`. Si noti la dichiarazione di `nRetCode` e l'utilizzo di membri di dati del recordset per passare i parametri della funzione. L'esempio viene illustrato come controllare i risultati della chiamata con `Check`, una funzione membro di classe `CRecordset`. La variabile `prs` è un puntatore a un `CRecordset` oggetto, dichiarato in un' posizione.

[!code-cpp[NVC_MFCDatabase#39](../../mfc/codesnippet/cpp/database-macros-and-globals_1.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

##  <a name="afx_sql_async"></a>  AFX_SQL_ASYNC

L'implementazione di questa macro è stata modificata in MFC 4.2.

```
AFX_SQL_ASYNC(prs, SQLFunc)
```

### <a name="parameters"></a>Parametri

*prs*<br/>
Puntatore a un oggetto `CRecordset` o a un oggetto `CDatabase`. A partire da MFC 4.2 il valore di questo parametro viene ignorato.

*SQLFunc*<br/>
Funzione API ODBC. Per altre informazioni sulle funzioni API ODBC, vedere il SDK di Windows.

### <a name="remarks"></a>Note

`AFX_SQL_ASYNC` chiama semplicemente la macro [AFX_ODBC_CALL](#afx_odbc_call) e ignora le *richieste pull* parametro. Nelle versioni di MFC precedenti alla 4.2, `AFX_SQL_ASYNC` viene utilizzato per chiamare funzioni API ODBC che potrebbero restituire `SQL_STILL_EXECUTING`. Se una funzione API ODBC restituisse `SQL_STILL_EXECUTING`, `AFX_SQL_ASYNC` chiamerebbe `prs->OnWaitForDataSource`.

> [!NOTE]
>  Le classi ODBC MFC utilizzano ora solo l'elaborazione sincrona. Per eseguire un'operazione asincrona, è necessario chiamare la funzione API ODBC `SQLSetConnectOption`. Per altre informazioni, vedere l'argomento "Esecuzione asincrona delle funzioni" in Windows SDK.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDB. h

##  <a name="afx_sql_sync"></a>  AFX_SQL_SYNC

Il `AFX_SQL_SYNC` macro chiama semplicemente la funzione `SQLFunc`.

```
AFX_SQL_SYNC(SQLFunc)
```

### <a name="parameters"></a>Parametri

*SQLFunc*<br/>
Funzione API ODBC. Per altre informazioni su queste funzioni, vedere il SDK di Windows.

### <a name="remarks"></a>Note

Usare questa macro per chiamare funzioni API ODBC che non restituiscono `SQL_STILL_EXECUTING`.

Prima di chiamare `AFX_SQL_SYNC`, è necessario dichiarare una variabile, `nRetCode`, di tipo RETCODE. È possibile controllare il valore di `nRetCode` dopo la chiamata di macro.

Si noti che l'implementazione di `AFX_SQL_SYNC` modificata in MFC 4.2. Poiché verifica lo stato del server non è più necessaria, `AFX_SQL_SYNC` assegna semplicemente un valore a `nRetCode`. Ad esempio, invece di effettuare la chiamata

[!code-cpp[NVC_MFCDatabase#40](../../mfc/codesnippet/cpp/database-macros-and-globals_2.cpp)]

è sufficiente impostare l'assegnazione

[!code-cpp[NVC_MFCDatabase#41](../../mfc/codesnippet/cpp/database-macros-and-globals_3.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDB. h

##  <a name="afxgethenv"></a>  AfxGetHENV

È possibile usare l'handle restituito nelle chiamate ODBC dirette, ma non è necessario chiudere l'handle o si supponga che l'handle sia ancora valido e disponibile dopo tutte le classi esistenti `CDatabase`- o `CRecordset`-sono stati eliminati definitivamente gli oggetti derivati.

```
HENV AFXAPI AfxGetHENV();
```

### <a name="return-value"></a>Valore restituito

Handle per l'ambiente ODBC attualmente in uso in MFC. Può essere `SQL_HENV_NULL` se non esistono nessun [CDatabase](../../mfc/reference/cdatabase-class.md) oggetti e n [CRecordset](../../mfc/reference/crecordset-class.md) oggetti in uso.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDB. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
