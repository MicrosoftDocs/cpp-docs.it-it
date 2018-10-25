---
title: Classe CComObject | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComObject
- ATLCOM/ATL::CComObject
- ATLCOM/ATL::CComObject::CComObject
- ATLCOM/ATL::CComObject::AddRef
- ATLCOM/ATL::CComObject::CreateInstance
- ATLCOM/ATL::CComObject::QueryInterface
- ATLCOM/ATL::CComObject::Release
dev_langs:
- C++
helpviewer_keywords:
- CComObject class
ms.assetid: e2b6433b-6349-4749-b4bc-acbd7a22c8b0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9fdd5bcf0bf3ac58cf056543b9dbe3c55b6fe1bd
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50073241"
---
# <a name="ccomobject-class"></a>Classe CComObject

Questa classe implementa `IUnknown` per un oggetto non aggregato.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComObject : public Base
```

#### <a name="parameters"></a>Parametri

*base*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) oppure [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce si desidera supportare nell'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObject::CComObject](#ccomobject)|Costruttore.|
|[CComObject:: ~ CComObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti nell'oggetto.|
|[CComObject::CreateInstance](#createinstance)|(Statico) Crea un nuovo `CComObject` oggetto.|
|[CComObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComObject::Release](#release)|Decrementa il conteggio dei riferimenti nell'oggetto.|

## <a name="remarks"></a>Note

`CComObject` implementa [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) per un oggetto non aggregato. Tuttavia, le chiamate a `QueryInterface`, `AddRef`, e `Release` sono delegate a `CComObjectRootEx`.

Per altre informazioni sull'uso `CComObject`, vedere l'articolo [nozioni fondamentali su oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="addref"></a>  CComObject::AddRef

Incrementa il conteggio dei riferimenti nell'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Questa funzione restituisce il nuovo conteggio dei riferimenti incrementato sull'oggetto. Questo valore può essere utile per la diagnostica e di test.

##  <a name="ccomobject"></a>  CComObject::CComObject

Il costruttore incrementa il conteggio dei blocchi del modulo.

```
CComObject(void* = NULL);
```

### <a name="parameters"></a>Parametri

<em>void\*</em><br/>
[in] Questo parametro senza nome non viene utilizzato. Stato attuale per simmetria con altri `CComXXXObjectXXX` costruttori.

### <a name="remarks"></a>Note

Il distruttore riduce lo.

Se un `CComObject`-oggetto derivato viene costruita correttamente usando il **nuovi** (operatore), il numero di riferimento iniziale è 0. Per impostare il conteggio dei riferimenti sul valore appropriato (1), effettuare una chiamata per il [AddRef](#addref) (funzione).

##  <a name="dtor"></a>  CComObject::~CComObject

Distruttore.

```
CComObject();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate, le chiamate [FinalRelease](ccomobjectrootex-class.md#finalrelease), e riduce il modulo conteggio dei blocchi.

##  <a name="createinstance"></a>  CComObject::CreateInstance

Questa funzione statica consente di creare una nuova **CComObject <** `Base` **>** oggetto, senza dover [CoCreateInstance](/windows/desktop/api/combaseapi/nf-combaseapi-cocreateinstance).

```
static HRESULT WINAPI CreateInstance(CComObject<Base>** pp);
```

### <a name="parameters"></a>Parametri

*profilo di porta*<br/>
[out] Un puntatore a un **CComObject <** `Base` **>** puntatore. Se `CreateInstance` ha esito negativo *pp* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'oggetto restituito è un conteggio dei riferimenti pari a zero, quindi chiamare `AddRef` immediatamente, usare `Release` per liberare il riferimento sul puntatore a oggetto al termine.

Se non necessario accesso diretto all'oggetto, ma si vuole comunque creare un nuovo oggetto senza l'overhead dei `CoCreateInstance`, usare [CComCoClass](../../atl/reference/ccomcoclass-class.md#createinstance) invece.

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

*IID*<br/>
[in] L'identificatore dell'interfaccia richiesto.

*ppvObject*<br/>
[out] Un puntatore al puntatore a interfaccia identificato dal *iid*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su NULL.

*profilo di porta*<br/>
[out] Un puntatore al puntatore a interfaccia identificato dal tipo `Q`. Se l'oggetto non supporta questa interfaccia, *pp* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="release"></a>  CComObject::Release

Decrementa il conteggio dei riferimenti nell'oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Questa funzione restituisce il nuovo conteggio dei riferimenti decrementato sull'oggetto. Nelle build di debug, il valore restituito può essere utile per la diagnostica o di testing. Nelle compilazioni non di debug, `Release` restituisce sempre 0.

## <a name="see-also"></a>Vedere anche

[Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)<br/>
[Classe CComPolyObject](../../atl/reference/ccompolyobject-class.md)<br/>
[DECLARE_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_aggregatable)<br/>
[DECLARE_NOT_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_not_aggregatable)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
