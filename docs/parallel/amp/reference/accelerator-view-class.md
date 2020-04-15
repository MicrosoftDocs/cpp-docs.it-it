---
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
ms.openlocfilehash: f3be8cc3ab9a0f36027cc38c88f026570d1fdb55
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370883"
---
# <a name="accelerator_view-class"></a>Classe accelerator_view

Rappresenta l'astrazione di un dispositivo virtuale su un acceleratore di ambiente parallelo ai dati AMP di C.

## <a name="syntax"></a>Sintassi

```cpp
class accelerator_view;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore accelerator_view](#ctor)|Inizializza una nuova istanza della classe `accelerator_view`.|
|[Destructor accelerator_view](#dtor)|Distrugge l'oggetto. `accelerator_view`|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[create_marker](#create_marker)|Restituisce un futuro per tenere traccia del `accelerator_view` completamento di tutti i comandi inviati finora a questo oggetto.|
|[sciacquone](#flush)|Invia tutti i comandi in `accelerator_view` sospeso accodati all'oggetto all'acceleratore per l'esecuzione.|
|[get_accelerator](#get_accelerator)|Restituisce l'oggetto `accelerator` per l'oggetto `accelerator_view`.|
|[get_is_auto_selection](#get_is_auto_selection)|Restituisce un valore booleano che indica se il `accelerator_view` runtime selezionerà automaticamente un tasto di scelta rapida appropriato quando l'oggetto viene passato a un [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).|
|[get_is_debug](#get_is_debug)|Restituisce un valore booleano `accelerator_view` che indica se per l'oggetto è abilitato il livello DEBUG per la segnalazione errori estesa.|
|[get_queuing_mode](#get_queuing_mode)|Restituisce la modalità `accelerator_view` di accodamento per l'oggetto.|
|[get_version](#get_version)|Restituisce la `accelerator_view`versione di .|
|[Aspettare](#wait)|Attende il completamento `accelerator_view` di tutti i comandi inviati all'oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operatore!](#operator_neq)|Confronta questo `accelerator_view` oggetto con un altro e restituisce **false** se sono uguali; in caso contrario, restituisce **true**.|
|[operatore di comando](#operator_eq)|Copia il contenuto dell'oggetto specificato `accelerator_view` in questo.|
|[operatore di comando](#operator_eq_eq)|Confronta questo `accelerator_view` oggetto con un altro e restituisce **true** se sono uguali; in caso contrario, restituisce **false**.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Accelerator](#accelerator)|Ottiene l'oggetto `accelerator` per l'oggetto `accelerator_view`.|
|[is_auto_selection](#is_auto_selection)|Ottiene un valore booleano che indica se il runtime `accelerator_view` selezionerà automaticamente un tasto di scelta rapida appropriato quando l'oggetto viene passato a un [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).|
|[is_debug](#is_debug)|Ottiene un valore booleano `accelerator_view` che indica se l'oggetto ha il livello DEBUG abilitato per la segnalazione errori estesa.|
|[queuing_mode](#queuing_mode)|Ottiene la modalità di `accelerator_view` accodamento per l'oggetto.|
|[version](#version)|Ottiene la versione del tasto di scelta rapida.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`accelerator_view`

### <a name="remarks"></a>Osservazioni

Un `accelerator_view` oggetto rappresenta una visualizzazione logica e isolata di un acceleratore. Un singolo dispositivo di calcolo `accelerator_view` fisico può avere molti oggetti logici isolati. Ogni acceleratore `accelerator_view` ha un oggetto predefinito. È `accelerator_view` possibile creare oggetti aggiuntivi.

I dispositivi fisici possono essere condivisi tra molti thread client. I thread client possono `accelerator_view` utilizzare in modo cooperativo lo stesso oggetto di `accelerator_view` un acceleratore oppure ogni client può comunicare con un dispositivo di calcolo tramite un oggetto indipendente per l'isolamento da altri thread client.

Un `accelerator_view` oggetto può avere uno dei due stati [di enumerazione queuing_mode.](concurrency-namespace-enums-amp.md#queuing_mode) Se la modalità `immediate`di accodamento è , i comandi come `copy` e `parallel_for_each` vengono inviati al dispositivo di scelta rapida corrispondente non appena ritornano al chiamante. Se la modalità `deferred`di accodamento è , tali comandi vengono `accelerator_view` accodati in una coda di comandi che corrisponde all'oggetto. I comandi non vengono effettivamente inviati al dispositivo fino a quando non `flush()` viene chiamato.

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt.h

**Spazio dei nomi:** Concorrenza

## <a name="accelerator"></a><a name="accelerator"></a>Accelerator

Ottiene l'oggetto tasto di scelta rapida per l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_accelerator)) Concurrency::accelerator accelerator;
```

## <a name="accelerator_view"></a><a name="ctor"></a>Accelerator_view

Inizializza una nuova istanza della classe accelerator_view `accelerator_view` copiando un oggetto esistente.

### <a name="syntax"></a>Sintassi

```cpp
accelerator_view( const accelerator_view & other );
```

### <a name="parameters"></a>Parametri

*Altro*<br/>
Oggetto `accelerator_view` da copiare.

## <a name="create_marker"></a><a name="create_marker"></a>create_marker

Restituisce un futuro per tenere traccia del `accelerator_view` completamento di tutti i comandi inviati finora a questo oggetto.

### <a name="syntax"></a>Sintassi

```cpp
concurrency::completion_future create_marker();
```

### <a name="return-value"></a>Valore restituito

Un futuro per tenere traccia del completamento `accelerator_view` di tutti i comandi inviati finora a questo oggetto.

## <a name="flush"></a>flush

Invia tutti i comandi in sospeso accodati all'oggetto accelerator_view all'acceleratore per l'esecuzione.

### <a name="syntax"></a>Sintassi

```cpp
void flush();
```

### <a name="return-value"></a>Valore restituito

Restituisce `void`.

## <a name="get_accelerator"></a><a name="get_accelerator"></a>get_accelerator

Restituisce l'oggetto tasto di scelta rapida per l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
accelerator get_accelerator() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto acceleratore per l'oggetto accelerator_view.

## <a name="get_is_auto_selection"></a><a name="get_is_auto_selection"></a>get_is_auto_selection

Restituisce un valore booleano che indica se il runtime selezionerà automaticamente un tasto di scelta rapida appropriato quando il accelerator_view viene passato a un [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).

### <a name="syntax"></a>Sintassi

```cpp
bool get_is_auto_selection() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il runtime selezionerà automaticamente un tasto di scelta rapida appropriato; in caso contrario, **false**.

## <a name="get_is_debug"></a><a name="get_is_debug"></a>get_is_debug

Restituisce un valore booleano che indica se all'oggetto accelerator_view è abilitato il livello DEBUG per la segnalazione errori estesa.

### <a name="syntax"></a>Sintassi

```cpp
bool get_is_debug() const;
```

### <a name="return-value"></a>Valore restituito

Valore booleano che indica `accelerator_view` se per l'oggetto è abilitato il livello DEBUG per la segnalazione errori estesa.

## <a name="get_queuing_mode"></a><a name="get_queuing_mode"></a>get_queuing_mode

Restituisce la modalità di accodamento per l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
queuing_mode get_queuing_mode() const;
```

### <a name="return-value"></a>Valore restituito

Modalità di accodamento `accelerator_view` per l'oggetto.

## <a name="get_version"></a><a name="get_version"></a>get_version

Restituisce la versione del accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
unsigned int get_version() const;
```

### <a name="return-value"></a>Valore restituito

Versione della classe `accelerator_view`.

## <a name="is_auto_selection"></a><a name="is_auto_selection"></a>is_auto_selection

Ottiene un valore booleano che indica se il runtime selezionerà automaticamente un tasto di scelta rapida appropriato quando il accelerator_view viene passato a un [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_is_auto_selection)) bool is_auto_selection;
```

## <a name="is_debug"></a><a name="is_debug"></a>is_debug

Ottiene un valore booleano che indica se l'oggetto accelerator_view dispone del livello DEBUG abilitato per la segnalazione errori estesa.

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_is_debug)) bool is_debug;
```

## <a name="operator"></a><a name="operator_neq"></a>operatore!

Confronta questo accelerator_view oggetto con un altro e restituisce **false** se sono uguali; in caso contrario, restituisce **true**.

### <a name="syntax"></a>Sintassi

```cpp
bool operator!= ( const accelerator_view & other ) const;
```

### <a name="parameters"></a>Parametri

*Altro*<br/>
Oggetto `accelerator_view` da confrontare con questo.

### <a name="return-value"></a>Valore restituito

**false** se i due oggetti sono uguali; in caso contrario, **true**.

## <a name="operator"></a><a name="operator_eq"></a>operatore di comando

Copia il contenuto dell'oggetto accelerator_view specificato in questo oggetto.

### <a name="syntax"></a>Sintassi

```cpp
accelerator_view & operator= ( const accelerator_view & other );
```

### <a name="parameters"></a>Parametri

*Altro*<br/>
Oggetto `accelerator_view` da cui copiare.

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto `accelerator_view` modificato.

## <a name="operator"></a><a name="operator_eq_eq"></a>operatore di comando

Confronta questo accelerator_view oggetto con un altro e restituisce **true** se sono uguali; in caso contrario, restituisce **false**.

### <a name="syntax"></a>Sintassi

```cpp
bool operator== ( const accelerator_view & other ) const;
```

### <a name="parameters"></a>Parametri

*Altro*<br/>
Oggetto `accelerator_view` da confrontare con questo.

### <a name="return-value"></a>Valore restituito

**true** se i due oggetti sono uguali; in caso contrario, **false**.

## <a name="queuing_mode"></a><a name="queuing_mode"></a>queuing_mode

Ottiene la modalità di accodamento per l'oggetto accelerator_view.

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

Restituisce `void`.

### <a name="remarks"></a>Osservazioni

Se [queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) il `immediate`queuing_mode è , questo metodo restituisce immediatamente senza blocco.

## <a name="accelerator_view"></a><a name="dtor"></a>accelerator_view.

Elimina l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```cpp
~accelerator_view();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (AMP)](concurrency-namespace-cpp-amp.md)
