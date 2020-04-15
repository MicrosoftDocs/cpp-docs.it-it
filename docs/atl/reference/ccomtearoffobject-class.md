---
title: CComTearOffObject (classe)
ms.date: 11/04/2016
f1_keywords:
- CComTearOffObject
- ATLCOM/ATL::CComTearOffObject
- ATLCOM/ATL::CComTearOffObject::CComTearOffObject
- ATLCOM/ATL::CComTearOffObject::AddRef
- ATLCOM/ATL::CComTearOffObject::QueryInterface
- ATLCOM/ATL::CComTearOffObject::Release
- ATLCOM/ATL::CComTearOffObjectBase
- ATLCOM/ATL::m_pOwner
helpviewer_keywords:
- tear-off interfaces, ATL
- tear-off interfaces
- CComTearOffObject class
ms.assetid: d974b598-c6b2-42b1-8360-9190d9d0fbf3
ms.openlocfilehash: de7528d3972991c233ee4b9037f609b89d0f7434
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327315"
---
# <a name="ccomtearoffobject-class"></a>CComTearOffObject (classe)

Questa classe implementa un'interfaccia tear-off.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComTearOffObject : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
La classe tear-off, `CComTearOffObjectBase` derivata da e le interfacce che si desidera che l'oggetto tear-off per supportare.

ATL implementa le interfacce tear-off in `CComTearOffObjectBase` due fasi: `QueryInterface`i `CComTearOffObject` metodi gestiscono il conteggio dei riferimenti e , mentre implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComTearOffObject::CComTearOffObject](#ccomtearoffobject)|Costruttore.|
|[Oggetto CComTearOffObject::CComTearOffObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComTearOffObject::AddRef](#addref)|Incrementa il conteggio `CComTearOffObject` dei riferimenti per un oggetto.|
|[CComTearOffObject::QueryInterface](#queryinterface)|Restituisce un puntatore all'interfaccia richiesta nella classe tear-off o nella classe proprietaria.|
|[CComTearOffObject::Release](#release)|Decrementa il conteggio `CComTearOffObject` dei riferimenti per un oggetto e lo distrugge.|

### <a name="ccomtearoffobjectbase-methods"></a>Metodi CComTearOffObjectBase

|||
|-|-|
|[CComTearOffObjectBase](#ccomtearoffobjectbase)|Costruttore.|

### <a name="ccomtearoffobjectbase-data-members"></a>Membri dati CComTearOffObjectBase

|||
|-|-|
|[m_pOwner](#m_powner)|Puntatore a `CComObject` un derivato dalla classe proprietaria.|

## <a name="remarks"></a>Osservazioni

`CComTearOffObject`implementa un'interfaccia tear-off come oggetto separato di cui viene creata un'istanza solo quando viene eseguita una query su tale interfaccia. Lo strappo viene eliminato quando il conteggio dei riferimenti diventa zero. In genere, si compila un'interfaccia tear-off per un'interfaccia che viene utilizzata raramente, poiché l'utilizzo di un tear-off salva un puntatore vtable in tutte le istanze dell'oggetto principale.

È necessario derivare la classe `CComTearOffObjectBase` che implementa il tear-off da e da qualsiasi interfaccia si desidera che l'oggetto tear-off per supportare. `CComTearOffObjectBase`è templatized sulla classe proprietaria e sul modello di thread. La classe owner è la classe dell'oggetto per il quale viene implementato uno strappo. Se non si specifica un modello di thread, viene utilizzato il modello di thread predefinito.

È necessario creare una mappa COM per la classe tear-off. Quando ATL crea un'istanza del `CComTearOffObject<CYourTearOffClass>` tear-off, verrà creato o `CComCachedTearOffObject<CYourTearOffClass>`.

Ad esempio, nell'esempio BEEPER, la `CBeeper2` classe è `CBeeper` la classe tear-off e la classe è la classe proprietaria:

[!code-cpp[NVC_ATL_COM#43](../../atl/codesnippet/cpp/ccomtearoffobject-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComTearOffObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomtearoffobjectaddref"></a><a name="addref"></a>CComTearOffObject::AddRef

Incrementa di uno `CComTearOffObject` il conteggio dei riferimenti dell'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica e il test.

## <a name="ccomtearoffobjectccomtearoffobject"></a><a name="ccomtearoffobject"></a>CComTearOffObject::CComTearOffObject

Costruttore.

```
CComTearOffObject(void* pv);
```

### <a name="parameters"></a>Parametri

*Pv*<br/>
[in] Puntatore che verrà convertito in `CComObject<Owner>` un puntatore a un oggetto.

### <a name="remarks"></a>Osservazioni

Incrementa di uno il conteggio dei riferimenti del proprietario.

## <a name="ccomtearoffobjectccomtearoffobject"></a><a name="dtor"></a>Oggetto CComTearOffObject::CComTearOffObject

Distruttore.

```
~CComTearOffObject();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate, chiama FinalRelease e decrementa il numero di blocchi del modulo.

## <a name="ccomtearoffobjectccomtearoffobjectbase"></a><a name="ccomtearoffobjectbase"></a>CComTearOffObject::CComTearOffObjectBase

Costruttore.

```
CComTearOffObjectBase();
```

### <a name="remarks"></a>Osservazioni

Inizializza il [membro m_pOwner](#m_powner) su NULL.

## <a name="ccomtearoffobjectm_powner"></a><a name="m_powner"></a>CComTearOffObject::m_pOwner

Puntatore a un oggetto [CComObject](../../atl/reference/ccomobject-class.md) derivato da *Owner*.

```
CComObject<Owner>* m_pOwner;
```

### <a name="parameters"></a>Parametri

*Proprietario*<br/>
[in] Classe per la quale viene implementato uno strappo.

### <a name="remarks"></a>Osservazioni

Il puntatore viene inizializzato su NULL durante la costruzione.

## <a name="ccomtearoffobjectqueryinterface"></a><a name="queryinterface"></a>CComTearOffObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] IID dell'interfaccia richiesta.

*Oggetto ppv*<br/>
[fuori] Puntatore al puntatore a interfaccia identificato da *iid*o NULL se l'interfaccia non viene trovata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Esegue prima una query per le interfacce sulla classe tear-off. Se l'interfaccia non è presente, esegue una query per l'interfaccia sull'oggetto proprietario. Se l'interfaccia `IUnknown`richiesta `IUnknown` è , restituisce il valore del proprietario.

## <a name="ccomtearoffobjectrelease"></a><a name="release"></a>CComTearOffObject::Release

Decrementa il conteggio dei riferimenti di uno e, se `CComTearOffObject`il conteggio dei riferimenti è zero, elimina il valore di .

```
STDMETHOD_ULONG Release();
```

### <a name="return-value"></a>Valore restituito

Nelle compilazioni non di debug, restituisce sempre zero. Nelle build di debug restituisce un valore che può essere utile per la diagnostica o il test.

## <a name="see-also"></a>Vedere anche

[CComCachedTearOffObject (classe)](../../atl/reference/ccomcachedtearoffobject-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
