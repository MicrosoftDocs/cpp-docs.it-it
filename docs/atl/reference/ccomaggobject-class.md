---
title: CComAggObject (classe)
ms.date: 11/04/2016
f1_keywords:
- CComAggObject
- ATLCOM/ATL::CComAggObject
- ATLCOM/ATL::CComAggObject::CComAggObject
- ATLCOM/ATL::CComAggObject::AddRef
- ATLCOM/ATL::CComAggObject::CreateInstance
- ATLCOM/ATL::CComAggObject::FinalConstruct
- ATLCOM/ATL::CComAggObject::FinalRelease
- ATLCOM/ATL::CComAggObject::QueryInterface
- ATLCOM/ATL::CComAggObject::Release
- ATLCOM/ATL::CComAggObject::m_contained
helpviewer_keywords:
- aggregate objects [C++], in ATL
- aggregation [C++], ATL objects
- CComAggObject class
ms.assetid: 7aa90d69-d399-477b-880d-e2cdf0ef7881
ms.openlocfilehash: 9f05e83c8d0a1fd68fce3228dea9cfeab6183c96
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321163"
---
# <a name="ccomaggobject-class"></a>CComAggObject (classe)

Questa classe implementa l'interfaccia [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un oggetto aggregato. Per definizione, un oggetto aggregato è contenuto all'interno di un oggetto esterno. La `CComAggObject` classe è simile alla [classe CComObject](../../atl/reference/ccomobject-class.md), con la differenza che espone un'interfaccia direttamente accessibile ai client esterni.

## <a name="syntax"></a>Sintassi

```
template<class contained>
class CComAggObject : public IUnknown,
   public CComObjectRootEx<contained::_ThreadModel::ThreadModelNoCS>
```

#### <a name="parameters"></a>Parametri

*Contenuti*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare sull'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CComAggObject::CComAggObject](#ccomaggobject)|Costruttore.|
|[Oggetto CComAggObject:: CComAggObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CComAggObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti nell'oggetto aggregato.|
|[Oggetto CComAggObject::CreateInstance](#createinstance)|Questa funzione statica consente di creare un nuovo **oggetto CComAggObject<** `contained` **>** senza l'overhead di [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).|
|[Oggetto CComAggObject::FinalConstructCComAggObject::FinalConstruct](#finalconstruct)|Esegue l'inizializzazione finale di `m_contained`.|
|[Oggetto CComAggObject::FinalRelease](#finalrelease)|Esegue la `m_contained`distruzione finale di .|
|[CComAggObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComAggObject::Release](#release)|Decrementa il conteggio dei riferimenti sull'oggetto aggregato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComAggOggetto::m_contained](#m_contained)|Chiama `IUnknown` i delegati verso l'esterno sconosciuto.|

## <a name="remarks"></a>Osservazioni

`CComAggObject`implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un oggetto aggregato. `CComAggObject`ha una `IUnknown` propria interfaccia, separata dall'interfaccia dell'oggetto `IUnknown` esterno, e mantiene il proprio conteggio dei riferimenti.

Per ulteriori informazioni sull'aggregazione, vedere l'articolo [Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[Ccomobjectrootex](../../atl/reference/ccomobjectrootex-class.md)

`IUnknown`

`CComAggObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomaggobjectaddref"></a><a name="addref"></a>Oggetto CComAggObject::AddRef

Incrementa il conteggio dei riferimenti nell'oggetto aggregato.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

## <a name="ccomaggobjectccomaggobject"></a><a name="ccomaggobject"></a>Oggetto CComAggObject::CComAggObject

Costruttore.

```
CComAggObject(void* pv);
```

### <a name="parameters"></a>Parametri

*Pv*<br/>
[in] L'esterno sconosciuto.

### <a name="remarks"></a>Osservazioni

Inizializza il `CComContainedObject` membro, [m_contained](#m_contained), e incrementa il conteggio dei blocchi del modulo.

Il distruttore decrementa il conteggio dei blocchi del modulo.

## <a name="ccomaggobjectccomaggobject"></a><a name="dtor"></a>Oggetto CComAggObject:: CComAggObject

Distruttore.

```
~CComAggObject();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate, chiama [FinalRelease](#finalrelease)e decrementa il numero di blocchi del modulo.

## <a name="ccomaggobjectcreateinstance"></a><a name="createinstance"></a>Oggetto CComAggObject::CreateInstance

Questa funzione statica consente di creare un nuovo **oggetto CComAggObject<** `contained` **>** senza l'overhead di [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

```
static HRESULT WINAPI CreateInstance(
    LPUNKNOWN pUnkOuter,
    CComAggObject<contained>** pp);
```

### <a name="parameters"></a>Parametri

*Pp*<br/>
[fuori] Puntatore a un **CComAggObject\<**<em>puntatore contenuto.</em> **>** Se `CreateInstance` l'operazione non riesce, *pp* viene impostato su NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'oggetto restituito ha un conteggio dei `AddRef` riferimenti pari `Release` a zero, quindi chiama immediatamente, quindi usalo per liberare il riferimento sul puntatore all'oggetto al termine dell'operazione.

Se non è necessario accedere direttamente all'oggetto, ma si desidera `CoCreateInstance`comunque creare un nuovo oggetto senza l'overhead di , utilizzare invece [CComCoClass::CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) .

## <a name="ccomaggobjectfinalconstruct"></a><a name="finalconstruct"></a>Oggetto CComAggObject::FinalConstructCComAggObject::FinalConstruct

Chiamato durante le fasi finali della costruzione dell'oggetto, questo metodo esegue qualsiasi inizializzazione finale sul [membro m_contained.](#m_contained)

```
HRESULT FinalConstruct();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccomaggobjectfinalrelease"></a><a name="finalrelease"></a>Oggetto CComAggObject::FinalRelease

Chiamato durante l'eliminazione dell'oggetto, questo metodo libera il [membro m_contained.](#m_contained)

```
void FinalRelease();
```

## <a name="ccomaggobjectm_contained"></a><a name="m_contained"></a>CComAggOggetto::m_contained

Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) oggetto derivato dalla classe.

```
CComContainedObject<contained> m_contained;
```

### <a name="parameters"></a>Parametri

*Contenuti*<br/>
[in] La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare sull'oggetto.

### <a name="remarks"></a>Osservazioni

Tutte `IUnknown` le `m_contained` chiamate effettuate sono delegate all'ignoto esterno.

## <a name="ccomaggobjectqueryinterface"></a><a name="queryinterface"></a>CComAggObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta.

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

### <a name="remarks"></a>Osservazioni

Se l'interfaccia `IUnknown` `QueryInterface` richiesta è , restituisce un `IUnknown` puntatore all'oggetto aggregato e incrementa il conteggio dei riferimenti. In caso contrario, questo `CComContainedObject` metodo esegue una query per l'interfaccia tramite il membro, [m_contained](#m_contained).

## <a name="ccomaggobjectrelease"></a><a name="release"></a>CComAggObject::Release

Decrementa il conteggio dei riferimenti sull'oggetto aggregato.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build di `Release` debug restituisce un valore che può essere utile per la diagnostica o il test. Nelle compilazioni non `Release` di debug, restituisce sempre 0.In non-debug builds, always returns 0.

## <a name="see-also"></a>Vedere anche

[Classe CComObject](../../atl/reference/ccomobject-class.md)<br/>
[CComPolyObject (classe)](../../atl/reference/ccompolyobject-class.md)<br/>
[DECLARE_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_aggregatable)<br/>
[DECLARE_ONLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_only_aggregatable)<br/>
[DECLARE_NOT_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_not_aggregatable)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
