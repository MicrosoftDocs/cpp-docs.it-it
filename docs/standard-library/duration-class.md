---
title: Classe duration
ms.date: 03/27/2016
f1_keywords:
- chrono/std::chrono::duration
- chrono/std::chrono::duration::duration
- chrono/std::chrono::duration::count
- chrono/std::chrono::duration::max
- chrono/std::chrono::duration::min
- chrono/std::chrono::duration::zero
ms.assetid: 06b863b3-65be-4ded-a72e-6e1eb1531077
helpviewer_keywords:
- std::chrono [C++], duration
ms.openlocfilehash: 3669935bf094f476ca24a8170a0388dff29e0a0c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368758"
---
# <a name="duration-class"></a>Classe duration

Descrive un tipo che contiene un *intervallo di tempo*, ovvero un tempo trascorso tra due punti temporali.

## <a name="syntax"></a>Sintassi

```cpp
template <class Rep, class Period = ratio<1>>
class duration;
template <class Rep, class Period>
class duration;
template <class Rep, class Period1, class Period2>
class duration <duration<Rep, Period1>, Period2>;
```

## <a name="remarks"></a>Osservazioni

L'argomento di modello `Rep` descrive il tipo usato per contenere il numero di tick nell'intervallo. L'argomento di modello `Period` è una creazione dell'istanza di [ratio](../standard-library/ratio.md) che descrive le dimensioni dell'intervallo rappresentato da ogni ciclo macchina.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|duration::period Typedef|Rappresenta un sinonimo del parametro di modello `Period`.|
|duration::rep Typedef|Rappresenta un sinonimo del parametro di modello `Rep`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Durata](#duration)|Costruisce un oggetto `duration`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[count](#count)|Recupera il numero di tick nell'intervallo di tempo.|
|[Massimo](#max)|Statico. Restituisce il valore massimo consentito di parametro di modello `Ref`.|
|[Minimo](#min)|Statico. Restituisce il valore minimo consentito di parametro di modello `Ref`.|
|[Zero](#zero)|Statico. Restituisce infatti `Rep`(0).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[durata::operatore-](#operator-)|Restituisce una copia dell'oggetto `duration` insieme a un conteggio dei tick negati.|
|[durata::operatore--](#operator--)|Decrementa il conteggio dei tick archiviati.|
|[durata::operatore](#op_eq)|Riduce il modulo del conteggio dei tick archiviati a un valore specifico.|
|[duration::operator*=](#op_star_eq)|Moltiplica il conteggio dei tick archiviati per un valore specificato.|
|[durata::operatore/](#op_div_eq)|Divide il conteggio dei tick archiviati per il numero di tick di un oggetto `duration` specificato.|
|[durata::operatore](#op_add)|Restituisce `*this`.|
|[durata::operatore](#op_add_add)|Incrementa il conteggio dei tick archiviati.|
|[durata::operatore](#op_add_eq)|Aggiunge il conteggio dei tick di un oggetto `duration` specificati al conteggio dei tick archiviati.|
|[durata::operatore](#operator-_eq)|Sottrae il conteggio dei tick di un oggetto `duration` specificati dal conteggio dei tick archiviati.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<crono>

**Spazio dei nomi:** std::chrono

## <a name="durationcount"></a><a name="count"></a>durata::conteggio

Recupera il numero di tick del clock nell'intervallo di tempo.

```cpp
constexpr Rep count() const;
```

### <a name="return-value"></a>Valore restituito

Recupera il numero di tick del clock nell'intervallo di tempo.

## <a name="durationduration-constructor"></a><a name="duration"></a>duration::duration Costruttore

Costruisce un oggetto `duration`.

```cpp
constexpr duration() = default;

template <class Rep2>
constexpr explicit duration(const Rep2& R);

template <class Rep2, class Period2>
constexpr duration(const duration<Rep2, Period2>& Dur);
```

### <a name="parameters"></a>Parametri

*Rep2*\
Tipo aritmetico per rappresentare il numero di tick.

*Periodo 2*\
Specializzazione modello `std::ratio` per rappresentare il periodo di tick in unità di secondi.

*R*\
Numero di tick del periodo predefinito.

*Dur*\
Il numero di segni di graduazione del periodo specificato da *Periodo2*.

### <a name="remarks"></a>Osservazioni

Il costruttore predefinito costruisce un oggetto non inizializzato. L'inizializzazione del valore con parentesi graffe vuote inizializza un oggetto che rappresenta un intervallo di tempo di zero tick.

Il secondo costruttore di argomenti di modello costruisce *R* un oggetto che rappresenta un `std::ratio<1>`intervallo di tempo di segni di graduazione dell'orologio R utilizzando un periodo predefinito di . Per evitare l'arrotondamento dei conteggi dei segni di graduazione, è un errore costruire un oggetto `duration::rep` duration da un tipo di rappresentazione *Rep2* che può essere considerato come un tipo a virgola mobile quando non può essere considerato come un tipo a virgola mobile.

Il terzo costruttore di due argomenti di modello costruisce un oggetto che rappresenta un intervallo di tempo la cui lunghezza è l'intervallo di tempo specificato da *Dur*. Per evitare il troncamento dei conteggi dei tick, non creare un oggetto duration da un altro oggetto duration di tipo *incommensurabile* con il tipo destinazione.

Un tipo duration `D1` è *incommensurabile* con un altro tipo duration `D2` se `D2` non può essere trattato come tipo a virgola mobile e [ratio_divide\<D1::period, D2::period>::type::den](../standard-library/ratio.md) non è 1.

A meno che *Rep2* non `rep` sia `treat_as_floating_point<rep>`convertibile in modo implicito in e *contenga true* o `treat_as_floating_point<Rep2>`contiene *false*, il secondo costruttore non partecipa alla risoluzione dell'overload. Per altre informazioni, vedere [<type_traits>](../standard-library/type-traits.md).

A meno che nessun overflow sia indotto nella conversione e `treat_as_floating_point<rep>`*contenga true*, o `ratio_divide<Period2, period>::den` equivalga a 1 e `treat_as_floating_point<Rep2>`*contenga false*, il terzo costruttore non partecipa alla risoluzione dell'overload. Per altre informazioni, vedere [<type_traits>](../standard-library/type-traits.md).

## <a name="durationmax"></a><a name="max"></a>durata::max

Metodo statico che restituisce il limite superiore per i valori di tipo `Ref` del parametro di modello.

```cpp
static constexpr duration max();
```

### <a name="return-value"></a>Valore restituito

In effetti, restituisce `duration(duration_values<rep>::max())`.

## <a name="durationmin"></a><a name="min"></a>durata::min

Metodo statico che restituisce il limite inferiore per i valori di tipo `Ref` del parametro modello.

```cpp
static constexpr duration min();
```

### <a name="return-value"></a>Valore restituito

In effetti, restituisce `duration(duration_values<rep>::min())`.

## <a name="durationoperator-"></a><a name="operator-"></a>durata::operatore-

Restituisce una copia dell'oggetto `duration` insieme a un conteggio dei tick negati.

```cpp
constexpr duration operator-() const;
```

## <a name="durationoperator--"></a><a name="operator--"></a>durata::operatore--

Decrementa il conteggio dei tick archiviati.

```cpp
duration& operator--();

duration operator--(int);
```

### <a name="return-value"></a>Valore restituito

Il primo metodo restituisce `*this`.

Il secondo metodo restituisce una copia di `*this` creata prima del decremento.

## <a name="durationoperator"></a><a name="op_eq"></a>durata::operatore

Riduce il modulo del conteggio dei tick archiviati a un valore specifico.

```cpp
duration& operator%=(const rep& Div);

duration& operator%=(const duration& Div);
```

### <a name="parameters"></a>Parametri

*Div*\
Per il primo metodo, *Div* rappresenta un conteggio. Per il secondo metodo, `duration` *Div* è un oggetto che contiene un conteggio.

### <a name="return-value"></a>Valore restituito

Dopo l'operazione di modulo viene eseguito l'oggetto `duration`.

## <a name="durationoperator"></a><a name="op_star_eq"></a>durata::operatore

Moltiplica il conteggio dei tick archiviati per un valore specificato.

```cpp
duration& operator*=(const rep& Mult);
```

### <a name="parameters"></a>Parametri

*Mult*\
Valore del tipo specificato da `duration::rep`.

### <a name="return-value"></a>Valore restituito

Dopo la moltiplicazione viene eseguito l'oggetto `duration`.

## <a name="durationoperator"></a><a name="op_div_eq"></a>durata::operatore/

Divide il conteggio dei tick archiviati per un valore specificato.

```cpp
duration& operator/=(const rep& Div);
```

### <a name="parameters"></a>Parametri

*Div*\
Valore del tipo specificato da `duration::rep`.

### <a name="return-value"></a>Valore restituito

Dopo la divisione viene eseguito l'oggetto `duration`.

## <a name="durationoperator"></a><a name="op_add"></a>durata::operatore

Restituisce `*this`.

```cpp
constexpr duration operator+() const;
```

## <a name="durationoperator"></a><a name="op_add_add"></a>durata::operatore

Incrementa il conteggio dei tick archiviati.

```cpp
duration& operator++();

duration operator++(int);
```

### <a name="return-value"></a>Valore restituito

Il primo metodo restituisce `*this`.

Il secondo metodo restituisce una copia di `*this` creata prima dell'incremento.

## <a name="durationoperator"></a><a name="op_add_eq"></a>durata::operatore

Aggiunge il conteggio dei tick di un oggetto `duration` specificati al conteggio dei tick archiviati.

```cpp
duration& operator+=(const duration& Dur);
```

### <a name="parameters"></a>Parametri

*Dur*\
Oggetto `duration` .

### <a name="return-value"></a>Valore restituito

Oggetto `duration` dopo l'esecuzione della somma.

## <a name="durationoperator-"></a><a name="operator-_eq"></a>durata::operatore

Sottrae il conteggio dei tick di un oggetto `duration` specificati dal conteggio dei tick archiviati.

```cpp
duration& operator-=(const duration& Dur);
```

### <a name="parameters"></a>Parametri

*Dur*\
Oggetto `duration` .

### <a name="return-value"></a>Valore restituito

Oggetto `duration` dopo l'esecuzione della sottrazione.

## <a name="durationzero"></a><a name="zero"></a>durata::zero

Restituisce `duration(duration_values<rep>::zero())`.

```cpp
static constexpr duration zero();
```

## <a name="durationoperator-mod"></a><a name="op_mod_eq"></a>duration::operator mod

Riduce il modulo Div or Div.count() del conteggio dei tick archiviati.

```cpp
duration& operator%=(const rep& Div);duration& operator%=(const duration& Div);
```

### <a name="parameters"></a>Parametri

*Div*\
Divisore, che può essere un oggetto durata o un valore che rappresenta i conteggi dei tick.

### <a name="remarks"></a>Osservazioni

La prima funzione del membro riduce il modulo Div del conteggio dei tick archiviati e restituisce *this. La seconda funzione del membro riduce il modulo Div.count() del conteggio dei tick archiviati e restituisce \*this.

## <a name="see-also"></a>Vedere anche

[Riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<>crono](../standard-library/chrono.md)\
[Struttura duration_values](../standard-library/duration-values-structure.md)
