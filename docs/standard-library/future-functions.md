---
title: Funzioni &lt;future&gt;
ms.date: 11/04/2016
f1_keywords:
- future/std::async
- future/std::future_category
- future/std::make_error_code
- future/std::make_error_condition
- future/std::swap
ms.assetid: 1e3acc1e-736a-42dc-ade2-b2fe69aa96bc
helpviewer_keywords:
- std::async [C++]
- std::future_category [C++]
- std::make_error_code [C++]
- std::make_error_condition [C++]
- std::swap [C++]
ms.openlocfilehash: 16c26212cac13602e981f42d8333518da90615fc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370668"
---
# <a name="ltfuturegt-functions"></a>Funzioni &lt;future&gt;

||||
|-|-|-|
|[async](#async)|[future_category](#future_category)|[make_error_code](#make_error_code)|
|[make_error_condition](#make_error_condition)|[Swap](#swap)|

## <a name="async"></a><a name="async"></a>Async

Rappresenta un *provider asincrono.*

```cpp
template <class Fn, class... ArgTypes>
future<typename result_of<Fn(ArgTypes...)>::type>
    async(Fn&& fn, ArgTypes&&... args);

template <class Fn, class... ArgTypes>
future<typename result_of<Fn(ArgTypes...)>::type>
    async(launch policy, Fn&& fn, ArgTypes&&... args);
```

### <a name="parameters"></a>Parametri

*Politica*\
Valore [launch](../standard-library/future-enums.md#launch).

### <a name="remarks"></a>Osservazioni

Definizioni delle abbreviazioni:

|||
|-|-|
|*dfn (inn*|Risultato della chiamata a `decay_copy(forward<Fn>(fn))`.|
|*dargs*|Risultati delle chiamate `decay_copy(forward<ArgsTypes>(args...))`.|
|*Ty*|Tipo `result_of<Fn(ArgTypes...)>::type`.|

La prima funzione modello restituisce `async(launch::any, fn, args...)`.

La seconda funzione restituisce un oggetto `future<Ty>` il cui *stato asincrono associato* include un risultato insieme ai valori di *dfn* e *dargs* e un oggetto thread per gestire un thread di esecuzione separato.

A meno che `decay<Fn>::type` non sia un tipo diverso da launch, la seconda funzione non fa parte della risoluzione dell'overload.

Lo standard di C' afferma che se i criteri sono launch::async, la funzione crea un nuovo thread. Tuttavia l'implementazione Microsoft è attualmente non conforme. Ottiene i thread dal Pool di thread di Windows, che in alcuni casi può fornire un thread riciclato anziché uno nuovo. Ciò significa `launch::async` che la `launch::async|launch::deferred`politica viene effettivamente implementata come .  Un'altra implicazione dell'implementazione basata su ThreadPool è che non vi è alcuna garanzia che le variabili locali del thread verranno distrutte al completamento del thread. Se il thread viene riciclato e `async`fornito a una nuova chiamata a , le variabili precedenti continueranno a esistere. Si consiglia pertanto di non utilizzare `async`variabili locali di thread con .

Se *policy* policy `launch::deferred`è , la funzione contrassegna lo stato asincrono associato come contenente una *funzione posticipata* e restituisce . La prima chiamata a qualsiasi funzione non temporizzata che attende che lo stato asincrono associato sia ready in effetti chiama la funzione posticipata valutando `INVOKE(dfn, dargs..., Ty)`.

In tutti i casi, lo stato asincrono associato dell'oggetto `future` non viene impostato su *ready* fino al completamento della valutazione di `INVOKE(dfn, dargs..., Ty)`, indipendentemente dal fatto che venga generata un'eccezione o che la procedura termini normalmente. Il risultato dello stato asincrono associato è un'eccezione se ne è stata generata una oppure qualsiasi valore restituito dalla valutazione.

> [!NOTE]
> Per un oggetto `future` (o per l'ultimo oggetto [shared_future](../standard-library/shared-future-class.md)) associato a un'attività avviata con `std::async`, il distruttore si blocca se l'attività non è stata completata. In altri termini, si blocca se questo thread non ha ancora chiamato `.get()` o `.wait()` e l'attività è ancora in esecuzione. Se un oggetto `future` ottenuto da `std::async` viene spostato al di fuori dell'ambito locale, l'altro codice che lo usa deve tenere presente che il relativo distruttore può bloccarsi per consentire allo stato condiviso di diventare ready.

La pseudo-funzione `INVOKE` è definita nella [ \<funzione>](../standard-library/functional.md).

## <a name="future_category"></a><a name="future_category"></a>future_category

Restituisce un riferimento all'oggetto [error_category](../standard-library/error-category-class.md) che caratterizza gli errori associati a oggetti `future`.

```cpp
const error_category& future_category() noexcept;
```

## <a name="make_error_code"></a><a name="make_error_code"></a>make_error_code

Crea un oggetto [error_code](../standard-library/error-code-class.md) insieme all'oggetto [error_category](../standard-library/error-category-class.md) che caratterizza gli errori [future](../standard-library/future-class.md).

```cpp
inline error_code make_error_code(future_errc Errno) noexcept;
```

### <a name="parameters"></a>Parametri

*Errno*\
Valore [future_errc](../standard-library/future-enums.md#future_errc) che identifica l'errore segnalato.

### <a name="return-value"></a>Valore restituito

`error_code(static_cast<int>(Errno), future_category());`

## <a name="make_error_condition"></a><a name="make_error_condition"></a>make_error_condition

Crea un oggetto [error_condition](../standard-library/error-condition-class.md) insieme all'oggetto [error_category](../standard-library/error-category-class.md) che caratterizza gli errori [future](../standard-library/future-class.md).

```cpp
inline error_condition make_error_condition(future_errc Errno) noexcept;
```

### <a name="parameters"></a>Parametri

*Errno*\
Valore [future_errc](../standard-library/future-enums.md#future_errc) che identifica l'errore segnalato.

### <a name="return-value"></a>Valore restituito

`error_condition(static_cast<int>(Errno), future_category());`

## <a name="swap"></a><a name="swap"></a>Swap

Scambia *lo stato asincrono associato* di un `promise` oggetto con quello di un altro.

```cpp
template <class Ty>
void swap(promise<Ty>& Left, promise<Ty>& Right) noexcept;

template <class Ty, class... ArgTypes>
void swap(packaged_task<Ty(ArgTypes...)>& Left, packaged_task<Ty(ArgTypes...)>& Right) noexcept;
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `promise` a sinistra.

*va bene*\
L'oggetto `promise` corretto.

## <a name="see-also"></a>Vedere anche

[\<>futuro](../standard-library/future.md)
