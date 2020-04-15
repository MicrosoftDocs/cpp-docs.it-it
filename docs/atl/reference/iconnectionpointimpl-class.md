---
title: IConnectionPointImpl (classe)
ms.date: 11/04/2016
f1_keywords:
- IConnectionPointImpl
- ATLCOM/ATL::IConnectionPointImpl
- ATLCOM/ATL::IConnectionPointImpl::Advise
- ATLCOM/ATL::IConnectionPointImpl::EnumConnections
- ATLCOM/ATL::IConnectionPointImpl::GetConnectionInterface
- ATLCOM/ATL::IConnectionPointImpl::GetConnectionPointContainer
- ATLCOM/ATL::IConnectionPointImpl::Unadvise
- ATLCOM/ATL::IConnectionPointImpl::m_vec
helpviewer_keywords:
- connection points [C++], implementing
- IConnectionPointImpl class
ms.assetid: 27992115-3b86-45dd-bc9e-54f32876c557
ms.openlocfilehash: c62ac3310a579379674674a7a9a517e3f2fd60e5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329846"
---
# <a name="iconnectionpointimpl-class"></a>IConnectionPointImpl (classe)

Questa classe implementa un punto di connessione.

## <a name="syntax"></a>Sintassi

```
template<class T, const IID* piid, class CDV = CComDynamicUnkArray>
class ATL_NO_VTABLE IConnectionPointImpl : public _ICPLocator<piid>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IConnectionPointImpl`derivata da .

*piid*<br/>
Puntatore all'IID dell'interfaccia rappresentata dall'oggetto punto di connessione.

*Cdv*<br/>
Classe che gestisce le connessioni. Il valore predefinito è [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che consente connessioni illimitate. È inoltre possibile utilizzare [CComUnkArray](../../atl/reference/ccomunkarray-class.md), che specifica un numero fisso di connessioni.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IConnectionPointImpl::Consigliare](#advise)|Stabilisce una connessione tra il punto di connessione e un sink.|
|[IConnectionPointImpl::EnumConnections](#enumconnections)|Crea un enumeratore per scorrere le connessioni per il punto di connessione.|
|[IConnectionPointImpl::GetConnectionInterface](#getconnectioninterface)|Recupera l'IID dell'interfaccia rappresentata dal punto di connessione.|
|[IConnectionPointImpl::GetConnectionPointContainerIConnectionPointImpl::GetConnectionPointContainer](#getconnectionpointcontainer)|Recupera un puntatore a interfaccia all'oggetto collegabile.|
|[IConnectionPointImpl::Unadvise](#unadvise)|Termina una connessione stabilita in precedenza tramite `Advise`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IConnectionPointImpl::m_vec](#m_vec)|Gestisce le connessioni per il punto di connessione.|

## <a name="remarks"></a>Osservazioni

`IConnectionPointImpl`implementa un punto di connessione, che consente a un oggetto di esporre un'interfaccia in uscita al client. Il client implementa questa interfaccia su un oggetto denominato sink.

ATL utilizza [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) per implementare l'oggetto collegabile. Ogni punto di connessione all'interno dell'oggetto collegabile rappresenta un'interfaccia in uscita, identificata da *piid*. La classe *CDV* gestisce le connessioni tra il punto di connessione e un sink. Ogni connessione è identificata in modo univoco da un "cookie".

Per ulteriori informazioni sull'utilizzo dei punti di connessione in ATL, vedere l'articolo [Punti di connessione](../../atl/atl-connection-points.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_ICPLocator`

`IConnectionPointImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="iconnectionpointimpladvise"></a><a name="advise"></a>IConnectionPointImpl::Consigliare

Stabilisce una connessione tra il punto di connessione e un sink.

```
STDMETHOD(Advise)(
    IUnknown* pUnkSink,
    DWORD* pdwCookie);
```

### <a name="remarks"></a>Osservazioni

Utilizzare [Unadvise](#unadvise) per terminare la chiamata di connessione.

Vedere [IConnectionPoint::Advise](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-advise) in Windows SDK.

## <a name="iconnectionpointimplenumconnections"></a><a name="enumconnections"></a>IConnectionPointImpl::EnumConnections

Crea un enumeratore per scorrere le connessioni per il punto di connessione.

```
STDMETHOD(EnumConnections)(IEnumConnections** ppEnum);
```

### <a name="remarks"></a>Osservazioni

Vedere [IConnectionPoint::EnumConnections](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-enumconnections) in Windows SDK.

## <a name="iconnectionpointimplgetconnectioninterface"></a><a name="getconnectioninterface"></a>IConnectionPointImpl::GetConnectionInterface

Recupera l'IID dell'interfaccia rappresentata dal punto di connessione.

```
STDMETHOD(GetConnectionInterface)(IID* piid2);
```

### <a name="remarks"></a>Osservazioni

Vedere [IConnectionPoint::GetConnectionInterface](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-getconnectioninterface) in Windows SDK.

## <a name="iconnectionpointimplgetconnectionpointcontainer"></a><a name="getconnectionpointcontainer"></a>IConnectionPointImpl::GetConnectionPointContainerIConnectionPointImpl::GetConnectionPointContainer

Recupera un puntatore a interfaccia all'oggetto collegabile.

```
STDMETHOD(GetConnectionPointContainer)(IConnectionPointContainer** ppCPC);
```

### <a name="remarks"></a>Osservazioni

Vedere [IConnectionPoint::GetConnectionPointContainer](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-getconnectionpointcontainer) in Windows SDK.

## <a name="iconnectionpointimplm_vec"></a><a name="m_vec"></a>IConnectionPointImpl::m_vec

Gestisce le connessioni tra l'oggetto punto di connessione e un sink.

```
CDV m_vec;
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `m_vec` è di tipo [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md).

## <a name="iconnectionpointimplunadvise"></a><a name="unadvise"></a>IConnectionPointImpl::Unadvise

Termina una connessione stabilita in precedenza tramite [Advise](#advise).

```
STDMETHOD(Unadvise)(DWORD dwCookie);
```

### <a name="remarks"></a>Osservazioni

Vedere [IConnectionPoint::Unadvise](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-unadvise) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[IConnectionPoint](/windows/win32/api/ocidl/nn-ocidl-iconnectionpoint)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
