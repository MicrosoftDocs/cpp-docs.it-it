---
title: Classe IConnectionPointImpl
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
ms.openlocfilehash: bd88fd5d00df0347c0bd2161129b8cfa3ca35406
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496088"
---
# <a name="iconnectionpointimpl-class"></a>Classe IConnectionPointImpl

Questa classe implementa un punto di connessione.

## <a name="syntax"></a>Sintassi

```
template<class T, const IID* piid, class CDV = CComDynamicUnkArray>
class ATL_NO_VTABLE IConnectionPointImpl : public _ICPLocator<piid>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IConnectionPointImpl`.

*piid*<br/>
Puntatore all'IID dell'interfaccia rappresentata dall'oggetto punto di connessione.

*CDV*<br/>
Classe che gestisce le connessioni. Il valore predefinito è [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che consente connessioni illimitate. È anche possibile usare [CComUnkArray](../../atl/reference/ccomunkarray-class.md), che specifica un numero fisso di connessioni.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IConnectionPointImpl::Advise](#advise)|Stabilisce una connessione tra il punto di connessione e un sink.|
|[IConnectionPointImpl::EnumConnections](#enumconnections)|Crea un enumeratore per scorrere le connessioni per il punto di connessione.|
|[IConnectionPointImpl::GetConnectionInterface](#getconnectioninterface)|Recupera l'IID dell'interfaccia rappresentata dal punto di connessione.|
|[IConnectionPointImpl::GetConnectionPointContainer](#getconnectionpointcontainer)|Recupera un puntatore di interfaccia all'oggetto collegabile.|
|[IConnectionPointImpl::Unadvise](#unadvise)|Termina una connessione stabilita in precedenza `Advise`tramite.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[IConnectionPointImpl::m_vec](#m_vec)|Gestisce le connessioni per il punto di connessione.|

## <a name="remarks"></a>Note

`IConnectionPointImpl`implementa un punto di connessione che consente a un oggetto di esporre un'interfaccia in uscita al client. Il client implementa questa interfaccia su un oggetto denominato sink.

ATL utilizza [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) per implementare l'oggetto collegabile. Ogni punto di connessione all'interno dell'oggetto collegabile rappresenta un'interfaccia in uscita, identificata da *pIID*. La classe *CDV* gestisce le connessioni tra il punto di connessione e un sink. Ogni connessione viene identificata in modo univoco da un "cookie".

Per ulteriori informazioni sull'utilizzo di punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).

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

Utilizzare [Unadvise](#unadvise) per terminare la chiamata di connessione.

Vedere [IConnectionPoint:: Advise](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-advise) nell'Windows SDK.

##  <a name="enumconnections"></a>IConnectionPointImpl:: EnumConnections

Crea un enumeratore per scorrere le connessioni per il punto di connessione.

```
STDMETHOD(EnumConnections)(IEnumConnections** ppEnum);
```

### <a name="remarks"></a>Note

Vedere [IConnectionPoint:: EnumConnections](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-enumconnections) nel Windows SDK.

##  <a name="getconnectioninterface"></a>  IConnectionPointImpl::GetConnectionInterface

Recupera l'IID dell'interfaccia rappresentata dal punto di connessione.

```
STDMETHOD(GetConnectionInterface)(IID* piid2);
```

### <a name="remarks"></a>Note

Vedere [IConnectionPoint:: GetConnectionInterface](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-getconnectioninterface) nel Windows SDK.

##  <a name="getconnectionpointcontainer"></a>  IConnectionPointImpl::GetConnectionPointContainer

Recupera un puntatore di interfaccia all'oggetto collegabile.

```
STDMETHOD(GetConnectionPointContainer)(IConnectionPointContainer** ppCPC);
```

### <a name="remarks"></a>Note

Vedere [IConnectionPoint:: GetConnectionPointContainer](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-getconnectionpointcontainer) nel Windows SDK.

##  <a name="m_vec"></a>  IConnectionPointImpl::m_vec

Gestisce le connessioni tra l'oggetto punto di connessione e un sink.

```
CDV m_vec;
```

### <a name="remarks"></a>Note

Per impostazione predefinita `m_vec` , è di tipo [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md).

##  <a name="unadvise"></a>  IConnectionPointImpl::Unadvise

Termina una connessione stabilita in precedenza tramite [Advise](#advise).

```
STDMETHOD(Unadvise)(DWORD dwCookie);
```

### <a name="remarks"></a>Note

Vedere [IConnectionPoint:: Unadvise](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-unadvise) nella Windows SDK.

## <a name="see-also"></a>Vedere anche

[IConnectionPoint](/windows/win32/api/ocidl/nn-ocidl-iconnectionpoint)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
