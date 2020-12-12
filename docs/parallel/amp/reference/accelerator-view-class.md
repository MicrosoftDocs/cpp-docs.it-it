---
description: 'Altre informazioni su: accelerator_view Class'
title: Classe accelerator_view
ms.date: 03/27/2019
f1_keywords:
- accelerator_view
- AMPRT/accelerator_view
- AMPRT/Concurrency::accelerator_view::accelerator_view
- AMPRT/Concurrency::accelerator_view::create_marker
- AMPRT/Concurrency::accelerator_view::flush
- AMPRT/Concurrency::accelerator_view::get_accelerator
- AMPRT/Concurrency::accelerator_view::get_is_auto_selection
- AMPRT/Concurrency::accelerator_view::get_is_debug
- AMPRT/Concurrency::accelerator_view::get_queuing_mode
- AMPRT/Concurrency::accelerator_view::get_version
- AMPRT/Concurrency::accelerator_view::wait
- AMPRT/Concurrency::accelerator_view::accelerator
- AMPRT/Concurrency::accelerator_view::is_auto_selection
- AMPRT/Concurrency::accelerator_view::is_debug
- AMPRT/Concurrency::accelerator_view::queuing_mode
- AMPRT/Concurrency::accelerator_view::version
helpviewer_keywords:
- accelerator_view class
ms.assetid: 9f298c21-bf62-46e0-88b8-01c5c78ef144
ms.openlocfilehash: 2d17c856b988ffd759c73e2f4c039cbdf8b5d24f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97254508"
---
# <a name="accelerator_view-class"></a>Classe accelerator_view

Rappresenta un'astrazione del dispositivo virtuale su un C++ AMP acceleratore parallelo di dati.

## <a name="syntax"></a>Sintassi

```cpp
class accelerator_view;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore accelerator_view](#ctor)|Inizializza una nuova istanza della classe `accelerator_view`.|
|[distruttore ~ accelerator_view](#dtor)|Elimina definitivamente l' `accelerator_view` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[create_marker](#create_marker)|Restituisce un oggetto future per tenere traccia del completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.|
|[filo](#flush)|Invia tutti i comandi in sospeso accodati all' `accelerator_view` oggetto al tasto di scelta rapida per l'esecuzione.|
|[get_accelerator](#get_accelerator)|Restituisce l'oggetto `accelerator` per l'oggetto `accelerator_view`.|
|[get_is_auto_selection](#get_is_auto_selection)|Restituisce un valore booleano che indica se il runtime selezionerà automaticamente un acceleratore appropriato quando l' `accelerator_view` oggetto viene passato a una [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).|
|[get_is_debug](#get_is_debug)|Restituisce un valore booleano che indica se l' `accelerator_view` oggetto dispone del livello di debug abilitato per la segnalazione estesa degli errori.|
|[get_queuing_mode](#get_queuing_mode)|Restituisce la modalità di Accodamento per l' `accelerator_view` oggetto.|
|[get_version](#get_version)|Restituisce la versione di `accelerator_view` .|
|[attendere](#wait)|Attende il completamento di tutti i comandi inviati all' `accelerator_view` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore! =](#operator_neq)|Confronta questo `accelerator_view` oggetto con un altro e restituisce **`false`** se sono uguali; in caso contrario, restituisce **`true`** .|
|[operatore =](#operator_eq)|Copia il contenuto dell'oggetto specificato `accelerator_view` in questo.|
|[operatore = =](#operator_eq_eq)|Confronta questo `accelerator_view` oggetto con un altro e restituisce **`true`** se sono uguali; in caso contrario, restituisce **`false`** .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[acceleratore](#accelerator)|Ottiene l'oggetto `accelerator` per l'oggetto `accelerator_view`.|
|[is_auto_selection](#is_auto_selection)|Ottiene un valore booleano che indica se il runtime selezionerà automaticamente un acceleratore appropriato quando l' `accelerator_view` oggetto viene passato a una [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).|
|[is_debug](#is_debug)|Ottiene un valore booleano che indica se l' `accelerator_view` oggetto dispone del livello di debug abilitato per la segnalazione estesa degli errori.|
|[queuing_mode](#queuing_mode)|Ottiene la modalità di Accodamento per l' `accelerator_view` oggetto.|
|[version](#version)|Ottiene la versione del tasto di scelta rapida.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`accelerator_view`

### <a name="remarks"></a>Commenti

Un `accelerator_view` oggetto rappresenta una visualizzazione logica e isolata di un tasto di scelta rapida. Un singolo dispositivo di calcolo fisico può avere molti oggetti logici isolati `accelerator_view` . Ogni Accelerator dispone di un `accelerator_view` oggetto predefinito. `accelerator_view`È possibile creare oggetti aggiuntivi.

I dispositivi fisici possono essere condivisi tra molti thread client. I thread client possono usare in modo cooperativo lo stesso `accelerator_view` oggetto di un acceleratore oppure ogni client può comunicare con un dispositivo di calcolo mediante un `accelerator_view` oggetto indipendente per l'isolamento da altri thread client.

Un `accelerator_view` oggetto può avere uno dei due stati [queuing_mode enumerazione](concurrency-namespace-enums-amp.md#queuing_mode) . Se la modalità di accodamento è `immediate` , i comandi come `copy` e `parallel_for_each` vengono inviati al dispositivo acceleratore corrispondente non appena vengono restituiti al chiamante. Se la modalità di accodamento è `deferred` , tali comandi vengono accodati in una coda di comandi che corrisponde all' `accelerator_view` oggetto. I comandi non vengono effettivamente inviati al dispositivo fino a quando non `flush()` viene chiamato il metodo.

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concorrenza

## <a name="accelerator"></a><a name="accelerator"></a> acceleratore

Ottiene l'oggetto Accelerator per l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_accelerator)) Concurrency::accelerator accelerator;
```

## <a name="accelerator_view"></a><a name="ctor"></a> accelerator_view

Inizializza una nuova istanza della classe accelerator_view copiando un oggetto esistente `accelerator_view` .

### <a name="syntax"></a>Sintassi

```cpp
accelerator_view( const accelerator_view & other );
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Oggetto `accelerator_view` da copiare.

## <a name="create_marker"></a><a name="create_marker"></a> create_marker

Restituisce un oggetto future per tenere traccia del completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.

### <a name="syntax"></a>Sintassi

```cpp
concurrency::completion_future create_marker();
```

### <a name="return-value"></a>Valore restituito

Un futuro per tenere traccia del completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.

## <a name="flush"></a>flush

Invia tutti i comandi in sospeso accodati all'oggetto accelerator_view al tasto di scelta rapida per l'esecuzione.

### <a name="syntax"></a>Sintassi

```cpp
void flush();
```

### <a name="return-value"></a>Valore restituito

Restituisce **`void`** .

## <a name="get_accelerator"></a><a name="get_accelerator"></a> get_accelerator

Restituisce l'oggetto Accelerator per l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
accelerator get_accelerator() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto acceleratore per l'oggetto accelerator_view.

## <a name="get_is_auto_selection"></a><a name="get_is_auto_selection"></a> get_is_auto_selection

Restituisce un valore booleano che indica se il runtime selezionerà automaticamente un acceleratore appropriato quando il accelerator_view viene passato a una [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).

### <a name="syntax"></a>Sintassi

```cpp
bool get_is_auto_selection() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se il runtime selezionerà automaticamente un acceleratore appropriato; in caso contrario, **`false`** .

## <a name="get_is_debug"></a><a name="get_is_debug"></a> get_is_debug

Restituisce un valore booleano che indica se l'oggetto accelerator_view dispone del livello di DEBUG abilitato per la segnalazione estesa degli errori.

### <a name="syntax"></a>Sintassi

```cpp
bool get_is_debug() const;
```

### <a name="return-value"></a>Valore restituito

Valore booleano che indica se l' `accelerator_view` oggetto dispone del livello di debug abilitato per la segnalazione estesa degli errori.

## <a name="get_queuing_mode"></a><a name="get_queuing_mode"></a> get_queuing_mode

Restituisce la modalità di Accodamento per l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
queuing_mode get_queuing_mode() const;
```

### <a name="return-value"></a>Valore restituito

Modalità di Accodamento per l' `accelerator_view` oggetto.

## <a name="get_version"></a><a name="get_version"></a> get_version

Restituisce la versione del accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
unsigned int get_version() const;
```

### <a name="return-value"></a>Valore restituito

Versione della classe `accelerator_view`.

## <a name="is_auto_selection"></a><a name="is_auto_selection"></a> is_auto_selection

Ottiene un valore booleano che indica se il runtime selezionerà automaticamente un acceleratore appropriato quando il accelerator_view viene passato a una [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_is_auto_selection)) bool is_auto_selection;
```

## <a name="is_debug"></a><a name="is_debug"></a> is_debug

Ottiene un valore booleano che indica se l'oggetto accelerator_view dispone del livello DEBUG abilitato per la segnalazione errori estesa.

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_is_debug)) bool is_debug;
```

## <a name="operator"></a><a name="operator_neq"></a> operatore! =

Confronta questo oggetto accelerator_view con un altro e restituisce **`false`** se sono uguali; in caso contrario, restituisce **`true`** .

### <a name="syntax"></a>Sintassi

```cpp
bool operator!= ( const accelerator_view & other ) const;
```

### <a name="parameters"></a>Parametri

*altri*<br/>
`accelerator_view`Oggetto da confrontare con questo.

### <a name="return-value"></a>Valore restituito

**`false`** Se i due oggetti sono uguali. in caso contrario, **`true`** .

## <a name="operator"></a><a name="operator_eq"></a> operatore =

Copia il contenuto dell'oggetto accelerator_view specificato in questo oggetto.

### <a name="syntax"></a>Sintassi

```cpp
accelerator_view & operator= ( const accelerator_view & other );
```

### <a name="parameters"></a>Parametri

*altri*<br/>
`accelerator_view`Oggetto da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento all' `accelerator_view` oggetto modificato.

## <a name="operator"></a><a name="operator_eq_eq"></a> operatore = =

Confronta questo oggetto accelerator_view con un altro e restituisce **`true`** se sono uguali; in caso contrario, restituisce **`false`** .

### <a name="syntax"></a>Sintassi

```cpp
bool operator== ( const accelerator_view & other ) const;
```

### <a name="parameters"></a>Parametri

*altri*<br/>
`accelerator_view`Oggetto da confrontare con questo.

### <a name="return-value"></a>Valore restituito

**`true`** Se i due oggetti sono uguali. in caso contrario, **`false`** .

## <a name="queuing_mode"></a><a name="queuing_mode"></a> queuing_mode

Ottiene la modalità di Accodamento per l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_queuing_mode)) Concurrency::queuing_mode queuing_mode;
```

## <a name="version"></a>version

Ottiene la versione del accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_version)) unsigned int version;
```

## <a name="wait"></a>wait

Attende il completamento di tutti i comandi inviati all'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
void wait();
```

### <a name="return-value"></a>Valore restituito

Restituisce **`void`** .

### <a name="remarks"></a>Commenti

Se il [queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) è `immediate` , questo metodo restituisce immediatamente un risultato senza blocco.

## <a name="accelerator_view"></a><a name="dtor"></a> ~ accelerator_view

Elimina definitivamente l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
~accelerator_view();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
