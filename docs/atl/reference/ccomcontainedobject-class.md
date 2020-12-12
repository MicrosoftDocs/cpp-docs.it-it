---
description: 'Altre informazioni su: classe CComContainedObject'
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
ms.openlocfilehash: 9c0993d5ce71a557b71939f60a7019d3c062bac3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152204"
---
# <a name="ccomcontainedobject-class"></a>Classe CComContainedObject

Questa classe implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) delegando all'oggetto proprietario `IUnknown` .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComContainedObject : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
Classe derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComContainedObject:: CComContainedObject](#ccomcontainedobject)|Costruttore. Inizializza il puntatore del membro all'oggetto proprietario `IUnknown` .|
|[CComContainedObject:: ~ CComContainedObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComContainedObject:: AddRef](#addref)|Incrementa il conteggio dei riferimenti nell'oggetto proprietario.|
|[CComContainedObject:: GetControllingUnknown](#getcontrollingunknown)|Recupera l'oggetto proprietario `IUnknown` .|
|[CComContainedObject:: QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta nell'oggetto proprietario.|
|[CComContainedObject:: Release](#release)|Decrementa il conteggio dei riferimenti nell'oggetto proprietario.|

## <a name="remarks"></a>Commenti

In ATL vengono utilizzate `CComContainedObject` le classi [ccomaggobjec](../../atl/reference/ccomaggobject-class.md), [CComPolyObject](../../atl/reference/ccompolyobject-class.md)e [CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md). `CComContainedObject` implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) delegando all'oggetto proprietario `IUnknown` . Il proprietario è l'oggetto esterno di un'aggregazione oppure l'oggetto per il quale viene creata un'interfaccia di tipo tear-off. `CComContainedObject` `CComObjectRootEx` le chiamate `OuterQueryInterface` , `OuterAddRef` e `OuterRelease` , ereditano tutte tramite `Base` .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComContainedObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ccomcontainedobjectaddref"></a><a name="addref"></a> CComContainedObject:: AddRef

Incrementa il conteggio dei riferimenti nell'oggetto proprietario.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

## <a name="ccomcontainedobjectccomcontainedobject"></a><a name="ccomcontainedobject"></a> CComContainedObject:: CComContainedObject

Costruttore.

```
CComContainedObject(void* pv);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
in Oggetto del proprietario `IUnknown` .

### <a name="remarks"></a>Commenti

Imposta il `m_pOuterUnknown` puntatore del membro (ereditato attraverso la `Base` classe) su *PV*.

## <a name="ccomcontainedobjectccomcontainedobject"></a><a name="dtor"></a> CComContainedObject:: ~ CComContainedObject

Distruttore.

```
~CComContainedObject();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate.

## <a name="ccomcontainedobjectgetcontrollingunknown"></a><a name="getcontrollingunknown"></a> CComContainedObject:: GetControllingUnknown

Restituisce il `m_pOuterUnknown` puntatore del membro (ereditato tramite la classe *base* ) che include l'oggetto proprietario `IUnknown` .

```
IUnknown* GetControllingUnknown();
```

### <a name="return-value"></a>Valore restituito

Oggetto del proprietario `IUnknown` .

### <a name="remarks"></a>Commenti

Questo metodo può essere virtuale se `Base` ha dichiarato la [DECLARE_GET_CONTROLLING_UNKNOWN](aggregation-and-class-factory-macros.md#declare_get_controlling_unknown) macro.

## <a name="ccomcontainedobjectqueryinterface"></a><a name="queryinterface"></a> CComContainedObject:: QueryInterface

Recupera un puntatore all'interfaccia richiesta nell'oggetto proprietario.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT STDMETHODCALLTYPE QueryInterface(Q** pp);
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in Identificatore dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia identificato da *IID*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su null.

*PP*<br/>
out Puntatore al puntatore a interfaccia identificato dal tipo `Q` . Se l'oggetto non supporta questa interfaccia, *PP* è impostato su null.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccomcontainedobjectrelease"></a><a name="release"></a> CComContainedObject:: Release

Decrementa il conteggio dei riferimenti nell'oggetto proprietario.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build di debug `Release` restituisce un valore che può essere utile per la diagnostica o il test. Nelle compilazioni non di debug `Release` restituisce sempre 0.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
