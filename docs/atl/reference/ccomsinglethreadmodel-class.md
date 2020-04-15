---
title: CComSingleThreadModel (classe)
ms.date: 2/29/2020
f1_keywords:
- CComSingleThreadModel
- ATLBASE/ATL::CComSingleThreadModel
- ATLBASE/ATL::CComSingleThreadModel::AutoCriticalSection
- ATLBASE/ATL::CComSingleThreadModel::CriticalSection
- ATLBASE/ATL::CComSingleThreadModel::ThreadModelNoCS
- ATLBASE/ATL::CComSingleThreadModel::Decrement
- ATLBASE/ATL::CComSingleThreadModel::Increment
helpviewer_keywords:
- single-threaded applications
- CComSingleThreadModel class
- single-threaded applications, ATL
ms.assetid: e5dc30c7-405a-4ba4-8ae9-51937243fce8
ms.openlocfilehash: 3d8169c999ba96049bc711033f7ba2ef53989663
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327324"
---
# <a name="ccomsinglethreadmodel-class"></a>CComSingleThreadModel (classe)

Questa classe fornisce metodi per incrementare e decrementare il valore di una variabile.

## <a name="syntax"></a>Sintassi

```
class CComSingleThreadModel
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSingleThreadModel::AutoCriticalSection](#autocriticalsection)|Classe references [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).|
|[CComSingleThreadModel::CriticalSection](#criticalsection)|Classe `CComFakeCriticalSection`references .|
|[CComSingleThreadModel::ThreadModelNoCS](#threadmodelnocs)|Riferimenti `CComSingleThreadModel`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSingleThreadModel:ecremento :D](#decrement)|Decrementa il valore della variabile specificata. Questa implementazione non è thread-safe.|
|[CComSingleThreadModel::Incremento](#increment)|Incrementa il valore della variabile specificata. Questa implementazione non è thread-safe.|

## <a name="remarks"></a>Osservazioni

`CComSingleThreadModel`fornisce metodi per incrementare e decrementare il valore di una variabile. A differenza [di CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS,](../../atl/reference/ccommultithreadmodelnocs-class.md)questi metodi non sono thread-safe.

In genere, `CComSingleThreadModel` si utilizza uno dei due nomi **typedef,** [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) o [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel). La classe a cui fa riferimento ogni typedef dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:The class referenced by each **typedef** depends on the threading model used, as shown in the following table:

|typedef|Modello di filettatura singola|Modello di filettatura appartamento|Modello di filettatura libera|
|-------------|----------------------------|-------------------------------|--------------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

( `CComSingleThreadModel`) e così via, è stato possibile Operatore di ammortamento, la proprietà`CComMultiThreadModel`

`CComSingleThreadModel`stesso definisce tre nomi **typedef.** `ThreadModelNoCS`riferimenti `CComSingleThreadModel`. `AutoCriticalSection`e `CriticalSection` la classe di riferimento [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), che fornisce metodi vuoti associati all'ottenimento e al rilascio della proprietà di una sezione critica.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccomsinglethreadmodelautocriticalsection"></a><a name="autocriticalsection"></a>CComSingleThreadModel::AutoCriticalSection

Quando `CComSingleThreadModel`si utilizza , `AutoCriticalSection` il nome **typedef** fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection AutoCriticalSection;
```

### <a name="remarks"></a>Osservazioni

Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) `AutoCriticalSection`contengono definizioni per . Nella tabella seguente viene illustrata la relazione tra la `AutoCriticalSection`classe del modello di threading e la classe di sezione critica a cui fa riferimento :

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComAutoCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

Oltre a `AutoCriticalSection`, è possibile utilizzare il nome **typedef** [CriticalSection](#criticalsection). Non è `AutoCriticalSection` necessario specificare in oggetti globali o membri di classe statici se si desidera eliminare il codice di avvio CRT.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="ccomsinglethreadmodelcriticalsection"></a><a name="criticalsection"></a>CComSingleThreadModel::CriticalSection

Quando `CComSingleThreadModel`si utilizza , `CriticalSection` il nome **typedef** fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection CriticalSection;
```

### <a name="remarks"></a>Osservazioni

Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) `CriticalSection`contengono definizioni per . Nella tabella seguente viene illustrata la relazione tra la `CriticalSection`classe del modello di threading e la classe di sezione critica a cui fa riferimento :

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

Oltre a `CriticalSection`, è possibile utilizzare il nome **typedef** [AutoCriticalSection](#autocriticalsection). Non è `AutoCriticalSection` necessario specificare in oggetti globali o membri di classe statici se si desidera eliminare il codice di avvio CRT.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="ccomsinglethreadmodeldecrement"></a><a name="decrement"></a>CComSingleThreadModel:ecremento :D

Questa funzione statica decrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Decrement(LPLONG p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
[in] Puntatore alla variabile da decrementare.

### <a name="return-value"></a>Valore restituito

Risultato del decremento.

## <a name="ccomsinglethreadmodelincrement"></a><a name="increment"></a>CComSingleThreadModel::Incremento

Questa funzione statica incrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Increment(LPLONG p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
[in] Puntatore alla variabile da incrementare.

### <a name="return-value"></a>Valore restituito

Risultato dell'incremento.

## <a name="ccomsinglethreadmodelthreadmodelnocs"></a><a name="threadmodelnocs"></a>CComSingleThreadModel::ThreadModelNoCS

Quando `CComSingleThreadModel`si utilizza , `ThreadModelNoCS` il `CComSingleThreadModel`nome **typedef** fa semplicemente riferimento a .

```
typedef CComSingleThreadModel ThreadModelNoCS;
```

### <a name="remarks"></a>Osservazioni

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) `ThreadModelNoCS`contengono definizioni per . Nella tabella seguente viene illustrata la relazione tra `ThreadModelNoCS`la classe del modello di threading e la classe a cui fa riferimento :

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComSingleThreadModel`|`CComSingleThreadModel`|
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
