---
title: Classe CComObject
ms.date: 11/04/2016
f1_keywords:
- CComObject
- ATLCOM/ATL::CComObject
- ATLCOM/ATL::CComObject::CComObject
- ATLCOM/ATL::CComObject::AddRef
- ATLCOM/ATL::CComObject::CreateInstance
- ATLCOM/ATL::CComObject::QueryInterface
- ATLCOM/ATL::CComObject::Release
helpviewer_keywords:
- CComObject class
ms.assetid: e2b6433b-6349-4749-b4bc-acbd7a22c8b0
ms.openlocfilehash: a2051932413d8658eb7cedb67ed0eab2077b599d
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497139"
---
# <a name="ccomobject-class"></a>Classe CComObject

Questa classe implementa `IUnknown` per un oggetto non aggregato.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComObject : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare nell'oggetto.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObject::CComObject](#ccomobject)|Costruttore.|
|[CComObject::~CComObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti nell'oggetto.|
|[CComObject::CreateInstance](#createinstance)|Statico Crea un nuovo `CComObject` oggetto.|
|[CComObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComObject:: Release](#release)|Decrementa il conteggio dei riferimenti nell'oggetto.|

## <a name="remarks"></a>Note

`CComObject`implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un oggetto non aggregato. Tuttavia, le chiamate `QueryInterface`a `AddRef`, e `Release` sono delegate a `CComObjectRootEx`.

Per ulteriori informazioni sull'utilizzo `CComObject`di, vedere l'articolo Nozioni [fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="addref"></a>CComObject:: AddRef

Incrementa il conteggio dei riferimenti nell'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Questa funzione restituisce il nuovo conteggio dei riferimenti incrementato nell'oggetto. Questo valore può essere utile per la diagnostica o il testing.

##  <a name="ccomobject"></a>  CComObject::CComObject

Il costruttore incrementa il conteggio dei blocchi del modulo.

```
CComObject(void* = NULL);
```

### <a name="parameters"></a>Parametri

<em>void\*</em><br/>
in Questo parametro senza nome non viene utilizzato. Esiste per la simmetria con altri `CComXXXObjectXXX` costruttori.

### <a name="remarks"></a>Note

Il distruttore viene decrementato.

Se un `CComObject`oggetto derivato da viene costruito correttamente usando l'operatore **New** , il conteggio dei riferimenti iniziali è 0. Per impostare il conteggio dei riferimenti sul valore appropriato (1), effettuare una chiamata alla funzione [AddRef](#addref) .

##  <a name="dtor"></a>  CComObject::~CComObject

Distruttore.

```
CComObject();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate, chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease)e decrementa il conteggio dei blocchi del modulo.

##  <a name="createinstance"></a>CComObject:: CreateInstance

Questa funzione statica consente di creare un nuovo oggetto **CComObject <** `Base` **>** , senza l'overhead di [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

```
static HRESULT WINAPI CreateInstance(CComObject<Base>** pp);
```

### <a name="parameters"></a>Parametri

*pp*<br/>
out Puntatore a un puntatore di **<** `Base` **>** CComObject. Se `CreateInstance` ha esito negativo, *PP* è impostato su null.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'oggetto restituito ha un conteggio dei riferimenti pari a zero, `AddRef` quindi chiamare immediatamente, `Release` quindi utilizzare per liberare il riferimento al puntatore all'oggetto al termine dell'operazione.

Se non è necessario l'accesso diretto all'oggetto, ma si vuole comunque creare un nuovo oggetto senza l'overhead di `CoCreateInstance`, usare [CComCoClass:: CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#38](../../atl/codesnippet/cpp/ccomobject-class_1.h)]

[!code-cpp[NVC_ATL_COM#39](../../atl/codesnippet/cpp/ccomobject-class_2.cpp)]

##  <a name="queryinterface"></a>  CComObject::QueryInterface

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

##  <a name="release"></a>CComObject:: Release

Decrementa il conteggio dei riferimenti nell'oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Questa funzione restituisce il nuovo conteggio dei riferimenti diminuito nell'oggetto. Nelle build di debug, il valore restituito può essere utile per la diagnostica o il testing. Nelle compilazioni `Release` non di debug restituisce sempre 0.

## <a name="see-also"></a>Vedere anche

[Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)<br/>
[Classe CComPolyObject](../../atl/reference/ccompolyobject-class.md)<br/>
[DECLARE_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_aggregatable)<br/>
[DECLARE_NOT_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_not_aggregatable)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
