---
title: Classe tiled_index
ms.date: 03/27/2019
f1_keywords:
- tiled_index
- AMP/tiled_index
- AMP/Concurrency::tiled_index::tiled_index
- AMP/Concurrency::tiled_index::get_tile_extent
- AMP/Concurrency::tiled_index::barrier
- AMP/Concurrency::tiled_index::global
- AMP/Concurrency::tiled_index::local
- AMP/Concurrency::tiled_index::rank
- AMP/Concurrency::tiled_index::tile
- AMP/Concurrency::tiled_index::tile_dim0
- AMP/Concurrency::tiled_index::tile_dim1
- AMP/Concurrency::tiled_index::tile_dim2
- AMP/Concurrency::tiled_index::tile_origin
- AMP/Concurrency::tiled_index::tile_extent
helpviewer_keywords:
- tiled_index class
ms.assetid: 0ce2ae26-f1bb-4436-b473-a9e1b619bb38
ms.openlocfilehash: eda01667a6b239284c682ba6ae3f9b857c713447
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142429"
---
# <a name="tiled_index-class"></a>Classe tiled_index

Fornisce un indice in un oggetto [tiled_extent](tiled-extent-class.md) . Questa classe dispone di proprietà per accedere a elementi relativi all'origine del riquadro locale e relativi all'origine globale. Per ulteriori informazioni sugli spazi affiancati, vedere [utilizzo dei riquadri](../../../parallel/amp/using-tiles.md).

## <a name="syntax"></a>Sintassi

```cpp
template <
    int _Dim0,
    int _Dim1 = 0,
    int _Dim2 = 0
>
class tiled_index : public _Tiled_index_base<3>;

template <
    int _Dim0,
    int _Dim1
>
class tiled_index<_Dim0, _Dim1, 0> : public _Tiled_index_base<2>;

template <
    int _Dim0
>
class tiled_index<_Dim0, 0, 0> : public _Tiled_index_base<1>;
```

### <a name="parameters"></a>Parametri

*_Dim0*<br/>
Lunghezza della dimensione più significativa.

*_Dim1*<br/>
Lunghezza della dimensione più vicina alla dimensione più significativa.

*_Dim2*<br/>
Lunghezza della dimensione meno significativa.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore tiled_index](#ctor)|Inizializza una nuova istanza della classe `tile_index`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get_tile_extent](#tiled_index__get_tile_extent)|Restituisce un oggetto [extent](extent-class.md) con i valori degli argomenti di modello `tiled_index` `_Dim0`, `_Dim1`e `_Dim2`.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Costante di barriera](#tiled_index__barrier)|Archivia un oggetto [tile_barrier](tile-barrier-class.md) che rappresenta una barriera nel riquadro corrente dei thread.|
|||
|[Costante globale](#tiled_index__global)|Archivia un oggetto [Indice](index-class.md) di rango 1, 2 o 3 che rappresenta l'indice globale in un oggetto Grid.|
|[Costante locale](#tiled_index__local)|Archivia un oggetto `index` di rango 1, 2 o 3 che rappresenta l'indice relativo nella sezione corrente di un oggetto [tiled_extent](tiled-extent-class.md) .|
|[Costante di rango](#tiled_index__rank)|Archivia il rango dell'oggetto `tiled_index`.|
|[Costante riquadro](#tiled_index__tile)|Archivia un oggetto `index` di rango 1, 2 o 3 che rappresenta le coordinate della sezione corrente di un oggetto `tiled_extent`.|
|[Costante tile_dim0](#tiled_index__tile_dim0)|Archivia la lunghezza della dimensione più significativa.|
|[Costante tile_dim1](#tiled_index__tile_dim1)|Archivia la lunghezza della dimensione più vicina alla dimensione più significativa.|
|[Costante tile_dim2](#tiled_index__tile_dim2)|Archivia la lunghezza della dimensione meno significativa.|
|[Costante tile_origin](#tiled_index__tile_origin)|Archivia un oggetto `index` di rango 1, 2 o 3 che rappresenta le coordinate globali dell'origine del riquadro corrente in un oggetto `tiled_extent`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[tile_extent](#tile_extent)|Ottiene un oggetto [extent](extent-class.md) con i valori degli argomenti del modello `tiled_index` `tiled_index` argomenti del modello `_Dim0`, `_Dim1`e `_Dim2`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_Tiled_index_base`

`tiled_index`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>Costruttore tiled_index

Inizializza una nuova istanza della classe `tiled_index`.

### <a name="syntax"></a>Sintassi

```cpp
tiled_index(
    const index<rank>& _Global,
    const index<rank>& _Local,
    const index<rank>& _Tile,
    const index<rank>& _Tile_origin,
    const tile_barrier& _Barrier ) restrict(amp,cpu);

tiled_index(
    const tiled_index& _Other ) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Global*<br/>
[Indice](index-class.md) globale del `tiled_index`costruito.

*_Local*<br/>
[Indice](index-class.md) locale del `tiled_index` costruito

*_Tile*<br/>
[Indice](index-class.md) dei riquadri del `tiled_index` costruito

*_Tile_origin*<br/>
[Indice](index-class.md) di origine della sezione del `tiled_index` costruito

*_Barrier*<br/>
Oggetto [tile_barrier](tile-barrier-class.md) del `tiled_index`costruito.

*_Other*<br/>
Oggetto `tile_index` da copiare nel `tiled_index`costruito.

### <a name="overloads"></a>Overloads

|||
|-|-|
|Nome|Descrizione|
|`tiled_index(const index<rank>& _Global, const index<rank>& _Local, const index<rank>& _Tile, const index<rank>& _Tile_origin, const tile_barrier& _Barrier restrict(amp,cpu);`|Inizializza una nuova istanza della classe `tile_index` dall'indice del riquadro nelle coordinate globali e la posizione relativa nel riquadro nelle coordinate locali. Vengono calcolati i parametri `_Global` e `_Tile_origin`.|
|`tiled_index(    const tiled_index& _Other) restrict(amp,cpu);`|Inizializza una nuova istanza della classe `tile_index` copiando l'oggetto `tiled_index` specificato.|

## <a name="tiled_index__get_tile_extent"></a>get_tile_extent

Restituisce un oggetto [extent](extent-class.md) con i valori degli argomenti di modello `tiled_index` `_Dim0`, `_Dim1`e `_Dim2`.

### <a name="syntax"></a>Sintassi

```cpp
extent<rank> get_tile_extent()restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

Oggetto `extent` con i valori degli argomenti di modello `tiled_index` `_Dim0`, `_Dim1`e `_Dim2`.

## <a name="tiled_index__barrier"></a>barriera

Archivia un oggetto [tile_barrier](tile-barrier-class.md) che rappresenta una barriera nel riquadro corrente dei thread.

### <a name="syntax"></a>Sintassi

```cpp
const tile_barrier barrier;
```

## <a name="tiled_index__global"></a>globale

Archivia un oggetto [Indice](index-class.md) di rango 1, 2 o 3 che rappresenta l'indice globale di un oggetto.

### <a name="syntax"></a>Sintassi

```cpp
const index<rank> global;
```

## <a name="tiled_index__local"></a>locale

Archivia un oggetto [Indice](index-class.md) di rango 1, 2 o 3 che rappresenta l'indice relativo nella sezione corrente di un oggetto [tiled_extent](tiled-extent-class.md) .

### <a name="syntax"></a>Sintassi

```cpp
const index<rank> local;
```

## <a name="tiled_index__rank"></a>Rank

Archivia il rango dell'oggetto `tiled_index`.

### <a name="syntax"></a>Sintassi

```cpp
static const int rank = _Rank;
```

## <a name="tiled_index__tile"></a>piastrelle

Archivia un oggetto [Indice](index-class.md) di rango 1, 2 o 3 che rappresenta le coordinate della sezione corrente di un oggetto [tiled_extent](tiled-extent-class.md) .

### <a name="syntax"></a>Sintassi

```cpp
const index<rank> tile;
```

## <a name="tiled_index__tile_dim0"></a>tile_dim0

Archivia la lunghezza della dimensione più significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim0 = _Dim0;
```

## <a name="tiled_index__tile_dim1"></a>tile_dim1

Archivia la lunghezza della dimensione più vicina alla dimensione più significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim1 = _Dim1;
```

## <a name="tiled_index__tile_dim2"></a>tile_dim2

Archivia la lunghezza della dimensione meno significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim2 = _Dim2;
```

## <a name="tiled_index__tile_origin"></a>tile_origin

Archivia un oggetto [Indice](index-class.md) di rango 1, 2 o 3 che rappresenta le coordinate globali dell'origine del riquadro corrente all'interno di un oggetto [tiled_extent](tiled-extent-class.md) .

### <a name="syntax"></a>Sintassi

```cpp
const index<rank> tile_origin
```

## <a name="tile_extent"></a>tile_extent

Ottiene un oggetto [extent](extent-class.md) con i valori degli argomenti del modello `tiled_index` `tiled_index` argomenti del modello `_Dim0`, `_Dim1`e `_Dim2`.

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_tile_extent)) extent<rank> tile_extent;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
