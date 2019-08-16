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
ms.openlocfilehash: 278ca6b1b9aac9539680d90b6fa0b18df22fc2f0
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496018"
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
Classe derivata da `IConnectionPointContainerImpl`.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IConnectionPointContainerImpl::EnumConnectionPoints](#enumconnectionpoints)|Crea un enumeratore per scorrere i punti di connessione supportati nell'oggetto collegabile.|
|[IConnectionPointContainerImpl::FindConnectionPoint](#findconnectionpoint)|Recupera un puntatore a interfaccia al punto di connessione che supporta l'IID specificato.|

## <a name="remarks"></a>Note

`IConnectionPointContainerImpl`implementa un contenitore di punti di connessione per gestire una raccolta di oggetti [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) . `IConnectionPointContainerImpl`fornisce due metodi che un client può chiamare per recuperare ulteriori informazioni su un oggetto collegabile:

- `EnumConnectionPoints`consente al client di determinare le interfacce in uscita supportate dall'oggetto.

- `FindConnectionPoint`consente al client di determinare se l'oggetto supporta una specifica interfaccia in uscita.

Per informazioni sull'utilizzo di punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IConnectionPointContainer`

`IConnectionPointContainerImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="enumconnectionpoints"></a>IConnectionPointContainerImpl:: EnumConnectionPoints

Crea un enumeratore per scorrere i punti di connessione supportati nell'oggetto collegabile.

```
STDMETHOD(EnumConnectionPoints)(IEnumConnectionPoints** ppEnum);
```

### <a name="remarks"></a>Note

Vedere [IConnectionPointContainer:: EnumConnectionPoints](/windows/win32/api/ocidl/nf-ocidl-iconnectionpointcontainer-enumconnectionpoints) nella Windows SDK.

##  <a name="findconnectionpoint"></a>  IConnectionPointContainerImpl::FindConnectionPoint

Recupera un puntatore a interfaccia al punto di connessione che supporta l'IID specificato.

```
STDMETHOD(FindConnectionPoint)(REFIID riid, IConnectionPoint** ppCP);
```

### <a name="remarks"></a>Note

Vedere [IConnectionPointContainer:: FindConnectionPoint](/windows/win32/api/ocidl/nf-ocidl-iconnectionpointcontainer-findconnectionpoint) nella Windows SDK.

## <a name="see-also"></a>Vedere anche

[IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
