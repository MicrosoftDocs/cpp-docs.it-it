---
title: Classe IConnectionPointImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IConnectionPointImpl
- ATLCOM/ATL::IConnectionPointImpl
- ATLCOM/ATL::IConnectionPointImpl::Advise
- ATLCOM/ATL::IConnectionPointImpl::EnumConnections
- ATLCOM/ATL::IConnectionPointImpl::GetConnectionInterface
- ATLCOM/ATL::IConnectionPointImpl::GetConnectionPointContainer
- ATLCOM/ATL::IConnectionPointImpl::Unadvise
- ATLCOM/ATL::IConnectionPointImpl::m_vec
dev_langs:
- C++
helpviewer_keywords:
- connection points [C++], implementing
- IConnectionPointImpl class
ms.assetid: 27992115-3b86-45dd-bc9e-54f32876c557
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e2b3e7a0589c0da4d41cab419fa68039e4f0b62c
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43763354"
---
# <a name="iconnectionpointimpl-class"></a>Classe IConnectionPointImpl

Questa classe implementa un punto di connessione.

## <a name="syntax"></a>Sintassi

```
template<class T, const IID* piid, class CDV = CComDynamicUnkArray>  
class ATL_NO_VTABLE IConnectionPointImpl : public _ICPLocator<piid>
```

#### <a name="parameters"></a>Parametri

*T*  
La classe, derivata da `IConnectionPointImpl`.

*piid*  
Puntatore all'IID dell'interfaccia rappresentata dall'oggetto punto di connessione.

*CDV*  
Una classe che gestisce le connessioni. Il valore predefinito è [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che consente un numero illimitato di connessioni. È anche possibile usare [CComUnkArray](../../atl/reference/ccomunkarray-class.md), che consente di specificare un numero fisso di connessioni.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IConnectionPointImpl::Advise](#advise)|Stabilisce una connessione tra il punto di connessione e un sink.|
|[IConnectionPointImpl::EnumConnections](#enumconnections)|Crea un enumeratore per scorrere le connessioni per il punto di connessione.|
|[IConnectionPointImpl::GetConnectionInterface](#getconnectioninterface)|Recupera l'IID dell'interfaccia rappresentata dal punto di connessione.|
|[IConnectionPointImpl::GetConnectionPointContainer](#getconnectionpointcontainer)|Recupera un puntatore di interfaccia all'oggetto collegabile.|
|[IConnectionPointImpl::Unadvise](#unadvise)|Termina una connessione precedentemente stabilita tramite `Advise`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IConnectionPointImpl::m_vec](#m_vec)|Gestisce le connessioni per il punto di connessione.|

## <a name="remarks"></a>Note

`IConnectionPointImpl` implementa un punto di connessione, che consente a un oggetto di esporre un'interfaccia in uscita al client. Il client implementa questa interfaccia per un oggetto denominato sink.

Usa ATL [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) per implementare l'oggetto collegabile. Ogni punto di connessione all'interno dell'oggetto collegabile rappresenta un'interfaccia in uscita, identificata da *piid*. Classe *CDV* gestisce le connessioni tra il punto di connessione e un sink. Ogni connessione viene identificata da un "cookie".

Per altre informazioni sull'uso di punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_ICPLocator`

`IConnectionPointImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="advise"></a>  IConnectionPointImpl::Advise

Stabilisce una connessione tra il punto di connessione e un sink.

```
STDMETHOD(Advise)(
    IUnknown* pUnkSink,
    DWORD* pdwCookie);
```

### <a name="remarks"></a>Note

Uso [Unadvise](#unadvise) per terminare la chiamata di connessione.

Visualizzare [IConnectionPoint::](/windows/desktop/api/ocidl/nf-ocidl-iconnectionpoint-advise) in Windows SDK.

##  <a name="enumconnections"></a>  IConnectionPointImpl::EnumConnections

Crea un enumeratore per scorrere le connessioni per il punto di connessione.

```
STDMETHOD(EnumConnections)(IEnumConnections** ppEnum);
```

### <a name="remarks"></a>Note

Visualizzare [IConnectionPoint:: EnumConnections](/windows/desktop/api/ocidl/nf-ocidl-iconnectionpoint-enumconnections) in Windows SDK.

##  <a name="getconnectioninterface"></a>  IConnectionPointImpl::GetConnectionInterface

Recupera l'IID dell'interfaccia rappresentata dal punto di connessione.

```
STDMETHOD(GetConnectionInterface)(IID* piid2);
```

### <a name="remarks"></a>Note

Visualizzare [IConnectionPoint:: GetConnectionInterface](/windows/desktop/api/ocidl/nf-ocidl-iconnectionpoint-getconnectioninterface) in Windows SDK.

##  <a name="getconnectionpointcontainer"></a>  IConnectionPointImpl::GetConnectionPointContainer

Recupera un puntatore di interfaccia all'oggetto collegabile.

```
STDMETHOD(GetConnectionPointContainer)(IConnectionPointContainer** ppCPC);
```

### <a name="remarks"></a>Note

Visualizzare [IConnectionPoint:: GetConnectionPointContainer](/windows/desktop/api/ocidl/nf-ocidl-iconnectionpoint-getconnectionpointcontainer) in Windows SDK.

##  <a name="m_vec"></a>  IConnectionPointImpl::m_vec

Gestisce le connessioni tra l'oggetto punto di connessione e un sink.

```
CDV m_vec;
```

### <a name="remarks"></a>Note

Per impostazione predefinita `m_vec` JE typu [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md).

##  <a name="unadvise"></a>  IConnectionPointImpl::Unadvise

Termina una connessione precedentemente stabilita tramite [Advise](#advise).

```
STDMETHOD(Unadvise)(DWORD dwCookie);
```

### <a name="remarks"></a>Note

Visualizzare [IConnectionPoint:: Unadvise](/windows/desktop/api/ocidl/nf-ocidl-iconnectionpoint-unadvise) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[IConnectionPoint](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpoint)   
[Panoramica della classe](../../atl/atl-class-overview.md)
