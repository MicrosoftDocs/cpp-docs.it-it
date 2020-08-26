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
ms.openlocfilehash: 0dc53bce8b43677e7fe0aa1787d1adcc16a560c4
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88837527"
---
# <a name="database-macros-and-globals"></a>Macro e funzioni globali di database

Le macro e le globali elencate di seguito si applicano alle applicazioni di database basate su ODBC. Non vengono utilizzati con le applicazioni basate su DAO.

Prima di MFC 4,2, le macro `AFX_SQL_ASYNC` e `AFX_SQL_SYNC` davano alle operazioni asincrone la possibilità di generare tempo per altri processi. A partire da MFC 4,2, l'implementazione di queste macro è cambiata perché le classi ODBC MFC utilizzano solo operazioni sincrone. La macro `AFX_ODBC_CALL` era una novità di MFC 4,2.

### <a name="database-macros"></a>Macro di database

|Nome|Descrizione|
|-|-|
|[AFX_ODBC_CALL](#afx_odbc_call)|Chiama una funzione API ODBC che restituisce `SQL_STILL_EXECUTING` . `AFX_ODBC_CALL` chiamerà ripetutamente la funzione fino a quando non restituisce più `SQL_STILL_EXECUTING` .|
|[AFX_SQL_ASYNC](#afx_sql_async)|Chiama `AFX_ODBC_CALL`.|
|[AFX_SQL_SYNC](#afx_sql_sync)|Chiama una funzione API ODBC che non restituisce `SQL_STILL_EXECUTING` .|

### <a name="database-globals"></a>Globali di database

|Nome|Descrizione|
|-|-|
|[AfxDbInitModule](#afxdbinitmodule)|Aggiunge il supporto del database per una normale DLL MFC collegata a MFC in modo dinamico.|
|[AfxGetHENV](#afxgethenv)|Recupera un handle per l'ambiente ODBC attualmente utilizzato da MFC. È possibile utilizzare questo handle nelle chiamate ODBC dirette.|

## <a name="afxdbinitmodule"></a><a name="afxdbinitmodule"></a> AfxDbInitModule

Per il supporto del database MFC (o DAO) da una DLL MFC normale collegata a MFC in modo dinamico, aggiungere una chiamata a questa funzione nella funzione della DLL MFC normale `CWinApp::InitInstance` per inizializzare la dll del database MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxDbInitModule( );
```

### <a name="remarks"></a>Osservazioni

Verificare che questa chiamata venga eseguita prima di qualsiasi chiamata della classe base o di qualsiasi codice aggiunto che acceda alla DLL del database MFC. La DLL del database MFC è una DLL di estensione MFC. affinché una DLL di estensione MFC possa essere cablata in una `CDynLinkLibrary` catena, deve creare un `CDynLinkLibrary` oggetto nel contesto di ogni modulo che lo utilizzerà. `AfxDbInitModule` Crea l' `CDynLinkLibrary` oggetto nel contesto della DLL MFC normale in modo che venga cablato nella `CDynLinkLibrary` catena di oggetti della normale DLL MFC.

### <a name="requirements"></a>Requisiti

**Intestazione:**\<afxdll_.h>

## <a name="afx_odbc_call"></a><a name="afx_odbc_call"></a> AFX_ODBC_CALL

Utilizzare questa macro per chiamare qualsiasi funzione API ODBC che può restituire `SQL_STILL_EXECUTING` .

```
AFX_ODBC_CALL(SQLFunc)
```

### <a name="parameters"></a>Parametri

*Sqlfunc*<br/>
Funzione API ODBC. Per ulteriori informazioni sulle funzioni API ODBC, vedere la Windows SDK.

### <a name="remarks"></a>Osservazioni

`AFX_ODBC_CALL` chiama ripetutamente la funzione fino a quando non restituisce più `SQL_STILL_EXECUTING` .

Prima di richiamare `AFX_ODBC_CALL` , è necessario dichiarare una variabile, `nRetCode` , di tipo RETCODE.

Si noti che ora le classi ODBC MFC utilizzano solo l'elaborazione sincrona. Per eseguire un'operazione asincrona, è necessario chiamare la funzione API ODBC `SQLSetConnectOption` . Per ulteriori informazioni, vedere l'argomento "esecuzione asincrona di funzioni" nel Windows SDK.

### <a name="example"></a>Esempio

In questo esempio viene utilizzato `AFX_ODBC_CALL` per chiamare la `SQLColumns` funzione API ODBC, che restituisce un elenco delle colonne nella tabella denominata da `strTableName` . Si noti la dichiarazione di `nRetCode` e l'utilizzo dei membri dati del recordset per passare parametri alla funzione. Nell'esempio viene inoltre illustrato come controllare i risultati della chiamata con `Check` , una funzione membro della classe `CRecordset` . La variabile `prs` è un puntatore a un `CRecordset` oggetto, dichiarato altrove.

[!code-cpp[NVC_MFCDatabase#39](../../mfc/codesnippet/cpp/database-macros-and-globals_1.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="afx_sql_async"></a><a name="afx_sql_async"></a> AFX_SQL_ASYNC

L'implementazione di questa macro è stata modificata in MFC 4.2.

```
AFX_SQL_ASYNC(prs, SQLFunc)
```

### <a name="parameters"></a>Parametri

*richieste pull*<br/>
Puntatore a un oggetto `CRecordset` o a un oggetto `CDatabase`. A partire da MFC 4.2 il valore di questo parametro viene ignorato.

*Sqlfunc*<br/>
Funzione API ODBC. Per ulteriori informazioni sulle funzioni API ODBC, vedere la Windows SDK.

### <a name="remarks"></a>Osservazioni

`AFX_SQL_ASYNC` chiama semplicemente la macro [AFX_ODBC_CALL](#afx_odbc_call) e ignora il parametro *PRS* . Nelle versioni di MFC precedenti alla 4.2, `AFX_SQL_ASYNC` viene utilizzato per chiamare funzioni API ODBC che potrebbero restituire `SQL_STILL_EXECUTING`. Se una funzione API ODBC restituisse `SQL_STILL_EXECUTING`, `AFX_SQL_ASYNC` chiamerebbe `prs->OnWaitForDataSource`.

> [!NOTE]
> Le classi ODBC MFC utilizzano ora solo l'elaborazione sincrona. Per eseguire un'operazione asincrona, è necessario chiamare la funzione API ODBC `SQLSetConnectOption` . Per ulteriori informazioni, vedere l'argomento "esecuzione asincrona di funzioni" nel Windows SDK.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDB. h

## <a name="afx_sql_sync"></a><a name="afx_sql_sync"></a> AFX_SQL_SYNC

La `AFX_SQL_SYNC` macro chiama semplicemente la funzione `SQLFunc` .

```
AFX_SQL_SYNC(SQLFunc)
```

### <a name="parameters"></a>Parametri

*Sqlfunc*<br/>
Funzione API ODBC. Per ulteriori informazioni su queste funzioni, vedere la Windows SDK.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per chiamare le funzioni API ODBC che non restituiranno `SQL_STILL_EXECUTING` .

Prima `AFX_SQL_SYNC` di chiamare, è necessario dichiarare una variabile, `nRetCode` , di tipo RETCODE. È possibile controllare il valore di `nRetCode` dopo la chiamata della macro.

Si noti che l'implementazione di è stata `AFX_SQL_SYNC` modificata in MFC 4,2. Poiché il controllo dello stato del server non è più necessario, `AFX_SQL_SYNC` assegna semplicemente un valore a `nRetCode` . Ad esempio, invece di effettuare la chiamata

[!code-cpp[NVC_MFCDatabase#40](../../mfc/codesnippet/cpp/database-macros-and-globals_2.cpp)]

è possibile effettuare semplicemente l'assegnazione

[!code-cpp[NVC_MFCDatabase#41](../../mfc/codesnippet/cpp/database-macros-and-globals_3.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDB. h

## <a name="afxgethenv"></a><a name="afxgethenv"></a> AfxGetHENV

È possibile utilizzare l'handle restituito nelle chiamate ODBC dirette, ma non è necessario chiudere l'handle o presumere che l'handle sia ancora valido e disponibile dopo che tutti `CDatabase` `CRecordset` gli oggetti esistenti o derivati sono stati eliminati definitivamente.

```
HENV AFXAPI AfxGetHENV();
```

### <a name="return-value"></a>Valore restituito

Handle per l'ambiente ODBC attualmente utilizzato da MFC. Può essere `SQL_HENV_NULL` se non sono presenti oggetti [CDatabase](../../mfc/reference/cdatabase-class.md) né oggetti [CRecordset](../../mfc/reference/crecordset-class.md) in uso.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDB. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
