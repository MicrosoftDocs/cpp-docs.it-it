---
title: Classe CComObjectStack | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComObjectStack
- ATLCOM/ATL::CComObjectStack
- ATLCOM/ATL::CComObjectStack::CComObjectStack
- ATLCOM/ATL::CComObjectStack::AddRef
- ATLCOM/ATL::CComObjectStack::QueryInterface
- ATLCOM/ATL::CComObjectStack::Release
- ATLCOM/ATL::CComObjectStack::m_hResFinalConstruct
dev_langs:
- C++
helpviewer_keywords:
- CComObjectStack class
ms.assetid: 3da72c40-c834-45f6-bb76-6ac204028d80
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 277951a5425a75c9769c5a2c4104421303f677c2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46065341"
---
# <a name="ccomobjectstack-class"></a>Classe CComObjectStack

Questa classe crea un oggetto COM temporaneo e fornisce un'implementazione di base di `IUnknown`.

## <a name="syntax"></a>Sintassi

```
template <class  Base>
class CComObjectStack : public Base
```

#### <a name="parameters"></a>Parametri

*base*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) oppure [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da qualsiasi altra interfaccia si desidera supportare nell'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectStack::CComObjectStack](#ccomobjectstack)|Costruttore.|
|[CComObjectStack:: ~ CComObjectStack](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectStack::AddRef](#addref)|Restituisce zero. In modalità debug, chiama `_ASSERTE`.|
|[CComObjectStack::QueryInterface](#queryinterface)|Restituisce E_NOINTERFACE. In modalità debug, chiama `_ASSERTE`.|
|[CComObjectStack::Release](#release)|Restituisce zero. In modalità debug, chiama `_ASSERTE`. ~|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectStack::m_hResFinalConstruct](#m_hresfinalconstruct)|Contiene il valore HRESULT restituito durante la costruzione del `CComObjectStack` oggetto.|

## <a name="remarks"></a>Note

`CComObjectStack` viene usato per creare un oggetto COM temporaneo e fornire l'oggetto un'implementazione di base di `IUnknown`. In genere, l'oggetto viene usato come variabile locale all'interno di una funzione (cioè, viene inserita nello stack). Poiché l'oggetto viene eliminato al termine della funzione, il conteggio dei riferimenti non viene eseguita per aumentare l'efficienza.

Nell'esempio seguente viene illustrato come creare un oggetto COM utilizzato all'interno di una funzione:

[!code-cpp[NVC_ATL_COM#42](../../atl/codesnippet/cpp/ccomobjectstack-class_1.cpp)]

L'oggetto temporaneo `Tempobj` viene inserito nello stack e viene automaticamente rimosso al termine della funzione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComObjectStack`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="addref"></a>  CComObjectStack::AddRef

Restituisce zero.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Restituisce zero.

### <a name="remarks"></a>Note

In modalità debug, chiama `_ASSERTE`.

##  <a name="ccomobjectstack"></a>  CComObjectStack::CComObjectStack

Costruttore.

```
CComObjectStack(void* = NULL);
```

### <a name="remarks"></a>Note

Le chiamate `FinalConstruct` e quindi imposta [m_hResFinalConstruct](#m_hresfinalconstruct) al valore HRESULT restituito dal `FinalConstruct`. Se non è stata derivata la classe base dalla [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md), è necessario fornire il proprio `FinalConstruct` (metodo). Il distruttore chiama `FinalRelease`.

##  <a name="dtor"></a>  CComObjectStack:: ~ CComObjectStack

Distruttore.

```
CComObjectStack();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).

##  <a name="m_hresfinalconstruct"></a>  CComObjectStack::m_hResFinalConstruct

Contiene il valore HRESULT restituito dalla chiamata `FinalConstruct` durante la costruzione del `CComObjectStack` oggetto.

```
HRESULT    m_hResFinalConstruct;
```

##  <a name="queryinterface"></a>  CComObjectStack::QueryInterface

Restituisce E_NOINTERFACE.

```
HRESULT    QueryInterface(REFIID, void**);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOINTERFACE.

### <a name="remarks"></a>Note

In modalità debug, chiama `_ASSERTE`.

##  <a name="release"></a>  CComObjectStack::Release

Restituisce zero.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Restituisce zero.

### <a name="remarks"></a>Note

In modalità debug, chiama `_ASSERTE`.

## <a name="see-also"></a>Vedere anche

[Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)<br/>
[Classe CComObject](../../atl/reference/ccomobject-class.md)<br/>
[Classe CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
