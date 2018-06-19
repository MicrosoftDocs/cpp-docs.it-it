---
title: Funzioni &lt;thread&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- thread/std::get_id
- thread/std::sleep_for
- thread/std::sleep_until
- thread/std::swap
- thread/std::yield
ms.assetid: bb1aa1ef-fe3f-4e2c-8b6e-e22dbf2f5a19
helpviewer_keywords:
- std::get_id [C++]
- std::sleep_for [C++]
- std::sleep_until [C++]
- std::swap [C++]
- std::yield [C++]
ms.openlocfilehash: f151bbaf692d914fa1072021e2f14262b2c72ce4
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33855903"
---
# <a name="ltthreadgt-functions"></a>Funzioni &lt;thread&gt;

||||
|-|-|-|
|[get_id](#get_id)|[sleep_for](#sleep_for)|[sleep_until](#sleep_until)|
|[swap](#swap)|[yield](#yield)|

## <a name="get_id"></a>  get_id

Identifica in modo univoco il thread di esecuzione corrente.

```cpp
thread::id this_thread::get_id() noexcept;
```

### <a name="return-value"></a>Valore restituito

Oggetto di tipo [thread::id](../standard-library/thread-class.md) che identifica in modo univoco il thread di esecuzione corrente.

## <a name="sleep_for"></a>  sleep_for

Blocca il thread chiamante.

```cpp
template <class Rep,
class Period>
inline void sleep_for(const chrono::duration<Rep, Period>& Rel_time);
```

### <a name="parameters"></a>Parametri

`Rel_time` Un [durata](../standard-library/duration-class.md) oggetto che specifica un intervallo di tempo.

### <a name="remarks"></a>Note

La funzione blocca il thread chiamante almeno per il tempo specificato da `Rel_time`. Questa funzione non genera eccezioni.

## <a name="sleep_until"></a>  sleep_until

La funzione blocca il thread chiamante almeno fino all'ora specificata.

```cpp
template <class Clock, class Duration>
void sleep_until(const chrono::time_point<Clock, Duration>& Abs_time);

void sleep_until(const xtime *Abs_time);
```

### <a name="parameters"></a>Parametri

`Abs_time` Rappresenta un punto nel tempo.

### <a name="remarks"></a>Note

Questa funzione non genera eccezioni.

## <a name="swap"></a>  swap

Scambia gli stati dei due oggetti `thread`.

```cpp
void swap(thread& Left, thread& Right) noexcept;
```

### <a name="parameters"></a>Parametri

`Left` Sinistra `thread` oggetto.

`Right` Il diritto `thread` oggetto.

### <a name="remarks"></a>Note

La funzione chiama `Left.swap(Right)`.

## <a name="yield"></a>  yield

Segnala al sistema operativo di eseguire altri thread, anche se in genere l'esecuzione del thread corrente dovrebbe continuare.

```cpp
inline void yield() noexcept;
```

## <a name="see-also"></a>Vedere anche

[\<thread>](../standard-library/thread.md)<br/>
