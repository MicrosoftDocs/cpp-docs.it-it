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
ms.openlocfilehash: deed29b5fb80ea8bbd06b3d50f45e38740b1619f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497144"
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
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare nell'oggetto.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPolyObject::CComPolyObject](#ccompolyobject)|Costruttore.|
|[CComPolyObject::~CComPolyObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CComPolyObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti dell'oggetto.|
|[CComPolyObject::CreateInstance](#createinstance)|Statico Consente di creare un nuovo **CComPolyObject <** `contained` **>** oggetto senza l'overhead di [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).|
|[CComPolyObject::FinalConstruct](#finalconstruct)|Esegue l'inizializzazione `m_contained`finale di.|
|[CComPolyObject::FinalRelease](#finalrelease)|Esegue la distruzione finale `m_contained`di.|
|[CComPolyObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComPolyObject:: Release](#release)|Decrementa il conteggio dei riferimenti dell'oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CComPolyObject::m_contained](#m_contained)|Delega `IUnknown` le chiamate all'oggetto sconosciuto esterno se l'oggetto è aggregato o `IUnknown` all'oggetto dell'oggetto se l'oggetto non è aggregato.|

## <a name="remarks"></a>Note

`CComPolyObject`implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un oggetto aggregato o non aggregato.

Quando viene creata un' `CComPolyObject` istanza di, il valore dell'oggetto sconosciuto esterno viene controllato. Se è null, `IUnknown` viene implementato per un oggetto non aggregato. Se l'oggetto sconosciuto esterno non è null `IUnknown` , viene implementato per un oggetto aggregato.

Il vantaggio dell'uso `CComPolyObject` di è che è possibile evitare di [ccomaggobjec](../../atl/reference/ccomaggobject-class.md) e [CComObject](../../atl/reference/ccomobject-class.md) nel modulo per gestire i case aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Ciò significa che nel modulo esiste una sola copia di vtable e una copia delle funzioni. Se la tabella vtable è di grandi dimensioni, è possibile ridurre notevolmente le dimensioni del modulo. Tuttavia, se il valore vtable è ridotto, `CComPolyObject` l'utilizzo di può comportare una dimensione del modulo leggermente maggiore perché non è ottimizzato per un oggetto aggregato o non `CComAggObject` aggregato, così come sono e `CComObject`.

Se la macro DECLARE_POLY_AGGREGATABLE viene specificata nella definizione della classe dell'oggetto, `CComPolyObject` verrà usato per creare l'oggetto. DECLARE_POLY_AGGREGATABLE verrà dichiarata automaticamente se si utilizza la creazione guidata progetto ATL per creare un controllo controllo completo o Internet Explorer.

Se aggregato, l' `CComPolyObject` oggetto dispone di se `IUnknown`stesso, separato `IUnknown`dall'oggetto esterno, e mantiene il proprio conteggio dei riferimenti. `CComPolyObject`USA [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) per delegare all'oggetto sconosciuto esterno.

Per ulteriori informazioni sull'aggregazione, vedere l'articolo [nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IUnknown`

`CComPolyObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="addref"></a>CComPolyObject:: AddRef

Incrementa il conteggio dei riferimenti nell'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

##  <a name="ccompolyobject"></a>CComPolyObject:: CComPolyObject

Costruttore.

```
CComPolyObject(void* pv);
```

### <a name="parameters"></a>Parametri

*pv*<br/>
in Puntatore all'oggetto sconosciuto esterno se l'oggetto deve essere aggregato o NULL se l'oggetto non è aggregato.

### <a name="remarks"></a>Note

Inizializza il `CComContainedObject` membro dati, [m_contained](#m_contained), e incrementa il numero di blocchi del modulo.

Il distruttore decrementa il conteggio dei blocchi del modulo.

##  <a name="dtor"></a>CComPolyObject:: ~ CComPolyObject

Distruttore.

```
~CComPolyObject();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate, chiama [FinalRelease](#finalrelease)e decrementa il conteggio dei blocchi del modulo.

##  <a name="createinstance"></a>CComPolyObject:: CreateInstance

Consente di creare un nuovo **CComPolyObject <** `contained` **>** oggetto senza l'overhead di [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

```
static HRESULT WINAPI CreateInstance(
    LPUNKNOWN pUnkOuter,
    CComPolyObject<contained>** pp);
```

### <a name="parameters"></a>Parametri

*pp*<br/>
out Puntatore a un puntatore di **<** `contained` **>** CComPolyObject. Se `CreateInstance` ha esito negativo, *PP* è impostato su null.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'oggetto restituito ha un conteggio dei riferimenti pari a zero, `AddRef` quindi chiamare immediatamente, `Release` quindi utilizzare per liberare il riferimento al puntatore all'oggetto al termine dell'operazione.

Se non è necessario l'accesso diretto all'oggetto, ma si vuole comunque creare un nuovo oggetto senza l'overhead di `CoCreateInstance`, usare [CComCoClass:: CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) .

##  <a name="finalconstruct"></a>CComPolyObject:: FinalConstruct

Chiamato durante le fasi finali della costruzione dell'oggetto, questo metodo esegue qualsiasi inizializzazione finale sul membro dati [m_contained](#m_contained) .

```
HRESULT FinalConstruct();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="finalrelease"></a>CComPolyObject:: FinalRelease

Chiamato durante la distruzione dell'oggetto, questo metodo libera il membro dati [m_contained](#m_contained) .

```
void FinalRelease();
```

##  <a name="m_contained"></a>CComPolyObject:: m_contained

Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) derivato dalla classe.

```
CComContainedObject<contained> m_contained;
```

### <a name="parameters"></a>Parametri

*contained*<br/>
in La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare nell'oggetto.

### <a name="remarks"></a>Note

`IUnknown`le chiamate `m_contained` tramite vengono delegate all'oggetto sconosciuto esterno se l'oggetto è aggregato o `IUnknown` a di questo oggetto se l'oggetto non è aggregato.

##  <a name="queryinterface"></a>  CComPolyObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT QueryInterface(Q** pp);
```

### <a name="parameters"></a>Parametri

*Q*<br/>
Interfaccia COM.

*iid*<br/>
in Identificatore dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia identificato da *IID*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su null.

*pp*<br/>
out Puntatore all'interfaccia identificata da `__uuidof(Q)`.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

Per un oggetto aggregato, se l'interfaccia richiesta è `IUnknown`, `QueryInterface` restituisce un puntatore alla proprietà `IUnknown` dell'oggetto aggregato e incrementa il conteggio dei riferimenti. In caso contrario, questo metodo esegue una query per `CComContainedObject` l'interfaccia tramite il membro dati [m_contained](#m_contained).

##  <a name="release"></a>CComPolyObject:: Release

Decrementa il conteggio dei riferimenti nell'oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build `Release` di debug restituisce un valore che può essere utile per la diagnostica o il test. Nelle compilazioni non `Release` di debug restituisce sempre 0.

## <a name="see-also"></a>Vedere anche

[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[DECLARE_POLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_poly_aggregatable)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
