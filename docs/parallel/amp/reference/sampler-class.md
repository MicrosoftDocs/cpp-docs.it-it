---
title: Classe sampler | Documenti Microsoft
ms.custom: ''
ms.date: 06/28/2018
ms.technology:
- cpp-amp
ms.topic: reference
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
dev_langs:
- C++
ms.assetid: 9a6a9807-497d-402d-b092-8c4d86275b80
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7261a28f5dea4a8de4af3c169f9b67537e5f3088
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121851"
---
# <a name="sampler-class"></a>Classe sampler

La classe campionatore aggrega le informazioni di configurazione di campionamento da usare per campionamento delle trame.

## <a name="syntax"></a>Sintassi

```cpp
class sampler;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore sampler](#ctor)|Di overload. Costruisce un'istanza di prova.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get_address_mode](#get_address_mode)|Restituisce il `address_mode` che è associato l'oggetto campionatore.|
|[get_border_color](#get_border_color)|Restituisce il colore del bordo che ha associato l'oggetto campionatore.|
|[get_filter_mode](#get_filter_mode)|Restituisce il `filter_mode` che è associato l'oggetto campionatore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator=](#operator_eq)|Di overload. Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[address_mode](#address_mode)|Ottiene la modalità di indirizzamento del `sampler` oggetto.|
|[border_color](#border_color)|Ottiene il colore del bordo di `sampler` oggetto.|
|[filter_mode](#filter_mode)|Ottiene la modalità di filtro del `sampler` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`sampler`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_graphics.h

**Namespace:** Concurrency:: Graphics

##  <a name="ctor"></a> campionatore

Costruisce un'istanza di [classe sampler](sampler-class.md).

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

*_Filter_mode*  
 La modalità di filtraggio da utilizzare in campionamento.

*_Address_mode*  
 Modalità di indirizzamento utilizzabile in campionamento per tutte le dimensioni.

*_Border_color*  
 Il colore del bordo da utilizzare se la modalità di indirizzamento è address_border. Il valore predefinito è `float_4(0.0f, 0.0f, 0.0f, 0.0f)`.

*_Other*  
[5] costruttore di copia  
Il `sampler` oggetto da copiare nel nuovo `sampler` istanza.

[6] costruttore di spostamento  
Il `sampler` oggetti da spostare nel nuovo `sampler` istanza.

##  <a name="address_mode"></a> address_mode

Ottiene la modalità di indirizzamento del `sampler` oggetto.

```cpp
__declspec(property(get= get_address_mode)) Concurrency::graphics::address_mode address_mode;
```

##  <a name="border_color"></a> border_color

Ottiene il colore del bordo di `sampler` oggetto.

```cpp
__declspec(property(get= get_border_color)) Concurrency::graphics::float_4 border_color;
```

##  <a name="filter_mode"></a> filter_mode

Ottiene la modalità di filtro del `sampler` oggetto.

```cpp
__declspec(property(get= get_filter_mode)) Concurrency::graphics::filter_mode filter_mode;
```

##  <a name="get_address_mode"></a> get_address_mode

Restituisce la modalità di filtro che è configurato per questo `sampler`.

```cpp
Concurrency::graphics::address_mode get_address_mode() const __GPU;
```

### <a name="return-value"></a>Valore restituito

La modalità di indirizzamento che è configurata per il campionatore.

##  <a name="get_border_color"></a> get_border_color

Restituisce il colore del bordo che è configurato per questo `sampler`.

```cpp
Concurrency::graphics::float_4 get_border_color() const restrict(amp, cpu);
```

### <a name="return-value"></a>Valore restituito

Float_4 che contiene il colore del bordo.

##  <a name="get_filter_mode"></a> get_filter_mode

Restituisce la modalità di filtro che è configurato per questo `sampler`.

```cpp
Concurrency::graphics::filter_mode get_filter_mode() const restrict(amp, cpu);
```

### <a name="return-value"></a>Valore restituito

La modalità di filtro che è configurata per il campionatore.

##  <a name="operator_eq"></a> operator=

Assegna il valore di un altro oggetto campionatore di un campionatore esistente.

```cpp
sampler& operator= (    // [1] copy assignment operator
    const sampler& _Other) restrict(amp, cpu);

sampler& operator= (    // [2] move assignment operator 
    sampler&& _Other) restrict(amp, cpu);
```

### <a name="parameters"></a>Parametri

*_Other*  
[1] operatore di assegnazione di copia  
Il `sampler` oggetto da copiare in questa `sampler`.

[2] operatore di assegnazione di spostamento  
Il `sampler` oggetto su cui spostarsi in questo `sampler`.

### <a name="return-value"></a>Valore restituito

Un riferimento a questa istanza di prova.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)  
