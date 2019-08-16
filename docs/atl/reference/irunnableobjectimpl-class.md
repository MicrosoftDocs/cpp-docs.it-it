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
ms.openlocfilehash: 6b1af7c21c6f5028ad6d3a228cb22650fa3cef42
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495673"
---
# <a name="irunnableobjectimpl-class"></a>Classe IRunnableObjectImpl

Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita dell'interfaccia [IRunnableObject](/windows/win32/api/objidl/nn-objidl-irunnableobject) .

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IRunnableObjectImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IRunnableObjectImpl`.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[IRunnableObjectImpl::GetRunningClass](#getrunningclass)|Restituisce il CLSID del controllo in esecuzione. Tramite l'implementazione ATL il CLSID viene impostato su GUID_NULL e viene restituito E_UNEXPECTED.|
|[IRunnableObjectImpl::IsRunning](#isrunning)|Determina se il controllo è in esecuzione. L'implementazione ATL restituisce TRUE.|
|[IRunnableObjectImpl::LockRunning](#lockrunning)|Blocca il controllo nello stato in esecuzione. L'implementazione ATL restituisce S_OK.|
|[IRunnableObjectImpl::Run](#run)|Impone l'esecuzione del controllo. L'implementazione ATL restituisce S_OK.|
|[IRunnableObjectImpl::SetContainedObject](#setcontainedobject)|Indica che il controllo è incorporato. L'implementazione ATL restituisce S_OK.|

## <a name="remarks"></a>Note

L'interfaccia [IRunnableObject](/windows/win32/api/objidl/nn-objidl-irunnableobject) consente a un contenitore di determinare se un controllo è in esecuzione, forzarne l'esecuzione o bloccarlo nello stato di esecuzione. La `IRunnableObjectImpl` classe fornisce un'implementazione predefinita di questa interfaccia e `IUnknown` implementa inviando informazioni al dispositivo di dump nelle compilazioni di debug.

**Articoli correlati** [Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

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

L'implementazione ATL imposta \* *lpclsid* su GUID_NULL e restituisce E_UNEXPECTED.

### <a name="remarks"></a>Note

Vedere [IRunnableObject:: GetRunningClass](/windows/win32/api/objidl/nf-objidl-irunnableobject-getrunningclass) nella Windows SDK.

##  <a name="isrunning"></a>  IRunnableObjectImpl::IsRunning

Determina se il controllo è in esecuzione.

```
virtual BOOL IsRunning();
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL restituisce TRUE.

### <a name="remarks"></a>Note

Vedere [IRunnableObject:: outrunning](/windows/win32/api/objidl/nf-objidl-irunnableobject-isrunning) nell'Windows SDK.

##  <a name="lockrunning"></a>  IRunnableObjectImpl::LockRunning

Blocca il controllo nello stato in esecuzione.

```
HRESULT LockRunning(BOOL fLock, BOOL fLastUnlockCloses);
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL restituisce S_OK.

### <a name="remarks"></a>Note

Vedere [IRunnableObject:: LockRunning](/windows/win32/api/objidl/nf-objidl-irunnableobject-lockrunning) nella Windows SDK.

##  <a name="run"></a>  IRunnableObjectImpl::Run

Impone l'esecuzione del controllo.

```
HRESULT Run(LPBINDCTX lpbc);
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL restituisce S_OK.

### <a name="remarks"></a>Note

Vedere [IRunnableObject:: Run](/windows/win32/api/objidl/nf-objidl-irunnableobject-run) nel Windows SDK.

##  <a name="setcontainedobject"></a>  IRunnableObjectImpl::SetContainedObject

Indica che il controllo è incorporato.

```
HRESULT SetContainedObject(BOOL fContained);
```

### <a name="return-value"></a>Valore restituito

L'implementazione ATL restituisce S_OK.

### <a name="remarks"></a>Note

Vedere [IRunnableObject:: SetContainedObject](/windows/win32/api/objidl/nf-objidl-irunnableobject-setcontainedobject) nella Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
