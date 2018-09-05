---
title: Classe IRunnableObjectImpl | Microsoft Docs
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
ms.openlocfilehash: 3526425bac6591b9330e0915d717ba5b47ee7b3a
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43755099"
---
# <a name="irunnableobjectimpl-class"></a>Classe IRunnableObjectImpl

Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita del [IRunnableObject](/windows/desktop/api/objidl/nn-objidl-irunnableobject) interfaccia.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<class T>  
class IRunnableObjectImpl
```

#### <a name="parameters"></a>Parametri

*T*  
La classe, derivata da `IRunnableObjectImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IRunnableObjectImpl::GetRunningClass](#getrunningclass)|Restituisce il CLSID del controllo in esecuzione. L'implementazione di ATL imposta il CLSID su to GUID_NULL e restituisce E_UNEXPECTED.|
|[IRunnableObjectImpl::IsRunning](#isrunning)|Determina se il controllo è in esecuzione. L'implementazione di ATL restituisce TRUE.|
|[IRunnableObjectImpl::LockRunning](#lockrunning)|Blocca il controllo allo stato di esecuzione. L'implementazione di ATL restituisce S_OK.|
|[IRunnableObjectImpl::Run](#run)|Forza l'esecuzione del controllo. L'implementazione di ATL restituisce S_OK.|
|[IRunnableObjectImpl::SetContainedObject](#setcontainedobject)|Indica che il controllo è incorporato. L'implementazione di ATL restituisce S_OK.|

## <a name="remarks"></a>Note

Il [IRunnableObject](/windows/desktop/api/objidl/nn-objidl-irunnableobject) interfaccia consente a un contenitore stabilire se un controllo è in esecuzione, forzare l'esecuzione, oppure bloccarlo in stato di esecuzione. Classe `IRunnableObjectImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

**Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

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

I set di implementazione ATL \* *lpClsid* GUID_NULL e viene restituito E_UNEXPECTED.

### <a name="remarks"></a>Note

Visualizzare [IRunnableObject::GetRunningClass](/windows/desktop/api/objidl/nf-objidl-irunnableobject-getrunningclass) in Windows SDK.

##  <a name="isrunning"></a>  IRunnableObjectImpl::IsRunning

Determina se il controllo è in esecuzione.

```
virtual BOOL IsRunning();
```

### <a name="return-value"></a>Valore restituito

L'implementazione di ATL restituisce TRUE.

### <a name="remarks"></a>Note

Visualizzare [IRunnableObject::IsRunning](/windows/desktop/api/objidl/nf-objidl-irunnableobject-isrunning) in Windows SDK.

##  <a name="lockrunning"></a>  IRunnableObjectImpl::LockRunning

Blocca il controllo allo stato di esecuzione.

```
HRESULT LockRunning(BOOL fLock, BOOL fLastUnlockCloses);
```

### <a name="return-value"></a>Valore restituito

L'implementazione di ATL restituisce S_OK.

### <a name="remarks"></a>Note

Visualizzare [IRunnableObject::LockRunning](/windows/desktop/api/objidl/nf-objidl-irunnableobject-lockrunning) in Windows SDK.

##  <a name="run"></a>  IRunnableObjectImpl::Run

Forza l'esecuzione del controllo.

```
HRESULT Run(LPBINDCTX lpbc);
```

### <a name="return-value"></a>Valore restituito

L'implementazione di ATL restituisce S_OK.

### <a name="remarks"></a>Note

Visualizzare [IRunnableObject::Run](/windows/desktop/api/objidl/nf-objidl-irunnableobject-run) in Windows SDK.

##  <a name="setcontainedobject"></a>  IRunnableObjectImpl::SetContainedObject

Indica che il controllo è incorporato.

```
HRESULT SetContainedObject(BOOL fContained);
```

### <a name="return-value"></a>Valore restituito

L'implementazione di ATL restituisce S_OK.

### <a name="remarks"></a>Note

Visualizzare [IRunnableObject::SetContainedObject](/windows/desktop/api/objidl/nf-objidl-irunnableobject-setcontainedobject) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)
