---
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
ms.openlocfilehash: ec3abd04ce72cce98dae72a1ed8cbb8d9fe72079
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62259339"
---
# <a name="ccomobjectglobal-class"></a>Classe CComObjectGlobal

Questa classe gestisce un conteggio dei riferimenti in cui il modulo che contiene il `Base` oggetto.

## <a name="syntax"></a>Sintassi

```
template<class Base>
class CComObjectGlobal : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) oppure [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da qualsiasi altra interfaccia si desidera supportare nell'oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectGlobal::CComObjectGlobal](#ccomobjectglobal)|Costruttore.|
|[CComObjectGlobal::~CComObjectGlobal](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectGlobal::AddRef](#addref)|Implementa un globale `AddRef`.|
|[CComObjectGlobal::QueryInterface](#queryinterface)|Implementa un globale `QueryInterface`.|
|[CComObjectGlobal::Release](#release)|Implementa un globale `Release`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComObjectGlobal::m_hResFinalConstruct](#m_hresfinalconstruct)|Contiene il valore HRESULT restituito durante la costruzione del `CComObjectGlobal` oggetto.|

## <a name="remarks"></a>Note

`CComObjectGlobal` gestisce un conteggio dei riferimenti in cui il modulo che contiene il `Base` oggetto. `CComObjectGlobal` assicura che l'oggetto non verrà eliminato fino a quando il modulo non viene rilasciato. L'oggetto verrà rimossa solo quando il conteggio dei riferimenti nell'intero modulo si avvicina allo zero.

Ad esempio, usando `CComObjectGlobal`, una class factory può contenere un oggetto globale comune condivisa da tutti i relativi client.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComObjectGlobal`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="addref"></a>  CComObjectGlobal::AddRef

Incrementa il conteggio dei riferimenti dell'oggetto di 1.

```
STDMETHOD_(ULONG, AddRef)();
```

### <a name="return-value"></a>Valore restituito

Un valore che può essere utile per la diagnostica e di test.

### <a name="remarks"></a>Note

Per impostazione predefinita `AddRef` chiamate `_Module::Lock`, dove `_Module` è l'istanza globale di [CComModule](../../atl/reference/ccommodule-class.md) o una classe derivata da esso.

##  <a name="ccomobjectglobal"></a>  CComObjectGlobal::CComObjectGlobal

Costruttore. Le chiamate `FinalConstruct` e quindi imposta [m_hResFinalConstruct](#m_hresfinalconstruct) per il `HRESULT` restituito da `FinalConstruct`.

```
CComObjectGlobal(void* = NULL));
```

### <a name="remarks"></a>Note

Se non è stata derivata la classe base dalla [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md), è necessario fornire il proprio `FinalConstruct` (metodo). Il distruttore chiama `FinalRelease`.

##  <a name="dtor"></a>  CComObjectGlobal::~CComObjectGlobal

Distruttore.

```
CComObjectGlobal();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).

##  <a name="m_hresfinalconstruct"></a>  CComObjectGlobal::m_hResFinalConstruct

Contiene il valore HRESULT di chiamare `FinalConstruct` durante la costruzione del `CComObjectGlobal` oggetto.

```
HRESULT m_hResFinalConstruct;
```

##  <a name="queryinterface"></a>  CComObjectGlobal::QueryInterface

Recupera un puntatore al puntatore a interfaccia richiesto.

```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*iid*<br/>
[in] Il GUID dell'interfaccia richiesto.

*ppvObject*<br/>
[out] Puntatore al puntatore a interfaccia identificato dal iid, o NULL se l'interfaccia non viene trovato.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

`QueryInterface` gestisce solo le interfacce nella tabella di mappe COM.

##  <a name="release"></a>  CComObjectGlobal::Release

Decrementa il conteggio dei riferimenti dell'oggetto di 1.

```
STDMETHOD_(ULONG, Release)();
```

### <a name="return-value"></a>Valore restituito

Nelle build di debug `Release` restituisce un valore che può essere utile per la diagnostica e di test. Nelle compilazioni non di debug, `Release` restituisce sempre 0.

### <a name="remarks"></a>Note

Per impostazione predefinita `Release` chiamate `_Module::Unlock`, dove `_Module` è l'istanza globale di [CComModule](../../atl/reference/ccommodule-class.md) o una classe derivata da esso.

## <a name="see-also"></a>Vedere anche

[Classe CComObjectStack](../../atl/reference/ccomobjectstack-class.md)<br/>
[Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)<br/>
[Classe CComObject](../../atl/reference/ccomobject-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
