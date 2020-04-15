---
title: CComMultiThreadModelNoCS (classe)
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
ms.openlocfilehash: 4d41ffcfccbd7ef65ed86df79bffec1209a88cd3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327658"
---
# <a name="ccommultithreadmodelnocs-class"></a>CComMultiThreadModelNoCS (classe)

`CComMultiThreadModelNoCS`fornisce metodi thread-safe per incrementare e diminuire il valore di una variabile, senza funzionalità critiche di blocco o sblocco della sezione.

## <a name="syntax"></a>Sintassi

```
class CComMultiThreadModelNoCS
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComMultiThreadModelNoCS::AutoCriticalSection](#autocriticalsection)|Classe references [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).|
|[CComMultiThreadModelNoCS::CriticalSection](#criticalsection)|Classe `CComFakeCriticalSection`references .|
|[CComMultiThreadModelNoCS::ThreadModelNoCS](#threadmodelnocs)|Classe `CComMultiThreadModelNoCS`references .|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComMultiThreadModelNoCS:ecrement:D](#decrement)|(Statico) Decrementa il valore della variabile specificata in modo thread-safe.|
|[CComMultiThreadModelNoCS::Incremento](#increment)|(Statico) Incrementa il valore della variabile specificata in modo thread-safe.|

## <a name="remarks"></a>Osservazioni

`CComMultiThreadModelNoCS`è simile a [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) in quanto fornisce metodi thread-safe per incrementare e diminuire una variabile. Tuttavia, quando si fa `CComMultiThreadModelNoCS`riferimento a `Lock` una `Unlock` classe di sezione critica tramite metodi quali e non eseguiranno alcuna operazione.

In genere, `CComMultiThreadModelNoCS` si `ThreadModelNoCS` utilizza tramite il nome **typedef.** Questo **typedef** è `CComMultiThreadModelNoCS` `CComMultiThreadModel`definito in , , e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md).

> [!NOTE]
> I nomi **typedef** globali [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) e [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel) non fanno riferimento `CComMultiThreadModelNoCS`a .

Oltre a `ThreadModelNoCS` `CComMultiThreadModelNoCS` , `AutoCriticalSection` definisce e `CriticalSection`. Questi ultimi due nomi **typedef** fanno riferimento a [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), che fornisce metodi vuoti associati all'ottenimento e al rilascio di una sezione critica.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccommultithreadmodelnocsautocriticalsection"></a><a name="autocriticalsection"></a>CComMultiThreadModelNoCS::AutoCriticalSection

Quando `CComMultiThreadModelNoCS`si utilizza , `AutoCriticalSection` il nome **typedef** fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection AutoCriticalSection;
```

### <a name="remarks"></a>Osservazioni

Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `AutoCriticalSection`. Nella tabella seguente viene illustrata la relazione tra la `AutoCriticalSection`classe del modello di threading e la classe di sezione critica a cui fa riferimento :

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComAutoCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|

Oltre a `AutoCriticalSection`, è possibile utilizzare il nome **typedef** [CriticalSection](#criticalsection). Non è `AutoCriticalSection` necessario specificare in oggetti globali o membri di classe statici se si desidera eliminare il codice di avvio CRT.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="ccommultithreadmodelnocscriticalsection"></a><a name="criticalsection"></a>CComMultiThreadModelNoCS::CriticalSection

Quando `CComMultiThreadModelNoCS`si utilizza , `CriticalSection` il nome **typedef** fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection CriticalSection;
```

### <a name="remarks"></a>Osservazioni

Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `CriticalSection`. Nella tabella seguente viene illustrata la relazione tra la `CriticalSection`classe del modello di threading e la classe di sezione critica a cui fa riferimento :

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|

Oltre a `CriticalSection`, è possibile utilizzare `AutoCriticalSection`il nome **typedef** . Non è `AutoCriticalSection` necessario specificare in oggetti globali o membri di classe statici se si desidera eliminare il codice di avvio CRT.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="ccommultithreadmodelnocsdecrement"></a><a name="decrement"></a>CComMultiThreadModelNoCS:ecrement:D

Questa funzione statica chiama la funzione Win32 [InterlockedDecrement](/windows/win32/api/winnt/nf-winnt-interlockeddecrement), che decrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Decrement(LPLONG p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
[in] Puntatore alla variabile da decrementare.

### <a name="return-value"></a>Valore restituito

Se il risultato del decremento `Decrement` è 0, restituisce 0. Se il risultato del decremento è diverso da zero, anche il valore restituito è diverso da zero, ma potrebbe non essere uguale al risultato del decremento.

### <a name="remarks"></a>Osservazioni

**InterlockedDecrement** impedisce a più thread di utilizzare contemporaneamente questa variabile.

## <a name="ccommultithreadmodelnocsincrement"></a><a name="increment"></a>CComMultiThreadModelNoCS::Incremento

Questa funzione statica chiama la funzione Win32 [InterlockedIncrement](/windows/win32/api/winnt/nf-winnt-interlockedincrement), che incrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Increment(LPLONG p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
[in] Puntatore alla variabile da incrementare.

### <a name="return-value"></a>Valore restituito

Se il risultato dell'incremento è 0, **Incremento** restituisce 0. Se il risultato dell'incremento è diverso da zero, anche il valore restituito è diverso da zero, ma potrebbe non essere uguale al risultato dell'incremento.

### <a name="remarks"></a>Osservazioni

**InterlockedIncrement** impedisce a più thread di utilizzare contemporaneamente questa variabile.

## <a name="ccommultithreadmodelnocsthreadmodelnocs"></a><a name="threadmodelnocs"></a>CComMultiThreadModelNoCS::ThreadModelNoCS

Quando `CComMultiThreadModelNoCS`si utilizza , `ThreadModelNoCS` il `CComMultiThreadModelNoCS`nome **typedef** fa semplicemente riferimento a .

```
typedef CComMultiThreadModelNoCS ThreadModelNoCS;
```

### <a name="remarks"></a>Osservazioni

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `ThreadModelNoCS`. Nella tabella seguente viene illustrata la relazione tra `ThreadModelNoCS`la classe del modello di threading e la classe a cui fa riferimento :

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|
|`CComSingleThreadModel`|`CComSingleThreadModel`|

Si noti `ThreadModelNoCS` che `CComMultiThreadModelNoCS` la definizione di in fornisce simmetria con `CComMultiThreadModel` e `CComSingleThreadModel`. Si supponga, ad esempio, che il codice di esempio in `CComMultiThreadModel::AutoCriticalSection` declared sia il seguente **typedef**:

[!code-cpp[NVC_ATL_COM#37](../../atl/codesnippet/cpp/ccommultithreadmodelnocs-class_1.h)]

Indipendentemente dalla classe `ThreadModel` specificata per `CComMultiThreadModelNoCS` `_ThreadModel` (ad esempio , viene risolta di conseguenza.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
