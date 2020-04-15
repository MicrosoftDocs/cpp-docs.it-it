---
title: CComObjectGlobal (classe)
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
ms.openlocfilehash: 9a784584179186cdf1e63c1ec43cad4d59391ec3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327631"
---
# <a name="ccomobjectglobal-class"></a>CComObjectGlobal (classe)

Questa classe gestisce un conteggio dei `Base` riferimenti nel modulo contenente l'oggetto.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComObjectGlobal : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), nonché da qualsiasi altra interfaccia che si desidera supportare sull'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectGlobal::CComObjectGlobal](#ccomobjectglobal)|Costruttore.|
|[CComObjectGlobal:: CComObjectGlobal](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectGlobal::AddRef](#addref)|Implementa un `AddRef`oggetto global .|
|[CComObjectGlobal::QueryInterface](#queryinterface)|Implementa un `QueryInterface`oggetto global .|
|[CComObjectGlobal::Release](#release)|Implementa un `Release`oggetto global .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectGlobal::m_hResFinalConstruct](#m_hresfinalconstruct)|Contiene il valore HRESULT restituito `CComObjectGlobal` durante la costruzione dell'oggetto.|

## <a name="remarks"></a>Osservazioni

`CComObjectGlobal`gestisce un conteggio dei riferimenti `Base` sul modulo contenente l'oggetto. `CComObjectGlobal`assicura che l'oggetto non venga eliminato finché il modulo non viene rilasciato. L'oggetto verrà rimosso solo quando il conteggio dei riferimenti sull'intero modulo sarà pari a zero.

Ad esempio, `CComObjectGlobal`utilizzando , una class factory può contenere un oggetto globale comune condiviso da tutti i relativi client.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComObjectGlobal`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomobjectglobaladdref"></a><a name="addref"></a>CComObjectGlobal::AddRef

Incrementa il conteggio dei riferimenti dell'oggetto di 1.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica e il test.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `AddRef` chiama `_Module::Lock`, dove `_Module` è l'istanza globale di [CComModule](../../atl/reference/ccommodule-class.md) o di una classe derivata da esso.

## <a name="ccomobjectglobalccomobjectglobal"></a><a name="ccomobjectglobal"></a>CComObjectGlobal::CComObjectGlobal

Costruttore. Chiama `FinalConstruct` e [m_hResFinalConstruct](#m_hresfinalconstruct) quindi imposta `HRESULT` m_hResFinalConstruct `FinalConstruct`restituito da .

```
CComObjectGlobal(void* = NULL));
```

### <a name="remarks"></a>Osservazioni

Se la classe base non è derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md), è necessario fornire un metodo personalizzato. `FinalConstruct` Il distruttore chiama `FinalRelease`.

## <a name="ccomobjectglobalccomobjectglobal"></a><a name="dtor"></a>CComObjectGlobal:: CComObjectGlobal

Distruttore.

```
CComObjectGlobal();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).

## <a name="ccomobjectglobalm_hresfinalconstruct"></a><a name="m_hresfinalconstruct"></a>CComObjectGlobal::m_hResFinalConstruct

Contiene il valore `FinalConstruct` HRESULT da `CComObjectGlobal` chiamare durante la costruzione dell'oggetto.

```
HRESULT m_hResFinalConstruct;
```

## <a name="ccomobjectglobalqueryinterface"></a><a name="queryinterface"></a>CComObjectGlobal::QueryInterface

Recupera un puntatore al puntatore a interfaccia richiesto.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] GUID dell'interfaccia richiesta.

*Oggetto ppv*<br/>
[fuori] Puntatore al puntatore a interfaccia identificato da iid o NULL se l'interfaccia non viene trovata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

`QueryInterface` gestisce solo le interfacce nella tabella di mappe COM.

## <a name="ccomobjectglobalrelease"></a><a name="release"></a>CComObjectGlobal::Release

Decrementa il conteggio dei riferimenti dell'oggetto di 1.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build di `Release` debug restituisce un valore che può essere utile per la diagnostica e il test. Nelle compilazioni non `Release` di debug, restituisce sempre 0.In non-debug builds, always returns 0.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `Release` chiama `_Module::Unlock`, dove `_Module` è l'istanza globale di [CComModule](../../atl/reference/ccommodule-class.md) o di una classe derivata da esso.

## <a name="see-also"></a>Vedere anche

[CComObjectStack (classe)](../../atl/reference/ccomobjectstack-class.md)<br/>
[CComAggObject (classe)](../../atl/reference/ccomaggobject-class.md)<br/>
[Classe CComObject](../../atl/reference/ccomobject-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
