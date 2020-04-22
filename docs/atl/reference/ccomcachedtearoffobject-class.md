---
title: CComCachedTearOffObject (classe)
ms.date: 11/04/2016
f1_keywords:
- CComCachedTearOffObject
- ATLCOM/ATL::CComCachedTearOffObject
- ATLCOM/ATL::CComCachedTearOffObject::CComCachedTearOffObject
- ATLCOM/ATL::CComCachedTearOffObject::AddRef
- ATLCOM/ATL::CComCachedTearOffObject::FinalConstruct
- ATLCOM/ATL::CComCachedTearOffObject::FinalRelease
- ATLCOM/ATL::CComCachedTearOffObject::QueryInterface
- ATLCOM/ATL::CComCachedTearOffObject::Release
- ATLCOM/ATL::CComCachedTearOffObject::m_contained
helpviewer_keywords:
- cache, ATL cached tear-off objects
- CComCachedTearOffObject class
ms.assetid: ae19507d-a1de-4dbc-a988-da9f75a50c95
ms.openlocfilehash: 019b90c932de144d05fbf05f3ca339f4e5d6edd1
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81748097"
---
# <a name="ccomcachedtearoffobject-class"></a>CComCachedTearOffObject (classe)

Questa classe implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un'interfaccia tear-off.

## <a name="syntax"></a>Sintassi

```
template
<class contained>
class CComCachedTearOffObject : public
    IUnknown,
public CComObjectRootEx<contained
::_ThreadModel::ThreadModelNoCS>
```

#### <a name="parameters"></a>Parametri

*Contenuti*<br/>
La classe tear-off, `CComTearOffObjectBase` derivata da e le interfacce che si desidera che l'oggetto tear-off per supportare.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCachedTearOffObject::CComCachedTearOffObject](#ccomcachedtearoffobject)|Costruttore.|
|[Oggetto CComCachedTearOffObject::CComCachedTearOffObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCachedTearOffObject::AddRef](#addref)|Incrementa il conteggio `CComCachedTearOffObject` dei riferimenti per un oggetto.|
|[CComCachedTearOffObject::FinalConstruct](#finalconstruct)|Chiama `m_contained::FinalConstruct` il (il metodo della classe tear-off).|
|[CComCachedTearOffObject::FinalRelease](#finalrelease)|Chiama `m_contained::FinalRelease` il (il metodo della classe tear-off).|
|[CComCachedTearOffObject::QueryInterface](#queryinterface)|Restituisce un `IUnknown` puntatore `CComCachedTearOffObject` all'oggetto o all'interfaccia richiesta nella classe `contained`tear-off (la classe ).|
|[CComCachedTearOffObject::Release](#release)|Decrementa il conteggio `CComCachedTearOffObject` dei riferimenti per un oggetto e lo elimina se il conteggio dei riferimenti è 0.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCachedTearOffObject::m_contained](#m_contained)|Oggetto `CComContainedObject` derivato dalla classe tear-off `contained`(classe ).|

## <a name="remarks"></a>Osservazioni

`CComCachedTearOffObject`[implementa IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un'interfaccia tear-off. Questa classe è `CComTearOffObject` diversa `CComCachedTearOffObject` da `IUnknown`quella che ha una `IUnknown` propria , separata da quella dell'oggetto proprietario (il proprietario è l'oggetto per il quale viene creato lo strappo). `CComCachedTearOffObject`mantiene il proprio conteggio `IUnknown` dei riferimenti sul proprio e si elimina una volta che il conteggio dei riferimenti è zero. Tuttavia, se si esegue una query per una qualsiasi delle interfacce `IUnknown` tear-off, il conteggio dei riferimenti dell'oggetto proprietario verrà incrementato.

Se `CComCachedTearOffObject` l'oggetto che implementa lo stracco è già istanziato e viene `CComCachedTearOffObject` nuovamente eseguita una query sull'interfaccia tear-off, lo stesso oggetto viene riutilizzato. Al contrario, se un'interfaccia `CComTearOffObject` tear-off implementata da un oggetto `CComTearOffObject` viene nuovamente eseguita una query per tramite l'oggetto proprietario, ne verrà creata un'istanza un'altra.

La classe owner `FinalRelease` deve `Release` implementare `IUnknown` e `CComCachedTearOffObject`chiamare la cache per il , che decreterà il conteggio dei riferimenti. Questo farà `CComCachedTearOffObject`sì `FinalRelease` che sia chiamato ed eliminerà lo strappo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[Ccomobjectrootex](../../atl/reference/ccomobjectrootex-class.md)

`IUnknown`

`CComCachedTearOffObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomcachedtearoffobjectaddref"></a><a name="addref"></a>CComCachedTearOffObject::AddRef

Incrementa il conteggio `CComCachedTearOffObject` dei riferimenti dell'oggetto di 1.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica e il test.

## <a name="ccomcachedtearoffobjectccomcachedtearoffobject"></a><a name="ccomcachedtearoffobject"></a>CComCachedTearOffObject::CComCachedTearOffObject

Costruttore.

```
CComCachedTearOffObject(void* pv);
```

### <a name="parameters"></a>Parametri

*Pv*<br/>
[in] Puntatore `IUnknown` all'oggetto `CComCachedTearOffObject`.

### <a name="remarks"></a>Osservazioni

Inizializza il `CComContainedObject` membro, [m_contained](#m_contained).

## <a name="ccomcachedtearoffobjectccomcachedtearoffobject"></a><a name="dtor"></a>Oggetto CComCachedTearOffObject::CComCachedTearOffObject

Distruttore.

```
~CComCachedTearOffObject();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate e chiama [FinalRelease](#finalrelease).

## <a name="ccomcachedtearoffobjectfinalconstruct"></a><a name="finalconstruct"></a>CComCachedTearOffObject::FinalConstruct

Chiamate `m_contained::FinalConstruct` per `m_contained`create `CComContainedObject` <  `contained` , il> oggetto utilizzato per accedere all'interfaccia implementata dalla classe tear-off.

```
HRESULT FinalConstruct();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccomcachedtearoffobjectfinalrelease"></a><a name="finalrelease"></a>CComCachedTearOffObject::FinalRelease

Chiamate `m_contained::FinalRelease` `m_contained`all'oggetto `CComContainedObject` free , l'oggetto <  `contained`>.

```cpp
void FinalRelease();
```

## <a name="ccomcachedtearoffobjectm_contained"></a><a name="m_contained"></a>CComCachedTearOffObject::m_contained

Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) derivato dalla classe tear-off.

```
CcomContainedObject <contained> m_contained;
```

### <a name="parameters"></a>Parametri

*Contenuti*<br/>
[in] La classe tear-off, `CComTearOffObjectBase` derivata da e le interfacce che si desidera che l'oggetto tear-off per supportare.

### <a name="remarks"></a>Osservazioni

I `m_contained` metodi inherits vengono utilizzati per accedere all'interfaccia tear-off nella classe `QueryInterface`tear-off tramite l'oggetto tear-off memorizzato nella cache, , `FinalConstruct`e `FinalRelease`.

## <a name="ccomcachedtearoffobjectqueryinterface"></a><a name="queryinterface"></a>CComCachedTearOffObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] GUID dell'interfaccia richiesta.

*Oggetto ppv*<br/>
[fuori] Puntatore al puntatore a interfaccia identificato da *iid*o NULL se l'interfaccia non viene trovata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se l'interfaccia `IUnknown`richiesta è , `CComCachedTearOffObject`restituisce `IUnknown` un puntatore a 's proprio e incrementa il conteggio dei riferimenti. In caso contrario, viene eseguita una query per l'interfaccia nella classe tear-off utilizzando il metodo [InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) ereditato da `CComObjectRootEx`.

## <a name="ccomcachedtearoffobjectrelease"></a><a name="release"></a>CComCachedTearOffObject::Release

Decrementa il conteggio dei riferimenti di 1 e, se `CComCachedTearOffObject` il conteggio dei riferimenti è 0, elimina l'oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle compilazioni non di debug, restituisce sempre 0.In non-debug builds, always returns 0. Nelle build di debug restituisce un valore che può essere utile per la diagnostica o il test.

## <a name="see-also"></a>Vedere anche

[CComTearOffObject (classe)](../../atl/reference/ccomtearoffobject-class.md)<br/>
[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
