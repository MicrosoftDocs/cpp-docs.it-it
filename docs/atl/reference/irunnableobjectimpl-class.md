---
title: Classe IRunnableObjectImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 20
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: a9b2698c195ac5bd709e6d40d3c30008d3fa26d4
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="irunnableobjectimpl-class"></a>Classe IRunnableObjectImpl
Questa classe implementa **IUnknown** e fornisce un'implementazione predefinita di [IRunnableObject](http://msdn.microsoft.com/library/windows/desktop/ms692783) interfaccia.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class IRunnableObjectImpl
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IRunnableObjectImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IRunnableObjectImpl::GetRunningClass](#getrunningclass)|Restituisce il CLSID del controllo in esecuzione. L'implementazione ATL imposta il CLSID `GUID_NULL` e restituisce **E_UNEXPECTED**.|  
|[IRunnableObjectImpl::IsRunning](#isrunning)|Determina se il controllo è in esecuzione. L'implementazione ATL restituisce **TRUE**.|  
|[IRunnableObjectImpl::LockRunning](#lockrunning)|Blocca il controllo allo stato di esecuzione. L'implementazione ATL restituisce `S_OK`.|  
|[IRunnableObjectImpl::Run](#run)|Forza l'esecuzione del controllo. L'implementazione ATL restituisce `S_OK`.|  
|[IRunnableObjectImpl::SetContainedObject](#setcontainedobject)|Indica che è incorporato il controllo. L'implementazione ATL restituisce `S_OK`.|  
  
## <a name="remarks"></a>Note  
 Il [IRunnableObject](http://msdn.microsoft.com/library/windows/desktop/ms692783) interfaccia consente a un contenitore determinare se un controllo è in esecuzione, forza per eseguire o bloccarlo allo stato di esecuzione. Classe `IRunnableObjectImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IRunnableObject`  
  
 `IRunnableObjectImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="getrunningclass"></a>IRunnableObjectImpl::GetRunningClass  
 Restituisce il CLSID del controllo in esecuzione.  
  
```
HRESULT GetRunningClass(LPCLSID lpClsid);
```  
  
### <a name="return-value"></a>Valore restituito  
 I set di implementazione ATL \* *lpClsid* a `GUID_NULL` e restituisce **E_UNEXPECTED**.  
  
### <a name="remarks"></a>Note  
 Vedere [IRunnableObject::GetRunningClass](http://msdn.microsoft.com/library/windows/desktop/ms693734) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="isrunning"></a>IRunnableObjectImpl::IsRunning  
 Determina se il controllo è in esecuzione.  
  
```
virtual BOOL IsRunning();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione ATL restituisce **TRUE**.  
  
### <a name="remarks"></a>Note  
 Vedere [IRunnableObject::IsRunning](http://msdn.microsoft.com/library/windows/desktop/ms678496) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="lockrunning"></a>IRunnableObjectImpl::LockRunning  
 Blocca il controllo allo stato di esecuzione.  
  
```
HRESULT LockRunning(BOOL fLock, BOOL fLastUnlockCloses);
```  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione ATL restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IRunnableObject::LockRunning](http://msdn.microsoft.com/library/windows/desktop/ms693361) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="run"></a>IRunnableObjectImpl::Run  
 Forza l'esecuzione del controllo.  
  
```
HRESULT Run(LPBINDCTX lpbc);
```  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione ATL restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IRunnableObject::Run](http://msdn.microsoft.com/library/windows/desktop/ms694517) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="setcontainedobject"></a>IRunnableObjectImpl::SetContainedObject  
 Indica che è incorporato il controllo.  
  
```
HRESULT SetContainedObject(BOOL fContained);
```  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione ATL restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IRunnableObject::SetContainedObject](http://msdn.microsoft.com/library/windows/desktop/ms693710) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

