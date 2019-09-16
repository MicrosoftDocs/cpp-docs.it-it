---
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
ms.openlocfilehash: d993a349d38342bda30a83dfdbe25577953799b3
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497546"
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

*contained*<br/>
La classe tear-off, derivata da `CComTearOffObjectBase` e le interfacce desiderate per il supporto dell'oggetto tear-off.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCachedTearOffObject::CComCachedTearOffObject](#ccomcachedtearoffobject)|Costruttore.|
|[CComCachedTearOffObject::~CComCachedTearOffObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CComCachedTearOffObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti per un `CComCachedTearOffObject` oggetto.|
|[CComCachedTearOffObject::FinalConstruct](#finalconstruct)|`m_contained::FinalConstruct` Chiama (il metodo della classe tear-off).|
|[CComCachedTearOffObject::FinalRelease](#finalrelease)|`m_contained::FinalRelease` Chiama (il metodo della classe tear-off).|
|[CComCachedTearOffObject::QueryInterface](#queryinterface)|Restituisce un puntatore all' `IUnknown` `CComCachedTearOffObject` oggetto dell'oggetto o all'interfaccia richiesta sulla classe di strappo (la classe `contained`).|
|[CComCachedTearOffObject::Release](#release)|Decrementa il conteggio dei riferimenti per `CComCachedTearOffObject` un oggetto e lo elimina se il conteggio dei riferimenti è 0.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|DESCRIZIONE|
|----------|-----------------|
|[CComCachedTearOffObject::m_contained](#m_contained)|Oggetto derivato dalla classe tear-off (la classe `contained`). `CComContainedObject`|

## <a name="remarks"></a>Note

`CComCachedTearOffObject`implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un'interfaccia tear-off. Questa classe è diversa da `CComTearOffObject` `CComCachedTearOffObject` in con una propria `IUnknown`, separata dall'oggetto `IUnknown` proprietario (il proprietario è l'oggetto per il quale viene creata l'operazione di strappo). `CComCachedTearOffObject`mantiene il proprio conteggio dei riferimenti in `IUnknown` e si elimina quando il conteggio dei riferimenti è pari a zero. Tuttavia, se si esegue una query per una delle interfacce di strappo, il conteggio dei riferimenti dell'oggetto `IUnknown` proprietario verrà incrementato.

Se è `CComCachedTearOffObject` già stata creata un'istanza dell'oggetto che implementa lo strappo e viene eseguita una query sull'interfaccia tear-off, viene riutilizzato lo stesso `CComCachedTearOffObject` oggetto. Al contrario, se un'interfaccia di strappo implementata da `CComTearOffObject` un viene nuovamente sottoposta a query per l'oggetto `CComTearOffObject` proprietario, ne verrà creata un'altra.

La classe owner deve implementare `FinalRelease` e chiamare `Release` sull'oggetto memorizzato `IUnknown` nella cache `CComCachedTearOffObject`per, che decrementerà il conteggio dei riferimenti. `CComCachedTearOffObject` Questaoperazionedetermineràlachiamatadiel'eliminazione`FinalRelease` del Tear-off.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IUnknown`

`CComCachedTearOffObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="addref"></a>  CComCachedTearOffObject::AddRef

Incrementa di 1 il conteggio dei riferimenti `CComCachedTearOffObject` dell'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica e il test.

##  <a name="ccomcachedtearoffobject"></a>  CComCachedTearOffObject::CComCachedTearOffObject

Costruttore.

```
CComCachedTearOffObject(void* pv);
```

### <a name="parameters"></a>Parametri

*pv*<br/>
in Puntatore all'oggetto `IUnknown` `CComCachedTearOffObject`di.

### <a name="remarks"></a>Note

Inizializza il `CComContainedObject` membro [m_contained](#m_contained).

##  <a name="dtor"></a>  CComCachedTearOffObject::~CComCachedTearOffObject

Distruttore.

```
~CComCachedTearOffObject();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate e chiama [FinalRelease](#finalrelease).

##  <a name="finalconstruct"></a>  CComCachedTearOffObject::FinalConstruct

Chiama `m_contained::FinalConstruct` per creare `m_contained`, l' `CComContainedObject` oggetto>usato`contained`per accedere all'interfaccia implementata dalla classe tear-off. < 

```
HRESULT FinalConstruct();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="finalrelease"></a>  CComCachedTearOffObject::FinalRelease

Chiama `m_contained::FinalRelease` a Free `m_contained`, l' `CComContainedObject` < oggetto >. `contained`

```
void FinalRelease();
```

##  <a name="m_contained"></a>  CComCachedTearOffObject::m_contained

Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) derivato dalla classe tear-off.

```
CcomContainedObject <contained> m_contained;
```

### <a name="parameters"></a>Parametri

*contained*<br/>
in La classe tear-off, derivata da `CComTearOffObjectBase` e le interfacce desiderate per il supporto dell'oggetto tear-off.

### <a name="remarks"></a>Note

I metodi `m_contained` Inherits vengono usati per accedere all'interfaccia tear-off nella classe tear-off tramite gli `QueryInterface`oggetti, `FinalConstruct`e `FinalRelease`dell'oggetto tear-off memorizzati nella cache.

##  <a name="queryinterface"></a>  CComCachedTearOffObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*iid*<br/>
in GUID dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia identificato da *IID*oppure null se l'interfaccia non viene trovata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

Se l'interfaccia richiesta è `IUnknown`, restituisce un puntatore alla proprietà `CComCachedTearOffObject` `IUnknown` dell'oggetto e incrementa il conteggio dei riferimenti. In caso contrario, le query per l'interfaccia sulla classe tear-off utilizzando il metodo [InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) ereditato da `CComObjectRootEx`.

##  <a name="release"></a>  CComCachedTearOffObject::Release

Decrementa il conteggio dei riferimenti di 1 e, se il conteggio dei riferimenti è 0, `CComCachedTearOffObject` Elimina l'oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle compilazioni non di debug restituisce sempre 0. Nelle build di debug restituisce un valore che può essere utile per la diagnostica o il test.

## <a name="see-also"></a>Vedere anche

[Classe CComTearOffObject](../../atl/reference/ccomtearoffobject-class.md)<br/>
[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
