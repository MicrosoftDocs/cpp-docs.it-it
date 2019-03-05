---
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
ms.openlocfilehash: 06baa4dac3248d783648b8ce37e51250e0de2498
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57269305"
---
# <a name="iconnectionpointcontainerimpl-class"></a>Classe IConnectionPointContainerImpl

Questa classe implementa un contenitore del punto di connessione per gestire una raccolta di [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) oggetti.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE IConnectionPointContainerImpl
   : public IConnectionPointContainer
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IConnectionPointContainerImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IConnectionPointContainerImpl::EnumConnectionPoints](#enumconnectionpoints)|Crea un enumeratore per scorrere i punti di connessione supportati nell'oggetto collegabile.|
|[IConnectionPointContainerImpl::FindConnectionPoint](#findconnectionpoint)|Recupera un puntatore a interfaccia per il punto di connessione che supporta l'IID specificato.|

## <a name="remarks"></a>Note

`IConnectionPointContainerImpl` implementa un contenitore del punto di connessione per gestire una raccolta di [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) oggetti. `IConnectionPointContainerImpl` fornisce due metodi che un client può chiamare per recuperare ulteriori informazioni sull'oggetto collegabile:

- `EnumConnectionPoints` consente al client determinare quali in uscita interfacce supporta l'oggetto.

- `FindConnectionPoint` consente al client determinare se l'oggetto supporta una specifica interfaccia in uscita.

Per informazioni sull'uso di punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IConnectionPointContainer`

`IConnectionPointContainerImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="enumconnectionpoints"></a>  IConnectionPointContainerImpl::EnumConnectionPoints

Crea un enumeratore per scorrere i punti di connessione supportati nell'oggetto collegabile.

```
STDMETHOD(EnumConnectionPoints)(IEnumConnectionPoints** ppEnum);
```

### <a name="remarks"></a>Note

Visualizzare [IConnectionPointContainer:: EnumConnectionPoints](/windows/desktop/api/ocidl/nf-ocidl-iconnectionpointcontainer-enumconnectionpoints) in Windows SDK.

##  <a name="findconnectionpoint"></a>  IConnectionPointContainerImpl::FindConnectionPoint

Recupera un puntatore a interfaccia per il punto di connessione che supporta l'IID specificato.

```
STDMETHOD(FindConnectionPoint)(REFIID riid, IConnectionPoint** ppCP);
```

### <a name="remarks"></a>Note

Visualizzare [IConnectionPointContainer:: FindConnectionPoint](/windows/desktop/api/ocidl/nf-ocidl-iconnectionpointcontainer-findconnectionpoint) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[IConnectionPointContainer](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpointcontainer)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
