---
title: CComContainedObject (classe)
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
ms.openlocfilehash: 72ba27c3be6576621995ffb8c98995c6abc9324c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320788"
---
# <a name="ccomcontainedobject-class"></a>CComContainedObject (classe)

Questa classe implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) delegando all'oggetto proprietario . `IUnknown`

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComContainedObject : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
La classe derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComContainedObject::CComContainedObject](#ccomcontainedobject)|Costruttore. Inizializza il puntatore del membro `IUnknown`all'oggetto proprietario.|
|[CComContainedObject:: CComContainedObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComContainedObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti per l'oggetto proprietario.|
|[CComContainedObject::GetControllingUnknown](#getcontrollingunknown)|Recupera l'oggetto proprietario `IUnknown`di .|
|[CComContainedObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta sull'oggetto proprietario.|
|[CComContainedObject::Release](#release)|Decrementa il conteggio dei riferimenti sull'oggetto proprietario.|

## <a name="remarks"></a>Osservazioni

ATL `CComContainedObject` utilizza nelle classi [CComAggObject](../../atl/reference/ccomaggobject-class.md), [CComPolyObject](../../atl/reference/ccompolyobject-class.md)e [CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md). `CComContainedObject`implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) delegando all'oggetto `IUnknown`proprietario . Il proprietario è l'oggetto esterno di un'aggregazione o l'oggetto per il quale viene creata un'interfaccia tear-off. `CComContainedObject` chiama `CComObjectRootEx`' `OuterQueryInterface` `OuterAddRef`, `OuterRelease`e , tutti `Base`ereditati tramite .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComContainedObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomcontainedobjectaddref"></a><a name="addref"></a>CComContainedObject::AddRef

Incrementa il conteggio dei riferimenti per l'oggetto proprietario.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

## <a name="ccomcontainedobjectccomcontainedobject"></a><a name="ccomcontainedobject"></a>CComContainedObject::CComContainedObject

Costruttore.

```
CComContainedObject(void* pv);
```

### <a name="parameters"></a>Parametri

*Pv*<br/>
[in] L'oggetto proprietario `IUnknown`è .

### <a name="remarks"></a>Osservazioni

Imposta `m_pOuterUnknown` il puntatore del `Base` membro (ereditato tramite la classe ) su *pv*.

## <a name="ccomcontainedobjectccomcontainedobject"></a><a name="dtor"></a>CComContainedObject:: CComContainedObject

Distruttore.

```
~CComContainedObject();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

## <a name="ccomcontainedobjectgetcontrollingunknown"></a><a name="getcontrollingunknown"></a>CComContainedObject::GetControllingUnknown

Restituisce `m_pOuterUnknown` il puntatore del membro (ereditato tramite `IUnknown`la classe *Base)* che contiene l'oggetto proprietario dell'oggetto proprietario.

```
IUnknown* GetControllingUnknown();
```

### <a name="return-value"></a>Valore restituito

L'oggetto proprietario `IUnknown`è .

### <a name="remarks"></a>Osservazioni

Questo metodo può `Base` essere virtuale se ha dichiarato la macro [DECLARE_GET_CONTROLLING_UNKNOWN.](aggregation-and-class-factory-macros.md#declare_get_controlling_unknown)

## <a name="ccomcontainedobjectqueryinterface"></a><a name="queryinterface"></a>CComContainedObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta sull'oggetto proprietario.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT STDMETHODCALLTYPE QueryInterface(Q** pp);
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] Identificatore dell'interfaccia richiesta.

*Oggetto ppv*<br/>
[fuori] Puntatore al puntatore a interfaccia identificato da *iid*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su NULL.

*Pp*<br/>
[fuori] Puntatore al puntatore a `Q`interfaccia identificato dal tipo . Se l'oggetto non supporta questa interfaccia, *pp* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccomcontainedobjectrelease"></a><a name="release"></a>CComContainedObject::Release

Decrementa il conteggio dei riferimenti sull'oggetto proprietario.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build di `Release` debug restituisce un valore che può essere utile per la diagnostica o il test. Nelle compilazioni non `Release` di debug, restituisce sempre 0.In non-debug builds, always returns 0.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
