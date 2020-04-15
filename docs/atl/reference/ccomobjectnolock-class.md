---
title: CComObjectNoLock (classe)
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
ms.openlocfilehash: c190f495e284e98b27a6c6dc2099a8dfc4b1693d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327622"
---
# <a name="ccomobjectnolock-class"></a>CComObjectNoLock (classe)

Questa classe `IUnknown` implementa per un oggetto non aggregato, ma non incrementa il conteggio dei blocchi del modulo nel costruttore.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComObjectNoLock : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare sull'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectNoLock::CComObjectNoLock](#ccomobjectnolock)|Costruttore.|
|[CComObjectNoLock:: CComObjectNoLock](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectNoLock::AddRef](#addref)|Incrementa il conteggio dei riferimenti sull'oggetto.|
|[CComObjectNoLock::QueryInterface](#queryinterface)|Restituisce un puntatore all'interfaccia richiesta.|
|[CComObjectNoLock::Release](#release)|Decrementa il conteggio dei riferimenti sull'oggetto.|

## <a name="remarks"></a>Osservazioni

`CComObjectNoLock`è simile a [CComObject](../../atl/reference/ccomobject-class.md) in quanto implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un oggetto non aggregato; tuttavia, `CComObjectNoLock` non incrementa il conteggio dei blocchi del modulo nel costruttore.

ATL `CComObjectNoLock` utilizza internamente per le class factory. In generale, questa classe non verrà utilizzata direttamente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComObjectNoLock`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomobjectnolockaddref"></a><a name="addref"></a>CComObjectNoLock::AddRef

Incrementa il conteggio dei riferimenti sull'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

## <a name="ccomobjectnolockccomobjectnolock"></a><a name="ccomobjectnolock"></a>CComObjectNoLock::CComObjectNoLock

Costruttore. A differenza di [CComObject](../../atl/reference/ccomobject-class.md), non incrementa il conteggio dei blocchi del modulo.

```
CComObjectNoLock(void* = NULL);
```

### <a name="parameters"></a>Parametri

<em>void\*</em><br/>
[in] Questo parametro senza nome non viene utilizzato. Esiste per la simmetria con altri `CComXXXObjectXXX` costruttori.

## <a name="ccomobjectnolockccomobjectnolock"></a><a name="dtor"></a>CComObjectNoLock:: CComObjectNoLock

Distruttore.

```
~CComObjectNoLock();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).

## <a name="ccomobjectnolockqueryinterface"></a><a name="queryinterface"></a>CComObjectNoLock::QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] Identificatore dell'interfaccia richiesta.

*Oggetto ppv*<br/>
[fuori] Puntatore al puntatore a interfaccia identificato da *iid*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccomobjectnolockrelease"></a><a name="release"></a>CComObjectNoLock::Release

Decrementa il conteggio dei riferimenti sull'oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build di `Release` debug restituisce un valore che può essere utile per la diagnostica o il test. Nelle compilazioni non `Release` di debug, restituisce sempre 0.In non-debug builds, always returns 0.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
