---
description: 'Altre informazioni su: classe CComObjectNoLock'
title: Classe CComObjectNoLock
ms.date: 11/04/2016
f1_keywords:
- CComObjectNoLock
- ATLCOM/ATL::CComObjectNoLock
- ATLCOM/ATL::CComObjectNoLock::CComObjectNoLock
- ATLCOM/ATL::CComObjectNoLock::AddRef
- ATLCOM/ATL::CComObjectNoLock::QueryInterface
- ATLCOM/ATL::CComObjectNoLock::Release
helpviewer_keywords:
- CComObjectNoLock class
ms.assetid: 288c6506-7da8-4127-8d58-7f4bd779539a
ms.openlocfilehash: 97708250ecd9637c52daf5db82f39d1a12565399
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142493"
---
# <a name="ccomobjectnolock-class"></a>Classe CComObjectNoLock

Questa classe implementa `IUnknown` per un oggetto non aggregato, ma non incrementa il conteggio dei blocchi del modulo nel costruttore.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComObjectNoLock : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare nell'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComObjectNoLock:: CComObjectNoLock](#ccomobjectnolock)|Costruttore.|
|[CComObjectNoLock:: ~ CComObjectNoLock](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComObjectNoLock:: AddRef](#addref)|Incrementa il conteggio dei riferimenti nell'oggetto.|
|[CComObjectNoLock:: QueryInterface](#queryinterface)|Restituisce un puntatore all'interfaccia richiesta.|
|[CComObjectNoLock:: Release](#release)|Decrementa il conteggio dei riferimenti nell'oggetto.|

## <a name="remarks"></a>Commenti

`CComObjectNoLock` è simile a [CComObject](../../atl/reference/ccomobject-class.md) in quanto implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un oggetto non aggregato; Tuttavia, non `CComObjectNoLock` incrementa il conteggio dei blocchi del modulo nel costruttore.

ATL utilizza `CComObjectNoLock` internamente per le class factory. In generale, non si userà direttamente questa classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComObjectNoLock`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ccomobjectnolockaddref"></a><a name="addref"></a> CComObjectNoLock:: AddRef

Incrementa il conteggio dei riferimenti nell'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

## <a name="ccomobjectnolockccomobjectnolock"></a><a name="ccomobjectnolock"></a> CComObjectNoLock:: CComObjectNoLock

Costruttore. A differenza di [CComObject](../../atl/reference/ccomobject-class.md), non incrementa il conteggio dei blocchi del modulo.

```
CComObjectNoLock(void* = NULL);
```

### <a name="parameters"></a>Parametri

<em>void\*</em><br/>
in Questo parametro senza nome non viene utilizzato. Esiste per la simmetria con altri `CComXXXObjectXXX` costruttori.

## <a name="ccomobjectnolockccomobjectnolock"></a><a name="dtor"></a> CComObjectNoLock:: ~ CComObjectNoLock

Distruttore.

```
~CComObjectNoLock();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).

## <a name="ccomobjectnolockqueryinterface"></a><a name="queryinterface"></a> CComObjectNoLock:: QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in Identificatore dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia identificato da *IID*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su null.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccomobjectnolockrelease"></a><a name="release"></a> CComObjectNoLock:: Release

Decrementa il conteggio dei riferimenti nell'oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build di debug `Release` restituisce un valore che può essere utile per la diagnostica o il test. Nelle compilazioni non di debug `Release` restituisce sempre 0.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
