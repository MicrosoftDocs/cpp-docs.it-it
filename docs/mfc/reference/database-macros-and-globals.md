---
title: Macro e funzioni globali di database | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- AFXDB/AFX_ODBC_CALL
- AFXDB/AFX_SQL_ASYNC
- AFXDB/AFX_SQL_SYNC
- AFXDB/AfxGetHENV
dev_langs:
- C++
helpviewer_keywords:
- global database functions [MFC]
- database macros [MFC]
- database globals [MFC]
- global functions [MFC], database functions
- macros [MFC], MFC database
ms.assetid: 5b9b9e61-1cf9-4345-9f29-3807dd466488
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bcafff20ad79f68f2bb5d4195c38603da63b9d17
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33370773"
---
# <a name="database-macros-and-globals"></a>Macro e funzioni globali di database
Le macro e funzioni globali elencati di seguito si applicano alle applicazioni di database basate su ODBC. Non vengono utilizzati con le applicazioni basate su DAO.  
  
 Prima di MFC 4.2, le macro `AFX_SQL_ASYNC` e `AFX_SQL_SYNC` assegnato operazioni asincrone un'opportunità per produrre tempo ad altri processi. A partire da MFC 4.2, l'implementazione di queste macro modificata perché le classi ODBC MFC usato solo operazioni sincrone. La macro `AFX_ODBC_CALL` è una caratteristica introdotta in MFC 4.2.  
  
### <a name="database-macros"></a>Macro di database  
  
|||  
|-|-|  
|[AFX_ODBC_CALL](#afx_odbc_call)|Chiama una funzione API ODBC che restituisce `SQL_STILL_EXECUTING`. `AFX_ODBC_CALL` ripetutamente chiamerà la funzione finché non sarà più restituisce `SQL_STILL_EXECUTING`.|  
|[AFX_SQL_ASYNC](#afx_sql_async)|Chiama `AFX_ODBC_CALL`.|  
|[AFX_SQL_SYNC](#afx_sql_sync)|Chiama una funzione API ODBC che non restituisce `SQL_STILL_EXECUTING`.|  
  
### <a name="database-globals"></a>Funzioni globali di database  
  
|||  
|-|-| 
|[AfxDbInitModule](#afxdbinitmodule)|Aggiunge il supporto di database per una DLL MFC regolare collegata in modo dinamico a MFC.| 
|[AfxGetHENV](#afxgethenv)|Recupera un handle per l'ambiente ODBC attualmente in uso da MFC. È possibile utilizzare questo handle in chiamate dirette di ODBC.|  


## <a name="afxdbinitmodule"></a> AfxDbInitModule
Per supporta la database MFC (o DAO) da una DLL MFC regolare collegata in modo dinamico a MFC, aggiungere una chiamata a questa funzione il regolare MFC DLL **:: InitInstance** DLL del database per l'inizializzazione di MFC.  
   
### <a name="syntax"></a>Sintassi    
```
void AFXAPI AfxDbInitModule( );    
```  
   
### <a name="remarks"></a>Note  
 Assicurarsi che questa chiamata si verifica prima di qualsiasi chiamata di classe di base o qualsiasi codice che accede al database MFC DLL aggiunto. Il database MFC DLL è un'estensione MFC DLL. Affinché una DLL di estensione MFC di un **CDynLinkLibrary** catena, è necessario creare un **CDynLinkLibrary** oggetto nel contesto di ogni modulo che verrà utilizzato. `AfxDbInitModule` Crea il **CDynLinkLibrary** dell'oggetto nel contesto di MFC DLL il regolare in modo che si ottiene formare il **CDynLinkLibrary** oggetto catena della DLL regolare MFC.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** < AFXDLL . h >  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)
 
  

##  <a name="afx_odbc_call"></a>  AFX_ODBC_CALL  
 Utilizzare questa macro per chiamare una funzione API ODBC che può restituire `SQL_STILL_EXECUTING`.  
  
```  
AFX_ODBC_CALL(SQLFunc)  
```  
  
### <a name="parameters"></a>Parametri  
 `SQLFunc`  
 Funzione API ODBC. Per ulteriori informazioni sulle funzioni API ODBC, vedere il SDK di Windows.  
  
### <a name="remarks"></a>Note  
 `AFX_ODBC_CALL` chiama ripetutamente la funzione finché non è più restituisce `SQL_STILL_EXECUTING`.  
  
 Prima di richiamare `AFX_ODBC_CALL`, è necessario dichiarare una variabile, `nRetCode`, di tipo **RETCODE**.  
  
 Si noti che ODBC MFC classi ora utilizzare solo l'elaborazione sincrona. Per eseguire un'operazione asincrona, è necessario chiamare la funzione API ODBC **SQLSetConnectOption**. Per ulteriori informazioni, vedere l'argomento "Esecuzione asincrona delle funzioni" in Windows SDK.  

  
### <a name="example"></a>Esempio  
 Questo esempio viene utilizzato `AFX_ODBC_CALL` per chiamare il **SQLColumns** funzione API ODBC, che restituisce un elenco delle colonne nella tabella denominata da `strTableName`. Si noti la dichiarazione di `nRetCode` e l'utilizzo di membri di dati del recordset per passare i parametri della funzione. L'esempio viene illustrato come controllare i risultati della chiamata con **controllare**, una funzione membro di classe `CRecordset`. La variabile `prs` è un puntatore a un `CRecordset` oggetto, dichiarato in un' posizione.  
  
 [!code-cpp[NVC_MFCDatabase#39](../../mfc/codesnippet/cpp/database-macros-and-globals_1.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

##  <a name="afx_sql_async"></a>  AFX_SQL_ASYNC  
 L'implementazione di questa macro è stata modificata in MFC 4.2.  
  
```   
AFX_SQL_ASYNC(prs, SQLFunc)   
```  
  
### <a name="parameters"></a>Parametri  
 `prs`  
 Puntatore a un oggetto `CRecordset` o a un oggetto `CDatabase`. A partire da MFC 4.2 il valore di questo parametro viene ignorato.  
  
 `SQLFunc`  
 Funzione API ODBC. Per ulteriori informazioni sulle funzioni API ODBC, vedere il SDK di Windows.  
  
### <a name="remarks"></a>Note  
 `AFX_SQL_ASYNC` chiama semplicemente la macro [AFX_ODBC_CALL](#afx_odbc_call) e ignora il `prs` parametro. Nelle versioni di MFC precedenti alla 4.2, `AFX_SQL_ASYNC` viene utilizzato per chiamare funzioni API ODBC che potrebbero restituire `SQL_STILL_EXECUTING`. Se una funzione API ODBC restituisse `SQL_STILL_EXECUTING`, `AFX_SQL_ASYNC` chiamerebbe `prs->OnWaitForDataSource`.  
  
> [!NOTE]
>  Le classi ODBC MFC utilizzano ora solo l'elaborazione sincrona. Per eseguire un'operazione asincrona, è necessario chiamare la funzione API ODBC **SQLSetConnectOption**. Per ulteriori informazioni, vedere l'argomento "Esecuzione asincrona delle funzioni" in Windows SDK.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDB. h  
  
##  <a name="afx_sql_sync"></a>  AFX_SQL_SYNC  
 Il `AFX_SQL_SYNC` macro chiama semplicemente la funzione `SQLFunc`.  
  
```   
AFX_SQL_SYNC(SQLFunc)   
```  
  
### <a name="parameters"></a>Parametri  
 `SQLFunc`  
 Funzione API ODBC. Per ulteriori informazioni su queste funzioni, vedere il SDK di Windows.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa macro per chiamare le funzioni API ODBC che non restituiscono `SQL_STILL_EXECUTING`.  
  
 Prima di chiamare `AFX_SQL_SYNC`, è necessario dichiarare una variabile, `nRetCode`, di tipo **RETCODE**. È possibile controllare il valore di `nRetCode` dopo la chiamata di macro.  
  
 Si noti che l'implementazione di `AFX_SQL_SYNC` modificata in MFC 4.2. Poiché lo stato del server di controllo è stato non è più necessario, `AFX_SQL_SYNC` assegna semplicemente un valore a `nRetCode`. Ad esempio, invece di effettuare la chiamata  
  
 [!code-cpp[NVC_MFCDatabase#40](../../mfc/codesnippet/cpp/database-macros-and-globals_2.cpp)]  
  
 è possibile apportare semplicemente l'assegnazione  
  
 [!code-cpp[NVC_MFCDatabase#41](../../mfc/codesnippet/cpp/database-macros-and-globals_3.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDB. h  
  
##  <a name="afxgethenv"></a>  AfxGetHENV  
 È possibile utilizzare l'handle restituito nelle chiamate ODBC dirette, ma non deve chiudere l'handle o si presuppone che l'handle sia ancora valido e disponibile dopo qualsiasi esistente `CDatabase`- o `CRecordset`-oggetti derivati sono stati eliminati.  
  
```   
HENV AFXAPI AfxGetHENV(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle di ambiente ODBC attualmente in uso da MFC. Può essere `SQL_HENV_NULL` se esistono alcun [CDatabase](../../mfc/reference/cdatabase-class.md) oggetti e nessun [CRecordset](../../mfc/reference/crecordset-class.md) oggetti in uso.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDB. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
