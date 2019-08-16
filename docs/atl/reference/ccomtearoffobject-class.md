---
title: Classe CComTearOffObject
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
ms.openlocfilehash: 0d27a6fa3c0070cd32c78971a7544327c51d4393
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496922"
---
# <a name="ccomtearoffobject-class"></a>Classe CComTearOffObject

Questa classe implementa un'interfaccia tear-off.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComTearOffObject : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
La classe tear-off, derivata da `CComTearOffObjectBase` e le interfacce desiderate per il supporto dell'oggetto tear-off.

ATL implementa le interfacce di strappo in due fasi: i `CComTearOffObjectBase` metodi gestiscono il conteggio dei `QueryInterface`riferimenti e `CComTearOffObject` , mentre implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown).

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CComTearOffObject::CComTearOffObject](#ccomtearoffobject)|Costruttore.|
|[CComTearOffObject::~CComTearOffObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CComTearOffObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti per un `CComTearOffObject` oggetto.|
|[CComTearOffObject::QueryInterface](#queryinterface)|Restituisce un puntatore all'interfaccia richiesta nella classe tear-off o nel proprietario.|
|[CComTearOffObject:: Release](#release)|Decrementa il conteggio dei riferimenti per `CComTearOffObject` un oggetto e lo elimina.|

### <a name="ccomtearoffobjectbase-methods"></a>Metodi CComTearOffObjectBase

|||
|-|-|
|[CComTearOffObjectBase](#ccomtearoffobjectbase)|Costruttore.|

### <a name="ccomtearoffobjectbase-data-members"></a>Membri dati CComTearOffObjectBase

|||
|-|-|
|[m_pOwner](#m_powner)|Puntatore a un oggetto `CComObject` derivato dalla classe Owner.|

## <a name="remarks"></a>Note

`CComTearOffObject`implementa un'interfaccia di strappo come oggetto separato di cui viene creata un'istanza solo quando viene eseguita una query su tale interfaccia. Lo strappo viene eliminato quando il conteggio dei riferimenti diventa zero. In genere, si compila un'interfaccia di strappo per un'interfaccia raramente utilizzata, poiché l'utilizzo di un tear-off salva un puntatore vtable in tutte le istanze dell'oggetto principale.

È necessario derivare la classe implementando l'oggetto Tear `CComTearOffObjectBase` -off da e da qualsiasi interfaccia che si desidera venga supportata dall'oggetto tear-off. `CComTearOffObjectBase`è creato un modello sulla classe Owner e sul modello di thread. La classe Owner è la classe dell'oggetto per cui è in corso l'implementazione di un tear-off. Se non si specifica un modello di thread, viene utilizzato il modello di thread predefinito.

È necessario creare una mappa COM per la classe tear-off. Quando ATL crea un'istanza dello strappo, `CComTearOffObject<CYourTearOffClass>` creerà o. `CComCachedTearOffObject<CYourTearOffClass>`

Nell'esempio BEEPER, ad esempio, la `CBeeper2` classe è la classe tear-off e la `CBeeper` classe è la classe Owner:

[!code-cpp[NVC_ATL_COM#43](../../atl/codesnippet/cpp/ccomtearoffobject-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComTearOffObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="addref"></a>CComTearOffObject:: AddRef

Incrementa di uno il conteggio dei riferimenti `CComTearOffObject` dell'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica e il test.

##  <a name="ccomtearoffobject"></a>CComTearOffObject:: CComTearOffObject

Costruttore.

```
CComTearOffObject(void* pv);
```

### <a name="parameters"></a>Parametri

*pv*<br/>
in Puntatore che verrà convertito in un puntatore a un `CComObject<Owner>` oggetto.

### <a name="remarks"></a>Note

Incrementa di uno il conteggio dei riferimenti del proprietario.

##  <a name="dtor"></a>CComTearOffObject:: ~ CComTearOffObject

Distruttore.

```
~CComTearOffObject();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate, chiama FinalRelease e decrementa il conteggio dei blocchi del modulo.

##  <a name="ccomtearoffobjectbase"></a>CComTearOffObject:: CComTearOffObjectBase

Costruttore.

```
CComTearOffObjectBase();
```

### <a name="remarks"></a>Note

Inizializza il membro [m_pOwner](#m_powner) su null.

##  <a name="m_powner"></a>CComTearOffObject:: m_pOwner

Puntatore a un oggetto [CComObject](../../atl/reference/ccomobject-class.md) derivato dal *proprietario*.

```
CComObject<Owner>* m_pOwner;
```

### <a name="parameters"></a>Parametri

*Proprietario*<br/>
in Classe per la quale è in corso l'implementazione di un tear-off.

### <a name="remarks"></a>Note

Il puntatore viene inizializzato su NULL durante la costruzione.

##  <a name="queryinterface"></a>  CComTearOffObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*iid*<br/>
in IID dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia identificato da *IID*oppure null se l'interfaccia non viene trovata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

Esegue prima una query per le interfacce della classe tear-off. Se l'interfaccia non è presente, esegue una query per l'interfaccia nell'oggetto proprietario. Se l'interfaccia richiesta è `IUnknown`, restituisce l' `IUnknown` oggetto del proprietario.

##  <a name="release"></a>CComTearOffObject:: Release

Decrementa il conteggio dei riferimenti di uno e, se il conteggio dei riferimenti è zero, `CComTearOffObject`Elimina.

```
STDMETHOD_ULONG Release();
```

### <a name="return-value"></a>Valore restituito

Nelle compilazioni non di debug restituisce sempre zero. Nelle build di debug restituisce un valore che può essere utile per la diagnostica o il test.

## <a name="see-also"></a>Vedere anche

[Classe CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
