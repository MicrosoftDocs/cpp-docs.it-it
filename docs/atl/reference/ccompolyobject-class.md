---
description: 'Altre informazioni su: classe CComPolyObject'
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
ms.openlocfilehash: 1584fd03882b0eb0618bd20b54134317efd17ba8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142402"
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

*contenuto*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare nell'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComPolyObject:: CComPolyObject](#ccompolyobject)|Costruttore.|
|[CComPolyObject:: ~ CComPolyObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComPolyObject:: AddRef](#addref)|Incrementa il conteggio dei riferimenti dell'oggetto.|
|[CComPolyObject:: CreateInstance](#createinstance)|Statico Consente di creare un nuovo **CComPolyObject<** `contained` **>** oggetto senza l'overhead di [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).|
|[CComPolyObject:: FinalConstruct](#finalconstruct)|Esegue l'inizializzazione finale di `m_contained` .|
|[CComPolyObject:: FinalRelease](#finalrelease)|Esegue la distruzione finale di `m_contained` .|
|[CComPolyObject:: QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComPolyObject:: Release](#release)|Decrementa il conteggio dei riferimenti dell'oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CComPolyObject:: m_contained](#m_contained)|Delega le `IUnknown` chiamate all'oggetto sconosciuto esterno se l'oggetto è aggregato o all'oggetto `IUnknown` dell'oggetto se l'oggetto non è aggregato.|

## <a name="remarks"></a>Commenti

`CComPolyObject` implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un oggetto aggregato o non aggregato.

Quando viene creata un'istanza di `CComPolyObject` , il valore dell'oggetto sconosciuto esterno viene controllato. Se è NULL, `IUnknown` viene implementato per un oggetto non aggregato. Se l'oggetto sconosciuto esterno non è NULL, `IUnknown` viene implementato per un oggetto aggregato.

Il vantaggio dell'uso di `CComPolyObject` è che è possibile evitare di [Ccomaggobjec](../../atl/reference/ccomaggobject-class.md) e [CComObject](../../atl/reference/ccomobject-class.md) nel modulo per gestire i case aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Ciò significa che nel modulo esiste una sola copia di vtable e una copia delle funzioni. Se la tabella vtable è di grandi dimensioni, è possibile ridurre notevolmente le dimensioni del modulo. Tuttavia, se il valore vtable è ridotto, l'utilizzo di `CComPolyObject` può comportare una dimensione del modulo leggermente maggiore perché non è ottimizzato per un oggetto aggregato o non aggregato, così come sono `CComAggObject` e `CComObject` .

Se la DECLARE_POLY_AGGREGATABLE macro viene specificata nella definizione di classe dell'oggetto, `CComPolyObject` verrà usato per creare l'oggetto. DECLARE_POLY_AGGREGATABLE verrà dichiarata automaticamente se si utilizza la creazione guidata progetto ATL per creare un controllo controllo completo o Internet Explorer.

Se aggregato, l' `CComPolyObject` oggetto dispone di se stesso, `IUnknown` separato dall'oggetto esterno `IUnknown` , e mantiene il proprio conteggio dei riferimenti. `CComPolyObject` USA [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) per delegare all'oggetto sconosciuto esterno.

Per ulteriori informazioni sull'aggregazione, vedere l'articolo [nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IUnknown`

`CComPolyObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ccompolyobjectaddref"></a><a name="addref"></a> CComPolyObject:: AddRef

Incrementa il conteggio dei riferimenti nell'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

## <a name="ccompolyobjectccompolyobject"></a><a name="ccompolyobject"></a> CComPolyObject:: CComPolyObject

Costruttore.

```
CComPolyObject(void* pv);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
in Puntatore all'oggetto sconosciuto esterno se l'oggetto deve essere aggregato o NULL se l'oggetto non è aggregato.

### <a name="remarks"></a>Commenti

Inizializza il `CComContainedObject` membro dati, [m_contained](#m_contained)e incrementa il numero di blocchi del modulo.

Il distruttore decrementa il conteggio dei blocchi del modulo.

## <a name="ccompolyobjectccompolyobject"></a><a name="dtor"></a> CComPolyObject:: ~ CComPolyObject

Distruttore.

```
~CComPolyObject();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate, chiama [FinalRelease](#finalrelease)e decrementa il conteggio dei blocchi del modulo.

## <a name="ccompolyobjectcreateinstance"></a><a name="createinstance"></a> CComPolyObject:: CreateInstance

Consente di creare un nuovo **CComPolyObject<** `contained` **>** oggetto senza l'overhead di [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

```
static HRESULT WINAPI CreateInstance(
    LPUNKNOWN pUnkOuter,
    CComPolyObject<contained>** pp);
```

### <a name="parameters"></a>Parametri

*PP*<br/>
out Puntatore a un puntatore di **<CComPolyObject** `contained` **>** . Se `CreateInstance` ha esito negativo, *PP* è impostato su null.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

L'oggetto restituito ha un conteggio dei riferimenti pari a zero, quindi chiamare `AddRef` immediatamente, quindi utilizzare `Release` per liberare il riferimento al puntatore all'oggetto al termine dell'operazione.

Se non è necessario l'accesso diretto all'oggetto, ma si vuole comunque creare un nuovo oggetto senza l'overhead di `CoCreateInstance` , usare [CComCoClass:: CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) .

## <a name="ccompolyobjectfinalconstruct"></a><a name="finalconstruct"></a> CComPolyObject:: FinalConstruct

Chiamato durante le fasi finali della costruzione di oggetti, questo metodo esegue qualsiasi inizializzazione finale sul membro dati [m_contained](#m_contained) .

```
HRESULT FinalConstruct();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccompolyobjectfinalrelease"></a><a name="finalrelease"></a> CComPolyObject:: FinalRelease

Chiamato durante la distruzione dell'oggetto, questo metodo libera il membro dati [m_contained](#m_contained) .

```cpp
void FinalRelease();
```

## <a name="ccompolyobjectm_contained"></a><a name="m_contained"></a> CComPolyObject:: m_contained

Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) derivato dalla classe.

```
CComContainedObject<contained> m_contained;
```

### <a name="parameters"></a>Parametri

*contenuto*<br/>
in La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare nell'oggetto.

### <a name="remarks"></a>Commenti

`IUnknown` le chiamate tramite `m_contained` vengono delegate all'oggetto sconosciuto esterno se l'oggetto è aggregato o a `IUnknown` di questo oggetto se l'oggetto non è aggregato.

## <a name="ccompolyobjectqueryinterface"></a><a name="queryinterface"></a> CComPolyObject:: QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT QueryInterface(Q** pp);
```

### <a name="parameters"></a>Parametri

*D*<br/>
Interfaccia COM.

*IID*<br/>
in Identificatore dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia identificato da *IID*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su null.

*PP*<br/>
out Puntatore all'interfaccia identificata da `__uuidof(Q)` .

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Per un oggetto aggregato, se l'interfaccia richiesta è `IUnknown` , `QueryInterface` restituisce un puntatore alla proprietà dell'oggetto aggregato `IUnknown` e incrementa il conteggio dei riferimenti. In caso contrario, questo metodo esegue una query per l'interfaccia tramite il `CComContainedObject` membro dati [m_contained](#m_contained).

## <a name="ccompolyobjectrelease"></a><a name="release"></a> CComPolyObject:: Release

Decrementa il conteggio dei riferimenti nell'oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build di debug `Release` restituisce un valore che può essere utile per la diagnostica o il test. Nelle compilazioni non di debug `Release` restituisce sempre 0.

## <a name="see-also"></a>Vedi anche

[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[DECLARE_POLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_poly_aggregatable)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
