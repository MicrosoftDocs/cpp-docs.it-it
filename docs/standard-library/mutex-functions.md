---
title: Funzioni e variabili &lt;mutex&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
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
ms.openlocfilehash: 85ed95250b5563cd8a7c1ef9cfc0ee048cb3bc60
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33858212"
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

`Flag` Un [once_flag](../standard-library/once-flag-structure.md) oggetto che assicura che l'oggetto chiamabile chiamato solo una volta.

`F` Un oggetto richiamabile.

`A` Elenco di argomenti.

### <a name="remarks"></a>Note

Se `Flag` non è valido, la funzione genera un oggetto [system_error](../standard-library/system-error-class.md) con codice di errore `invalid_argument`. In caso contrario, la funzione modello usa il relativo argomento `Flag` per assicurare che `F(A...)` venga chiamato una sola volta con esito positivo, a prescindere dal numero di volte in cui viene chiamata la funzione. Se `F(A...)` viene chiuso generando un'eccezione, la chiamata non è riuscita.

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
