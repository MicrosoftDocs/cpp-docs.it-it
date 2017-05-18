---
title: Interfaccia IWorkerThreadClient | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IWorkerThreadClient
- ATLUTIL/ATL::IWorkerThreadClient
- ATLUTIL/ATL::CloseHandle
- ATLUTIL/ATL::Execute
dev_langs:
- C++
helpviewer_keywords:
- IWorkerThreadClient interface
ms.assetid: 56f4a2f5-007e-4a33-9e20-05187629f715
caps.latest.revision: 24
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 2127d13dc11edb353ef27396f3457dd9abdc4a99
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="iworkerthreadclient-interface"></a>Interfaccia IWorkerThreadClient
`IWorkerThreadClient`è l'interfaccia implementata dai client di [CWorkerThread](../../atl/reference/cworkerthread-class.md) (classe).  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
__interface IWorkerThreadClient
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CloseHandle](#closehandle)|Implementare questo metodo per chiudere l'handle associato all'oggetto.|  
|[Eseguire](#execute)|Implementare questo metodo per eseguire codice quando viene segnalato l'handle associato all'oggetto.|  
  
## <a name="remarks"></a>Note  
 Implementare questa interfaccia quando si dispone di codice che deve essere eseguito su un thread di lavoro in risposta a un handle che diventa segnalato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="closehandle"></a>IWorkerThreadClient::CloseHandle  
 Implementare questo metodo per chiudere l'handle associato all'oggetto.  
  
```
HRESULT CloseHandle(HANDLE  hHandle);
```  
  
### <a name="parameters"></a>Parametri  
 *hHandle*  
 La chiusura dell'handle.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 L'handle passato a questo metodo è stato precedentemente associato all'oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).  
  
### <a name="example"></a>Esempio  
 Il codice seguente viene illustrata un'implementazione semplice di `IWorkerThreadClient::CloseHandle`.  
  
 [!code-cpp[NVC_ATL_Utilities&#135;](../../atl/codesnippet/cpp/iworkerthreadclient-interface_1.cpp)]  
  
##  <a name="execute"></a>IWorkerThreadClient::Execute  
 Implementare questo metodo per eseguire codice quando viene segnalato l'handle associato all'oggetto.  
  
```
HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject);
```  
  
### <a name="parameters"></a>Parametri  
 `dwParam`  
 Il parametro user.  
  
 `hObject`  
 Handle che è diventato segnalato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 L'handle e DWORD/puntatore passato a questo metodo era precedentemente associato questo oggetto tramite una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).  
  
### <a name="example"></a>Esempio  
 Il codice seguente viene illustrata un'implementazione semplice di `IWorkerThreadClient::Execute`.  
  
 [!code-cpp[NVC_ATL_Utilities&#136;](../../atl/codesnippet/cpp/iworkerthreadclient-interface_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)   
 [Classe CWorkerThread](../../atl/reference/cworkerthread-class.md)

