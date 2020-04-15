---
title: CComObjectStack (classe)
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
ms.openlocfilehash: 8c3fd56635da8b80c84f6151009586b7bd2b4341
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327583"
---
# <a name="ccomobjectstack-class"></a>CComObjectStack (classe)

Questa classe crea un oggetto COM temporaneo e fornisce `IUnknown`un'implementazione scheletrica di .

## <a name="syntax"></a>Sintassi

```
template <class  Base>
class CComObjectStack : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare sull'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectStack::CComObjectStack](#ccomobjectstack)|Costruttore.|
|[CComObjectStack:: CComObjectStack](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectStack::AddRef](#addref)|Restituisce zero. In modalità `_ASSERTE`di debug, le chiamate a .|
|[CComObjectStack::QueryInterface](#queryinterface)|Restituisce E_NOINTERFACE. In modalità `_ASSERTE`di debug, le chiamate a .|
|[CComObjectStack::Release](#release)|Restituisce zero. In modalità `_ASSERTE`di debug, le chiamate a . ~|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectStack::m_hResFinalConstruct](#m_hresfinalconstruct)|Contiene il valore HRESULT restituito `CComObjectStack` durante la costruzione dell'oggetto.|

## <a name="remarks"></a>Osservazioni

`CComObjectStack`viene utilizzato per creare un oggetto COM temporaneo e fornire `IUnknown`all'oggetto un'implementazione scheletrica di . In genere, l'oggetto viene utilizzato come variabile locale all'interno di una funzione, ovvero inserita nello stack. Poiché l'oggetto viene eliminato al termine della funzione, il conteggio dei riferimenti non viene eseguito per aumentare l'efficienza.

Nell'esempio seguente viene illustrato come creare un oggetto COM utilizzato all'interno di una funzione:The following example shows how to create a COM object used inside a function:

[!code-cpp[NVC_ATL_COM#42](../../atl/codesnippet/cpp/ccomobjectstack-class_1.cpp)]

L'oggetto `Tempobj` temporaneo viene inserito nello stack e scompare automaticamente al termine della funzione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComObjectStack`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomobjectstackaddref"></a><a name="addref"></a>CComObjectStack::AddRef

Restituisce zero.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Restituisce zero.

### <a name="remarks"></a>Osservazioni

In modalità `_ASSERTE`di debug, le chiamate a .

## <a name="ccomobjectstackccomobjectstack"></a><a name="ccomobjectstack"></a>CComObjectStack::CComObjectStack

Costruttore.

```
CComObjectStack(void* = NULL);
```

### <a name="remarks"></a>Osservazioni

Chiama `FinalConstruct` e quindi imposta [m_hResFinalConstruct](#m_hresfinalconstruct) al `FinalConstruct`valore HRESULT restituito da . Se la classe base non è derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md), è necessario fornire un metodo personalizzato. `FinalConstruct` Il distruttore chiama `FinalRelease`.

## <a name="ccomobjectstackccomobjectstack"></a><a name="dtor"></a>CComObjectStack:: CComObjectStack

Distruttore.

```
CComObjectStack();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).

## <a name="ccomobjectstackm_hresfinalconstruct"></a><a name="m_hresfinalconstruct"></a>CComObjectStack::m_hResFinalConstruct

Contiene il valore HRESULT `FinalConstruct` restituito dalla `CComObjectStack` chiamata durante la costruzione dell'oggetto.

```
HRESULT    m_hResFinalConstruct;
```

## <a name="ccomobjectstackqueryinterface"></a><a name="queryinterface"></a>CComObjectStack::QueryInterface

Restituisce E_NOINTERFACE.

```
HRESULT    QueryInterface(REFIID, void**);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOINTERFACE.

### <a name="remarks"></a>Osservazioni

In modalità `_ASSERTE`di debug, le chiamate a .

## <a name="ccomobjectstackrelease"></a><a name="release"></a>CComObjectStack::Release

Restituisce zero.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Restituisce zero.

### <a name="remarks"></a>Osservazioni

In modalità `_ASSERTE`di debug, le chiamate a .

## <a name="see-also"></a>Vedere anche

[CComAggObject (classe)](../../atl/reference/ccomaggobject-class.md)<br/>
[Classe CComObject](../../atl/reference/ccomobject-class.md)<br/>
[CComObjectGlobal (classe)](../../atl/reference/ccomobjectglobal-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
