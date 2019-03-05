---
title: Classe CComPolyObject
ms.date: 11/04/2016
f1_keywords:
- CComPolyObject
- ATLCOM/ATL::CComPolyObject
- ATLCOM/ATL::CComPolyObject::CComPolyObject
- ATLCOM/ATL::CComPolyObject::AddRef
- ATLCOM/ATL::CComPolyObject::CreateInstance
- ATLCOM/ATL::CComPolyObject::FinalConstruct
- ATLCOM/ATL::CComPolyObject::FinalRelease
- ATLCOM/ATL::CComPolyObject::QueryInterface
- ATLCOM/ATL::CComPolyObject::Release
- ATLCOM/ATL::CComPolyObject::m_contained
helpviewer_keywords:
- aggregate objects [C++], in ATL
- aggregation [C++], ATL objects
- CComPolyObject class
ms.assetid: eaf67c18-e855-48ca-9b15-f1df3106121b
ms.openlocfilehash: a8dbbc06d35d2606cc76e89cc555ba7f8577daa9
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57277931"
---
# <a name="ccompolyobject-class"></a>Classe CComPolyObject

Questa classe implementa `IUnknown` per un oggetto aggregato o non aggregato.

## <a name="syntax"></a>Sintassi

```
template<class contained>
class CComPolyObject : public IUnknown,
      public CComObjectRootEx<contained::_ThreadModel::ThreadModelNoCS>
```

#### <a name="parameters"></a>Parametri

*contained*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) oppure [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce si desidera supportare nell'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPolyObject::CComPolyObject](#ccompolyobject)|Costruttore.|
|[CComPolyObject::~CComPolyObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPolyObject::AddRef](#addref)|Incrementa il conteggio di riferimenti dell'oggetto.|
|[CComPolyObject::CreateInstance](#createinstance)|(Statico) Consente di creare una nuova **CComPolyObject <** `contained` **>** oggetto senza l'overhead della [CoCreateInstance](/windows/desktop/api/combaseapi/nf-combaseapi-cocreateinstance).|
|[CComPolyObject::FinalConstruct](#finalconstruct)|Esegue l'inizializzazione finale del `m_contained`.|
|[CComPolyObject::FinalRelease](#finalrelease)|Esegue la distruzione finale di `m_contained`.|
|[CComPolyObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComPolyObject::Release](#release)|Decrementa il conteggio dei riferimenti dell'oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPolyObject::m_contained](#m_contained)|I delegati `IUnknown` le chiamate a unknown esterno se l'oggetto è aggregato o per il `IUnknown` dell'oggetto se l'oggetto non è aggregato.|

## <a name="remarks"></a>Note

`CComPolyObject` implementa [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) per un oggetto aggregato o non aggregato.

Quando un'istanza di `CComPolyObject` creato, il valore di esterna sconosciuta viene controllato. Se è NULL, `IUnknown` viene implementata per un oggetto non aggregato. Se unknown esterno non è NULL, `IUnknown` è implementata per un oggetto aggregato.

Il vantaggio dell'utilizzo `CComPolyObject` non si rischia che dispone di entrambe [CComAggObject](../../atl/reference/ccomaggobject-class.md) e [CComObject](../../atl/reference/ccomobject-class.md) nel modulo per gestire i casi aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Ciò significa che esiste solo una copia dell'oggetto vtable e una copia delle funzioni nel modulo. Se la vtable è grande, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable è piccola, usando `CComPolyObject` può comportare una dimensione modulo leggermente maggiore perché non è ottimizzato per un oggetto aggregato o aggregato, perché sono `CComAggObject` e `CComObject`.

Se la macro DECLARE_POLY_AGGREGATABLE viene specificata nella definizione di classe dell'oggetto, `CComPolyObject` verrà utilizzato per creare l'oggetto. DECLARE_POLY_AGGREGATABLE verrà dichiarata automaticamente se si usa la creazione guidata progetto ATL per creare un controllo completo o un controllo di Internet Explorer.

Se aggregato, il `CComPolyObject` oggetto dispone di propri `IUnknown`, indipendentemente dall'esterno dell'oggetto `IUnknown`e mantiene il proprio conteggio dei riferimenti. `CComPolyObject` viene utilizzato [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) delegare unknown esterno.

Per altre informazioni sull'aggregazione, vedere l'articolo [nozioni di base di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IUnknown`

`CComPolyObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="addref"></a>  CComPolyObject::AddRef

Incrementa il conteggio dei riferimenti nell'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Un valore che può essere utile per la diagnostica o di testing.

##  <a name="ccompolyobject"></a>  CComPolyObject::CComPolyObject

Costruttore.

```
CComPolyObject(void* pv);
```

### <a name="parameters"></a>Parametri

*pv*<br/>
[in] Un puntatore a unknown esterno se l'oggetto deve essere aggregata o NULL se l'oggetto se l'oggetto non è aggregato.

### <a name="remarks"></a>Note

Inizializza la `CComContainedObject` membro dati [m_contained](#m_contained)e incrementa il conteggio dei blocchi del modulo.

Il distruttore riduce il modulo conteggio dei blocchi.

##  <a name="dtor"></a>  CComPolyObject::~CComPolyObject

Distruttore.

```
~CComPolyObject();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate, le chiamate [FinalRelease](#finalrelease), e riduce il modulo conteggio dei blocchi.

##  <a name="createinstance"></a>  CComPolyObject::CreateInstance

Consente di creare una nuova **CComPolyObject <** `contained` **>** oggetto senza l'overhead della [CoCreateInstance](/windows/desktop/api/combaseapi/nf-combaseapi-cocreateinstance).

```
static HRESULT WINAPI CreateInstance(
    LPUNKNOWN pUnkOuter,
    CComPolyObject<contained>** pp);
```

### <a name="parameters"></a>Parametri

*pp*<br/>
[out] Un puntatore a un **CComPolyObject <** `contained` **>** puntatore. Se `CreateInstance` ha esito negativo *pp* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'oggetto restituito è un conteggio dei riferimenti pari a zero, quindi chiamare `AddRef` immediatamente, usare `Release` per liberare il riferimento sul puntatore a oggetto al termine.

Se non necessario indirizzare l'accesso all'oggetto, ma si vuole comunque creare un nuovo oggetto senza l'overhead dei `CoCreateInstance`, usare [CComCoClass](../../atl/reference/ccomcoclass-class.md#createinstance) invece.

##  <a name="finalconstruct"></a>  CComPolyObject::FinalConstruct

Chiamato durante le fasi finali della creazione dell'oggetto, questo metodo esegue qualsiasi inizializzazione finale per il [m_contained](#m_contained) (membro dati).

```
HRESULT FinalConstruct();
```

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="finalrelease"></a>  CComPolyObject::FinalRelease

Chiamato durante l'eliminazione degli oggetti, questo metodo libera il [m_contained](#m_contained) (membro dati).

```
void FinalRelease();
```

##  <a name="m_contained"></a>  CComPolyObject::m_contained

Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) oggetto derivato dalla classe.

```
CComContainedObject<contained> m_contained;
```

### <a name="parameters"></a>Parametri

*contained*<br/>
[in] La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) oppure [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce si desidera supportare nell'oggetto.

### <a name="remarks"></a>Note

`IUnknown` chiamate attraverso `m_contained` sono delegate a unknown esterno se l'oggetto è aggregato, o per il `IUnknown` di questo oggetto se l'oggetto non è aggregato.

##  <a name="queryinterface"></a>  CComPolyObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT QueryInterface(Q** pp);
```

### <a name="parameters"></a>Parametri

*Q*<br/>
L'interfaccia COM.

*iid*<br/>
[in] L'identificatore dell'interfaccia richiesto.

*ppvObject*<br/>
[out] Un puntatore al puntatore a interfaccia identificato dal *iid*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su NULL.

*pp*<br/>
[out] Un puntatore a interfaccia identificato dal `__uuidof(Q)`.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Per un oggetto aggregato, se l'interfaccia richiesta è `IUnknown`, `QueryInterface` restituisce un puntatore all'oggetto aggregato proprio `IUnknown` e incrementa il conteggio dei riferimenti. In caso contrario, questo metodo esegue una query per l'interfaccia tramite il `CComContainedObject` membro dati [m_contained](#m_contained).

##  <a name="release"></a>  CComPolyObject::Release

Decrementa il conteggio dei riferimenti nell'oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build di debug `Release` restituisce un valore che può essere utile per la diagnostica o di testing. Nelle build di nondebug `Release` restituisce sempre 0.

## <a name="see-also"></a>Vedere anche

[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[DECLARE_POLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_poly_aggregatable)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
