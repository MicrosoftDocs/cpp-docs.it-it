---
description: 'Altre informazioni su: classe IRunnableObjectImpl'
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
ms.openlocfilehash: ecae31d23eb68ce45e9b140a3e5034fb6c5400fa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158114"
---
# <a name="irunnableobjectimpl-class"></a>Classe IRunnableObjectImpl

Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita dell'interfaccia [IRunnableObject](/windows/win32/api/objidl/nn-objidl-irunnableobject) .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IRunnableObjectImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IRunnableObjectImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IRunnableObjectImpl:: GetRunningClass](#getrunningclass)|Restituisce il CLSID del controllo in esecuzione. L'implementazione ATL imposta il CLSID su GUID_NULL e restituisce E_UNEXPECTED.|
|[IRunnableObjectImpl:: running](#isrunning)|Determina se il controllo è in esecuzione. L'implementazione ATL restituisce TRUE.|
|[IRunnableObjectImpl:: LockRunning](#lockrunning)|Blocca il controllo nello stato in esecuzione. L'implementazione ATL restituisce S_OK.|
|[IRunnableObjectImpl:: Run](#run)|Impone l'esecuzione del controllo. L'implementazione ATL restituisce S_OK.|
|[IRunnableObjectImpl:: SetContainedObject](#setcontainedobject)|Indica che il controllo è incorporato. L'implementazione ATL restituisce S_OK.|

## <a name="remarks"></a>Commenti

L'interfaccia [IRunnableObject](/windows/win32/api/objidl/nn-objidl-irunnableobject) consente a un contenitore di determinare se un controllo è in esecuzione, forzarne l'esecuzione o bloccarlo nello stato di esecuzione. La classe `IRunnableObjectImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa inviando `IUnknown` informazioni al dispositivo di dump nelle compilazioni di debug.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IRunnableObject`

`IRunnableObjectImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="irunnableobjectimplgetrunningclass"></a><a name="getrunningclass"></a> IRunnableObjectImpl:: GetRunningClass

Restituisce il CLSID del controllo in esecuzione.

```
HRESULT GetRunningClass(LPCLSID lpClsid);
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL imposta \* *lpClsid* su GUID_NULL e restituisce E_UNEXPECTED.

### <a name="remarks"></a>Commenti

Vedere [IRunnableObject:: GetRunningClass](/windows/win32/api/objidl/nf-objidl-irunnableobject-getrunningclass) nella Windows SDK.

## <a name="irunnableobjectimplisrunning"></a><a name="isrunning"></a> IRunnableObjectImpl:: running

Determina se il controllo è in esecuzione.

```
virtual BOOL IsRunning();
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL restituisce TRUE.

### <a name="remarks"></a>Commenti

Vedere [IRunnableObject:: outrunning](/windows/win32/api/objidl/nf-objidl-irunnableobject-isrunning) nell'Windows SDK.

## <a name="irunnableobjectimpllockrunning"></a><a name="lockrunning"></a> IRunnableObjectImpl:: LockRunning

Blocca il controllo nello stato in esecuzione.

```
HRESULT LockRunning(BOOL fLock, BOOL fLastUnlockCloses);
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IRunnableObject:: LockRunning](/windows/win32/api/objidl/nf-objidl-irunnableobject-lockrunning) nella Windows SDK.

## <a name="irunnableobjectimplrun"></a><a name="run"></a> IRunnableObjectImpl:: Run

Impone l'esecuzione del controllo.

```
HRESULT Run(LPBINDCTX lpbc);
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IRunnableObject:: Run](/windows/win32/api/objidl/nf-objidl-irunnableobject-run) nel Windows SDK.

## <a name="irunnableobjectimplsetcontainedobject"></a><a name="setcontainedobject"></a> IRunnableObjectImpl:: SetContainedObject

Indica che il controllo è incorporato.

```
HRESULT SetContainedObject(BOOL fContained);
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IRunnableObject:: SetContainedObject](/windows/win32/api/objidl/nf-objidl-irunnableobject-setcontainedobject) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
