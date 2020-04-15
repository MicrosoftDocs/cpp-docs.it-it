---
title: Classe IRunnableObjectImpl
ms.date: 11/04/2016
f1_keywords:
- IRunnableObjectImpl
- ATLCTL/ATL::IRunnableObjectImpl
- ATLCTL/ATL::IRunnableObjectImpl::GetRunningClass
- ATLCTL/ATL::IRunnableObjectImpl::IsRunning
- ATLCTL/ATL::IRunnableObjectImpl::LockRunning
- ATLCTL/ATL::IRunnableObjectImpl::Run
- ATLCTL/ATL::IRunnableObjectImpl::SetContainedObject
helpviewer_keywords:
- containers, running controls
- IRunnableObjectImpl class
- IRunnableObject, ATL implementation
- controls [ATL], running
- controls [C++], container running in ATL
ms.assetid: 305c7c3b-889e-49dd-aca1-34379c1b9931
ms.openlocfilehash: 2843c0c25a5c104ffbdff72255ac5d85cf53b1ee
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329452"
---
# <a name="irunnableobjectimpl-class"></a>Classe IRunnableObjectImpl

Questa classe `IUnknown` implementa e fornisce un'implementazione predefinita del [IRunnableObject](/windows/win32/api/objidl/nn-objidl-irunnableobject) interfaccia.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IRunnableObjectImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IRunnableObjectImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IRunnableObjectImpl::GetRunningClass](#getrunningclass)|Restituisce il CLSID del controllo in esecuzione. L'implementazione ATL imposta il CLSID su GUID_NULL e restituisce E_UNEXPECTED.|
|[IRunnableObjectImpl::IsRunning (Esecuzione di IRunnableObjectImpl::IsRunning)](#isrunning)|Determina se il controllo è in esecuzione. L'implementazione ATL restituisce TRUE.|
|[IRunnableObjectImpl::LockRunning](#lockrunning)|Blocca il controllo nello stato in esecuzione. L'implementazione ATL restituisce S_OK.|
|[IRunnableObjectImpl::Run](#run)|Forza l'esecuzione del controllo. L'implementazione ATL restituisce S_OK.|
|[IRunnableObjectImpl::SetContainedObjectIRunnableObjectImpl::SetContainedObject](#setcontainedobject)|Indica che il controllo è incorporato. L'implementazione ATL restituisce S_OK.|

## <a name="remarks"></a>Osservazioni

Il [IRunnableObject](/windows/win32/api/objidl/nn-objidl-irunnableobject) interfaccia consente a un contenitore per determinare se un controllo è in esecuzione, forzarne l'esecuzione o bloccarlo nello stato di esecuzione. Classe `IRunnableObjectImpl` fornisce un'implementazione predefinita `IUnknown` di questa interfaccia e implementa inviando informazioni al dispositivo di dump nelle build di debug.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IRunnableObject`

`IRunnableObjectImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="irunnableobjectimplgetrunningclass"></a><a name="getrunningclass"></a>IRunnableObjectImpl::GetRunningClass

Restituisce il CLSID del controllo in esecuzione.

```
HRESULT GetRunningClass(LPCLSID lpClsid);
```

### <a name="return-value"></a>Valore restituito

L'implementazione \* ATL imposta *lpClsid* su GUID_NULL e restituisce E_UNEXPECTED.

### <a name="remarks"></a>Osservazioni

Vedere [IRunnableObject::GetRunningClass](/windows/win32/api/objidl/nf-objidl-irunnableobject-getrunningclass) in Windows SDK.

## <a name="irunnableobjectimplisrunning"></a><a name="isrunning"></a>IRunnableObjectImpl::IsRunning (Esecuzione di IRunnableObjectImpl::IsRunning)

Determina se il controllo è in esecuzione.

```
virtual BOOL IsRunning();
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL restituisce TRUE.

### <a name="remarks"></a>Osservazioni

Vedere [IRunnableObject::IsRunning](/windows/win32/api/objidl/nf-objidl-irunnableobject-isrunning) in Windows SDK.

## <a name="irunnableobjectimpllockrunning"></a><a name="lockrunning"></a>IRunnableObjectImpl::LockRunning

Blocca il controllo nello stato in esecuzione.

```
HRESULT LockRunning(BOOL fLock, BOOL fLastUnlockCloses);
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IRunnableObject::LockRunning](/windows/win32/api/objidl/nf-objidl-irunnableobject-lockrunning) in Windows SDK.

## <a name="irunnableobjectimplrun"></a><a name="run"></a>IRunnableObjectImpl::Run

Forza l'esecuzione del controllo.

```
HRESULT Run(LPBINDCTX lpbc);
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IRunnableObject::Run](/windows/win32/api/objidl/nf-objidl-irunnableobject-run) in Windows SDK.

## <a name="irunnableobjectimplsetcontainedobject"></a><a name="setcontainedobject"></a>IRunnableObjectImpl::SetContainedObjectIRunnableObjectImpl::SetContainedObject

Indica che il controllo è incorporato.

```
HRESULT SetContainedObject(BOOL fContained);
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IRunnableObject::SetContainedObject](/windows/win32/api/objidl/nf-objidl-irunnableobject-setcontainedobject) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[CComControl (classe)](../../atl/reference/ccomcontrol-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
