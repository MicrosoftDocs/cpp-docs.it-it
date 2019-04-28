---
title: Operatori &lt;chrono&gt;
ms.date: 11/04/2016
f1_keywords:
- chrono/std::operator modulo
ms.assetid: c5a19267-4684-40c1-b7a9-cc1012b058f3
ms.openlocfilehash: d86fbf15313c25dd28b9220c654750ee8bc96d81
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62279073"
---
# <a name="ltchronogt-operators"></a>Operatori &lt;chrono&gt;

||||
|-|-|-|
|[operatore modulo](#op_modulo)|[operator!=](#op_neq)|[operator&gt;](#op_gt)|
|[operator&gt;=](#op_gt_eq)|[operator&lt;](#op_lt)|[operator&lt;=](#op_lt_eq)|
|[operator*](#op_star)|[operator+](#op_add)|[operator-](#operator-)|
|[operator/](#op_div)|[operator==](#op_eq_eq)|

## <a name="operator-"></a>  operator-

Operatore di sottrazione o negazione degli oggetti [duration](../standard-library/duration-class.md) e [time_point](../standard-library/time-point-class.md).

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr typename common_type<duration<Rep1, Period1>, duration<Rep2, Period2>>::type
   operator-(
       const duration<Rep1, Period1>& Left,
       cconst duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Rep2, class Period2>
constexpr time_point<Clock, typename common_type<Duration1, duration<Rep2, Period2>>::type
   operator-(
       const time_point<Clock, Duration1>& Time,
       const duration<Rep2, Period2>& Dur);

template <class Clock, class Duration1, class Duration2>
constexpr typename common_type<Duration1, Duration2>::type
   operator-(
       const time_point<Clock, Duration1>& Left,
       const time_point<Clock, Duration2>& Right);
```

### <a name="parameters"></a>Parametri

*A sinistra*<br/>
L'oggetto `duration` o `time_point` a sinistra.

*A destra*<br/>
L'oggetto `duration` o `time_point` a destra.

*Ora*<br/>
Oggetto `time_point`.

*Rim*<br/>
Oggetto `duration`.

### <a name="return-value"></a>Valore restituito

La prima funzione restituisce un oggetto `duration`, la cui lunghezza di intervallo corrisponde alla differenza tra gli intervalli dei due argomenti.

La seconda funzione restituisce un `time_point` oggetto che rappresenta un punto nel tempo che viene spostato dalla negazione dell'intervallo di tempo rappresentato da *Rim*, dal punto nel tempo specificato da *ora*.

La terza funzione restituisce un `duration` oggetto che rappresenta l'intervallo di tempo tra *a sinistra* e *destra*.

## <a name="op_neq"></a>  operator!=

Operatore di disuguaglianza per oggetti [duration](../standard-library/duration-class.md) o [time_point](../standard-library/time-point-class.md).

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator!=(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Duration2>
constexpr bool operator!=(
    const time_point<Clock, Duration1>& Left,
    const time_point<Clock, Duration2>& Right);
```

### <a name="parameters"></a>Parametri

*A sinistra*<br/>
L'oggetto `duration` o `time_point` a sinistra.

*A destra*<br/>
L'oggetto `duration` o `time_point` a destra.

### <a name="return-value"></a>Valore restituito

Ogni funzione restituisce `!(Left == Right)`.

## <a name="op_star"></a>  operator*

Operatore di moltiplicazione per oggetti [duration](../standard-library/chrono-operators.md#op_star).

```cpp
template <class Rep1, class Period1, class Rep2>
constexpr duration<typename common_type<Rep1, Rep2>::type, Period1>
   operator*(
      const duration<Rep1, Period1>& Dur,
      const Rep2& Mult);

template <class Rep1, class Rep2, class Period2>
constexpr duration<typename common_type<Rep1, Rep2>::type, Period2>
   operator*(
       const Rep1& Mult,
       const duration<Rep2,
       Period2>& Dur);
```

### <a name="parameters"></a>Parametri

*Rim*<br/>
Oggetto `duration`.

*Mult*<br/>
Valore integrale.

### <a name="return-value"></a>Valore restituito

Ogni funzione restituisce un `duration` oggetto la cui lunghezza dell'intervallo è *Mult* moltiplicato per la lunghezza del *Rim*.

A meno che l'oggetto `is_convertible<Rep2, common_type<Rep1, Rep2>>` *resti valido*, la prima funzione non fa parte della risoluzione dell'overload. Per altre informazioni, vedere [<type_traits>](../standard-library/type-traits.md).

A meno che l'oggetto `is_convertible<Rep1, common_type<Rep1, Rep2>>` *resti valido*, la seconda funzione non fa parte della risoluzione dell'overload. Per altre informazioni, vedere [<type_traits>](../standard-library/type-traits.md).

## <a name="op_div"></a>  operator/

Operatore di divisione per gli oggetti [duration](../standard-library/chrono-operators.md#op_star).

```cpp
template <class Rep1, class Period1, class Rep2>
constexpr duration<typename common_type<Rep1, Rep2>::type, Period1>
   operator/(
     const duration<Rep1, Period1>& Dur,
     const Rep2& Div);

template <class Rep1, class Period1, class Rep2, class Period2>
constexpr typename common_type<Rep1, Rep2>::type
   operator/(
     const duration<Rep1, Period1>& Left,
     const duration<Rep2, Period2>& Right);
```

### <a name="parameters"></a>Parametri

*Rim*<br/>
Oggetto `duration`.

*Div*<br/>
Valore integrale.

*A sinistra*<br/>
L'oggetto `duration` a sinistra.

*A destra*<br/>
L'oggetto `duration` corretto.

### <a name="return-value"></a>Valore restituito

Il primo operatore restituisce un oggetto duration il cui intervallo di lunghezza è la lunghezza di *Rim* diviso per il valore *Div*.

Il secondo operatore restituisce il rapporto tra la lunghezza dell'intervallo di *sinistra* e *destra*.

A meno che l'oggetto `is_convertible<Rep2, common_type<Rep1, Rep2>>` *resti valido* e `Rep2` non sia una creazione di istanza di `duration`, il primo operatore non fa parte della risoluzione dell'overload. Per altre informazioni, vedere [<type_traits>](../standard-library/type-traits.md).

## <a name="op_add"></a>  operator+

Consente di aggiungere oggetti [duration](../standard-library/duration-class.md) e [time_point](../standard-library/time-point-class.md).

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr typename common_type<duration<Rep1, Period1>, duration<Rep2, Period2>>::type
   operator+(
      const duration<Rep1, Period1>& Left,
      const duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Rep2, class Period2>
constexpr time_point<Clock, typename common_type<Duration1, duration<Rep2, Period2>>::type>
   operator+(
      const time_point<Clock, Duration1>& Time,
      const duration<Rep2, Period2>& Dur);

template <class Rep1, class Period1, class Clock, class Duration2>
time_point<Clock, constexpr typename common_type<duration<Rep1, Period1>, Duration2>::type>
   operator+(
      const duration<Rep1, Period1>& Dur,
      const time_point<Clock, Duration2>& Time);
```

### <a name="parameters"></a>Parametri

*A sinistra*<br/>
L'oggetto `duration` o `time_point` a sinistra.

*A destra*<br/>
L'oggetto `duration` o `time_point` a destra.

*Ora*<br/>
Oggetto `time_point`.

*Rim*<br/>
Oggetto `duration`.

### <a name="return-value"></a>Valore restituito

La prima funzione restituisce un `duration` oggetto che ha un intervallo di tempo uguale alla somma degli intervalli del *a sinistra* e *destra*.

La seconda e terza funzione restituiscono un `time_point` oggetto che rappresenta un punto nel tempo che viene spostato, in base all'intervallo *Rim*, dal punto nel tempo *ora*.

## <a name="op_lt"></a>  operator&lt;

Determina se un oggetto [duration](../standard-library/duration-class.md) o [time_point](../standard-library/time-point-class.md) è minore di un altro oggetto `duration` o `time_point`.

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator<(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Duration2>
constexpr bool operator<(
    const time_point<Clock, Duration1>& Left,
    const time_point<Clock, Duration2>& Right);
```

### <a name="parameters"></a>Parametri

*A sinistra*<br/>
L'oggetto `duration` o `time_point` a sinistra.

*A destra*<br/>
L'oggetto `duration` o `time_point` a destra.

### <a name="return-value"></a>Valore restituito

La prima funzione restituisce **true** se la lunghezza dell'intervallo di *sinistra* è minore della lunghezza di intervallo del *destra*. In caso contrario, la funzione restituisce **false**.

La seconda funzione restituisce **true** se *sinistra* precede *destra*. In caso contrario, la funzione restituisce **false**.

## <a name="op_lt_eq"></a>  operator&lt;=

Determina se un oggetto [duration](../standard-library/duration-class.md) o [time_point](../standard-library/time-point-class.md) è minore o uguale a un altro oggetto `duration` o `time_point`.

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator<=(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Duration2>
constexpr bool operator<=(
    const time_point<Clock, Duration1>& Left,
    const time_point<Clock, Duration2>& Right);
```

### <a name="parameters"></a>Parametri

*A sinistra*<br/>
L'oggetto `duration` o `time_point` a sinistra.

*A destra*<br/>
L'oggetto `duration` o `time_point` a destra.

### <a name="return-value"></a>Valore restituito

Ogni funzione restituisce `!(Right < Left)`.

## <a name="op_eq_eq"></a>  operator==

Determina se due oggetti `duration` rappresentano gli intervalli di tempo che hanno la stessa lunghezza, o se due oggetti `time_point` rappresentano lo stesso punto nel tempo.

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator==(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Duration2>
constexpr bool operator==(
    const time_point<Clock, Duration1>& Left,
    const time_point<Clock, Duration2>& Right);
```

### <a name="parameters"></a>Parametri

*A sinistra*<br/>
L'oggetto `duration` o `time_point` a sinistra.

*A destra*<br/>
L'oggetto `duration` o `time_point` a destra.

### <a name="return-value"></a>Valore restituito

La prima funzione restituisce **true** se *sinistra* e *destra* rappresentano gli intervalli di tempo che hanno la stessa lunghezza. In caso contrario, la funzione restituisce **false**.

La seconda funzione restituisce **true** se *sinistra* e *destra* rappresentano lo stesso punto nel tempo. In caso contrario, la funzione restituisce **false**.

## <a name="op_gt"></a>  operator&gt;

Determina se un oggetto [duration](../standard-library/duration-class.md) o [time_point](../standard-library/time-point-class.md) è maggiore di un altro oggetto `duration` o `time_point`.

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator>(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Duration2>
constexpr bool operator>(
    const time_point<Clock, Duration1>& Left,
    const time_point<Clock, Duration2>& Right);
```

### <a name="parameters"></a>Parametri

*A sinistra*<br/>
L'oggetto `duration` o `time_point` a sinistra.

*A destra*<br/>
L'oggetto `duration` o `time_point` a destra.

### <a name="return-value"></a>Valore restituito

Ogni funzione restituisce `Right < Left`.

## <a name="op_gt_eq"></a>  operator&gt;=

Determina se un oggetto [duration](../standard-library/duration-class.md) o [time_point](../standard-library/time-point-class.md) è maggiore o uguale a un altro oggetto `duration` o `time_point`.

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator>=(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Duration2>
constexpr bool operator>=(
    const time_point<Clock, Duration1>& Left,
    const time_point<Clock, Duration2>& Right);
```

### <a name="parameters"></a>Parametri

*A sinistra*<br/>
L'oggetto `duration` o `time_point` a sinistra.

*A destra*<br/>
L'oggetto `duration` o `time_point` a destra.

### <a name="return-value"></a>Valore restituito

Ogni funzione restituisce `!(Left < Right)`.

## <a name="op_modulo"></a>  operatore modulo

Operatore per le operazioni modulo sugli oggetti [duration](../standard-library/duration-class.md).

```cpp
template <class Rep1, class Period1, class Rep2>
constexpr duration<Rep1, Period1, Rep2>::type
   operator%(
      const duration<Rep1, Period1>& Dur,
      const Rep2& Div);

template <class Rep1, class Period1, class Rep2, class Period2>
constexpr typename common_type<duration<Rep1, _Period1>, duration<Rep2, Period2>>::type
   operator%(
     const duration<Rep1, Period1>& Left,
     const duration<Rep2, Period2>& Right);
```

### <a name="parameters"></a>Parametri

*Rim*<br/>
Oggetto `duration`.

*Div*<br/>
Valore integrale.

*A sinistra*<br/>
L'oggetto `duration` a sinistra.

*A destra*<br/>
L'oggetto `duration` corretto.

### <a name="return-value"></a>Valore restituito

La prima funzione restituisce un `duration` oggetto la cui lunghezza dell'intervallo è *Rim* modulo *Div*.

La seconda funzione restituisce un valore che rappresenta *sinistra* modulo *destra*.

## <a name="see-also"></a>Vedere anche

[\<chrono>](../standard-library/chrono.md)<br/>
