---
title: IConnectionPointContainerImpl (classe)
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
ms.openlocfilehash: f6009a1341d6715d6d2f170d3ff2aa1aa4ffcb96
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329870"
---
# <a name="iconnectionpointcontainerimpl-class"></a>IConnectionPointContainerImpl (classe)

Questa classe implementa un contenitore di punti di connessione per gestire una raccolta di [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) oggetti.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE IConnectionPointContainerImpl
   : public IConnectionPointContainer
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IConnectionPointContainerImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IConnectionPointContainerImpl::EnumConnectionPointsIConnectionPointContainerImpl::EnumConnectionPoints](#enumconnectionpoints)|Crea un enumeratore per scorrere i punti di connessione supportati nell'oggetto collegabile.|
|[IConnectionPointContainerImpl::FindConnectionPointIConnectionPointContainerImpl::FindConnectionPoint](#findconnectionpoint)|Recupera un puntatore a interfaccia al punto di connessione che supporta l'IID specificato.|

## <a name="remarks"></a>Osservazioni

`IConnectionPointContainerImpl`implementa un contenitore di punti di connessione per gestire una raccolta di [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) oggetti. `IConnectionPointContainerImpl`fornisce due metodi che un client può chiamare per recuperare ulteriori informazioni su un oggetto collegabile:

- `EnumConnectionPoints`consente al client di determinare quali interfacce in uscita sono supportate dall'oggetto.

- `FindConnectionPoint`consente al client di determinare se l'oggetto supporta una specifica interfaccia in uscita.

Per informazioni sull'utilizzo dei punti di connessione in ATL, vedere l'articolo [Punti di connessione](../../atl/atl-connection-points.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IConnectionPointContainer`

`IConnectionPointContainerImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="iconnectionpointcontainerimplenumconnectionpoints"></a><a name="enumconnectionpoints"></a>IConnectionPointContainerImpl::EnumConnectionPointsIConnectionPointContainerImpl::EnumConnectionPoints

Crea un enumeratore per scorrere i punti di connessione supportati nell'oggetto collegabile.

```
STDMETHOD(EnumConnectionPoints)(IEnumConnectionPoints** ppEnum);
```

### <a name="remarks"></a>Osservazioni

Vedere [IConnectionPointContainer::EnumConnectionPoints](/windows/win32/api/ocidl/nf-ocidl-iconnectionpointcontainer-enumconnectionpoints) in Windows SDK.

## <a name="iconnectionpointcontainerimplfindconnectionpoint"></a><a name="findconnectionpoint"></a>IConnectionPointContainerImpl::FindConnectionPointIConnectionPointContainerImpl::FindConnectionPoint

Recupera un puntatore a interfaccia al punto di connessione che supporta l'IID specificato.

```
STDMETHOD(FindConnectionPoint)(REFIID riid, IConnectionPoint** ppCP);
```

### <a name="remarks"></a>Osservazioni

Vedere [IConnectionPointContainer::FindConnectionPoint](/windows/win32/api/ocidl/nf-ocidl-iconnectionpointcontainer-findconnectionpoint) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Iconnectionpointcontainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
