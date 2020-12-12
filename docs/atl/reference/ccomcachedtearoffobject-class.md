---
description: 'Altre informazioni su: classe CComCachedTearOffObject'
title: Classe CComCachedTearOffObject
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
ms.openlocfilehash: 321e92b6bdf59834cd6c74b417a1788beefbdcb8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146913"
---
# <a name="ccomcachedtearoffobject-class"></a>Classe CComCachedTearOffObject

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

*contenuto*<br/>
La classe tear-off, derivata da `CComTearOffObjectBase` e le interfacce desiderate per il supporto dell'oggetto tear-off.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComCachedTearOffObject:: CComCachedTearOffObject](#ccomcachedtearoffobject)|Costruttore.|
|[CComCachedTearOffObject:: ~ CComCachedTearOffObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComCachedTearOffObject:: AddRef](#addref)|Incrementa il conteggio dei riferimenti per un `CComCachedTearOffObject` oggetto.|
|[CComCachedTearOffObject:: FinalConstruct](#finalconstruct)|Chiama `m_contained::FinalConstruct` (il metodo della classe tear-off).|
|[CComCachedTearOffObject:: FinalRelease](#finalrelease)|Chiama `m_contained::FinalRelease` (il metodo della classe tear-off).|
|[CComCachedTearOffObject:: QueryInterface](#queryinterface)|Restituisce un puntatore all' `IUnknown` `CComCachedTearOffObject` oggetto dell'oggetto o all'interfaccia richiesta sulla classe di strappo (la classe `contained` ).|
|[CComCachedTearOffObject:: Release](#release)|Decrementa il conteggio dei riferimenti per un `CComCachedTearOffObject` oggetto e lo elimina se il conteggio dei riferimenti è 0.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CComCachedTearOffObject:: m_contained](#m_contained)|`CComContainedObject`Oggetto derivato dalla classe tear-off (la classe `contained` ).|

## <a name="remarks"></a>Commenti

`CComCachedTearOffObject` implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un'interfaccia tear-off. Questa classe è diversa da `CComTearOffObject` in con una `CComCachedTearOffObject` propria `IUnknown` , separata dall'oggetto proprietario `IUnknown` (il proprietario è l'oggetto per il quale viene creata l'operazione di strappo). `CComCachedTearOffObject` mantiene il proprio conteggio dei riferimenti in `IUnknown` e si elimina quando il conteggio dei riferimenti è pari a zero. Tuttavia, se si esegue una query per una delle interfacce di strappo, il conteggio dei riferimenti dell'oggetto proprietario `IUnknown` verrà incrementato.

Se `CComCachedTearOffObject` è già stata creata un'istanza dell'oggetto che implementa lo strappo e viene eseguita una query sull'interfaccia tear-off, viene `CComCachedTearOffObject` riutilizzato lo stesso oggetto. Al contrario, se un'interfaccia di strappo implementata da un `CComTearOffObject` viene nuovamente sottoposta a query per l'oggetto proprietario, `CComTearOffObject` ne verrà creata un'altra.

La classe owner deve implementare `FinalRelease` e chiamare `Release` sull'oggetto memorizzato nella cache `IUnknown` per `CComCachedTearOffObject` , che decrementerà il conteggio dei riferimenti. Questa operazione determinerà `CComCachedTearOffObject` `FinalRelease` la chiamata di e l'eliminazione del Tear-off.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IUnknown`

`CComCachedTearOffObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ccomcachedtearoffobjectaddref"></a><a name="addref"></a> CComCachedTearOffObject:: AddRef

Incrementa di 1 il conteggio dei riferimenti dell' `CComCachedTearOffObject` oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica e il test.

## <a name="ccomcachedtearoffobjectccomcachedtearoffobject"></a><a name="ccomcachedtearoffobject"></a> CComCachedTearOffObject:: CComCachedTearOffObject

Costruttore.

```
CComCachedTearOffObject(void* pv);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
in Puntatore all'oggetto `IUnknown` di `CComCachedTearOffObject` .

### <a name="remarks"></a>Commenti

Inizializza il `CComContainedObject` membro [m_contained](#m_contained).

## <a name="ccomcachedtearoffobjectccomcachedtearoffobject"></a><a name="dtor"></a> CComCachedTearOffObject:: ~ CComCachedTearOffObject

Distruttore.

```
~CComCachedTearOffObject();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate e chiama [FinalRelease](#finalrelease).

## <a name="ccomcachedtearoffobjectfinalconstruct"></a><a name="finalconstruct"></a> CComCachedTearOffObject:: FinalConstruct

Chiama `m_contained::FinalConstruct` per creare `m_contained` , l' `CComContainedObject` <  `contained` oggetto> usato per accedere all'interfaccia implementata dalla classe tear-off.

```
HRESULT FinalConstruct();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccomcachedtearoffobjectfinalrelease"></a><a name="finalrelease"></a> CComCachedTearOffObject:: FinalRelease

Chiama `m_contained::FinalRelease` a Free `m_contained` , l' `CComContainedObject` <  `contained` oggetto>.

```cpp
void FinalRelease();
```

## <a name="ccomcachedtearoffobjectm_contained"></a><a name="m_contained"></a> CComCachedTearOffObject:: m_contained

Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) derivato dalla classe tear-off.

```
CcomContainedObject <contained> m_contained;
```

### <a name="parameters"></a>Parametri

*contenuto*<br/>
in La classe tear-off, derivata da `CComTearOffObjectBase` e le interfacce desiderate per il supporto dell'oggetto tear-off.

### <a name="remarks"></a>Commenti

I metodi `m_contained` Inherits vengono usati per accedere all'interfaccia tear-off nella classe tear-off tramite gli oggetti, e dell'oggetto tear-off memorizzati nella cache `QueryInterface` `FinalConstruct` `FinalRelease` .

## <a name="ccomcachedtearoffobjectqueryinterface"></a><a name="queryinterface"></a> CComCachedTearOffObject:: QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in GUID dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia identificato da *IID* oppure null se l'interfaccia non viene trovata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Se l'interfaccia richiesta è `IUnknown` , restituisce un puntatore alla `CComCachedTearOffObject` proprietà dell'oggetto `IUnknown` e incrementa il conteggio dei riferimenti. In caso contrario, le query per l'interfaccia sulla classe tear-off utilizzando il metodo [InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) ereditato da `CComObjectRootEx` .

## <a name="ccomcachedtearoffobjectrelease"></a><a name="release"></a> CComCachedTearOffObject:: Release

Decrementa il conteggio dei riferimenti di 1 e, se il conteggio dei riferimenti è 0, Elimina l' `CComCachedTearOffObject` oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle compilazioni non di debug restituisce sempre 0. Nelle build di debug restituisce un valore che può essere utile per la diagnostica o il test.

## <a name="see-also"></a>Vedi anche

[Classe CComTearOffObject](../../atl/reference/ccomtearoffobject-class.md)<br/>
[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
