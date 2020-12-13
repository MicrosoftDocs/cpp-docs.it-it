---
description: 'Altre informazioni su: classe CComTearOffObject'
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
ms.openlocfilehash: b9fe9e7a790a004aec1de059415bd5f47572455b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142155"
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

ATL implementa le interfacce di strappo in due fasi: i `CComTearOffObjectBase` metodi gestiscono il conteggio dei riferimenti e `QueryInterface` , mentre `CComTearOffObject` implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComTearOffObject:: CComTearOffObject](#ccomtearoffobject)|Costruttore.|
|[CComTearOffObject:: ~ CComTearOffObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComTearOffObject:: AddRef](#addref)|Incrementa il conteggio dei riferimenti per un `CComTearOffObject` oggetto.|
|[CComTearOffObject:: QueryInterface](#queryinterface)|Restituisce un puntatore all'interfaccia richiesta nella classe tear-off o nel proprietario.|
|[CComTearOffObject:: Release](#release)|Decrementa il conteggio dei riferimenti per un `CComTearOffObject` oggetto e lo elimina.|

### <a name="ccomtearoffobjectbase-methods"></a>Metodi CComTearOffObjectBase

|Funzione|Descrizione|
|-|-|
|[CComTearOffObjectBase](#ccomtearoffobjectbase)|Costruttore.|

### <a name="ccomtearoffobjectbase-data-members"></a>Membri dati CComTearOffObjectBase

|Membro dei dati|Description|
|-|-|
|[m_pOwner](#m_powner)|Puntatore a un oggetto `CComObject` derivato dalla classe Owner.|

## <a name="remarks"></a>Commenti

`CComTearOffObject` implementa un'interfaccia di strappo come oggetto separato di cui viene creata un'istanza solo quando viene eseguita una query su tale interfaccia. Lo strappo viene eliminato quando il conteggio dei riferimenti diventa zero. In genere, si compila un'interfaccia di strappo per un'interfaccia raramente utilizzata, poiché l'utilizzo di un tear-off salva un puntatore vtable in tutte le istanze dell'oggetto principale.

È necessario derivare la classe implementando l'oggetto tear-off da `CComTearOffObjectBase` e da qualsiasi interfaccia che si desidera venga supportata dall'oggetto tear-off. `CComTearOffObjectBase` è creato un modello sulla classe Owner e sul modello di thread. La classe Owner è la classe dell'oggetto per cui è in corso l'implementazione di un tear-off. Se non si specifica un modello di thread, viene utilizzato il modello di thread predefinito.

È necessario creare una mappa COM per la classe tear-off. Quando ATL crea un'istanza dello strappo, creerà `CComTearOffObject<CYourTearOffClass>` o `CComCachedTearOffObject<CYourTearOffClass>` .

Nell'esempio BEEPer, ad esempio, la `CBeeper2` classe è la classe tear-off e la `CBeeper` classe è la classe Owner:

[!code-cpp[NVC_ATL_COM#43](../../atl/codesnippet/cpp/ccomtearoffobject-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComTearOffObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ccomtearoffobjectaddref"></a><a name="addref"></a> CComTearOffObject:: AddRef

Incrementa di uno il conteggio dei riferimenti dell' `CComTearOffObject` oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica e il test.

## <a name="ccomtearoffobjectccomtearoffobject"></a><a name="ccomtearoffobject"></a> CComTearOffObject:: CComTearOffObject

Costruttore.

```
CComTearOffObject(void* pv);
```

### <a name="parameters"></a>Parametri

*PV*<br/>
in Puntatore che verrà convertito in un puntatore a un `CComObject<Owner>` oggetto.

### <a name="remarks"></a>Commenti

Incrementa di uno il conteggio dei riferimenti del proprietario.

## <a name="ccomtearoffobjectccomtearoffobject"></a><a name="dtor"></a> CComTearOffObject:: ~ CComTearOffObject

Distruttore.

```
~CComTearOffObject();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate, chiama FinalRelease e decrementa il conteggio dei blocchi del modulo.

## <a name="ccomtearoffobjectccomtearoffobjectbase"></a><a name="ccomtearoffobjectbase"></a> CComTearOffObject:: CComTearOffObjectBase

Costruttore.

```
CComTearOffObjectBase();
```

### <a name="remarks"></a>Commenti

Inizializza il membro [m_pOwner](#m_powner) su null.

## <a name="ccomtearoffobjectm_powner"></a><a name="m_powner"></a> CComTearOffObject:: m_pOwner

Puntatore a un oggetto [CComObject](../../atl/reference/ccomobject-class.md) derivato dal *proprietario*.

```
CComObject<Owner>* m_pOwner;
```

### <a name="parameters"></a>Parametri

*Proprietario*<br/>
in Classe per la quale è in corso l'implementazione di un tear-off.

### <a name="remarks"></a>Commenti

Il puntatore viene inizializzato su NULL durante la costruzione.

## <a name="ccomtearoffobjectqueryinterface"></a><a name="queryinterface"></a> CComTearOffObject:: QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in IID dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia identificato da *IID* oppure null se l'interfaccia non viene trovata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Esegue prima una query per le interfacce della classe tear-off. Se l'interfaccia non è presente, esegue una query per l'interfaccia nell'oggetto proprietario. Se l'interfaccia richiesta è `IUnknown` , restituisce l'oggetto `IUnknown` del proprietario.

## <a name="ccomtearoffobjectrelease"></a><a name="release"></a> CComTearOffObject:: Release

Decrementa il conteggio dei riferimenti di uno e, se il conteggio dei riferimenti è zero, Elimina `CComTearOffObject` .

```
STDMETHOD_ULONG Release();
```

### <a name="return-value"></a>Valore restituito

Nelle compilazioni non di debug restituisce sempre zero. Nelle build di debug restituisce un valore che può essere utile per la diagnostica o il test.

## <a name="see-also"></a>Vedi anche

[Classe CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
