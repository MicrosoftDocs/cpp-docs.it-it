---
title: Operatori &lt;chrono&gt;
ms.date: 11/04/2016
f1_keywords:
- chrono/std::operator modulo
ms.assetid: c5a19267-4684-40c1-b7a9-cc1012b058f3
ms.openlocfilehash: 398e2429c38cffb454c7b510aa5ab44fbe4cfef6
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78865200"
---
# <a name="ltchronogt-operators"></a>Operatori &lt;chrono&gt;

## <a name="operator-"></a>operatore

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

\ a *sinistra*
L'oggetto `duration` o `time_point` a sinistra.

\ a *destra*
L'oggetto `duration` o `time_point` a destra.

\ *tempo*
Oggetto `time_point` .

\ *dur*
Oggetto `duration` .

### <a name="return-value"></a>Valore restituito

La prima funzione restituisce un oggetto `duration`, la cui lunghezza di intervallo corrisponde alla differenza tra gli intervalli dei due argomenti.

La seconda funzione restituisce un oggetto `time_point` che rappresenta un punto nel tempo che viene spostato dalla negazione dell'intervallo di tempo rappresentato da *dur*, dal punto nel tempo specificato da *Time*.

La terza funzione restituisce un oggetto `duration` che rappresenta l'intervallo di tempo tra *Left* e *right*.

## <a name="op_neq"></a>operatore! =

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

\ a *sinistra*
L'oggetto `duration` o `time_point` a sinistra.

\ a *destra*
L'oggetto `duration` o `time_point` a destra.

### <a name="return-value"></a>Valore restituito

Ogni funzione restituisce `!(Left == Right)`.

## <a name="op_star"></a>operatore

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

\ *dur*
Oggetto `duration` .

\ *mult*
Valore integrale.

### <a name="return-value"></a>Valore restituito

Ogni funzione restituisce un oggetto `duration` la cui lunghezza dell'intervallo è *mult* moltiplicata per la lunghezza di *dur*.

A meno che l'oggetto `is_convertible<Rep2, common_type<Rep1, Rep2>>`*resti valido*, la prima funzione non fa parte della risoluzione dell'overload. Per altre informazioni, vedere [<type_traits>](../standard-library/type-traits.md).

A meno che l'oggetto `is_convertible<Rep1, common_type<Rep1, Rep2>>`*resti valido*, la seconda funzione non fa parte della risoluzione dell'overload. Per altre informazioni, vedere [<type_traits>](../standard-library/type-traits.md).

## <a name="op_div"></a>operatore

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

\ *dur*
Oggetto `duration` .

\ *div*
Valore integrale.

\ a *sinistra*
L'oggetto `duration` a sinistra.

\ a *destra*
L'oggetto `duration` corretto.

### <a name="return-value"></a>Valore restituito

Il primo operatore restituisce un oggetto Duration la cui lunghezza dell'intervallo è la lunghezza di *dur* divisa per il valore *div*.

Il secondo operatore restituisce il rapporto tra le lunghezze di intervallo di *sinistra* e *destra*.

A meno che l'oggetto `is_convertible<Rep2, common_type<Rep1, Rep2>>`*resti valido* e `Rep2` non sia una creazione di istanza di `duration`, il primo operatore non fa parte della risoluzione dell'overload. Per altre informazioni, vedere [<type_traits>](../standard-library/type-traits.md).

## <a name="op_add"></a>operatore +

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

\ a *sinistra*
L'oggetto `duration` o `time_point` a sinistra.

\ a *destra*
L'oggetto `duration` o `time_point` a destra.

\ *tempo*
Oggetto `time_point` .

\ *dur*
Oggetto `duration` .

### <a name="return-value"></a>Valore restituito

La prima funzione restituisce un oggetto `duration` con un intervallo di tempo equivalente alla somma degli intervalli di *Left* e *right*.

La seconda e la terza funzione restituiscono un oggetto `time_point` che rappresenta un punto *nel tempo che*viene spostato, dall'intervallo *dur*, dal punto nel tempo.

## <a name="op_lt">Operatore </a>&lt;

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

\ a *sinistra*
L'oggetto `duration` o `time_point` a sinistra.

\ a *destra*
L'oggetto `duration` o `time_point` a destra.

### <a name="return-value"></a>Valore restituito

La prima funzione restituisce **true** se la lunghezza dell'intervallo di *sinistra* è minore della lunghezza dell'intervallo di *destra*. In caso contrario, la funzione restituisce **false**.

La seconda funzione restituisce **true** se *Left* precede *right*. In caso contrario, la funzione restituisce **false**.

## <a name="op_lt_eq"></a>operatore&lt;=

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

\ a *sinistra*
L'oggetto `duration` o `time_point` a sinistra.

\ a *destra*
L'oggetto `duration` o `time_point` a destra.

### <a name="return-value"></a>Valore restituito

Ogni funzione restituisce `!(Right < Left)`.

## <a name="op_eq_eq"></a>operatore = =

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

\ a *sinistra*
L'oggetto `duration` o `time_point` a sinistra.

\ a *destra*
L'oggetto `duration` o `time_point` a destra.

### <a name="return-value"></a>Valore restituito

La prima funzione restituisce **true** se *Left* e *right* rappresentano gli intervalli di tempo che hanno la stessa lunghezza. In caso contrario, la funzione restituisce **false**.

La seconda funzione restituisce **true** se *Left* e *right* rappresentano lo stesso punto nel tempo. In caso contrario, la funzione restituisce **false**.

## <a name="op_gt">Operatore </a>&gt;

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

\ a *sinistra*
L'oggetto `duration` o `time_point` a sinistra.

\ a *destra*
L'oggetto `duration` o `time_point` a destra.

### <a name="return-value"></a>Valore restituito

Ogni funzione restituisce `Right < Left`.

## <a name="op_gt_eq"></a>operatore&gt;=

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

\ a *sinistra*
L'oggetto `duration` o `time_point` a sinistra.

\ a *destra*
L'oggetto `duration` o `time_point` a destra.

### <a name="return-value"></a>Valore restituito

Ogni funzione restituisce `!(Left < Right)`.

## <a name="op_modulo"></a>operatore modulo

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

\ *dur*
Oggetto `duration` .

\ *div*
Valore integrale.

\ a *sinistra*
L'oggetto `duration` a sinistra.

\ a *destra*
L'oggetto `duration` corretto.

### <a name="return-value"></a>Valore restituito

La prima funzione restituisce un oggetto `duration` la cui lunghezza dell'intervallo è *dur* modulo *div*.

La seconda funzione restituisce un valore che rappresenta il *diritto*a *sinistra* del modulo.
