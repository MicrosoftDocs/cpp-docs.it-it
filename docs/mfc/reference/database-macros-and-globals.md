---
title: Macro e funzioni globali di database | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- AFXDB/AFX_ODBC_CALL
- AFXDB/AFX_SQL_ASYNC
- AFXDB/AFX_SQL_SYNC
- AFXDB/AfxGetHENV
dev_langs:
- C++
helpviewer_keywords:
- global database functions [C++]
- database macros [C++]
- database globals [C++]
- global functions [C++], database functions
- macros [C++], MFC database
ms.assetid: 5b9b9e61-1cf9-4345-9f29-3807dd466488
caps.latest.revision: 13
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 17a158366f94d27b7a46917282425d652e6b9042
ms.openlocfilehash: 9706c47d9bd5996c28873da6a15a687bf9b5e038
ms.lasthandoff: 02/24/2017

---
# <a name="database-macros-and-globals"></a>Macro e funzioni globali di database
La macro e funzioni globali elencati di seguito si applicano alle applicazioni di database basate su ODBC. Non vengono utilizzati con le applicazioni basate su DAO.  
  
 Prima di MFC 4.2, le macro `AFX_SQL_ASYNC` e `AFX_SQL_SYNC` assegnato operazioni asincrone un'opportunità per produrre tempo ad altri processi. A partire da MFC 4.2, l'implementazione di queste macro modificata perché le classi ODBC MFC utilizzate solo operazioni sincrone. La macro `AFX_ODBC_CALL` sono state introdotte in MFC 4.2.  
  
### <a name="database-macros"></a>Macro di database  
  
|||  
|-|-|  
|[AFX_ODBC_CALL](#afx_odbc_call)|Chiama una funzione API ODBC che restituisce `SQL_STILL_EXECUTING`. `AFX_ODBC_CALL`ripetutamente chiamerà la funzione fino a quando non restituisce `SQL_STILL_EXECUTING`.|  
|[AFX_SQL_ASYNC](#afx_sql_async)|Chiama `AFX_ODBC_CALL`.|  
|[AFX_SQL_SYNC](#afx_sql_sync)|Chiama una funzione API ODBC che non restituisce `SQL_STILL_EXECUTING`.|  
  
### <a name="database-globals"></a>Funzioni globali di database  
  
|||  
|-|-|  
|[AfxGetHENV](#afxgethenv)|Recupera un handle per l'ambiente di ODBC in uso da MFC. È possibile utilizzare questo handle in chiamate dirette di ODBC.|  
  
##  <a name="afx_odbc_call"></a>AFX_ODBC_CALL  
 Utilizzare questa macro per chiamare una funzione API ODBC che può restituire `SQL_STILL_EXECUTING`.  
  
```  
AFX_ODBC_CALL(SQLFunc)  
```  
  
### <a name="parameters"></a>Parametri  
 `SQLFunc`  
 Funzione API ODBC. Per ulteriori informazioni sulle funzioni API ODBC, vedere [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 `AFX_ODBC_CALL`chiama ripetutamente la funzione fino a quando non restituisce `SQL_STILL_EXECUTING`.  
  
 Prima di richiamare `AFX_ODBC_CALL`, è necessario dichiarare una variabile, `nRetCode`, di tipo **RETCODE**.  
  
 Si noti che ODBC MFC classi ora utilizzare solo l'elaborazione sincrona. Per eseguire un'operazione asincrona, è necessario chiamare la funzione API ODBC **SQLSetConnectOption**. Per ulteriori informazioni, vedere l'argomento "Esecuzione asincrona delle funzioni" in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  

  
### <a name="example"></a>Esempio  
 Questo esempio viene utilizzato `AFX_ODBC_CALL` per chiamare il **SQLColumns** funzione API ODBC, che restituisce un elenco delle colonne nella tabella denominata da `strTableName`. Si noti la dichiarazione di `nRetCode` e l'utilizzo dei membri dati di recordset per passare parametri alla funzione. L'esempio viene illustrato come controllare i risultati della chiamata con **controllare**, una funzione membro della classe `CRecordset`. La variabile `prs` è un puntatore a un `CRecordset` oggetto dichiarato in un' posizione.  
  
 [!code-cpp[NVC_MFCDatabase&#39;](../../mfc/codesnippet/cpp/database-macros-and-globals_1.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  

##  <a name="afx_sql_async"></a>AFX_SQL_ASYNC  
 L'implementazione di questa macro è stata modificata in MFC 4.2.  
  
```   
AFX_SQL_ASYNC(prs, SQLFunc)   
```  
  
### <a name="parameters"></a>Parametri  
 `prs`  
 Puntatore a un oggetto `CRecordset` o a un oggetto `CDatabase`. A partire da MFC 4.2 il valore di questo parametro viene ignorato.  
  
 `SQLFunc`  
 Funzione API ODBC. Per ulteriori informazioni sulle funzioni API ODBC, vedere [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 `AFX_SQL_ASYNC`chiama semplicemente la macro [AFX_ODBC_CALL](#afx_odbc_call) e ignora il `prs` parametro. Nelle versioni di MFC precedenti alla 4.2, `AFX_SQL_ASYNC` viene utilizzato per chiamare funzioni API ODBC che potrebbero restituire `SQL_STILL_EXECUTING`. Se una funzione API ODBC restituisse `SQL_STILL_EXECUTING`, `AFX_SQL_ASYNC` chiamerebbe `prs->OnWaitForDataSource`.  
  
> [!NOTE]
>  Le classi ODBC MFC utilizzano ora solo l'elaborazione sincrona. Per eseguire un'operazione asincrona, è necessario chiamare la funzione API ODBC **SQLSetConnectOption**. Per ulteriori informazioni, vedere l'argomento "Esecuzione asincrona delle funzioni" in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDB. h  
  
##  <a name="afx_sql_sync"></a>AFX_SQL_SYNC  
 Il `AFX_SQL_SYNC` macro chiama semplicemente la funzione `SQLFunc`.  
  
```   
AFX_SQL_SYNC(SQLFunc)   
```  
  
### <a name="parameters"></a>Parametri  
 `SQLFunc`  
 Funzione API ODBC. Per ulteriori informazioni su queste funzioni, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Utilizzare questa macro per chiamare funzioni API ODBC che non verranno restituito `SQL_STILL_EXECUTING`.  
  
 Prima di chiamare `AFX_SQL_SYNC`, è necessario dichiarare una variabile, `nRetCode`, di tipo **RETCODE**. È possibile controllare il valore di `nRetCode` dopo la chiamata di macro.  
  
 Si noti che l'implementazione di `AFX_SQL_SYNC` modificata in MFC 4.2. Poiché lo stato del server di controllo non era più necessario, `AFX_SQL_SYNC` assegna semplicemente un valore per `nRetCode`. Ad esempio, invece di effettuare la chiamata  
  
 [!code-cpp[&#40; NVC_MFCDatabase](../../mfc/codesnippet/cpp/database-macros-and-globals_2.cpp)]  
  
 è possibile fare in modo che l'assegnazione  
  
 [!code-cpp[NVC_MFCDatabase n.&41;](../../mfc/codesnippet/cpp/database-macros-and-globals_3.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDB. h  
  
##  <a name="afxgethenv"></a>AfxGetHENV  
 È possibile utilizzare l'handle restituito nelle chiamate ODBC dirette, ma non è necessario chiudere l'handle o si presuppone che l'handle sia ancora valido e disponibile dopo eventuali `CDatabase`- o `CRecordset`-oggetti derivati sono stati eliminati.  
  
```   
HENV AFXAPI AfxGetHENV(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per l'ambiente di ODBC in uso da MFC. Può essere `SQL_HENV_NULL` se sono presenti non [CDatabase](../../mfc/reference/cdatabase-class.md) oggetti e no [CRecordset](../../mfc/reference/crecordset-class.md) oggetti in uso.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDB. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

