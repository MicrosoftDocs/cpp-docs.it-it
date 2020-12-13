---
description: 'Altre informazioni su: classe CComObjectStack'
title: Classe CComObjectStack
ms.date: 11/04/2016
f1_keywords:
- CComObjectStack
- ATLCOM/ATL::CComObjectStack
- ATLCOM/ATL::CComObjectStack::CComObjectStack
- ATLCOM/ATL::CComObjectStack::AddRef
- ATLCOM/ATL::CComObjectStack::QueryInterface
- ATLCOM/ATL::CComObjectStack::Release
- ATLCOM/ATL::CComObjectStack::m_hResFinalConstruct
helpviewer_keywords:
- CComObjectStack class
ms.assetid: 3da72c40-c834-45f6-bb76-6ac204028d80
ms.openlocfilehash: 5713601a765ad9ff1c32992d1f9c517dd86affca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142415"
---
# <a name="ccomobjectstack-class"></a>Classe CComObjectStack

Questa classe crea un oggetto COM temporaneo e fornisce un'implementazione scheletrica di `IUnknown` .

## <a name="syntax"></a>Sintassi

```
template <class  Base>
class CComObjectStack : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare nell'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComObjectStack:: CComObjectStack](#ccomobjectstack)|Costruttore.|
|[CComObjectStack:: ~ CComObjectStack](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComObjectStack:: AddRef](#addref)|Restituisce zero. In modalità di debug, chiama `_ASSERTE` .|
|[CComObjectStack:: QueryInterface](#queryinterface)|Restituisce E_NOINTERFACE. In modalità di debug, chiama `_ASSERTE` .|
|[CComObjectStack:: Release](#release)|Restituisce zero. In modalità di debug, chiama `_ASSERTE` . ~|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CComObjectStack:: m_hResFinalConstruct](#m_hresfinalconstruct)|Contiene HRESULT restituito durante la costruzione dell' `CComObjectStack` oggetto.|

## <a name="remarks"></a>Commenti

`CComObjectStack` viene utilizzato per creare un oggetto COM temporaneo e fornire all'oggetto un'implementazione scheletrica di `IUnknown` . In genere, l'oggetto viene utilizzato come variabile locale all'interno di una funzione, ovvero inserito nello stack. Poiché l'oggetto viene eliminato definitivamente al termine della funzione, il conteggio dei riferimenti non viene eseguito per aumentare l'efficienza.

Nell'esempio seguente viene illustrato come creare un oggetto COM utilizzato all'interno di una funzione:

[!code-cpp[NVC_ATL_COM#42](../../atl/codesnippet/cpp/ccomobjectstack-class_1.cpp)]

L'oggetto temporaneo `Tempobj` viene inserito nello stack e scompare automaticamente al termine della funzione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComObjectStack`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ccomobjectstackaddref"></a><a name="addref"></a> CComObjectStack:: AddRef

Restituisce zero.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Restituisce zero.

### <a name="remarks"></a>Commenti

In modalità di debug, chiama `_ASSERTE` .

## <a name="ccomobjectstackccomobjectstack"></a><a name="ccomobjectstack"></a> CComObjectStack:: CComObjectStack

Costruttore.

```
CComObjectStack(void* = NULL);
```

### <a name="remarks"></a>Commenti

Chiama `FinalConstruct` e quindi imposta [m_hResFinalConstruct](#m_hresfinalconstruct) sul valore HRESULT restituito da `FinalConstruct` . Se la classe base non è stata derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md), è necessario fornire un `FinalConstruct` metodo personalizzato. Il distruttore chiama `FinalRelease`.

## <a name="ccomobjectstackccomobjectstack"></a><a name="dtor"></a> CComObjectStack:: ~ CComObjectStack

Distruttore.

```
CComObjectStack();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).

## <a name="ccomobjectstackm_hresfinalconstruct"></a><a name="m_hresfinalconstruct"></a> CComObjectStack:: m_hResFinalConstruct

Contiene HRESULT restituito dalla chiamata `FinalConstruct` di durante la costruzione dell' `CComObjectStack` oggetto.

```
HRESULT    m_hResFinalConstruct;
```

## <a name="ccomobjectstackqueryinterface"></a><a name="queryinterface"></a> CComObjectStack:: QueryInterface

Restituisce E_NOINTERFACE.

```
HRESULT    QueryInterface(REFIID, void**);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOINTERFACE.

### <a name="remarks"></a>Commenti

In modalità di debug, chiama `_ASSERTE` .

## <a name="ccomobjectstackrelease"></a><a name="release"></a> CComObjectStack:: Release

Restituisce zero.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Restituisce zero.

### <a name="remarks"></a>Commenti

In modalità di debug, chiama `_ASSERTE` .

## <a name="see-also"></a>Vedi anche

[Classe Ccomaggobjec](../../atl/reference/ccomaggobject-class.md)<br/>
[Classe CComObject](../../atl/reference/ccomobject-class.md)<br/>
[Classe CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
