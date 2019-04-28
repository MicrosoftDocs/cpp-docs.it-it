---
title: Classe CComSingleThreadModel
ms.date: 11/04/2016
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
ms.openlocfilehash: 57219ca79dfa46437a8b13d889bb5f0c5a5d6f37
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62258988"
---
# <a name="ccomsinglethreadmodel-class"></a>Classe CComSingleThreadModel

Questa classe fornisce metodi per incrementare e decrementare il valore di una variabile.

## <a name="syntax"></a>Sintassi

```
class CComSingleThreadModel
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSingleThreadModel::AutoCriticalSection](#autocriticalsection)|Fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).|
|[CComSingleThreadModel::CriticalSection](#criticalsection)|Fa riferimento alla classe `CComFakeCriticalSection`.|
|[CComSingleThreadModel::ThreadModelNoCS](#threadmodelnocs)|I riferimenti `CComSingleThreadModel`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSingleThreadModel::Decrement](#decrement)|Decrementa il valore della variabile specificata. Questa implementazione non è thread-safe.|
|[CComSingleThreadModel::Increment](#increment)|Incrementa il valore della variabile specificata. Questa implementazione non è thread-safe.|

## <a name="remarks"></a>Note

`CComSingleThreadModel` fornisce metodi per incrementare e decrementare il valore di una variabile. A differenza [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md), questi metodi non sono thread-safe.

In genere, si usa `CComSingleThreadModel` tramite uno dei due **typedef** nomi, ovvero [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) oppure [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel). La classe fa riferimento ognuno **typedef** dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:

|typedef|Singolo modello di threading|Modello di threading apartment|Modello di threading Free modello|
|-------------|----------------------------|-------------------------------|--------------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

S= `CComSingleThreadModel`; M= `CComMultiThreadModel`

`CComSingleThreadModel` stesso definisce tre **typedef** nomi. `ThreadModelNoCS` i riferimenti `CComSingleThreadModel`. `AutoCriticalSection` e `CriticalSection` classe di riferimento [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), che fornisce metodi vuoti associati ottenere e rilasciare la proprietà di una sezione critica.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="autocriticalsection"></a>  CComSingleThreadModel::AutoCriticalSection

Quando si usa `CComSingleThreadModel`, il **typedef** name `AutoCriticalSection` fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection AutoCriticalSection;
```

### <a name="remarks"></a>Note

Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contengono le definizioni per `AutoCriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe di sezione critica fa `AutoCriticalSection`:

|Classe definita in|Classe di riferimento|
|----------------------|----------------------|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComAutoCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

Oltre a `AutoCriticalSection`, è possibile usare il **typedef** name [CriticalSection](#criticalsection). Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classi statiche, se si desidera eliminare il codice di avvio di CRT.

### <a name="example"></a>Esempio

Visualizzare [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

##  <a name="criticalsection"></a>  CComSingleThreadModel::CriticalSection

Quando si usa `CComSingleThreadModel`, il **typedef** name `CriticalSection` fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection CriticalSection;
```

### <a name="remarks"></a>Note

Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contengono le definizioni per `CriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe di sezione critica fa `CriticalSection`:

|Classe definita in|Classe di riferimento|
|----------------------|----------------------|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

Oltre a `CriticalSection`, è possibile usare il **typedef** name [AutoCriticalSection](#autocriticalsection). Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classi statiche, se si desidera eliminare il codice di avvio di CRT.

### <a name="example"></a>Esempio

Visualizzare [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

##  <a name="decrement"></a>  CComSingleThreadModel::Decrement

Decrementa questa funzione statica il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Decrement(LPLONG p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
[in] Puntatore alla variabile deve essere diminuito.

### <a name="return-value"></a>Valore restituito

Il risultato del decremento.

##  <a name="increment"></a>  CComSingleThreadModel::Increment

Decrementa questa funzione statica il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Increment(LPLONG p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
[in] Puntatore alla variabile da incrementare.

### <a name="return-value"></a>Valore restituito

Il risultato dell'incremento.

##  <a name="threadmodelnocs"></a>  CComSingleThreadModel::ThreadModelNoCS

Quando si usa `CComSingleThreadModel`, il **typedef** name `ThreadModelNoCS` fa semplicemente riferimento `CComSingleThreadModel`.

```
typedef CComSingleThreadModel ThreadModelNoCS;
```

### <a name="remarks"></a>Note

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contengono le definizioni per `ThreadModelNoCS`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe a cui fanno riferimento `ThreadModelNoCS`:

|Classe definita in|Classe di riferimento|
|----------------------|----------------------|
|`CComSingleThreadModel`|`CComSingleThreadModel`|
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|

### <a name="example"></a>Esempio

Visualizzare [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
