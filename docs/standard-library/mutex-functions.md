---
title: Funzioni e variabili &lt;mutex&gt;
ms.date: 11/04/2016
f1_keywords:
- mutex/std::adopt_lock
- mutex/std::call_once
- mutex/std::defer_lock
- mutex/std::lock
- mutex/std::try_to_lock
ms.assetid: 78ab3c8b-c7db-4226-ac93-e2e78ff8b964
helpviewer_keywords:
- std::adopt_lock [C++]
- std::call_once [C++]
- std::defer_lock [C++]
- std::lock [C++]
- std::try_to_lock [C++]
ms.openlocfilehash: b375aec0bee4183563b8cd55e4e8a27f79e7cd3e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62326326"
---
# <a name="ltmutexgt-functions-and-variables"></a>Funzioni e variabili &lt;mutex&gt;

||||
|-|-|-|
|[adopt_lock](#adopt_lock)|[call_once](#call_once)|[defer_lock](#defer_lock)|
|[lock](#lock)|[try_to_lock](#try_to_lock)|

## <a name="adopt_lock"></a>  Variabile adopt_lock

Rappresenta un oggetto che può essere passato ai costruttori di [lock_guard](../standard-library/lock-guard-class.md) e [unique_lock](../standard-library/unique-lock-class.md) per indicare che l'oggetto mutex, anch'esso passato al costruttore, è bloccato.

```cpp
const adopt_lock_t adopt_lock;
```

## <a name="call_once"></a>  call_once

Fornisce un meccanismo per chiamare un oggetto richiamabile esattamente una sola volta l'esecuzione.

```cpp
template <class Callable, class... Args>
void call_once(once_flag& Flag,
    Callable F&&, Args&&... A);
```

### <a name="parameters"></a>Parametri

*Flag*<br/>
Oggetto [once_flag](../standard-library/once-flag-structure.md) che assicura che l'oggetto chiamabile venga chiamato una sola volta.

*F*<br/>
Oggetto chiamabile.

*A*<br/>
Elenco di argomenti.

### <a name="remarks"></a>Note

Se *Flag* non è valido, la funzione genera un [system_error](../standard-library/system-error-class.md) con un codice di errore `invalid_argument`. In caso contrario, viene utilizzata la funzione del modello relativa *Flag* argomento per assicurarsi che deve chiamare `F(A...)` correttamente esattamente una volta, indipendentemente da quante volte viene chiamata la funzione di modello. Se `F(A...)` viene chiuso generando un'eccezione, la chiamata non è riuscita.

## <a name="defer_lock"></a>  Variabile defer_lock

Rappresenta un oggetto che può essere passato al costruttore di [unique_lock](../standard-library/unique-lock-class.md). Ciò indica che il costruttore non deve bloccare l'oggetto mutex, anch'esso passato al costruttore.

```cpp
const defer_lock_t defer_lock;
```

## <a name="lock"></a>  lock

Tenta di bloccare tutti gli argomenti senza deadlock.

```cpp
template <class L1, class L2, class... L3>
void lock(L1&, L2&, L3&...);
```

### <a name="remarks"></a>Note

Gli argomenti della funzione modello devono essere *tipi mutex*, ad eccezione del fatto che le chiamate a `try_lock` possono generare eccezioni.

La funzione blocca tutti gli argomenti senza deadlock eseguendo chiamate a `lock`, `try_lock` e `unlock`. Se una chiamata a `lock` o `try_lock` genera un'eccezione, la funzione chiama `unlock` su uno qualsiasi degli oggetti mutex bloccati prima di generare nuovamente l'eccezione.

## <a name="try_to_lock"></a>  Variabile try_to_lock

Rappresenta un oggetto che può essere passato al costruttore di [unique_lock](../standard-library/unique-lock-class.md) per indicare che il costruttore deve provare a sbloccare l'oggetto `mutex`, anch'esso passato al costruttore senza blocco.

```cpp
const try_to_lock_t try_to_lock;
```

## <a name="see-also"></a>Vedere anche

[\<mutex>](../standard-library/mutex.md)<br/>
