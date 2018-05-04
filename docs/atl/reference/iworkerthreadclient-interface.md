---
title: Interfaccia IWorkerThreadClient | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8336edb07d02bbbcd5775eaf3ef8fe0f735d3adb
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="iworkerthreadclient-interface"></a>Interfaccia IWorkerThreadClient
`IWorkerThreadClient` è l'interfaccia implementata dai client del [CWorkerThread](../../atl/reference/cworkerthread-class.md) classe.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
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
 Quando si dispone di codice che deve essere eseguito su un thread di lavoro in risposta a un handle che diventa segnalato, implementare questa interfaccia.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="closehandle"></a>  IWorkerThreadClient::CloseHandle  
 Implementare questo metodo per chiudere l'handle associato all'oggetto.  
  
```
HRESULT CloseHandle(HANDLE  hHandle);
```  
  
### <a name="parameters"></a>Parametri  
 *hHandle*  
 L'handle da chiudere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 L'handle passato a questo metodo non è già associata a questo oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).  
  
### <a name="example"></a>Esempio  
 Il codice seguente viene illustrata un'implementazione semplice di `IWorkerThreadClient::CloseHandle`.  
  
 [!code-cpp[NVC_ATL_Utilities#135](../../atl/codesnippet/cpp/iworkerthreadclient-interface_1.cpp)]  
  
##  <a name="execute"></a>  IWorkerThreadClient::Execute  
 Implementare questo metodo per eseguire codice quando viene segnalato l'handle associato all'oggetto.  
  
```
HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject);
```  
  
### <a name="parameters"></a>Parametri  
 `dwParam`  
 Il parametro user.  
  
 `hObject`  
 L'handle di cui è segnalato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 L'handle e DWORD/puntatore passato a questo metodo sono state in precedenza associata a questo oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).  
  
### <a name="example"></a>Esempio  
 Il codice seguente viene illustrata un'implementazione semplice di `IWorkerThreadClient::Execute`.  
  
 [!code-cpp[NVC_ATL_Utilities#136](../../atl/codesnippet/cpp/iworkerthreadclient-interface_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)   
 [Classe CWorkerThread](../../atl/reference/cworkerthread-class.md)
