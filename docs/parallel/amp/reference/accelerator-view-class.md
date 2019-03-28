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
ms.openlocfilehash: 4075051ec07fc1331d815534a715c0411160fe14
ms.sourcegitcommit: 309dc532f13242854b47759cef846de59bb807f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/28/2019
ms.locfileid: "58566026"
---
# <a name="acceleratorview-class"></a>Classe accelerator_view

Rappresenta un'astrazione del dispositivo virtuale su un acceleratore di dati paralleli AMP C++.

### <a name="syntax"></a>Sintassi

```
class accelerator_view;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[accelerator_view, costruttore](#ctor)|Inizializza una nuova istanza della classe `accelerator_view`.|
|[~ accelerator_view, distruttore](#dtor)|Elimina definitivamente il `accelerator_view` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[create_marker](#create_marker)|Restituisce una future per tenere traccia del completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.|
|[flush](#flush)|Invia tutti i comandi in sospeso nella coda del `accelerator_view` oggetto al tasto di scelta rapida per l'esecuzione.|
|[get_accelerator](#get_accelerator)|Restituisce l'oggetto `accelerator` per l'oggetto `accelerator_view`.|
|[get_is_auto_selection](#get_is_auto_selection)|Restituisce un valore booleano che indica se il runtime selezionerà automaticamente un tasto di scelta appropriato quando la `accelerator_view` oggetto viene passato a un [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).|
|[get_is_debug](#get_is_debug)|Restituisce un valore booleano che indica se il `accelerator_view` oggetto dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori.|
|[get_queuing_mode](#get_queuing_mode)|Restituisce la modalità di Accodamento per il `accelerator_view` oggetto.|
|[get_version](#get_version)|Restituisce la versione del `accelerator_view`.|
|[wait](#wait)|Attende che tutti i comandi inviati al `accelerator_view` oggetto alla fine.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator!=](#operator_neq)|Confronta questo `accelerator_view` oggetto con un altro e restituisce **false** se sono uguali; in caso contrario, restituisce **true**.|
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto specificato `accelerator_view` in questo oggetto.|
|[operator==](#operator_eq_eq)|Confronta questo `accelerator_view` oggetto con un altro e restituisce **true** se sono uguali; in caso contrario, restituisce **false**.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[accelerator](#accelerator)|Ottiene l'oggetto `accelerator` per l'oggetto `accelerator_view`.|
|[is_auto_selection](#is_auto_selection)|Ottiene un valore booleano che indica se il runtime selezionerà automaticamente un tasto di scelta appropriato quando la `accelerator_view` oggetto viene passato a un [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).|
|[is_debug](#is_debug)|Ottiene un valore booleano che indica se il `accelerator_view` oggetto dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori.|
|[queuing_mode](#queuing_mode)|Ottiene la modalità di Accodamento per il `accelerator_view` oggetto.|
|[version](#version)|Ottiene la versione dell'acceleratore.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`accelerator_view`

### <a name="remarks"></a>Note

Un `accelerator_view` oggetto rappresenta una visualizzazione logica e isolata di un tasto di scelta rapida. Un dispositivo fisico di calcolo singolo può avere numerosi logici e isolati `accelerator_view` oggetti. Ogni acceleratore ha un valore predefinito `accelerator_view` oggetto. Aggiuntive `accelerator_view` oggetti possono essere creati.

Dispositivi fisici possono essere condivisi tra più thread client. Thread client in modo cooperativo può usare lo stesso `accelerator_view` oggetto di un acceleratore, oppure ogni client può comunicare con un dispositivo di calcolo tramite un indipendenti `accelerator_view` oggetto per l'isolamento da altri thread client.

Un' `accelerator_view` oggetto può avere uno dei due [enumerazione queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) stati. Se è la modalità di Accodamento `immediate`, ad esempio i comandi `copy` e `parallel_for_each` vengono inviati al dispositivo acceleratore corrispondente non appena ritornano al chiamante. Se è la modalità di Accodamento `deferred`, tali comandi sono messi in una coda di comandi che corrisponde alla `accelerator_view` oggetto. I comandi non sono effettivamente inviati al dispositivo finché `flush()` viene chiamato.

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concorrenza

## <a name="accelerator"></a> tasti di scelta rapida

Ottiene l'oggetto di tasti di scelta rapida per l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```
__declspec(property(get= get_accelerator)) Concurrency::accelerator accelerator;
```

## <a name="ctor"></a> accelerator_view

Inizializza una nuova istanza della classe accelerator_view copiando un oggetto esistente `accelerator_view` oggetto.

### <a name="syntax"></a>Sintassi

```
accelerator_view( const accelerator_view & other );
```

### <a name="parameters"></a>Parametri

*other*<br/>
Il `accelerator_view` oggetto da copiare.

## <a name="createmarker"></a>create_marker

Restituisce una future per tenere traccia del completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.

### <a name="syntax"></a>Sintassi

```
concurrency::completion_future create_marker();
```

### <a name="return-value"></a>Valore restituito

Una future per tenere traccia del completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.

## <a name="flush"></a>flush

Invia che tutti i comandi in sospeso in coda per l'oggetto accelerator_view per il tasto di scelta rapida per l'esecuzione.

### <a name="syntax"></a>Sintassi

```
void flush();
```

### <a name="return-value"></a>Valore restituito

Restituisce `void`.

## <a name="getaccelerator"></a>get_accelerator

Restituisce l'oggetto di tasti di scelta rapida per l'oggetto accelerator_view.
### <a name="syntax"></a>Sintassi

```
accelerator get_accelerator() const;
```

### <a name="return-value"></a>Valore restituito

L'oggetto di tasti di scelta rapida per l'oggetto accelerator_view.

## <a name="getisautoselection"></a>get_is_auto_selection

Restituisce un valore booleano che indica se il runtime selezionerà automaticamente un tasto di scelta appropriato quando l'oggetto accelerator_view viene passato a un [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).

### <a name="syntax"></a>Sintassi

```
bool get_is_auto_selection() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il runtime selezionerà automaticamente un acceleratore appropriato; in caso contrario, **false**.

## <a name="getisdebug"></a>get_is_debug

Restituisce un valore booleano che indica se l'oggetto accelerator_view dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori.

### <a name="syntax"></a>Sintassi

```
bool get_is_debug() const;
```

### <a name="return-value"></a>Valore restituito

Valore booleano che indica se il `accelerator_view` oggetto dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori.

## <a name="getqueuingmode"></a>get_queuing_mode

Restituisce la modalità di Accodamento per l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```
queuing_mode get_queuing_mode() const;
```

### <a name="return-value"></a>Valore restituito

La modalità di Accodamento per il `accelerator_view` oggetto.

## <a name="getversion"></a>get_version

Restituisce la versione di accelerator_view.

### <a name="syntax"></a>Sintassi

```
unsigned int get_version() const;
```

### <a name="return-value"></a>Valore restituito

La versione del `accelerator_view`.

## <a name="isautoselection"></a>is_auto_selection

Ottiene un valore booleano che indica se il runtime selezionerà automaticamente un tasto di scelta appropriato quando l'oggetto accelerator_view viene passato a un [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).

### <a name="syntax"></a>Sintassi

```
__declspec(property(get= get_is_auto_selection)) bool is_auto_selection;
```

## <a name="isdebug"></a>is_debug

Ottiene un valore booleano che indica se l'oggetto accelerator_view dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori.

### <a name="syntax"></a>Sintassi

```
__declspec(property(get= get_is_debug)) bool is_debug;
```

## <a name="operator_neq"></a> operator!=

Confronta questo oggetto accelerator_view con un altro e restituisce **false** se sono uguali; in caso contrario, restituisce **true**.

### <a name="syntax"></a>Sintassi

```
bool operator!= ( const accelerator_view & other ) const;
```

### <a name="parameters"></a>Parametri

*other*<br/>
Il `accelerator_view` oggetto da confrontare con questo.

### <a name="return-value"></a>Valore restituito

**false** se i due oggetti sono uguali; in caso contrario, **true**.

## <a name="operator_eq"></a> operator=

Copia il contenuto dell'oggetto accelerator_view specificato in questo.

### <a name="syntax"></a>Sintassi

```
accelerator_view & operator= ( const accelerator_view & other );
```

### <a name="parameters"></a>Parametri

*other*<br/>
Il `accelerator_view` da copiare dall'oggetto.

### <a name="return-value"></a>Valore restituito

Un riferimento a modificato `accelerator_view` oggetto.

## <a name="operator_eq_eq"></a> operator==

Confronta questo oggetto accelerator_view con un altro e restituisce **true** se sono uguali; in caso contrario, restituisce **false**.

### <a name="syntax"></a>Sintassi

```
bool operator== ( const accelerator_view & other ) const;
```

### <a name="parameters"></a>Parametri

*other*<br/>
Il `accelerator_view` oggetto da confrontare con questo.

### <a name="return-value"></a>Valore restituito

**true** se i due oggetti sono uguali; in caso contrario, **false**.

## <a name="queuingmode"></a>queuing_mode

Ottiene la modalità di Accodamento per l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```
__declspec(property(get= get_queuing_mode)) Concurrency::queuing_mode queuing_mode;
```

## <a name="version"></a>version

Ottiene la versione di accelerator_view.

### <a name="syntax"></a>Sintassi

```
__declspec(property(get= get_version)) unsigned int version;
```

## <a name="wait"></a>Attendere

Attende che tutti i comandi inviati all'oggetto accelerator_view terminare.

### <a name="syntax"></a>Sintassi

```
void wait();
```

### <a name="return-value"></a>Valore restituito

Restituisce `void`.

### <a name="remarks"></a>Note

Se il [queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) è `immediate`, questo metodo viene restituito immediatamente senza bloccarsi.

##  <a name="dtor"></a> ~ accelerator_view

Elimina l'oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```
~accelerator_view();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
