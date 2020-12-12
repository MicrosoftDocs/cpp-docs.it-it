---
description: 'Altre informazioni su: classe CComMultiThreadModelNoCS'
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
ms.openlocfilehash: 8b26c59564f9a7869bb3429ee31284925815e6ac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152009"
---
# <a name="ccommultithreadmodelnocs-class"></a>Classe CComMultiThreadModelNoCS

`CComMultiThreadModelNoCS` fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile, senza funzionalità di blocco o sblocco della sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComMultiThreadModelNoCS
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|[CComMultiThreadModelNoCS:: AutoCriticalSection](#autocriticalsection)|Fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).|
|[CComMultiThreadModelNoCS:: CriticalSection](#criticalsection)|Classe References `CComFakeCriticalSection` .|
|[CComMultiThreadModelNoCS:: ThreadModelNoCS](#threadmodelnocs)|Classe References `CComMultiThreadModelNoCS` .|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComMultiThreadModelNoCS::D ecrement](#decrement)|Statico Decrementa il valore della variabile specificata in modo thread-safe.|
|[CComMultiThreadModelNoCS:: Increment](#increment)|Statico Incrementa il valore della variabile specificata in modo thread-safe.|

## <a name="remarks"></a>Commenti

`CComMultiThreadModelNoCS` è simile a [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) in quanto fornisce metodi thread-safe per incrementare e decrementare una variabile. Tuttavia, quando si fa riferimento a una classe di sezione critica tramite `CComMultiThreadModelNoCS` , i metodi come `Lock` e `Unlock` non eseguono alcuna operazione.

In genere si usa `CComMultiThreadModelNoCS` il `ThreadModelNoCS` **`typedef`** nome. Questa operazione **`typedef`** è definita in `CComMultiThreadModelNoCS` , `CComMultiThreadModel` e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md).

> [!NOTE]
> I **`typedef`** nomi globali [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) e [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel) non fanno riferimento a `CComMultiThreadModelNoCS` .

Oltre a `ThreadModelNoCS` , `CComMultiThreadModelNoCS` definisce `AutoCriticalSection` e `CriticalSection` . Questi ultimi due **`typedef`** nomi fanno riferimento a [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), che fornisce metodi vuoti associati al recupero e al rilascio di una sezione critica.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="ccommultithreadmodelnocsautocriticalsection"></a><a name="autocriticalsection"></a> CComMultiThreadModelNoCS:: AutoCriticalSection

Quando si usa `CComMultiThreadModelNoCS` , il **`typedef`** nome `AutoCriticalSection` fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection AutoCriticalSection;
```

### <a name="remarks"></a>Commenti

Poiché non `CComFakeCriticalSection` fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `AutoCriticalSection` . Nella tabella seguente viene illustrata la relazione tra la classe del modello di threading e la classe di sezione critica a cui fa riferimento `AutoCriticalSection` :

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComAutoCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|

Oltre a `AutoCriticalSection` , è possibile usare il **`typedef`** nome [CriticalSection](#criticalsection). `AutoCriticalSection`Se si desidera eliminare il codice di avvio CRT, non specificare in oggetti globali o membri di classe statici.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel:: AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="ccommultithreadmodelnocscriticalsection"></a><a name="criticalsection"></a> CComMultiThreadModelNoCS:: CriticalSection

Quando si usa `CComMultiThreadModelNoCS` , il **`typedef`** nome `CriticalSection` fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection CriticalSection;
```

### <a name="remarks"></a>Commenti

Poiché non `CComFakeCriticalSection` fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `CriticalSection` . Nella tabella seguente viene illustrata la relazione tra la classe del modello di threading e la classe di sezione critica a cui fa riferimento `CriticalSection` :

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|

Oltre a `CriticalSection` , è possibile utilizzare il **`typedef`** nome `AutoCriticalSection` . `AutoCriticalSection`Se si desidera eliminare il codice di avvio CRT, non specificare in oggetti globali o membri di classe statici.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel:: AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="ccommultithreadmodelnocsdecrement"></a><a name="decrement"></a> CComMultiThreadModelNoCS::D ecrement

Questa funzione statica chiama la funzione Win32 [InterlockedDecrement](/windows/win32/api/winnt/nf-winnt-interlockeddecrement), che decrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Decrement(LPLONG p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore alla variabile da decrementare.

### <a name="return-value"></a>Valore restituito

Se il risultato del decremento è 0, `Decrement` restituisce 0. Se il risultato del decremento è diverso da zero, anche il valore restituito è diverso da zero, ma potrebbe non corrispondere al risultato del decremento.

### <a name="remarks"></a>Commenti

**InterlockedDecrement** impedisce a più di un thread di usare simultaneamente questa variabile.

## <a name="ccommultithreadmodelnocsincrement"></a><a name="increment"></a> CComMultiThreadModelNoCS:: Increment

Questa funzione statica chiama la funzione Win32 [InterlockedIncrement](/windows/win32/api/winnt/nf-winnt-interlockedincrement), che incrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Increment(LPLONG p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore alla variabile da incrementare.

### <a name="return-value"></a>Valore restituito

Se il risultato dell'incremento è 0, l' **incremento** restituisce 0. Se il risultato dell'incremento è diverso da zero, anche il valore restituito è diverso da zero, ma potrebbe non corrispondere al risultato dell'incremento.

### <a name="remarks"></a>Commenti

**InterlockedIncrement** impedisce a più di un thread di usare simultaneamente questa variabile.

## <a name="ccommultithreadmodelnocsthreadmodelnocs"></a><a name="threadmodelnocs"></a> CComMultiThreadModelNoCS:: ThreadModelNoCS

Quando si usa `CComMultiThreadModelNoCS` , il **`typedef`** nome `ThreadModelNoCS` fa semplicemente riferimento a `CComMultiThreadModelNoCS` .

```
typedef CComMultiThreadModelNoCS ThreadModelNoCS;
```

### <a name="remarks"></a>Commenti

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `ThreadModelNoCS` . Nella tabella seguente viene illustrata la relazione tra la classe del modello di threading e la classe a cui fa riferimento `ThreadModelNoCS` :

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|
|`CComSingleThreadModel`|`CComSingleThreadModel`|

Si noti che la definizione di `ThreadModelNoCS` in `CComMultiThreadModelNoCS` fornisce la simmetria con `CComMultiThreadModel` e `CComSingleThreadModel` . Si supponga, ad esempio, che il codice di esempio in abbia `CComMultiThreadModel::AutoCriticalSection` dichiarato quanto segue **`typedef`** :

[!code-cpp[NVC_ATL_COM#37](../../atl/codesnippet/cpp/ccommultithreadmodelnocs-class_1.h)]

Indipendentemente dalla classe specificata per `ThreadModel` (ad esempio `CComMultiThreadModelNoCS` ), `_ThreadModel` risolve di conseguenza.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel:: AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
