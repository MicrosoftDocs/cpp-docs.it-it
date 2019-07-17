---
title: Funzioni &lt;chrono&gt;
ms.date: 11/04/2016
f1_keywords:
- chrono/std::duration_cast
- chrono/std::time_point_cast
ms.assetid: d6800e15-77a1-4df3-900e-d8b2fee190c7
ms.openlocfilehash: 85fdd413354b3f310d3315a80cf7da983cf6621d
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68244910"
---
# <a name="ltchronogt-functions"></a>Funzioni &lt;chrono&gt;

## <a name="duration_cast"></a> duration_cast

Esegue il cast di un oggetto `duration` in un tipo specificato.

```cpp
template <class To, class Rep, class Period>
constexpr To duration_cast(const duration<Rep, Period>& Dur);

template <class ToDuration, class Rep, class Period>
constexpr ToDuration floor(const duration<Rep, Period>& d);
template <class ToDuration, class Rep, class Period>
constexpr ToDuration ceil(const duration<Rep, Period>& d);
template <class ToDuration, class Rep, class Period>
constexpr ToDuration round(const duration<Rep, Period>& d);
```

### <a name="return-value"></a>Valore restituito

Oggetto `duration` di tipo `To` che rappresenta l'intervallo di tempo `Dur`, che viene troncato se deve rientrare nel tipo di destinazione.

### <a name="remarks"></a>Note

Se `To` rappresenta una creazione di istanza di `duration`, questa funzione non fa parte della risoluzione dell'overload.

## <a name="time_point_cast"></a> time_point_cast

Esegue il cast di un oggetto [time_point](../standard-library/time-point-class.md) in un tipo specificato.

```cpp
template <class To, class Clock, class Duration>
time_point<Clock, To> time_point_cast(const time_point<Clock, Duration>& Tp);

template <class ToDuration, class Clock, class Duration>
constexpr time_point<Clock, ToDuration>
floor(const time_point<Clock, Duration>& tp);
template <class ToDuration, class Clock, class Duration>
constexpr time_point<Clock, ToDuration>
ceil(const time_point<Clock, Duration>& tp);
template <class ToDuration, class Clock, class Duration>
constexpr time_point<Clock, ToDuration>
round(const time_point<Clock, Duration>& tp);
```

### <a name="return-value"></a>Valore restituito

Un oggetto `time_point` con durata di tipo `To`.

### <a name="remarks"></a>Note

A meno che `To` sia una creazione di istanza di [duration](../standard-library/duration-class.md), questa funzione non fa parte della risoluzione dell'overload.
