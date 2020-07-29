---
title: Classe event
ms.date: 11/04/2016
f1_keywords:
- CONCRT/concurrency::event
- CONCRT/concurrency::event::reset
- CONCRT/concurrency::event::set
- CONCRT/concurrency::event::wait
- CONCRT/concurrency::event::wait_for_multiple
- CONCRT/concurrency::event::timeout_infinite
helpviewer_keywords:
- event class
ms.assetid: fba35a53-6568-4bfa-9aaf-07c0928cf73d
ms.openlocfilehash: 3f2ec71083f7a7905bad5cda014baba914e31e79
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215803"
---
# <a name="event-class"></a>Classe event

Un evento di reimpostazione manuale che tiene conto in modo esplicito del runtime di concorrenza.

## <a name="syntax"></a>Sintassi

```cpp
class event;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[~ distruttore eventi](#dtor)|Elimina definitivamente un evento.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[reset](#reset)|Reimposta l'evento su uno stato non segnalato.|
|[set](#set)|Segnala l'evento.|
|[attendere](#wait)|Attende che l'evento venga segnalato.|
|[wait_for_multiple](#wait_for_multiple)|Attende che vengano segnalati più eventi.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[timeout_infinite](#timeout_infinite)|Valore indicante un'attesa che non deve terminare mai.|

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [Synchronization Data Structures](../../../parallel/concrt/synchronization-data-structures.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`event`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="event"></a>Evento<a name="ctor"></a>

Costruisce un nuovo evento.

```cpp
_CRTIMP event();
```

### <a name="remarks"></a>Osservazioni

## <a name="event"></a><a name="dtor"></a>evento ~

Elimina definitivamente un evento.

```cpp
~event();
```

### <a name="remarks"></a>Osservazioni

Si prevede che non siano presenti thread in attesa dell'evento durante l'esecuzione del distruttore. Se si consente all'evento di eseguire la distruzione quando i thread sono ancora in attesa si verificherà un comportamento non definito.

## <a name="reset"></a><a name="reset"></a>reimpostazione

Reimposta l'evento su uno stato non segnalato.

```cpp
void reset();
```

## <a name="set"></a><a name="set"></a>set

Segnala l'evento.

```cpp
void set();
```

### <a name="remarks"></a>Osservazioni

Segnalare l'evento potrebbe causare un numero arbitrario di contesti in attesa che l'evento diventi eseguibile.

## <a name="timeout_infinite"></a><a name="timeout_infinite"></a>timeout_infinite

Valore indicante un'attesa che non deve terminare mai.

```cpp
static const unsigned int timeout_infinite = COOPERATIVE_TIMEOUT_INFINITE;
```

## <a name="wait"></a><a name="wait"></a>attendere

Attende che l'evento venga segnalato.

```cpp
size_t wait(unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```

### <a name="parameters"></a>Parametri

*_Timeout*<br/>
Indica il numero di millisecondi prima del timeout di attesa. Il valore `COOPERATIVE_TIMEOUT_INFINITE` indica che non è previsto alcun timeout.

### <a name="return-value"></a>Valore restituito

Se l'attesa è stata soddisfatta, `0` viene restituito il valore; in caso contrario, il valore `COOPERATIVE_WAIT_TIMEOUT` per indicare che si è verificato il timeout dell'attesa senza che l'evento venga segnalato.

> [!IMPORTANT]
> In un'app piattaforma UWP (Universal Windows Platform) (UWP) non chiamare `wait` sul thread asta perché questa chiamata può bloccare il thread corrente e può causare la mancata risposta dell'app.

## <a name="wait_for_multiple"></a><a name="wait_for_multiple"></a>wait_for_multiple

Attende che vengano segnalati più eventi.

```cpp
static size_t __cdecl wait_for_multiple(
    _In_reads_(count) event** _PPEvents,
    size_t count,
    bool _FWaitAll,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```

### <a name="parameters"></a>Parametri

*_PPEvents*<br/>
Matrice di eventi da attendere. Il numero di eventi all'interno della matrice è indicato dal `count` parametro.

*count*<br/>
Il numero di eventi all'interno della matrice fornita nel `_PPEvents` parametro.

*_FWaitAll*<br/>
Se impostato sul valore **`true`** , il parametro specifica che tutti gli eventi all'interno della matrice specificata nel `_PPEvents` parametro devono essere segnalati per soddisfare l'attesa. Se impostato sul valore **`false`** , specifica che qualsiasi evento all'interno della matrice fornita nel parametro che `_PPEvents` diventa segnalato soddisferà l'attesa.

*_Timeout*<br/>
Indica il numero di millisecondi prima del timeout di attesa. Il valore `COOPERATIVE_TIMEOUT_INFINITE` indica che non è previsto alcun timeout.

### <a name="return-value"></a>Valore restituito

Se l'attesa è stata soddisfatta, l'indice all'interno della matrice specificata nel `_PPEvents` parametro che soddisfa la condizione di attesa; in caso contrario, il valore `COOPERATIVE_WAIT_TIMEOUT` per indicare che si è verificato il timeout dell'attesa senza che la condizione venga soddisfatta.

### <a name="remarks"></a>Osservazioni

Se il parametro `_FWaitAll` è impostato sul valore **`true`** per indicare che tutti gli eventi devono essere segnalati per soddisfare l'attesa, l'indice restituito dalla funzione non ha un significato particolare, ad eccezione del fatto che non è il valore `COOPERATIVE_WAIT_TIMEOUT` .

> [!IMPORTANT]
> In un'app piattaforma UWP (Universal Windows Platform) (UWP) non chiamare `wait_for_multiple` sul thread asta perché questa chiamata può bloccare il thread corrente e può causare la mancata risposta dell'app.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
