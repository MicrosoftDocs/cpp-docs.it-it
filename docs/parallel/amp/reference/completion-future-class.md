---
title: Classe completion_future
ms.date: 11/04/2016
f1_keywords:
- completion_future
- AMPRT/completion_future
- AMPRT/Concurrency::completion_future::completion_future
- AMPRT/Concurrency::completion_future::get
- AMPRT/Concurrency::completion_future::then
- AMPRT/Concurrency::completion_future::to_task
- AMPRT/Concurrency::completion_future::valid
- AMPRT/Concurrency::completion_future::wait
- AMPRT/Concurrency::completion_future::wait_for
- AMPRT/Concurrency::completion_future::wait_until
ms.assetid: 1303c62e-546d-4b02-a578-251ed3fc0b6b
ms.openlocfilehash: 1863f0908753fb05abb01cf1bd2e34dc6649e0a4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228492"
---
# <a name="completion_future-class"></a>Classe completion_future

Rappresenta un futuro corrispondente a un C++ AMP operazione asincrona.

## <a name="syntax"></a>Sintassi

```cpp
class completion_future;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore completion_future](#ctor)|Inizializza una nuova istanza della classe `completion_future`.|
|[Distruttore ~ completion_future](#dtor)|Elimina definitivamente l' `completion_future` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get](#get)|Attende il completamento dell'operazione asincrona associata.|
|[quindi](#then)|Concatena un oggetto funzione di callback all' `completion_future` oggetto da eseguire al termine dell'esecuzione dell'operazione asincrona associata.|
|[to_task](#to_task)|Restituisce un `task` oggetto corrispondente all'operazione asincrona associata.|
|[valido](#valid)|Ottiene un valore booleano che indica se l'oggetto è associato a un'operazione asincrona.|
|[attendere](#wait)|Si blocca fino al completamento dell'operazione asincrona associata.|
|[wait_for](#wait_for)|Si blocca fino al completamento dell'operazione asincrona associata o al termine dell'intervallo di tempo specificato da `_Rel_time` .|
|[wait_until](#wait_until)|Si blocca fino al completamento dell'operazione asincrona associata o fino a quando l'ora corrente non supera il valore specificato da `_Abs_time` .|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operatore std:: shared_future\<void>](#operator_shared_future)|Converte in modo implicito l' `completion_future` oggetto in un `std::shared_future` oggetto.|
|[operatore =](#operator_eq)|Copia il contenuto dell'oggetto specificato `completion_future` in questo.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`completion_future`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concurrency

## <a name="completion_future"></a><a name="ctor"></a>completion_future

Inizializza una nuova istanza della classe `completion_future`.

### <a name="syntax"></a>Sintassi

```cpp
completion_future();

completion_future(
    const completion_future& _Other );

completion_future(
    completion_future&& _Other );
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
`completion_future`Oggetto da copiare o spostare.

### <a name="overloads-list"></a>Elenco di overload

|Nome|Descrizione|
|----------|-----------------|
|`completion_future();`|Inizializza una nuova istanza della `completion_future` classe.|
|`completion_future(const completion_future& _Other);`|Inizializza una nuova istanza della `completion_future` classe copiando un costruttore.|
|`completion_future(completion_future&& _Other);`|Inizializza una nuova istanza della `completion_future` classe spostando un costruttore.|

## <a name="get"></a><a name="get"></a>Ottieni

Attende il completamento dell'operazione asincrona associata. Genera l'eccezione archiviata se ne è stata rilevata una durante l'operazione asincrona.

### <a name="syntax"></a>Sintassi

```cpp
void get() const;
```

## <a name="operator-stdshared_futurevoid"></a><a name="operator_shared_future"></a>operatore std:: shared_future\<void>

Converte in modo implicito l' `completion_future` oggetto in un `std::shared_future` oggetto.

### <a name="syntax"></a>Sintassi

```cpp
operator std::shared_future<void>() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `std::shared_future`.

## <a name="operator"></a><a name="operator_eq"></a>operatore =

Copia il contenuto dell'oggetto specificato `completion_future` in questo.

### <a name="syntax"></a>Sintassi

```cpp
completion_future&  operator= (const completion_future& _Other );
completion_future&  operator= (completion_future&& _Other );
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento a questo `completion_future` oggetto.

## <a name="overloads-list"></a>Elenco di overload

|Nome|Descrizione|
|----------|-----------------|
|`completion_future& operator=(const completion_future& _Other);`|Copia il contenuto dell'oggetto specificato `completion_future` in questo, usando una copia completa.|
|`completion_future& operator=(completion_future&& _Other);`|Copia il contenuto dell'oggetto specificato `completion_future` in questo, usando un'assegnazione di spostamento.|

## <a name="then"></a><a name="then"></a>quindi

Concatena un oggetto funzione di callback all' `completion_future` oggetto da eseguire al termine dell'esecuzione dell'operazione asincrona associata.

### <a name="syntax"></a>Sintassi

```cpp
template <typename _Functor>
void then(const _Functor & _Func ) const;
```

### <a name="parameters"></a>Parametri

*_Functor*<br/>
Functor di callback.

*_Func*<br/>
Oggetto funzione di callback.

## <a name="to_task"></a><a name="to_task"></a>to_task

Restituisce un `task` oggetto corrispondente all'operazione asincrona associata.

### <a name="syntax"></a>Sintassi

```cpp
concurrency::task<void> to_task() const;
```

### <a name="return-value"></a>Valore restituito

`task`Oggetto corrispondente all'operazione asincrona associata.

## <a name="valid"></a><a name="valid"></a>valido

Ottiene un valore booleano che indica se l'oggetto è associato a un'operazione asincrona.

### <a name="syntax"></a>Sintassi

```cpp
bool valid() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto è associato a un'operazione asincrona. in caso contrario, **`false`** .

## <a name="wait"></a><a name="wait"></a>attendere

Si blocca fino al completamento dell'operazione asincrona associata.

### <a name="syntax"></a>Sintassi

```cpp
void wait() const;
```

## <a name="wait_for"></a><a name="wait_for"></a>wait_for

Si blocca fino al completamento dell'operazione asincrona associata o alla scadenza del tempo specificato da `_Rel_time` .

### <a name="syntax"></a>Sintassi

```cpp
template <
    class _Rep,
    class _Period
>
std::future_status::future_status wait_for(
    const std::chrono::duration< _Rep, _Period>& _Rel_time ) const;
```

### <a name="parameters"></a>Parametri

*_Rep*<br/>
Tipo aritmetico che rappresenta il numero di cicli.

*_Period*<br/>
STD:: ratio che rappresenta il numero di secondi che intercorrono per ogni segno di indicizzazione.

*_Rel_time*<br/>
Periodo di tempo massimo di attesa del completamento dell'operazione.

### <a name="return-value"></a>Valore restituito

Restituisce:

- `std::future_status::deferred`Se l'operazione asincrona associata non è in esecuzione.

- `std::future_status::ready`Se l'operazione asincrona associata è stata completata.

- `std::future_status::timeout`Se è trascorso il periodo di tempo specificato.

## <a name="wait_until"></a><a name="wait_until"></a>wait_until

Si blocca fino al completamento dell'operazione asincrona associata o fino a quando l'ora corrente non supera il valore specificato da `_Abs_time` .

### <a name="syntax"></a>Sintassi

```cpp
template <
    class _Clock,
    class _Duration
>
std::future_status::future_status wait_until(
    const std::chrono::time_point< _Clock, _Duration>& _Abs_time ) const;
```

### <a name="parameters"></a>Parametri

*_Clock*<br/>
Clock su cui viene misurato questo punto di tempo.

*_Duration*<br/>
L'intervallo di tempo dall'inizio del `_Clock` periodo di tempo, dopo il quale si è verificato il timeout della funzione.

*_Abs_time*<br/>
Punto nel tempo dopo il quale la funzione si timeout.

### <a name="return-value"></a>Valore restituito

Restituisce:

1. `std::future_status::deferred`Se l'operazione asincrona associata non è in esecuzione.

1. `std::future_status::ready`Se l'operazione asincrona associata è stata completata.

1. `std::future_status::timeout`Se è trascorso il periodo di tempo specificato.

## <a name="completion_future"></a><a name="dtor"></a>~ completion_future

Elimina definitivamente l' `completion_future` oggetto.

### <a name="syntax"></a>Sintassi

```cpp
~completion_future();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
