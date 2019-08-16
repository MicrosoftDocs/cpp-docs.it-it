---
title: Classe Ccomaggobjec
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
ms.openlocfilehash: 8b05284104f9d2e5e7704bceaee6f8adf9a33aac
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497651"
---
# <a name="ccomaggobject-class"></a>Classe Ccomaggobjec

Questa classe implementa l'interfaccia [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un oggetto aggregato. Per definizione, un oggetto aggregato è contenuto all'interno di un oggetto esterno. La `CComAggObject` classe è simile alla [classe CComObject](../../atl/reference/ccomobject-class.md), ad eccezione del fatto che espone un'interfaccia accessibile direttamente ai client esterni.

## <a name="syntax"></a>Sintassi

```
template<class contained>
class CComAggObject : public IUnknown,
   public CComObjectRootEx<contained::_ThreadModel::ThreadModelNoCS>
```

#### <a name="parameters"></a>Parametri

*contained*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare nell'oggetto.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComAggObject::CComAggObject](#ccomaggobject)|Costruttore.|
|[CComAggObject::~CComAggObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComAggObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti nell'oggetto aggregato.|
|[CComAggObject::CreateInstance](#createinstance)|Questa funzione statica consente di creare un nuovo **ccomaggobjec <** `contained` **>** oggetto senza l'overhead di [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).|
|[CComAggObject::FinalConstruct](#finalconstruct)|Esegue l'inizializzazione `m_contained`finale di.|
|[CComAggObject::FinalRelease](#finalrelease)|Esegue la distruzione finale `m_contained`di.|
|[CComAggObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComAggObject::Release](#release)|Decrementa il conteggio dei riferimenti nell'oggetto aggregato.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CComAggObject::m_contained](#m_contained)|Delega `IUnknown` le chiamate all'oggetto sconosciuto esterno.|

## <a name="remarks"></a>Note

`CComAggObject`implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un oggetto aggregato. `CComAggObject`dispone di una `IUnknown` propria interfaccia, separata dall' `IUnknown` interfaccia dell'oggetto esterno, e mantiene il proprio conteggio dei riferimenti.

Per ulteriori informazioni sull'aggregazione, vedere l'articolo [nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IUnknown`

`CComAggObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="addref"></a>Ccomaggobjec:: AddRef

Incrementa il conteggio dei riferimenti nell'oggetto aggregato.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

##  <a name="ccomaggobject"></a>  CComAggObject::CComAggObject

Costruttore.

```
CComAggObject(void* pv);
```

### <a name="parameters"></a>Parametri

*pv*<br/>
in Oggetto sconosciuto esterno.

### <a name="remarks"></a>Note

Inizializza il `CComContainedObject` membro, [m_contained](#m_contained), e incrementa il numero di blocchi del modulo.

Il distruttore decrementa il conteggio dei blocchi del modulo.

##  <a name="dtor"></a>Ccomaggobjec:: ~ Ccomaggobjec

Distruttore.

```
~CComAggObject();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate, chiama [FinalRelease](#finalrelease)e decrementa il conteggio dei blocchi del modulo.

##  <a name="createinstance"></a>  CComAggObject::CreateInstance

Questa funzione statica consente di creare un nuovo **ccomaggobjec <** `contained` **>** oggetto senza l'overhead di [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

```
static HRESULT WINAPI CreateInstance(
    LPUNKNOWN pUnkOuter,
    CComAggObject<contained>** pp);
```

### <a name="parameters"></a>Parametri

*pp*<br/>
out Puntatore a un puntatore<em>contenuto</em> **>** **ccomaggobjec\<** . Se `CreateInstance` ha esito negativo, *PP* è impostato su null.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'oggetto restituito ha un conteggio dei riferimenti pari a zero, `AddRef` quindi chiamare immediatamente, `Release` quindi utilizzare per liberare il riferimento al puntatore all'oggetto al termine dell'operazione.

Se non è necessario l'accesso diretto all'oggetto, ma si vuole comunque creare un nuovo oggetto senza l'overhead di `CoCreateInstance`, usare [CComCoClass:: CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) .

##  <a name="finalconstruct"></a>Ccomaggobjec:: FinalConstruct

Chiamato durante le fasi finali della costruzione dell'oggetto, questo metodo esegue qualsiasi inizializzazione finale sul membro [m_contained](#m_contained) .

```
HRESULT FinalConstruct();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="finalrelease"></a>Ccomaggobjec:: FinalRelease

Chiamato durante la distruzione dell'oggetto, questo metodo libera il membro [m_contained](#m_contained) .

```
void FinalRelease();
```

##  <a name="m_contained"></a>  CComAggObject::m_contained

Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) derivato dalla classe.

```
CComContainedObject<contained> m_contained;
```

### <a name="parameters"></a>Parametri

*contained*<br/>
in La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare nell'oggetto.

### <a name="remarks"></a>Note

Tutte `IUnknown` le chiamate `m_contained` tramite vengono delegate all'oggetto sconosciuto esterno.

##  <a name="queryinterface"></a>  CComAggObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta.

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

### <a name="remarks"></a>Note

Se l'interfaccia richiesta è `IUnknown`, `QueryInterface` restituisce un puntatore alla proprietà `IUnknown` dell'oggetto aggregato e incrementa il conteggio dei riferimenti. In caso contrario, questo metodo esegue una query per `CComContainedObject` l'interfaccia tramite il membro [m_contained](#m_contained).

##  <a name="release"></a>Ccomaggobjec:: Release

Decrementa il conteggio dei riferimenti nell'oggetto aggregato.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build `Release` di debug restituisce un valore che può essere utile per la diagnostica o il test. Nelle compilazioni `Release` non di debug restituisce sempre 0.

## <a name="see-also"></a>Vedere anche

[Classe CComObject](../../atl/reference/ccomobject-class.md)<br/>
[Classe CComPolyObject](../../atl/reference/ccompolyobject-class.md)<br/>
[DECLARE_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_aggregatable)<br/>
[DECLARE_ONLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_only_aggregatable)<br/>
[DECLARE_NOT_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_not_aggregatable)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
