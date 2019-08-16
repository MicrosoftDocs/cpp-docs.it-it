---
title: Classe CComContainedObject
ms.date: 11/04/2016
f1_keywords:
- CComContainedObject
- ATLCOM/ATL::CComContainedObject
- ATLCOM/ATL::CComContainedObject::CComContainedObject
- ATLCOM/ATL::CComContainedObject::AddRef
- ATLCOM/ATL::CComContainedObject::GetControllingUnknown
- ATLCOM/ATL::CComContainedObject::QueryInterface
- ATLCOM/ATL::CComContainedObject::Release
helpviewer_keywords:
- aggregate objects [C++], in ATL
- aggregation [C++], ATL objects
- CComContainedObject class
ms.assetid: e8616b41-c200-47b8-bf2c-fb9f713ebdad
ms.openlocfilehash: c5e2fa64cc0938e632a37eac7dd1d6e9111c3d98
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497315"
---
# <a name="ccomcontainedobject-class"></a>Classe CComContainedObject

Questa classe implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) delegando all'oggetto `IUnknown`proprietario.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComContainedObject : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
Classe derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md).

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComContainedObject::CComContainedObject](#ccomcontainedobject)|Costruttore. Inizializza il puntatore del membro all'oggetto `IUnknown`proprietario.|
|[CComContainedObject::~CComContainedObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CComContainedObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti nell'oggetto proprietario.|
|[CComContainedObject::GetControllingUnknown](#getcontrollingunknown)|Recupera l'oggetto `IUnknown`proprietario.|
|[CComContainedObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta nell'oggetto proprietario.|
|[CComContainedObject::Release](#release)|Decrementa il conteggio dei riferimenti nell'oggetto proprietario.|

## <a name="remarks"></a>Note

In ATL `CComContainedObject` vengono utilizzate le classi [ccomaggobjec](../../atl/reference/ccomaggobject-class.md), [CComPolyObject](../../atl/reference/ccompolyobject-class.md)e [CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md). `CComContainedObject`implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) delegando all'oggetto `IUnknown`proprietario. Il proprietario è l'oggetto esterno di un'aggregazione oppure l'oggetto per il quale viene creata un'interfaccia di tipo tear-off. `CComContainedObject` lechiamate`CComObjectRootEx` ,`OuterAddRef`e ,ereditano`Base`tutte tramite. `OuterRelease` `OuterQueryInterface`

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComContainedObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="addref"></a>  CComContainedObject::AddRef

Incrementa il conteggio dei riferimenti nell'oggetto proprietario.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

##  <a name="ccomcontainedobject"></a>CComContainedObject:: CComContainedObject

Costruttore.

```
CComContainedObject(void* pv);
```

### <a name="parameters"></a>Parametri

*pv*<br/>
in Oggetto del proprietario `IUnknown`.

### <a name="remarks"></a>Note

Imposta il `m_pOuterUnknown` puntatore del membro (ereditato attraverso `Base` la classe) su *PV*.

##  <a name="dtor"></a>CComContainedObject:: ~ CComContainedObject

Distruttore.

```
~CComContainedObject();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate.

##  <a name="getcontrollingunknown"></a>CComContainedObject:: GetControllingUnknown

Restituisce il `m_pOuterUnknown` puntatore del membro (ereditato tramite la classe *base* ) che include `IUnknown`l'oggetto proprietario.

```
IUnknown* GetControllingUnknown();
```

### <a name="return-value"></a>Valore restituito

Oggetto del proprietario `IUnknown`.

### <a name="remarks"></a>Note

Questo metodo può essere virtuale se `Base` ha dichiarato la macro [DECLARE_GET_CONTROLLING_UNKNOWN](aggregation-and-class-factory-macros.md#declare_get_controlling_unknown) .

##  <a name="queryinterface"></a>  CComContainedObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta nell'oggetto proprietario.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT STDMETHODCALLTYPE QueryInterface(Q** pp);
```

### <a name="parameters"></a>Parametri

*iid*<br/>
in Identificatore dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia identificato da *IID*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su null.

*pp*<br/>
out Puntatore al puntatore a interfaccia identificato dal tipo `Q`. Se l'oggetto non supporta questa interfaccia, *PP* è impostato su null.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="release"></a>CComContainedObject:: Release

Decrementa il conteggio dei riferimenti nell'oggetto proprietario.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build `Release` di debug restituisce un valore che può essere utile per la diagnostica o il test. Nelle compilazioni `Release` non di debug restituisce sempre 0.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
