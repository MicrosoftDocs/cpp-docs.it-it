---
description: 'Altre informazioni su: classe CComObjectGlobal'
title: Classe CComObjectGlobal
ms.date: 11/04/2016
f1_keywords:
- CComObjectGlobal
- ATLCOM/ATL::CComObjectGlobal
- ATLCOM/ATL::CComObjectGlobal::CComObjectGlobal
- ATLCOM/ATL::CComObjectGlobal::AddRef
- ATLCOM/ATL::CComObjectGlobal::QueryInterface
- ATLCOM/ATL::CComObjectGlobal::Release
- ATLCOM/ATL::CComObjectGlobal::m_hResFinalConstruct
helpviewer_keywords:
- CComObjectGlobal class
ms.assetid: 79bdee55-66e4-4536-b5b3-bdf09f78b9a6
ms.openlocfilehash: 0f79acb0fdbb43f9456e08f26875d45eec9904c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97151983"
---
# <a name="ccomobjectglobal-class"></a>Classe CComObjectGlobal

Questa classe gestisce un conteggio dei riferimenti nel modulo che contiene l' `Base` oggetto.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComObjectGlobal : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare nell'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComObjectGlobal:: CComObjectGlobal](#ccomobjectglobal)|Costruttore.|
|[CComObjectGlobal:: ~ CComObjectGlobal](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComObjectGlobal:: AddRef](#addref)|Implementa un oggetto globale `AddRef` .|
|[CComObjectGlobal:: QueryInterface](#queryinterface)|Implementa un oggetto globale `QueryInterface` .|
|[CComObjectGlobal:: Release](#release)|Implementa un oggetto globale `Release` .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CComObjectGlobal:: m_hResFinalConstruct](#m_hresfinalconstruct)|Contiene HRESULT restituito durante la costruzione dell' `CComObjectGlobal` oggetto.|

## <a name="remarks"></a>Commenti

`CComObjectGlobal` gestisce un conteggio dei riferimenti nel modulo che contiene l' `Base` oggetto. `CComObjectGlobal` assicura che l'oggetto non venga eliminato fino a quando non viene rilasciato il modulo. L'oggetto verrà rimosso solo quando il conteggio dei riferimenti nell'intero modulo passa a zero.

Usando, ad esempio `CComObjectGlobal` , un class factory può avere un oggetto globale comune condiviso da tutti i relativi client.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComObjectGlobal`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ccomobjectglobaladdref"></a><a name="addref"></a> CComObjectGlobal:: AddRef

Incrementa di 1 il conteggio dei riferimenti dell'oggetto.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica e il test.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, `AddRef` chiama `_Module::Lock` , dove `_Module` è l'istanza globale di [CComModule](../../atl/reference/ccommodule-class.md) o una classe derivata da essa.

## <a name="ccomobjectglobalccomobjectglobal"></a><a name="ccomobjectglobal"></a> CComObjectGlobal:: CComObjectGlobal

Costruttore. Chiama `FinalConstruct` e quindi imposta [m_hResFinalConstruct](#m_hresfinalconstruct) sull'oggetto `HRESULT` restituito da `FinalConstruct` .

```
CComObjectGlobal(void* = NULL));
```

### <a name="remarks"></a>Commenti

Se la classe base non è stata derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md), è necessario fornire un `FinalConstruct` metodo personalizzato. Il distruttore chiama `FinalRelease`.

## <a name="ccomobjectglobalccomobjectglobal"></a><a name="dtor"></a> CComObjectGlobal:: ~ CComObjectGlobal

Distruttore.

```
CComObjectGlobal();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).

## <a name="ccomobjectglobalm_hresfinalconstruct"></a><a name="m_hresfinalconstruct"></a> CComObjectGlobal:: m_hResFinalConstruct

Contiene HRESULT da chiamare `FinalConstruct` durante la costruzione dell' `CComObjectGlobal` oggetto.

```
HRESULT m_hResFinalConstruct;
```

## <a name="ccomobjectglobalqueryinterface"></a><a name="queryinterface"></a> CComObjectGlobal:: QueryInterface

Recupera un puntatore al puntatore a interfaccia richiesto.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in GUID dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia identificato da IID oppure NULL se l'interfaccia non viene trovata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

`QueryInterface` gestisce solo le interfacce nella tabella di mappe COM.

## <a name="ccomobjectglobalrelease"></a><a name="release"></a> CComObjectGlobal:: Release

Decrementa di 1 il conteggio dei riferimenti dell'oggetto.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build di debug `Release` restituisce un valore che può essere utile per la diagnostica e il test. Nelle compilazioni non di debug `Release` restituisce sempre 0.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, `Release` chiama `_Module::Unlock` , dove `_Module` è l'istanza globale di [CComModule](../../atl/reference/ccommodule-class.md) o una classe derivata da essa.

## <a name="see-also"></a>Vedi anche

[Classe CComObjectStack](../../atl/reference/ccomobjectstack-class.md)<br/>
[Classe Ccomaggobjec](../../atl/reference/ccomaggobject-class.md)<br/>
[Classe CComObject](../../atl/reference/ccomobject-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
