---
title: Classe time_point
ms.date: 03/27/2019
f1_keywords:
- chrono/std::chrono::time_point
- chrono/std::chrono::time_point::time_point
- chrono/std::chrono::time_point::max
- chrono/std::chrono::time_point::min
- chrono/std::chrono::time_point::time_since_epoch
ms.assetid: 18be1e52-57b9-489a-8a9b-f58894f0aaad
helpviewer_keywords:
- std::chrono [C++], time_point
ms.openlocfilehash: e1de674d4a13ba465100923bffe6cba76e61ab4a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368022"
---
# <a name="time_point-class"></a>Classe time_point

Una classe `time_point` descrive un tipo che rappresenta un punto nel tempo. Contiene un oggetto di tipo [duration](../standard-library/duration-class.md) che archivia il tempo trascorso dopo il periodo rappresentato dall'argomento di modello `Clock`.

## <a name="syntax"></a>Sintassi

```cpp
template <class Clock,
    class Duration = typename Clock::duration>
class time_point;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`time_point::clock`|Sinonimo del parametro di modello `Clock`.|
|`time_point::duration`|Sinonimo del parametro di modello `Duration`.|
|`time_point::period`|Sinonimo del nome di tipo annidato `duration::period`.|
|`time_point::rep`|Sinonimo del nome di tipo annidato `duration::rep`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[time_point](#time_point)|Costruisce un oggetto `time_point`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Massimo](#max)|Specifica il limite superiore per `time_point::ref`.|
|[Minimo](#min)|Specifica il limite inferiore per `time_point::ref`.|
|[time_since_epoch](#time_since_epoch)|Restituisce il valore `duration` archiviato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[time_point::operator](#op_add_eq)|Somma un valore specificato alla durata archiviata.|
|[time_point::operator-=](#operator-_eq)|Sottrae un valore specificato alla durata archiviata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<crono>

**Spazio dei nomi:** std::chrono

## <a name="time_pointmax"></a><a name="max"></a>time_point::max

Metodo statico che restituisce il limite superiore dei valori di tipo `time_point::ref`.

```cpp
static constexpr time_point max();
```

### <a name="return-value"></a>Valore restituito

In effetti, restituisce `time_point(duration::max())`.

## <a name="time_pointmin"></a><a name="min"></a>time_point::min

Metodo statico che restituisce il limite inferiore dei valori di tipo `time_point::ref`.

```cpp
static constexpr time_point min();
```

### <a name="return-value"></a>Valore restituito

In effetti, restituisce `time_point(duration::min())`.

## <a name="time_pointoperator"></a><a name="op_add_eq"></a>time_point::operator

Somma un valore specificato al valore [duration](../standard-library/duration-class.md) archiviato.

```cpp
time_point& operator+=(const duration& Dur);
```

### <a name="parameters"></a>Parametri

*Dur*\
Oggetto `duration` .

### <a name="return-value"></a>Valore restituito

Oggetto `time_point` dopo l'esecuzione della somma.

## <a name="time_pointoperator-"></a><a name="operator-_eq"></a>time_point::operatore

Sottrae un valore specificato al valore [duration](../standard-library/duration-class.md) archiviato.

```cpp
time_point& operator-=(const duration& Dur);
```

### <a name="parameters"></a>Parametri

*Dur*\
Oggetto `duration` .

### <a name="return-value"></a>Valore restituito

Oggetto `time_point` dopo l'esecuzione della sottrazione.

## <a name="time_pointtime_point-constructor"></a><a name="time_point"></a>Costruttore time_point::time_point

Costruisce un oggetto `time_point`.

```cpp
constexpr time_point();

constexpr explicit time_point(const duration& Dur);

template <class Duration2>
constexpr time_point(const time_point<clock, Duration2>& Tp);
```

### <a name="parameters"></a>Parametri

*Dur*\
Oggetto [duration](../standard-library/duration-class.md).

*Tp*\
Oggetto `time_point` .

### <a name="remarks"></a>Osservazioni

Il primo costruttore crea un oggetto il cui valore `duration` archiviato è uguale a [duration::zero](../standard-library/duration-class.md#zero).

Il secondo costruttore costruisce un oggetto il cui valore di durata archiviato è uguale a *Dur*. A `is_convertible<Duration2, duration>` meno che non sia true, il secondo costruttore non partecipa alla risoluzione dell'overload. Per altre informazioni, vedere [<type_traits>](../standard-library/type-traits.md).

Il terzo costruttore inizializza il suo valore `duration` usando `Tp.time_since_epoch()`.

## <a name="time_pointtime_since_epoch"></a><a name="time_since_epoch"></a>time_point::time_since_epoch

Recupera il valore [duration](../standard-library/duration-class.md) archiviato.

```cpp
constexpr duration time_since_epoch() const;
```

## <a name="see-also"></a>Vedere anche

[Riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<>crono](../standard-library/chrono.md)
