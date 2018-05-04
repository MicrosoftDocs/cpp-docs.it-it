---
title: Classe IRunnableObjectImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IRunnableObjectImpl
- ATLCTL/ATL::IRunnableObjectImpl
- ATLCTL/ATL::IRunnableObjectImpl::GetRunningClass
- ATLCTL/ATL::IRunnableObjectImpl::IsRunning
- ATLCTL/ATL::IRunnableObjectImpl::LockRunning
- ATLCTL/ATL::IRunnableObjectImpl::Run
- ATLCTL/ATL::IRunnableObjectImpl::SetContainedObject
dev_langs:
- C++
helpviewer_keywords:
- containers, running controls
- IRunnableObjectImpl class
- IRunnableObject, ATL implementation
- controls [ATL], running
- controls [C++], container running in ATL
ms.assetid: 305c7c3b-889e-49dd-aca1-34379c1b9931
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a08fec0fd38e30729c9131def1831e5e5d8f633e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="irunnableobjectimpl-class"></a>Classe IRunnableObjectImpl
Questa classe implementa **IUnknown** e fornisce un'implementazione predefinita del [IRunnableObject](http://msdn.microsoft.com/library/windows/desktop/ms692783) interfaccia.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class IRunnableObjectImpl
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IRunnableObjectImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IRunnableObjectImpl::GetRunningClass](#getrunningclass)|Restituisce il CLSID del controllo in esecuzione. L'implementazione di ATL imposta il CLSID `GUID_NULL` e restituisce **E_UNEXPECTED**.|  
|[IRunnableObjectImpl::IsRunning](#isrunning)|Determina se il controllo è in esecuzione. Restituisce l'implementazione di ATL **TRUE**.|  
|[IRunnableObjectImpl::LockRunning](#lockrunning)|Blocca il controllo allo stato di esecuzione. Restituisce l'implementazione di ATL `S_OK`.|  
|[IRunnableObjectImpl::Run](#run)|Forza l'esecuzione del controllo. Restituisce l'implementazione di ATL `S_OK`.|  
|[IRunnableObjectImpl::SetContainedObject](#setcontainedobject)|Indica che è incorporato il controllo. Restituisce l'implementazione di ATL `S_OK`.|  
  
## <a name="remarks"></a>Note  
 Il [IRunnableObject](http://msdn.microsoft.com/library/windows/desktop/ms692783) interfaccia consente a un contenitore determinare se un controllo è in esecuzione, forza per eseguire o bloccarla allo stato di esecuzione. Classe `IRunnableObjectImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IRunnableObject`  
  
 `IRunnableObjectImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="getrunningclass"></a>  IRunnableObjectImpl::GetRunningClass  
 Restituisce il CLSID del controllo in esecuzione.  
  
```
HRESULT GetRunningClass(LPCLSID lpClsid);
```  
  
### <a name="return-value"></a>Valore restituito  
 I set di implementazione ATL \* *lpClsid* a `GUID_NULL` e restituisce **E_UNEXPECTED**.  
  
### <a name="remarks"></a>Note  
 Vedere [IRunnableObject::GetRunningClass](http://msdn.microsoft.com/library/windows/desktop/ms693734) in Windows SDK.  
  
##  <a name="isrunning"></a>  IRunnableObjectImpl::IsRunning  
 Determina se il controllo è in esecuzione.  
  
```
virtual BOOL IsRunning();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'implementazione di ATL **TRUE**.  
  
### <a name="remarks"></a>Note  
 Vedere [IRunnableObject::IsRunning](http://msdn.microsoft.com/library/windows/desktop/ms678496) in Windows SDK.  
  
##  <a name="lockrunning"></a>  IRunnableObjectImpl::LockRunning  
 Blocca il controllo allo stato di esecuzione.  
  
```
HRESULT LockRunning(BOOL fLock, BOOL fLastUnlockCloses);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'implementazione di ATL `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IRunnableObject::LockRunning](http://msdn.microsoft.com/library/windows/desktop/ms693361) in Windows SDK.  
  
##  <a name="run"></a>  IRunnableObjectImpl::Run  
 Forza l'esecuzione del controllo.  
  
```
HRESULT Run(LPBINDCTX lpbc);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'implementazione di ATL `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IRunnableObject::Run](http://msdn.microsoft.com/library/windows/desktop/ms694517) in Windows SDK.  
  
##  <a name="setcontainedobject"></a>  IRunnableObjectImpl::SetContainedObject  
 Indica che è incorporato il controllo.  
  
```
HRESULT SetContainedObject(BOOL fContained);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'implementazione di ATL `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IRunnableObject::SetContainedObject](http://msdn.microsoft.com/library/windows/desktop/ms693710) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
