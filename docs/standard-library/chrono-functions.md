---
title: Funzioni &lt;chrono&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- chrono/std::duration_cast
- chrono/std::time_point_cast
ms.assetid: d6800e15-77a1-4df3-900e-d8b2fee190c7
caps.latest.revision: 10
manager: ghogen
ms.openlocfilehash: 91ea7bbec0f86d74cf87ee06b8ec130b13ede83e
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="ltchronogt-functions"></a>Funzioni &lt;chrono&gt;

||||
|-|-|-|
|[duration_cast](#duration_cast)|[time_point_cast](#time_point_cast)|


## <a name="duration_cast"></a>  duration_cast

Esegue il cast di un oggetto `duration` in un tipo specificato.

```cpp
template <class To, class Rep, class Period>
constexpr To duration_cast(const duration<Rep, Period>& Dur);
```

### <a name="return-value"></a>Valore restituito

Oggetto `duration` di tipo `To` che rappresenta l'intervallo di tempo `Dur`, che viene troncato se deve rientrare nel tipo di destinazione.

### <a name="remarks"></a>Note

Se `To` rappresenta una creazione di istanza di `duration`, questa funzione non fa parte della risoluzione dell'overload.

## <a name="time_point_cast"></a>  time_point_cast

Esegue il cast di un oggetto [time_point](../standard-library/time-point-class.md) in un tipo specificato.

```cpp
template <class To, class Clock, class Duration>
time_point<Clock, To> time_point_cast(const time_point<Clock, Duration>& Tp);
```

### <a name="return-value"></a>Valore restituito

Un oggetto `time_point` con durata di tipo `To`.

### <a name="remarks"></a>Note

A meno che `To` sia una creazione di istanza di [duration](../standard-library/duration-class.md), questa funzione non fa parte della risoluzione dell'overload.

## <a name="see-also"></a>Vedere anche

[\<chrono>](../standard-library/chrono.md)<br/>
