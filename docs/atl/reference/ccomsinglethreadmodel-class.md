---
title: Classe CComSingleThreadModel
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
ms.openlocfilehash: 9b111e06ba475a5077ba36b2235e8bd530302189
ms.sourcegitcommit: ab8d7b47b63b62892a1256a09b1324a9a136eccf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/02/2020
ms.locfileid: "78215452"
---
# <a name="ccomsinglethreadmodel-class"></a>Classe CComSingleThreadModel

Questa classe fornisce metodi per incrementare e decrementare il valore di una variabile.

## <a name="syntax"></a>Sintassi

```
class CComSingleThreadModel
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Name|Descrizione|
|----------|-----------------|
|[CComSingleThreadModel:: AutoCriticalSection](#autocriticalsection)|Fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).|
|[CComSingleThreadModel:: CriticalSection](#criticalsection)|Fa riferimento alla classe `CComFakeCriticalSection`.|
|[CComSingleThreadModel:: ThreadModelNoCS](#threadmodelnocs)|Fa riferimento `CComSingleThreadModel`.|

### <a name="public-methods"></a>Metodi pubblici

|Name|Descrizione|
|----------|-----------------|
|[CComSingleThreadModel::D ecrement](#decrement)|Decrementa il valore della variabile specificata. Questa implementazione non è thread-safe.|
|[CComSingleThreadModel:: Increment](#increment)|Incrementa il valore della variabile specificata. Questa implementazione non è thread-safe.|

## <a name="remarks"></a>Note

`CComSingleThreadModel` fornisce metodi per incrementare e decrementare il valore di una variabile. A differenza di [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md), questi metodi non sono thread-safe.

In genere, si usa `CComSingleThreadModel` tramite uno dei due nomi **typedef** , ovvero [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) o [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel). La classe a cui fa riferimento ogni **typedef** dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:

|typedef|Modello a thread singolo|Modello di threading dell'Apartment|Modello di threading libero|
|-------------|----------------------------|-------------------------------|--------------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

S = `CComSingleThreadModel`; M = `CComMultiThreadModel`

`CComSingleThreadModel` definisce tre nomi **typedef** . `ThreadModelNoCS` riferimenti `CComSingleThreadModel`. `AutoCriticalSection` e `CriticalSection` classe di riferimento [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), che fornisce metodi vuoti associati al recupero e al rilascio della proprietà di una sezione critica.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="autocriticalsection"></a>CComSingleThreadModel:: AutoCriticalSection

Quando si usa `CComSingleThreadModel`, il nome **typedef** `AutoCriticalSection` fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection AutoCriticalSection;
```

### <a name="remarks"></a>Note

Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contengono le definizioni per `AutoCriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe del modello di threading e la classe di sezione critica a cui fa riferimento `AutoCriticalSection`:

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComAutoCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

Oltre a `AutoCriticalSection`, è possibile usare il nome **typedef** [CriticalSection](#criticalsection). Se si desidera eliminare il codice di avvio CRT, non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classe statici.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel:: AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

##  <a name="criticalsection"></a>CComSingleThreadModel:: CriticalSection

Quando si usa `CComSingleThreadModel`, il nome **typedef** `CriticalSection` fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection CriticalSection;
```

### <a name="remarks"></a>Note

Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contengono le definizioni per `CriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe del modello di threading e la classe di sezione critica a cui fa riferimento `CriticalSection`:

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

Oltre a `CriticalSection`, è possibile usare il nome **typedef** [AutoCriticalSection](#autocriticalsection). Se si desidera eliminare il codice di avvio CRT, non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classe statici.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel:: AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

##  <a name="decrement"></a>CComSingleThreadModel::D ecrement

Questa funzione statica decrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Decrement(LPLONG p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore alla variabile da decrementare.

### <a name="return-value"></a>Valore restituito

Risultato del decremento.

##  <a name="increment"></a>CComSingleThreadModel:: Increment

Questa funzione statica incrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Increment(LPLONG p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore alla variabile da incrementare.

### <a name="return-value"></a>Valore restituito

Risultato dell'incremento.

##  <a name="threadmodelnocs"></a>CComSingleThreadModel:: ThreadModelNoCS

Quando si usa `CComSingleThreadModel`, il nome **typedef** `ThreadModelNoCS` semplicemente fa riferimento a `CComSingleThreadModel`.

```
typedef CComSingleThreadModel ThreadModelNoCS;
```

### <a name="remarks"></a>Note

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contengono le definizioni per `ThreadModelNoCS`. Nella tabella seguente viene illustrata la relazione tra la classe del modello di threading e la classe a cui fa riferimento `ThreadModelNoCS`:

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComSingleThreadModel`|`CComSingleThreadModel`|
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel:: AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
