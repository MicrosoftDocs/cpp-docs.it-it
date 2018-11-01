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
ms.openlocfilehash: 289174fbfc61b0bbca65233fe24d93537627e17d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50492573"
---
# <a name="ccomcontainedobject-class"></a>Classe CComContainedObject

Questa classe implementa [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) mediante la delega dell'oggetto proprietario `IUnknown`.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComContainedObject : public Base
```

#### <a name="parameters"></a>Parametri

*base*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) oppure [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComContainedObject::CComContainedObject](#ccomcontainedobject)|Costruttore. Inizializza il puntatore del membro dell'oggetto proprietario `IUnknown`.|
|[CComContainedObject:: ~ CComContainedObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComContainedObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti nell'oggetto proprietario.|
|[CComContainedObject::GetControllingUnknown](#getcontrollingunknown)|Recupera l'oggetto proprietario `IUnknown`.|
|[CComContainedObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta per l'oggetto proprietario.|
|[CComContainedObject::Release](#release)|Decrementa il conteggio dei riferimenti nell'oggetto proprietario.|

## <a name="remarks"></a>Note

Usa ATL `CComContainedObject` nelle classi [CComAggObject](../../atl/reference/ccomaggobject-class.md), [CComPolyObject](../../atl/reference/ccompolyobject-class.md), e [CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md). `CComContainedObject` implementa [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) mediante la delega dell'oggetto proprietario `IUnknown`. (Il proprietario è l'oggetto esterno di un'aggregazione o l'oggetto per cui viene creata un'interfaccia tear-off). `CComContainedObject` chiamate `CComObjectRootEx`del `OuterQueryInterface`, `OuterAddRef`, e `OuterRelease`, tutto ereditato tramite `Base`.

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

Un valore che può essere utile per la diagnostica o di testing.

##  <a name="ccomcontainedobject"></a>  CComContainedObject::CComContainedObject

Costruttore.

```
CComContainedObject(void* pv);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
[in] Dell'oggetto proprietario `IUnknown`.

### <a name="remarks"></a>Note

Imposta il `m_pOuterUnknown` puntatore a membro (ereditate tramite il `Base` classe) per *pv*.

##  <a name="dtor"></a>  CComContainedObject:: ~ CComContainedObject

Distruttore.

```
~CComContainedObject();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate.

##  <a name="getcontrollingunknown"></a>  CComContainedObject::GetControllingUnknown

Restituisce il `m_pOuterUnknown` puntatore a membro (ereditate tramite il *Base* classe) che contiene l'oggetto proprietario `IUnknown`.

```
IUnknown* GetControllingUnknown();
```

### <a name="return-value"></a>Valore restituito

Dell'oggetto proprietario `IUnknown`.

### <a name="remarks"></a>Note

Questo metodo può essere virtuale se `Base` ha dichiarato il [DECLARE_GET_CONTROLLING_UNKNOWN](aggregation-and-class-factory-macros.md#declare_get_controlling_unknown) macro.

##  <a name="queryinterface"></a>  CComContainedObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta per l'oggetto proprietario.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT STDMETHODCALLTYPE QueryInterface(Q** pp);
```

### <a name="parameters"></a>Parametri

*IID*<br/>
[in] L'identificatore dell'interfaccia richiesto.

*ppvObject*<br/>
[out] Un puntatore al puntatore a interfaccia identificato dal *iid*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su NULL.

*profilo di porta*<br/>
[out] Un puntatore al puntatore a interfaccia identificato dal tipo `Q`. Se l'oggetto non supporta questa interfaccia, *pp* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="release"></a>  CComContainedObject::Release

Decrementa il conteggio dei riferimenti nell'oggetto proprietario.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build di debug `Release` restituisce un valore che può essere utile per la diagnostica o di testing. Nelle compilazioni non di debug, `Release` restituisce sempre 0.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
