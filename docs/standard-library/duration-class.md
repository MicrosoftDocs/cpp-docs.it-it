---
title: Classe duration | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- chrono/std::chrono::duration
- chrono/std::chrono::duration::duration
- chrono/std::chrono::duration::count
- chrono/std::chrono::duration::max
- chrono/std::chrono::duration::min
- chrono/std::chrono::duration::zero
dev_langs:
- C++
ms.assetid: 06b863b3-65be-4ded-a72e-6e1eb1531077
author: corob-msft
ms.author: corob
helpviewer_keywords:
- std::chrono [C++], duration
ms.workload:
- cplusplus
ms.openlocfilehash: db0ba9b841b26cab9f36cddba0c1f402e4812a20
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50072005"
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

## <a name="remarks"></a>Note

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
|[max](#max)|Statico. Restituisce il valore massimo consentito di parametro di modello `Ref`.|
|[min](#min)|Statico. Restituisce il valore minimo consentito di parametro di modello `Ref`.|
|[zero](#zero)|Statico. Restituisce infatti `Rep`(0).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[duration::operator-](#operator-)|Restituisce una copia dell'oggetto `duration` insieme a un conteggio dei tick negati.|
|[duration::operator--](#operator--)|Decrementa il conteggio dei tick archiviati.|
|[duration::operator=](#op_eq)|Riduce il modulo del conteggio dei tick archiviati a un valore specifico.|
|[duration::operator*=](#op_star_eq)|Moltiplica il conteggio dei tick archiviati per un valore specificato.|
|[duration::operator/=](#op_div_eq)|Divide il conteggio dei tick archiviati per il numero di tick di un oggetto `duration` specificato.|
|[duration::operator+](#op_add)|Restituisce `*this`.|
|[duration::operator++](#op_add_add)|Incrementa il conteggio dei tick archiviati.|
|[duration::operator+=](#op_add_eq)|Aggiunge il conteggio dei tick di un oggetto `duration` specificati al conteggio dei tick archiviati.|
|[duration::operator-=](#operator-_eq)|Sottrae il conteggio dei tick di un oggetto `duration` specificati dal conteggio dei tick archiviati.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<chrono >

**Spazio dei nomi:** std::chrono

## <a name="count"></a>  duration::count

Recupera il numero di tick del clock nell'intervallo di tempo.

```cpp
constexpr Rep count() const;
```

### <a name="return-value"></a>Valore restituito

Recupera il numero di tick del clock nell'intervallo di tempo.

## <a name="duration"></a>  Costruttore duration::duration

Costruisce un oggetto `duration`.

```cpp
constexpr duration() = default;

template <class Rep2>
constexpr explicit duration(const Rep2& R);

template <class Rep2, class Period2>
constexpr duration(const duration<Rep2, Period2>& Dur);
```

### <a name="parameters"></a>Parametri

*Rep2*<br/>
Tipo aritmetico per rappresentare il numero di tick.

*Period2*<br/>
Specializzazione modello `std::ratio` per rappresentare il periodo di tick in unità di secondi.

*R*<br/>
Numero di tick del periodo predefinito.

*Rim*<br/>
Il numero di tick del periodo specificato da *Period2*.

### <a name="remarks"></a>Note

Il costruttore predefinito costruisce un oggetto non inizializzato. L'inizializzazione del valore con parentesi graffe vuote inizializza un oggetto che rappresenta un intervallo di tempo di zero tick.

Il secondo, l'argomento di un modello costruttore crea un oggetto che rappresenta un intervallo di tempo pari *R* usando un periodo predefinito di tick del clock `std::ratio<1>`. Per evitare l'arrotondamento dei conteggi di tick, è possibile creare un oggetto duration da un tipo di rappresentazione *Rep2* che può essere trattato come valore a virgola mobile al tipo quando `duration::rep` non può essere considerato come un tipo a virgola mobile.

Il terzo costruttore ad argomento modello due costruisce un oggetto che rappresenta un intervallo di tempo la cui lunghezza è l'intervallo di tempo specificato da *Rim*. Per evitare il troncamento dei conteggi dei tick, non creare un oggetto duration da un altro oggetto duration di tipo *incommensurabile* con il tipo destinazione.

Un tipo duration `D1` è *incommensurabile* con un altro tipo duration `D2` se `D2` non può essere trattato come tipo a virgola mobile e [ratio_divide\<D1::period, D2::period>::type::den](../standard-library/ratio.md) non è 1.

A meno che *Rep2* è implicitamente convertibile in `rep` e il valore `treat_as_floating_point<rep>` *contenga true* oppure `treat_as_floating_point<Rep2>` *contenga false*, il secondo costruttore non partecipa alla risoluzione dell'overload. Per altre informazioni, vedere [<type_traits>](../standard-library/type-traits.md).

A meno che nessun overflow sia indotto nella conversione e `treat_as_floating_point<rep>`*contenga true*, o `ratio_divide<Period2, period>::den` equivalga a 1 e `treat_as_floating_point<Rep2>`*contenga false*, il terzo costruttore non partecipa alla risoluzione dell'overload. Per altre informazioni, vedere [<type_traits>](../standard-library/type-traits.md).

## <a name="max"></a>  duration::max

Metodo statico che restituisce il limite superiore per i valori di tipo `Ref` del parametro di modello.

```cpp
static constexpr duration max();
```

### <a name="return-value"></a>Valore restituito

In effetti, restituisce `duration(duration_values<rep>::max())`.

## <a name="min"></a>  duration::min

Metodo statico che restituisce il limite inferiore per i valori di tipo `Ref` del parametro modello.

```cpp
static constexpr duration min();
```

### <a name="return-value"></a>Valore restituito

In effetti, restituisce `duration(duration_values<rep>::min())`.

## <a name="duration__operator-"></a>  duration::operator-

Restituisce una copia dell'oggetto `duration` insieme a un conteggio dei tick negati.

```cpp
constexpr duration operator-() const;
```

## <a name="duration__operator--"></a>  duration::operator--

Decrementa il conteggio dei tick archiviati.

```cpp
duration& operator--();

duration operator--(int);
```

### <a name="return-value"></a>Valore restituito

Il primo metodo restituisce `*this`.

Il secondo metodo restituisce una copia di `*this` creata prima del decremento.

## <a name="op_eq"></a>  duration::operator=

Riduce il modulo del conteggio dei tick archiviati a un valore specifico.

```cpp
duration& operator%=(const rep& Div);

duration& operator%=(const duration& Div);
```

### <a name="parameters"></a>Parametri

*Div*<br/>
Per il primo metodo, *Div* rappresenta un conteggio dei tick. Per il secondo metodo, *Div* è un `duration` oggetto che contiene un conteggio dei tick.

### <a name="return-value"></a>Valore restituito

Dopo l'operazione di modulo viene eseguito l'oggetto `duration`.

## <a name="op_star_eq"></a>  duration::operator*=

Moltiplica il conteggio dei tick archiviati per un valore specificato.

```cpp
duration& operator*=(const rep& Mult);
```

### <a name="parameters"></a>Parametri

*Mult*<br/>
Valore del tipo specificato da `duration::rep`.

### <a name="return-value"></a>Valore restituito

Dopo la moltiplicazione viene eseguito l'oggetto `duration`.

## <a name="op_div_eq"></a>  duration::operator/=

Divide il conteggio dei tick archiviati per un valore specificato.

```cpp
duration& operator/=(const rep& Div);
```

### <a name="parameters"></a>Parametri

*Div*<br/>
Valore del tipo specificato da `duration::rep`.

### <a name="return-value"></a>Valore restituito

Dopo la divisione viene eseguito l'oggetto `duration`.

## <a name="op_add"></a>  duration::operator+

Restituisce `*this`.

```cpp
constexpr duration operator+() const;
```

## <a name="op_add_add"></a>  duration::operator++

Incrementa il conteggio dei tick archiviati.

```cpp
duration& operator++();

duration operator++(int);
```

### <a name="return-value"></a>Valore restituito

Il primo metodo restituisce `*this`.

Il secondo metodo restituisce una copia di `*this` creata prima dell'incremento.

## <a name="op_add_eq"></a>  duration::operator+=

Aggiunge il conteggio dei tick di un oggetto `duration` specificati al conteggio dei tick archiviati.

```cpp
duration& operator+=(const duration& Dur);
```

### <a name="parameters"></a>Parametri

*Rim*<br/>
Oggetto `duration`.

### <a name="return-value"></a>Valore restituito

Dopo l'addizione viene eseguito l'oggetto `duration`.

## <a name="duration__operator-_eq"></a>  duration::operator-=

Sottrae il conteggio dei tick di un oggetto `duration` specificati dal conteggio dei tick archiviati.

```cpp
duration& operator-=(const duration& Dur);
```

### <a name="parameters"></a>Parametri

*Rim*<br/>
Oggetto `duration`.

### <a name="return-value"></a>Valore restituito

Dopo la sottrazione viene eseguito l'oggetto `duration`.

## <a name="zero"></a>  duration::zero

Restituisce `duration(duration_values<rep>::zero())`.

```cpp
static constexpr duration zero();
```

## <a name="op_mod_eq"></a>  duration::operator mod=

Riduce il modulo Div or Div.count() del conteggio dei tick archiviati.

```cpp
duration& operator%=(const rep& Div);duration& operator%=(const duration& Div);
```

### <a name="parameters"></a>Parametri

*Div*<br/>
Divisore, che può essere un oggetto durata o un valore che rappresenta i conteggi dei tick.

### <a name="remarks"></a>Note

La prima funzione del membro riduce il modulo Div del conteggio dei tick archiviati e restituisce *this. La seconda funzione del membro riduce il modulo Div.count() del conteggio dei tick archiviati e restituisce \*this.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<chrono>](../standard-library/chrono.md)<br/>
[Struttura duration_values](../standard-library/duration-values-structure.md)<br/>
