---
title: Classe CComTearOffObject | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComTearOffObject
- ATLCOM/ATL::CComTearOffObject
- ATLCOM/ATL::CComTearOffObject::CComTearOffObject
- ATLCOM/ATL::CComTearOffObject::AddRef
- ATLCOM/ATL::CComTearOffObject::QueryInterface
- ATLCOM/ATL::CComTearOffObject::Release
- ATLCOM/ATL::CComTearOffObjectBase
- ATLCOM/ATL::m_pOwner
dev_langs:
- C++
helpviewer_keywords:
- tear-off interfaces, ATL
- tear-off interfaces
- CComTearOffObject class
ms.assetid: d974b598-c6b2-42b1-8360-9190d9d0fbf3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3814dacff2861bf78800adb8a019b696ce2756b7
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43752762"
---
# <a name="ccomtearoffobject-class"></a>Classe CComTearOffObject

Questa classe implementa un'interfaccia tear-off.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComTearOffObject : public Base
```

#### <a name="parameters"></a>Parametri

*base*  
La classe a comparsa, derivata da `CComTearOffObjectBase` e le interfacce si desidera che l'oggetto tear-off per il supporto.

ATL implementa le interfacce tear-off in due fasi, ovvero il `CComTearOffObjectBase` metodi gestiscono il conteggio dei riferimenti e `QueryInterface`, mentre `CComTearOffObject` implementa [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComTearOffObject::CComTearOffObject](#ccomtearoffobject)|Costruttore.|
|[CComTearOffObject:: ~ CComTearOffObject](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComTearOffObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti per un `CComTearOffObject` oggetto.|
|[CComTearOffObject::QueryInterface](#queryinterface)|Restituisce un puntatore all'interfaccia richiesta in classe a comparsa o la classe proprietario.|
|[CComTearOffObject::Release](#release)|Decrementa il conteggio dei riferimenti per un `CComTearOffObject` dell'oggetto e lo elimina.|

### <a name="ccomtearoffobjectbase-methods"></a>Metodi CComTearOffObjectBase

|||
|-|-|
|[CComTearOffObjectBase](#ccomtearoffobjectbase)|Costruttore.|

### <a name="ccomtearoffobjectbase-data-members"></a>Membri dati CComTearOffObjectBase

|||
|-|-|
|[m_pOwner](#m_powner)|Un puntatore a un `CComObject` derivato dalla classe proprietario.|

## <a name="remarks"></a>Note

`CComTearOffObject` implementa un'interfaccia tear-off come oggetto separato che viene creata un'istanza solo quando viene eseguita una query per tale interfaccia. Il tear-off viene eliminata quando il conteggio dei riferimenti diventa zero. In genere, si compila un'interfaccia tear-off per un'interfaccia che viene usata raramente, poiché utilizzo un tear-off Salva un puntatore vtable in tutte le istanze dell'oggetto principale.

È consigliabile derivare la classe che implementa il tear-off da `CComTearOffObjectBase` e da qualunque interfacce si desidera che l'oggetto tear-off per il supporto. `CComTearOffObjectBase` viene creato un modello nella classe del proprietario e il modello di thread. La classe proprietario è la classe dell'oggetto per cui un tear-off si prediligono. Se non si specifica un modello di thread, viene usato il modello di thread predefinito.

È consigliabile creare una mappa COM per la classe a comparsa. Quando si crea un'istanza ATL tear-off, verrà creato `CComTearOffObject<CYourTearOffClass>` o `CComCachedTearOffObject<CYourTearOffClass>`.

Ad esempio, nell'esempio CERCAPERSONE, la `CBeeper2` è la classe tear-off e `CBeeper` è la classe proprietario:

[!code-cpp[NVC_ATL_COM#43](../../atl/codesnippet/cpp/ccomtearoffobject-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComTearOffObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="addref"></a>  CComTearOffObject::AddRef

Incrementa il conteggio dei riferimenti di `CComTearOffObject` oggetto da uno.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Un valore che può essere utile per la diagnostica e di test.

##  <a name="ccomtearoffobject"></a>  CComTearOffObject::CComTearOffObject

Costruttore.

```
CComTearOffObject(void* pv);
```

### <a name="parameters"></a>Parametri

*PV*  
[in] Puntatore che verrà convertita in un puntatore a un `CComObject<Owner>` oggetto.

### <a name="remarks"></a>Note

Incrementa il conteggio dei riferimenti del proprietario di uno.

##  <a name="dtor"></a>  CComTearOffObject:: ~ CComTearOffObject

Distruttore.

```
~CComTearOffObject();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate, chiama FinalRelease e decrementa il modulo di conteggio di blocco.

##  <a name="ccomtearoffobjectbase"></a>  CComTearOffObject::CComTearOffObjectBase

Costruttore.

```
CComTearOffObjectBase();
```

### <a name="remarks"></a>Note

Inizializza la [m_pOwner](#m_powner) membro su NULL.

##  <a name="m_powner"></a>  CComTearOffObject::m_pOwner

Un puntatore a un [CComObject](../../atl/reference/ccomobject-class.md) oggetto derivato da *proprietario*.

```
CComObject<Owner>* m_pOwner;
```

### <a name="parameters"></a>Parametri

*Proprietario*  
[in] La classe per il quale un tear-off si prediligono.

### <a name="remarks"></a>Note

Il puntatore viene inizializzato su NULL durante la costruzione.

##  <a name="queryinterface"></a>  CComTearOffObject::QueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*IID*  
[in] IID dell'interfaccia richiesta.

*ppvObject*  
[out] Un puntatore al puntatore a interfaccia identificato dal *iid*, oppure NULL se l'interfaccia non viene trovato.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Prima di tutto una query per le interfacce nella classe tear-off. Se l'interfaccia non è disponibile, le query per l'interfaccia sull'oggetto proprietario. Se l'interfaccia richiesta è `IUnknown`, restituisce il `IUnknown` del proprietario.

##  <a name="release"></a>  CComTearOffObject::Release

Decrementa il conteggio dei riferimenti da uno e, se il conteggio dei riferimenti è zero, viene eliminato il `CComTearOffObject`.

```
STDMETHOD_ULONG Release();
```

### <a name="return-value"></a>Valore restituito

Nelle compilazioni non di debug, restituisce sempre zero. Nelle build di debug, restituisce un valore che può essere utile per la diagnostica o di testing.

## <a name="see-also"></a>Vedere anche

[Classe CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)
