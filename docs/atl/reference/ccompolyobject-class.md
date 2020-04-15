---
title: CComPolyObject (classe)
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
ms.openlocfilehash: e30afef455db5f83afca8ff9e515f39f015c3b8a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327566"
---
# <a name="ccompolyobject-class"></a>CComPolyObject (classe)

Questa classe `IUnknown` implementa per un oggetto aggregato o non aggregato.

## <a name="syntax"></a>Sintassi

```
template<class contained>
class CComPolyObject : public IUnknown,
      public CComObjectRootEx<contained::_ThreadModel::ThreadModelNoCS>
```

#### <a name="parameters"></a>Parametri

*Contenuti*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare sull'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPolyObject::CComPolyObject](#ccompolyobject)|Costruttore.|
|[Oggetto CComPolyObject:: CComPolyObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CComPolyObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti dell'oggetto.|
|[CComPolyObject::CreateInstance](#createinstance)|(Statico) Consente di creare un nuovo **oggetto CComPolyObject<** `contained` **>** senza l'overhead di [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).|
|[CComPolyObject::FinalConstruct](#finalconstruct)|Esegue l'inizializzazione finale di `m_contained`.|
|[CComPolyObject::FinalRelease](#finalrelease)|Esegue la `m_contained`distruzione finale di .|
|[CComPolyObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComPolyObject::Release](#release)|Decrementa il conteggio dei riferimenti dell'oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPolyObject::m_contained](#m_contained)|Delega `IUnknown` le chiamate a outer unknown se l'oggetto è aggregato o all'oggetto `IUnknown` se l'oggetto non è aggregato.|

## <a name="remarks"></a>Osservazioni

`CComPolyObject`implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un oggetto aggregato o non aggregato.

Quando viene `CComPolyObject` creata un'istanza di, viene controllato il valore di outer unknown. Se è NULL, `IUnknown` viene implementato per un oggetto non aggregato. Se il valore sconosciuto `IUnknown` esterno non è NULL, viene implementato per un oggetto aggregato.

Il vantaggio `CComPolyObject` di utilizzare è che si evita di avere sia [CComAggObject](../../atl/reference/ccomaggobject-class.md) e [CComObject](../../atl/reference/ccomobject-class.md) nel modulo per gestire i casi aggregati e non aggregati. Un `CComPolyObject` singolo oggetto gestisce entrambi i casi. Ciò significa che nel modulo sono presenti una sola copia della tabella vtable e una copia delle funzioni. Se il vtable è di grandi dimensioni, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable `CComPolyObject` è piccola, l'utilizzo può comportare una dimensione del modulo leggermente `CComAggObject` più `CComObject`grande perché non è ottimizzata per un oggetto aggregato o non aggregato, come lo sono e .

Se la macro DECLARE_POLY_AGGREGATABLE viene specificata nella `CComPolyObject` definizione della classe dell'oggetto, verrà utilizzata per creare l'oggetto. DECLARE_POLY_AGGREGATABLE verrà dichiarata automaticamente se si utilizza la Creazione guidata progetto ATL per creare un controllo completo o un controllo di Internet Explorer.

Se aggregato, l'oggetto `CComPolyObject` ha un proprio `IUnknown` `IUnknown`oggetto , separato da quello dell'oggetto esterno e mantiene il proprio conteggio dei riferimenti. `CComPolyObject`utilizza [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) per delegare all'esterno sconosciuto.

Per ulteriori informazioni sull'aggregazione, vedere l'articolo [Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[Ccomobjectrootex](../../atl/reference/ccomobjectrootex-class.md)

`IUnknown`

`CComPolyObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccompolyobjectaddref"></a><a name="addref"></a>Oggetto CComPolyObject::AddRef

Incrementa il conteggio dei riferimenti sull'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

## <a name="ccompolyobjectccompolyobject"></a><a name="ccompolyobject"></a>CComPolyObject::CComPolyObject

Costruttore.

```
CComPolyObject(void* pv);
```

### <a name="parameters"></a>Parametri

*Pv*<br/>
[in] Puntatore all'esterno sconosciuto se l'oggetto deve essere aggregato oppure NULL se l'oggetto se l'oggetto non è aggregato.

### <a name="remarks"></a>Osservazioni

Inizializza il `CComContainedObject` membro dati, [m_contained](#m_contained), e incrementa il conteggio dei blocchi del modulo.

Il distruttore decrementa il conteggio dei blocchi del modulo.

## <a name="ccompolyobjectccompolyobject"></a><a name="dtor"></a>Oggetto CComPolyObject:: CComPolyObject

Distruttore.

```
~CComPolyObject();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate, chiama [FinalRelease](#finalrelease)e decrementa il numero di blocchi del modulo.

## <a name="ccompolyobjectcreateinstance"></a><a name="createinstance"></a>CComPolyObject::CreateInstance

Consente di creare un nuovo **oggetto CComPolyObject<** `contained` **>** senza l'overhead di [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

```
static HRESULT WINAPI CreateInstance(
    LPUNKNOWN pUnkOuter,
    CComPolyObject<contained>** pp);
```

### <a name="parameters"></a>Parametri

*Pp*<br/>
[fuori] Puntatore a un **CComPolyObject<** `contained` **>** puntatore. Se `CreateInstance` l'operazione non riesce, *pp* viene impostato su NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'oggetto restituito ha un conteggio dei `AddRef` riferimenti pari `Release` a zero, quindi chiama immediatamente, quindi usalo per liberare il riferimento sul puntatore all'oggetto al termine dell'operazione.

Se non è necessario l'accesso diretto all'oggetto, ma si desidera `CoCreateInstance`comunque creare un nuovo oggetto senza l'overhead di , utilizzare invece [CComCoClass::CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) .

## <a name="ccompolyobjectfinalconstruct"></a><a name="finalconstruct"></a>CComPolyObject::FinalConstruct

Chiamato durante le fasi finali della costruzione dell'oggetto, questo metodo esegue qualsiasi inizializzazione finale sul membro dati [m_contained.](#m_contained)

```
HRESULT FinalConstruct();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccompolyobjectfinalrelease"></a><a name="finalrelease"></a>CComPolyObject::FinalRelease

Chiamato durante l'eliminazione dell'oggetto, questo metodo libera il membro dati [m_contained.](#m_contained)

```
void FinalRelease();
```

## <a name="ccompolyobjectm_contained"></a><a name="m_contained"></a>CComPolyObject::m_contained

Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) oggetto derivato dalla classe.

```
CComContainedObject<contained> m_contained;
```

### <a name="parameters"></a>Parametri

*Contenuti*<br/>
[in] La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare sull'oggetto.

### <a name="remarks"></a>Osservazioni

`IUnknown`le `m_contained` chiamate tramite vengono delegate all'outer unknown se `IUnknown` l'oggetto è aggregato o all'oggetto di questo oggetto se l'oggetto non è aggregato.

## <a name="ccompolyobjectqueryinterface"></a><a name="queryinterface"></a>CComPolyObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT QueryInterface(Q** pp);
```

### <a name="parameters"></a>Parametri

*D*<br/>
L'interfaccia COM.

*Iid*<br/>
[in] Identificatore dell'interfaccia richiesta.

*Oggetto ppv*<br/>
[fuori] Puntatore al puntatore a interfaccia identificato da *iid*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su NULL.

*Pp*<br/>
[fuori] Puntatore all'interfaccia `__uuidof(Q)`identificata da .

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Per un oggetto aggregato, `IUnknown` `QueryInterface` se l'interfaccia richiesta è , `IUnknown` restituisce un puntatore all'oggetto aggregato e incrementa il conteggio dei riferimenti. In caso contrario, questo `CComContainedObject` metodo esegue una query per l'interfaccia tramite il membro dati, [m_contained](#m_contained).

## <a name="ccompolyobjectrelease"></a><a name="release"></a>CComPolyObject::Release

Decrementa il conteggio dei riferimenti sull'oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build di `Release` debug restituisce un valore che può essere utile per la diagnostica o il test. Nelle compilazioni non `Release` di debug, restituisce sempre 0.In nondebug builds, always returns 0.

## <a name="see-also"></a>Vedere anche

[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[DECLARE_POLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_poly_aggregatable)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
