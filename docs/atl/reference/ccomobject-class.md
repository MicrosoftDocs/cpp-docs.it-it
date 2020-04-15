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
ms.openlocfilehash: de6ffb45fe5c6f73ab656d5c6185b70d9f5edd38
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327637"
---
# <a name="ccomobject-class"></a>Classe CComObject

Questa classe `IUnknown` implementa per un oggetto non aggregato.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComObject : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare sull'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CComObject::CComObject](#ccomobject)|Costruttore.|
|[Oggetto CComObject:: CComObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CComObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti sull'oggetto.|
|[Oggetto CComObject::CreateInstance](#createinstance)|(Statico) Crea un `CComObject` nuovo oggetto.|
|[CComObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComObject::Release](#release)|Decrementa il conteggio dei riferimenti sull'oggetto.|

## <a name="remarks"></a>Osservazioni

`CComObject`implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un oggetto non aggregato. Tuttavia, `QueryInterface`le `AddRef`chiamate `Release` a , `CComObjectRootEx`e vengono delegate a .

Per ulteriori informazioni `CComObject`sull'utilizzo di , vedere l'articolo [Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomobjectaddref"></a><a name="addref"></a>Oggetto CComObject::AddRef

Incrementa il conteggio dei riferimenti sull'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Questa funzione restituisce il nuovo conteggio dei riferimenti incrementato sull'oggetto. Questo valore può essere utile per la diagnostica o il test.

## <a name="ccomobjectccomobject"></a><a name="ccomobject"></a>Oggetto CComObject::CComObject

Il costruttore incrementa il conteggio dei blocchi del modulo.

```
CComObject(void* = NULL);
```

### <a name="parameters"></a>Parametri

<em>void\*</em><br/>
[in] Questo parametro senza nome non viene utilizzato. Esiste per la simmetria con altri `CComXXXObjectXXX` costruttori.

### <a name="remarks"></a>Osservazioni

Il distruttore lo decrementa.

Se `CComObject`un oggetto derivato viene costruito correttamente utilizzando l'operatore **new,** il conteggio dei riferimenti iniziale è 0.If a -derived object is successfully constructed using the new operator, the initial reference count is 0. Per impostare il conteggio dei riferimenti sul valore corretto (1), effettuare una chiamata alla funzione [AddRef.](#addref)

## <a name="ccomobjectccomobject"></a><a name="dtor"></a>Oggetto CComObject:: CComObject

Distruttore.

```
CComObject();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate, chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease)e decrementa il numero di blocchi del modulo.

## <a name="ccomobjectcreateinstance"></a><a name="createinstance"></a>Oggetto CComObject::CreateInstance

Questa funzione statica consente di creare un nuovo **oggetto CComObject<,** `Base` **>** senza l'overhead di [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

```
static HRESULT WINAPI CreateInstance(CComObject<Base>** pp);
```

### <a name="parameters"></a>Parametri

*Pp*<br/>
[fuori] Puntatore a un **CComObject<** `Base` **>** puntatore. Se `CreateInstance` l'operazione non riesce, *pp* viene impostato su NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'oggetto restituito ha un conteggio dei `AddRef` riferimenti pari `Release` a zero, quindi chiama immediatamente, quindi usalo per liberare il riferimento sul puntatore all'oggetto al termine dell'operazione.

Se non è necessario accedere direttamente all'oggetto, ma si desidera `CoCreateInstance`comunque creare un nuovo oggetto senza l'overhead di , utilizzare invece [CComCoClass::CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#38](../../atl/codesnippet/cpp/ccomobject-class_1.h)]

[!code-cpp[NVC_ATL_COM#39](../../atl/codesnippet/cpp/ccomobject-class_2.cpp)]

## <a name="ccomobjectqueryinterface"></a><a name="queryinterface"></a>CComObject::QueryInterface

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

## <a name="ccomobjectrelease"></a><a name="release"></a>CComObject::Release

Decrementa il conteggio dei riferimenti sull'oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Questa funzione restituisce il nuovo conteggio dei riferimenti decrementati sull'oggetto. Nelle build di debug, il valore restituito può essere utile per la diagnostica o il test. Nelle compilazioni non `Release` di debug, restituisce sempre 0.In non-debug builds, always returns 0.

## <a name="see-also"></a>Vedere anche

[CComAggObject (classe)](../../atl/reference/ccomaggobject-class.md)<br/>
[CComPolyObject (classe)](../../atl/reference/ccompolyobject-class.md)<br/>
[DECLARE_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_aggregatable)<br/>
[DECLARE_NOT_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_not_aggregatable)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
