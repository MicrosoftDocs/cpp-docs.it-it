---
title: Classe CComMultiThreadModelNoCS
ms.date: 11/04/2016
f1_keywords:
- CComMultiThreadModelNoCS
- ATLBASE/ATL::CComMultiThreadModelNoCS
- ATLBASE/ATL::CComMultiThreadModelNoCS::AutoCriticalSection
- ATLBASE/ATL::CComMultiThreadModelNoCS::CriticalSection
- ATLBASE/ATL::CComMultiThreadModelNoCS::ThreadModelNoCS
- ATLBASE/ATL::CComMultiThreadModelNoCS::Decrement
- ATLBASE/ATL::CComMultiThreadModelNoCS::Increment
helpviewer_keywords:
- ATL, multithreading
- CComMultiThreadModelNoCS class
- threading [ATL]
ms.assetid: 2b3f7a45-fd72-452c-aaf3-ccdaa621c821
ms.openlocfilehash: 01c7f953b6b8916394ee4c2b5b27cf84af52b920
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497091"
---
# <a name="ccommultithreadmodelnocs-class"></a>Classe CComMultiThreadModelNoCS

`CComMultiThreadModelNoCS`fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile, senza funzionalità di blocco o sblocco della sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComMultiThreadModelNoCS
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Name|Descrizione|
|----------|-----------------|
|[CComMultiThreadModelNoCS::AutoCriticalSection](#autocriticalsection)|Fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).|
|[CComMultiThreadModelNoCS::CriticalSection](#criticalsection)|Classe `CComFakeCriticalSection`References.|
|[CComMultiThreadModelNoCS::ThreadModelNoCS](#threadmodelnocs)|Classe `CComMultiThreadModelNoCS`References.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComMultiThreadModelNoCS::Decrement](#decrement)|Statico Decrementa il valore della variabile specificata in modo thread-safe.|
|[CComMultiThreadModelNoCS::Increment](#increment)|Statico Incrementa il valore della variabile specificata in modo thread-safe.|

## <a name="remarks"></a>Note

`CComMultiThreadModelNoCS`è simile a [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) in quanto fornisce metodi thread-safe per incrementare e decrementare una variabile. Tuttavia, quando si fa riferimento a una classe di `CComMultiThreadModelNoCS`sezione critica tramite, `Lock` i `Unlock` metodi come e non eseguono alcuna operazione.

In genere, è `CComMultiThreadModelNoCS` possibile utilizzare `ThreadModelNoCS` tramite il nome del **typedef** . Questo **typedef** è definito in `CComMultiThreadModelNoCS`, `CComMultiThreadModel`e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md).

> [!NOTE]
>  I nomi di **typedef** globali [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) e [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel) non fanno `CComMultiThreadModelNoCS`riferimento a.

Oltre a `ThreadModelNoCS`, `CComMultiThreadModelNoCS` definisce `AutoCriticalSection` e. `CriticalSection` Questi ultimi due nomi **typedef** fanno riferimento a [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), che fornisce metodi vuoti associati al recupero e al rilascio di una sezione critica.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="autocriticalsection"></a>CComMultiThreadModelNoCS:: AutoCriticalSection

Quando si `CComMultiThreadModelNoCS`USA, il nome `AutoCriticalSection` **typedef** fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection AutoCriticalSection;
```

### <a name="remarks"></a>Note

Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni `AutoCriticalSection`per. Nella tabella seguente viene illustrata la relazione tra la classe del modello di threading e la classe di `AutoCriticalSection`sezione critica a cui fa riferimento:

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComAutoCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|

Oltre a `AutoCriticalSection`, è possibile usare il nome **typedef** [CriticalSection](#criticalsection). Se si desidera eliminare `AutoCriticalSection` il codice di avvio CRT, non specificare in oggetti globali o membri di classe statici.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel:: AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

##  <a name="criticalsection"></a>CComMultiThreadModelNoCS:: CriticalSection

Quando si `CComMultiThreadModelNoCS`USA, il nome `CriticalSection` **typedef** fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection CriticalSection;
```

### <a name="remarks"></a>Note

Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni `CriticalSection`per. Nella tabella seguente viene illustrata la relazione tra la classe del modello di threading e la classe di `CriticalSection`sezione critica a cui fa riferimento:

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|

Oltre a `CriticalSection`, è possibile utilizzare il nome `AutoCriticalSection`del typedef. Se si desidera eliminare `AutoCriticalSection` il codice di avvio CRT, non specificare in oggetti globali o membri di classe statici.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel:: AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

##  <a name="decrement"></a>CComMultiThreadModelNoCS::D ecrement

Questa funzione statica chiama la funzione Win32 [InterlockedDecrement](/windows/win32/api/winnt/nf-winnt-interlockeddecrement), che decrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Decrement(LPLONG p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore alla variabile da decrementare.

### <a name="return-value"></a>Valore restituito

Se il risultato del decremento è 0, `Decrement` restituisce 0. Se il risultato del decremento è diverso da zero, anche il valore restituito è diverso da zero, ma potrebbe non corrispondere al risultato del decremento.

### <a name="remarks"></a>Note

**InterlockedDecrement** impedisce a più di un thread di usare simultaneamente questa variabile.

##  <a name="increment"></a>CComMultiThreadModelNoCS:: Increment

Questa funzione statica chiama la funzione Win32 [InterlockedIncrement](/windows/win32/api/winnt/nf-winnt-interlockedincrement), che incrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Increment(LPLONG p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore alla variabile da incrementare.

### <a name="return-value"></a>Valore restituito

Se il risultato dell'incremento è 0, l' **incremento** restituisce 0. Se il risultato dell'incremento è diverso da zero, anche il valore restituito è diverso da zero, ma potrebbe non corrispondere al risultato dell'incremento.

### <a name="remarks"></a>Note

**InterlockedIncrement** impedisce a più di un thread di usare simultaneamente questa variabile.

##  <a name="threadmodelnocs"></a>  CComMultiThreadModelNoCS::ThreadModelNoCS

Quando si `CComMultiThreadModelNoCS`USA, il nome `ThreadModelNoCS` **typedef** fa `CComMultiThreadModelNoCS`semplicemente riferimento a.

```
typedef CComMultiThreadModelNoCS ThreadModelNoCS;
```

### <a name="remarks"></a>Note

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni `ThreadModelNoCS`per. Nella tabella seguente viene illustrata la relazione tra la classe del modello di threading e la `ThreadModelNoCS`classe a cui fa riferimento:

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|
|`CComSingleThreadModel`|`CComSingleThreadModel`|

Si noti che la definizione `ThreadModelNoCS` di `CComMultiThreadModelNoCS` in fornisce la `CComMultiThreadModel` simmetria `CComSingleThreadModel`con e. Si supponga, ad esempio, che il `CComMultiThreadModel::AutoCriticalSection` codice di esempio in abbia dichiarato il **typedef**seguente:

[!code-cpp[NVC_ATL_COM#37](../../atl/codesnippet/cpp/ccommultithreadmodelnocs-class_1.h)]

Indipendentemente dalla classe specificata per `ThreadModel` ( `CComMultiThreadModelNoCS`ad esempio), `_ThreadModel` risolve di conseguenza.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel:: AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
