---
title: Classe sampler
ms.date: 06/28/2018
f1_keywords:
- sampler
- AMP_GRAPHICS/sampler
- AMP_GRAPHICS/concurrency::sampler::graphics::sampler
- AMP_GRAPHICS/concurrency::sampler::graphics::get_address_mode
- AMP_GRAPHICS/concurrency::sampler::graphics::get_border_color
- AMP_GRAPHICS/concurrency::sampler::graphics::get_filter_mode
- AMP_GRAPHICS/concurrency::sampler::graphics::address_mode
- AMP_GRAPHICS/concurrency::sampler::graphics::border_color
- AMP_GRAPHICS/concurrency::sampler::graphics::filter_mode
ms.assetid: 9a6a9807-497d-402d-b092-8c4d86275b80
ms.openlocfilehash: 8f47bf6e9b88dba1e94e9e2ed2b93c8d2d3f9b8c
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77126353"
---
# <a name="sampler-class"></a>Classe sampler

La classe Sampler aggrega le informazioni di configurazione del campionamento da utilizzare per il campionamento della trama.

## <a name="syntax"></a>Sintassi

```cpp
class sampler;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore Sampler](#ctor)|Di overload. Costruisce un'istanza del campionatore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get_address_mode](#get_address_mode)|Restituisce il `address_mode` associato all'oggetto campionatore.|
|[get_border_color](#get_border_color)|Restituisce il colore del bordo associato all'oggetto campionatore.|
|[get_filter_mode](#get_filter_mode)|Restituisce il `filter_mode` associato all'oggetto campionatore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator=](#operator_eq)|Di overload. Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[address_mode](#address_mode)|Ottiene la modalità di indirizzamento dell'oggetto `sampler`.|
|[border_color](#border_color)|Ottiene il colore del bordo dell'oggetto `sampler`.|
|[filter_mode](#filter_mode)|Ottiene la modalità di filtro dell'oggetto `sampler`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`sampler`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_graphics. h

**Spazio dei nomi:** Concurrency:: graphics

## <a name="ctor"></a>campionatore

Costruisce un'istanza della [classe Sampler](sampler-class.md).

```cpp
sampler() restrict(cpu);    // [1] default constructor

sampler(                    // [2] constructor
    filter_mode _Filter_mode) restrict(cpu);

sampler(                    // [3] constructor
    address_mode _Address_mode,
    float_4 _Border_color = float_4(0.0f,
    0.0f,
    0.0f,
    0.0f)) restrict(cpu);

sampler(                    // [4] constructor
    filter_mode _Filter_mode,
    address_mode _Address_mode,
    float_4 _Border_color = float_4(0.0f,
    0.0f,
    0.0f,
    0.0f)) restrict(cpu);

sampler(                    // [5] copy constructor
    const sampler& _Other) restrict(amp,
    cpu);

sampler(                    // [6] move constructor
    sampler&& _Other) restrict(amp,
    cpu);
```

### <a name="parameters"></a>Parametri

*_Filter_mode*<br/>
Modalità di filtro da utilizzare per il campionamento.

*_Address_mode*<br/>
Modalità di indirizzamento da utilizzare per il campionamento per tutte le dimensioni.

*_Border_color*<br/>
Colore del bordo da utilizzare se la modalità di indirizzo è address_border. Il valore predefinito è `float_4(0.0f, 0.0f, 0.0f, 0.0f)`.

*_Other*<br/>
[5] costruttore di copia l'oggetto `sampler` da copiare nella nuova istanza di `sampler`.

[6] spostare il costruttore `sampler` oggetto da spostare nella nuova istanza di `sampler`.

## <a name="address_mode"></a>address_mode

Ottiene la modalità di indirizzamento dell'oggetto `sampler`.

```cpp
__declspec(property(get= get_address_mode)) Concurrency::graphics::address_mode address_mode;
```

## <a name="border_color"></a>border_color

Ottiene il colore del bordo dell'oggetto `sampler`.

```cpp
__declspec(property(get= get_border_color)) Concurrency::graphics::float_4 border_color;
```

## <a name="filter_mode"></a>filter_mode

Ottiene la modalità di filtro dell'oggetto `sampler`.

```cpp
__declspec(property(get= get_filter_mode)) Concurrency::graphics::filter_mode filter_mode;
```

## <a name="get_address_mode"></a>get_address_mode

Restituisce la modalità di filtro configurata per questo `sampler`.

```cpp
Concurrency::graphics::address_mode get_address_mode() const __GPU;
```

### <a name="return-value"></a>Valore restituito

Modalità di indirizzo configurata per il campionatore.

## <a name="get_border_color"></a>get_border_color

Restituisce il colore del bordo configurato per questo `sampler`.

```cpp
Concurrency::graphics::float_4 get_border_color() const restrict(amp, cpu);
```

### <a name="return-value"></a>Valore restituito

Float_4 che contiene il colore del bordo.

## <a name="get_filter_mode"></a>get_filter_mode

Restituisce la modalità di filtro configurata per questo `sampler`.

```cpp
Concurrency::graphics::filter_mode get_filter_mode() const restrict(amp, cpu);
```

### <a name="return-value"></a>Valore restituito

Modalità di filtro configurata per il campionatore.

## <a name="operator_eq"></a>operatore =

Assegna il valore di un altro oggetto sampler a un campionatore esistente.

```cpp
sampler& operator= (    // [1] copy assignment operator
    const sampler& _Other) restrict(amp, cpu);

sampler& operator= (    // [2] move assignment operator
    sampler&& _Other) restrict(amp, cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
[1] operatore di assegnazione di copia `sampler` oggetto da copiare in questo `sampler`.

[2] operatore di assegnazione di spostamento `sampler` oggetto da spostare in questa `sampler`.

### <a name="return-value"></a>Valore restituito

Riferimento a questa istanza del campionatore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
