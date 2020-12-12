---
description: 'Altre informazioni su: classe IConnectionPointContainerImpl'
title: Classe IConnectionPointContainerImpl
ms.date: 11/04/2016
f1_keywords:
- IConnectionPointContainerImpl
- ATLCOM/ATL::IConnectionPointContainerImpl
- ATLCOM/ATL::IConnectionPointContainerImpl::EnumConnectionPoints
- ATLCOM/ATL::IConnectionPointContainerImpl::FindConnectionPoint
helpviewer_keywords:
- connectable objects
- connection points [C++], container
- IConnectionPointContainerImpl class
ms.assetid: 10db5a8d-8be9-4d9d-8a82-8ab9ffe3e9d6
ms.openlocfilehash: 77499954f65b5a447d2f5773c0b4c1dbdbfc5c22
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139594"
---
# <a name="iconnectionpointcontainerimpl-class"></a>Classe IConnectionPointContainerImpl

Questa classe implementa un contenitore di punti di connessione per gestire una raccolta di oggetti [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) .

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE IConnectionPointContainerImpl
   : public IConnectionPointContainer
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IConnectionPointContainerImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IConnectionPointContainerImpl:: EnumConnectionPoints](#enumconnectionpoints)|Crea un enumeratore per scorrere i punti di connessione supportati nell'oggetto collegabile.|
|[IConnectionPointContainerImpl:: FindConnectionPoint](#findconnectionpoint)|Recupera un puntatore a interfaccia al punto di connessione che supporta l'IID specificato.|

## <a name="remarks"></a>Commenti

`IConnectionPointContainerImpl` implementa un contenitore di punti di connessione per gestire una raccolta di oggetti [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) . `IConnectionPointContainerImpl` fornisce due metodi che un client può chiamare per recuperare ulteriori informazioni su un oggetto collegabile:

- `EnumConnectionPoints` consente al client di determinare le interfacce in uscita supportate dall'oggetto.

- `FindConnectionPoint` consente al client di determinare se l'oggetto supporta una specifica interfaccia in uscita.

Per informazioni sull'utilizzo di punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IConnectionPointContainer`

`IConnectionPointContainerImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="iconnectionpointcontainerimplenumconnectionpoints"></a><a name="enumconnectionpoints"></a> IConnectionPointContainerImpl:: EnumConnectionPoints

Crea un enumeratore per scorrere i punti di connessione supportati nell'oggetto collegabile.

```
STDMETHOD(EnumConnectionPoints)(IEnumConnectionPoints** ppEnum);
```

### <a name="remarks"></a>Commenti

Vedere [IConnectionPointContainer:: EnumConnectionPoints](/windows/win32/api/ocidl/nf-ocidl-iconnectionpointcontainer-enumconnectionpoints) nella Windows SDK.

## <a name="iconnectionpointcontainerimplfindconnectionpoint"></a><a name="findconnectionpoint"></a> IConnectionPointContainerImpl:: FindConnectionPoint

Recupera un puntatore a interfaccia al punto di connessione che supporta l'IID specificato.

```
STDMETHOD(FindConnectionPoint)(REFIID riid, IConnectionPoint** ppCP);
```

### <a name="remarks"></a>Commenti

Vedere [IConnectionPointContainer:: FindConnectionPoint](/windows/win32/api/ocidl/nf-ocidl-iconnectionpointcontainer-findconnectionpoint) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
