---
title: Struttura system_clock
ms.date: 11/04/2016
f1_keywords:
- chrono/std::chrono::system_clock
- chrono/std::chrono::system_clock::from_time_t
- chrono/std::chrono::system_clock::now
- chrono/std::chrono::system_clock::to_time_t
- chrono/std::chrono::system_clock::is_monotonic Constant
- chrono/std::chrono::system_clock::is_steady Constant
ms.assetid: a97bd46e-267a-4836-9f7d-af1f664e99ae
ms.openlocfilehash: 4e530887e7c8cf26e8969a839702286913da9b67
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224578"
---
# <a name="system_clock-structure"></a>Struttura system_clock

Rappresenta un *tipo di clock* basato sull'orologio in tempo reale del sistema.

## <a name="syntax"></a>Sintassi

```cpp
struct system_clock;
```

## <a name="remarks"></a>Osservazioni

Un *tipo di clock* viene usato per ottenere l'ora corrente come ora UTC. Il tipo incorpora la creazione di un'istanza di [duration](../standard-library/duration-class.md) e il modello di classe [time_point](../standard-library/time-point-class.md) e definisce una funzione membro statica `now()` che restituisce l'ora.

Un clock è *monotonico* se il valore restituito da una prima chiamata a `now()` è sempre minore o uguale al valore restituito da una chiamata successiva a `now()`.

Un clock è *costante* se è *monotonico* e se il tempo tra i cicli macchina è costante.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`system_clock::duration`|Sinonimo di `duration<rep, period>`.|
|`system_clock::period`|Un sinonimo del tipo che viene usato per rappresentare il periodo dei cicli macchina nella creazione di un'istanza contenuta di `duration`.|
|`system_clock::rep`|Un sinonimo del tipo che viene usato per rappresentare il numero di cicli macchina nella creazione di un'istanza contenuta di `duration`.|
|`system_clock::time_point`|Un sinonimo per `time_point<Clock, duration>`, dove `Clock` è un sinonimo per il tipo di clock stesso o un altro tipo di clock che si basa su epoch stesso e ha lo stesso tipo `duration` nidificato.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[from_time_t](#from_time_t)|Statico. Restituisce un oggetto `time_point` che più si avvicina un'ora specificata.|
|[ora](#now)|Statico. Restituisce l'ora corrente.|
|[to_time_t](#to_time_t)|Statico. Restituisce un oggetto `time_t` che più si avvicina un oggetto `time_point` specificato.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Costante system_clock::is_monotonic](#is_monotonic_constant)|Specifica se il tipo di clock è monotonico.|
|[Costante system_clock::is_steady](#is_steady_constant)|Specifica se il tipo di clock è costante.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<chrono>

**Spazio dei nomi:** std::chrono

## <a name="system_clockfrom_time_t"></a><a name="from_time_t"></a>system_clock:: from_time_t

Metodo statico che restituisce un [time_point](../standard-library/time-point-class.md) che si avvicina al più vicino all'ora rappresentata da *TM*.

```cpp
static time_point from_time_t(time_t Tm) noexcept;
```

### <a name="parameters"></a>Parametri

*TM*\
Oggetto [time_t](../c-runtime-library/standard-types.md).

## <a name="system_clockis_monotonic-constant"></a><a name="is_monotonic_constant"></a>Costante system_clock:: is_monotonic

Valore statico che specifica se il tipo di clock è monotonico.

```cpp
static const bool is_monotonic = false;
```

### <a name="return-value"></a>Valore restituito

In questa implementazione `system_clock::is_monotonic` restituisce sempre **`false`** .

### <a name="remarks"></a>Osservazioni

Un clock è *monotonico* se il valore restituito da una prima chiamata a `now()` è sempre minore o uguale al valore restituito da una chiamata successiva a `now()`.

## <a name="system_clockis_steady-constant"></a><a name="is_steady_constant"></a>Costante system_clock:: is_steady

Valore statico che specifica se il tipo di clock è *costante*.

```cpp
static const bool is_steady = false;
```

### <a name="return-value"></a>Valore restituito

In questa implementazione `system_clock::is_steady` restituisce sempre **`false`** .

### <a name="remarks"></a>Osservazioni

Un clock è *costante* se è [monotonico](#is_monotonic_constant) e se il tempo tra i cicli macchina è costante.

## <a name="system_clocknow"></a><a name="now"></a>system_clock:: Now

Metodo statico che restituisce l'ora corrente.

```cpp
static time_point now() noexcept;
```

### <a name="return-value"></a>Valore restituito

Oggetto [time_point](../standard-library/time-point-class.md) che rappresenta l'ora corrente.

## <a name="system_clockto_time_t"></a><a name="to_time_t"></a>system_clock:: to_time_t

Metodo statico che restituisce un [time_t](../c-runtime-library/standard-types.md) che si avvicina più a vicino al tempo rappresentato da *Time*.

```cpp
static time_t to_time_t(const time_point& Time) noexcept;
```

### <a name="parameters"></a>Parametri

*Tempo*\
Oggetto [time_point](../standard-library/time-point-class.md).

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<chrono>](../standard-library/chrono.md)\
[Struct steady_clock](../standard-library/steady-clock-struct.md)
