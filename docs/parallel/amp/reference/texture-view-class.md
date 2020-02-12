---
title: Classe texture_view
ms.date: 11/04/2016
f1_keywords:
- texture_view
- AMP_GRAPHICS/texture_view
- AMP_GRAPHICS/Concurrency::graphics::texture_view::texture_view
- AMP_GRAPHICS/Concurrency::graphics::texture_view::gather_alpha
- AMP_GRAPHICS/Concurrency::graphics::texture_view::gather_blue
- AMP_GRAPHICS/Concurrency::graphics::texture_view::gather_green
- AMP_GRAPHICS/Concurrency::graphics::texture_view::gather_red
- AMP_GRAPHICS/Concurrency::graphics::texture_view::get
- AMP_GRAPHICS/Concurrency::graphics::texture_view::sample
- AMP_GRAPHICS/Concurrency::graphics::texture_view::set
- AMP_GRAPHICS/Concurrency::graphics::texture_view::value_type
ms.assetid: 6ec2e289-1626-4727-9592-07981cf1d27d
ms.openlocfilehash: 6bf4b9666d746199cea92fa2bd52b691c67e4a5b
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77126348"
---
# <a name="texture_view-class"></a>Classe texture_view

Fornisce accesso in lettura e accesso in scrittura a una trama. `texture_view` può essere usato solo per leggere trame il cui tipo di valore è `int`, `unsigned int`o `float` con bpse predefinito a 32 bit. Per leggere altri formati di trama, usare `texture_view<const value_type, _Rank>`.

## <a name="syntax"></a>Sintassi

```cpp
template<typename value_type,int _Rank>
class texture_view;

template<typename value_type, int _Rank>
class texture_view
   : public details::_Texture_base<value_type, _Rank>;

template<typename value_type, int _Rank>
class texture_view<const value_type, _Rank>
   : public details::_Texture_base<value_type, _Rank>;
```

### <a name="parameters"></a>Parametri

*value_type*<br/>
Tipo degli elementi nell'aggregazione di trama.

*_Rank*<br/>
Rango del `texture_view`.

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`value_type`|Tipo degli elementi nelle aggregazioni di trama.|
|`coordinates_type`|Tipo della coordinata utilizzata per specificare un Texel nell'`texture_view`, ovvero una `short_vector` con lo stesso rango della trama associata con un tipo di valore `float`.|
|`gather_return_type`|Tipo restituito utilizzato per le operazioni di raccolta, ovvero un `short_vector` di rango 4 che include i quattro componenti cromatici omogenei raccolti dai quattro valori di Texel campionati.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore texture_view](#ctor)|Di overload. Costruisce un'istanza di `texture_view`.|
|[distruttore ~ texture_view](#ctor)|Elimina definitivamente l'istanza di `texture_view`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[gather_alpha](#gather_alpha)|Di overload. Esegue il campionamento della trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti alfa (w) dei quattro Texel campionati.|
|[gather_blue](#gather_blue)|Di overload. Esegue il campionamento della trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti blu (z) dei quattro Texel campionati.|
|[gather_green](#gather_green)|Di overload. Esegue il campionamento della trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti verdi (y) dei quattro Texel campionati.|
|[gather_red](#gather_red)|Di overload. Esegue il campionamento della trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti rossi (x) dei quattro Texel campionati.|
|[get](#get)|Di overload. Ottiene il valore dell'elemento in base all'indice.|
|[sample](#sample)|Di overload. Esegue il campionamento della trama in corrispondenza delle coordinate e del livello di dettaglio specificati utilizzando la configurazione di campionamento specificata.|
|[set](#set)|Imposta il valore di un elemento in base all'indice.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator()](#operator_call)|Di overload. Ottiene il valore dell'elemento in base all'indice.|
|[operator\[\]](#operator_at)|Di overload. Ottiene il valore dell'elemento in base all'indice.|
|[operator=](#operator_eq)|Di overload. Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[value_type](#value_type)|Tipo di valore degli elementi della `texture_view`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_Texture_base`

`texture_view`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_graphics. h

**Spazio dei nomi:** Concurrency:: graphics

## <a name="dtor"></a>~ texture_view

Elimina definitivamente l'istanza di `texture_view`.

```cpp
~texture_view() restrict(amp, cpu);
```

## <a name="ctor"></a>texture_view

Costruisce un'istanza di `texture_view`.

```cpp
texture_view(// [1] constructor
    texture<value_type, _Rank>& _Src) restrict(amp);

texture_view(// [2] constructor
    texture<value_type, _Rank>& _Src,
    unsigned int _Mipmap_level = 0) restrict(cpu);

texture_view(// [3] constructor
    const texture<value_type, _Rank>& _Src) restrict(amp);

texture_view(// [4] constructor
    const texture<value_type, _Rank>& _Src,
    unsigned int _Most_detailed_mip,
    unsigned int _Mip_levels) restrict(cpu);

texture_view(// [5] copy constructor
    const texture_view<value_type, _Rank>& _Other) restrict(amp, cpu);

texture_view(// [6] copy constructor
    const texture_view<const value_type, _Rank>& _Other) restrict(amp, cpu);

texture_view(// [7] copy constructor
    const texture_view<const value_type, _Rank>& _Other,
    unsigned int _Most_detailed_mip,
    unsigned int _Mip_levels) restrict(cpu);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
[1, 2] Costruttore `texture` in cui viene creata la `texture_view` scrivibile.

[3, 4] Costruttore `texture` in cui viene creata la `texture_view` non scrivibile.

*_Other*<br/>
[5] costruttore di copia il `texture_view`scrivibile di origine.

[6, 7] Costruttore di copia il `texture_view`di origine non scrivibile.

*_Mipmap_level*<br/>
Livello di mipmap specifico nell'`texture` di origine a cui è associata questa `texture_view` scrivibile. Il valore predefinito è 0, che rappresenta il livello MIP principale (più dettagliato).

*_Most_detailed_mip*<br/>
Livello MIP principale (più dettagliato) per la vista, relativo all'oggetto `texture_view` specificato.

*_Mip_levels*<br/>
Il numero di livelli di mipmap accessibili tramite il `texture_view`.

## <a name="gather_red"></a>gather_red

Esegue il campionamento della trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti rossi (x) dei quattro Texel campionati.

```cpp
const gather_return_type gather_red(
    const sampler& _Sampler,
    const coordinates_type& _Coord) const restrict(amp);

template<
    address_mode _Address_mode = address_clamp
>
const gather_return_type gather_red(
    const coordinates_type& _Coord) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Address_mode*<br/>
Modalità di indirizzamento da utilizzare per campionare il `texture_view`. La modalità di indirizzo è la stessa per tutte le dimensioni.

*_Sampler*<br/>
Configurazione del campionatore da utilizzare per campionare il `texture_view`.

*_Coord*<br/>
Coordinate da cui eseguire l'esempio. I valori delle coordinate frazionarie vengono utilizzati per l'interpolazione tra Texel di esempio.

### <a name="return-value"></a>Valore restituito

Un short vector di rango 4 che contiene il componente rosso (x) dei 4 valori Texel campionati.

## <a name="gather_green"></a>gather_green

Esegue il campionamento della trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti verdi (y) dei quattro Texel campionati.

```cpp
const gather_return_type gather_green(
    const sampler& _Sampler,
    const coordinates_type& _Coord) const restrict(amp);

template<
    address_mode _Address_mode = address_clamp
>
const gather_return_type gather_green(
    const coordinates_type& _Coord) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Address_mode*<br/>
Modalità di indirizzamento da utilizzare per campionare il `texture_view`. La modalità di indirizzo è la stessa per tutte le dimensioni.

*_Sampler*<br/>
Configurazione del campionatore da utilizzare per campionare il `texture_view`.

*_Coord*<br/>
Coordinate da cui eseguire l'esempio. I valori delle coordinate frazionarie vengono utilizzati per l'interpolazione tra Texel di esempio.

### <a name="return-value"></a>Valore restituito

Un short vector di rango 4 che contiene il componente verde (y) dei 4 valori Texel campionati.

## <a name="gather_blue"></a>gather_blue

Esegue il campionamento della trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti blu (z) dei quattro Texel campionati.

```cpp
const gather_return_type gather_blue(
    const sampler& _Sampler,
    const coordinates_type& _Coord) const restrict(amp);

template<
    address_mode _Address_mode = address_clamp
>
const gather_return_type gather_blue(
    const coordinates_type& _Coord) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Address_mode*<br/>
Modalità di indirizzamento da utilizzare per campionare il `texture_view`. La modalità di indirizzo è la stessa per tutte le dimensioni.

*_Sampler*<br/>
Configurazione del campionatore da utilizzare per campionare il `texture_view`.

*_Coord*<br/>
Coordinate da cui eseguire l'esempio. I valori delle coordinate frazionarie vengono utilizzati per l'interpolazione tra Texel di esempio.

### <a name="return-value"></a>Valore restituito

Un short vector di rango 4 che contiene il componente rosso (x) dei 4 valori Texel campionati.

## <a name="gather_alpha"></a>gather_alpha

Esegue il campionamento della trama in corrispondenza delle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti alfa (w) dei quattro Texel campionati.

```cpp
const gather_return_type gather_alpha(
    const sampler& _Sampler,
    const coordinates_type& _Coord) const restrict(amp);

template<
    address_mode _Address_mode = address_clamp
>
const gather_return_type gather_alpha(
    const coordinates_type& _Coord) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Address_mode*<br/>
Modalità di indirizzamento da utilizzare per campionare il `texture_view`. La modalità di indirizzo è la stessa per tutte le dimensioni.

*_Sampler*<br/>
Configurazione del campionatore da utilizzare per campionare il `texture_view`.

*_Coord*<br/>
Coordinate da cui eseguire l'esempio. I valori delle coordinate frazionarie vengono utilizzati per l'interpolazione tra Texel di esempio.

### <a name="return-value"></a>Valore restituito

Un short vector di rango 4 che contiene il componente alfa (w) dei 4 valori Texel campionati.

## <a name="get"></a>Ottieni

Ottiene il valore dell'elemento in corrispondenza dell'indice specificato.

```cpp
const value_type get(
    const index<_Rank>& _Index) const restrict(amp);

value_type get(
    const index<_Rank>& _Index,
    unsigned int _Mip_level = 0) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice dell'elemento da ottenere, possibilmente multidimensionale.

*_Mip_level*<br/>
Livello di mipmap da cui ottenere il valore. Il valore predefinito 0 rappresenta il livello di mipmap più dettagliato.

### <a name="return-value"></a>Valore restituito

Valore dell'elemento.

## <a name="operator_eq"></a>operatore =

Assegna una visualizzazione della stessa trama del `texture_view` specificato a questa istanza di `texture_view`.

```cpp
texture_view<value_type, _Rank>& operator= (// [1] copy constructor
    const texture_view<value_type, _Rank>& _Other) restrict(amp, cpu);

texture_view<const value_type, _Rank>& operator= (// [2] copy constructor
    const texture_view<value_type, _Rank>& _Other) restrict(cpu);

texture_view<const value_type, _Rank>& operator= (// [3] copy constructor
    const texture_view<const value_type, _Rank>& _Other) restrict(amp, cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
[1, 2] Costruttore di copia un oggetto `texture_view` scrivibile.

[3] costruttore di copia un oggetto `texture_view` non scrivibile.

### <a name="return-value"></a>Valore restituito

Riferimento a questa istanza di `texture_view`.

## <a name="operator_at"></a>operator []

Restituisce il valore dell'elemento in base all'indice.

```cpp
const value_type operator[] (const index<_Rank>& _Index) const restrict(amp);

const value_type operator[] (int _I0) const restrict(amp);

value_type operator[] (const index<_Rank>& _Index) const restrict(amp);

value_type operator[] (int _I0) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice, possibilmente multidimensionale.

*_I0*<br/>
Indice unidimensionale.

### <a name="return-value"></a>Valore restituito

Valore dell'elemento indicizzato da `_Index`.

## <a name="operator_call"></a>operatore ()

Restituisce il valore dell'elemento in base all'indice.

```cpp
const value_type operator() (
    const index<_Rank>& _Index) const restrict(amp);

const value_type operator() (
    int _I0) const restrict(amp);

const value_type operator() (
    int _I0,   int _I1) const restrict(amp);

const value_type operator() (
    int _I0,
    int _I1,
    int _I2) const restrict(amp);

value_type operator() (
    const index<_Rank>& _Index) const restrict(amp);

value_type operator() (
    int _I0) const restrict(amp);

value_type operator() (
    int _I0,
    int _I1) const restrict(amp);

value_type operator() (
    int _I0,
    int _I1,
    int _I2) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice, possibilmente multidimensionale.

*_I0*<br/>
Componente più significativo dell'indice.

*_I1*<br/>
Componente successivo a quello più significativo dell'indice.

*_I2*<br/>
Componente meno significativo dell'indice.

### <a name="return-value"></a>Valore restituito

Valore dell'elemento indicizzato da `_Index`.

## <a name="sample"></a>esempio

Esegue il campionamento della trama in corrispondenza delle coordinate e del livello di dettaglio specificati utilizzando la configurazione di campionamento specificata.

```cpp
value_type sample(
    const sampler& _Sampler,
    const coordinates_type& _Coord,
    float _Level_of_detail = 0.0f) const restrict(amp);

template<
    filter_mode _Filter_mode = filter_linear,
    address_mode _Address_mode = address_clamp
>
value_type sample(
    const coordinates_type& _Coord,
    float _Level_of_detail = 0.0f) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Filter_mode*<br/>
Modalità di filtro da utilizzare per campionare il texture_view. La modalità filtro è la stessa per i filtri di riduzione a icona, massimizzazione e mipmap.

*_Address_mode*<br/>
Modalità di indirizzamento da utilizzare per campionare il texture_view. La modalità di indirizzo è la stessa per tutte le dimensioni.

*_Sampler*<br/>
Configurazione del campionatore da utilizzare per campionare il texture_view.

*_Coord*<br/>
Coordinate da cui eseguire l'esempio. I valori delle coordinate frazionarie vengono utilizzati per l'interpolazione tra i valori Texel.

*_Level_of_detail*<br/>
Il valore specifica il livello di mipmap da cui eseguire l'esempio. I valori frazionari vengono utilizzati per interpolare tra due livelli di mipmap. Il livello di dettaglio predefinito è 0, che rappresenta il livello MIP più dettagliato.

### <a name="return-value"></a>Valore restituito

Valore di esempio interpolato.

## <a name="set"></a>set

Imposta il valore dell'elemento in corrispondenza dell'indice specificato sul valore specificato.

```cpp
void set(
    const index<_Rank>& _Index,
    const value_type& value) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice dell'elemento da impostare, possibilmente multidimensionali.

*value*<br/>
Valore su cui impostare l'elemento.

## <a name="value_type"></a>value_type

Tipo di valore degli elementi della texture_view.

```cpp
typedef typename const value_type value_type;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
