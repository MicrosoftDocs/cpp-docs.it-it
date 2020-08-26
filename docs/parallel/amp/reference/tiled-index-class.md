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
ms.openlocfilehash: 9d295093031eaee0a2d4dd83aa931060e6eebc07
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88832270"
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

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore tiled_index](#ctor)|Inizializza una nuova istanza della classe `tile_index`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get_tile_extent](#tiled_index__get_tile_extent)|Restituisce un oggetto [extent](extent-class.md) con i valori degli argomenti di `tiled_index` modello `_Dim0` , `_Dim1` e `_Dim2` .|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Costante di barriera](#tiled_index__barrier)|Archivia un oggetto [tile_barrier](tile-barrier-class.md) che rappresenta una barriera nel riquadro corrente dei thread.|
|[Costante globale](#tiled_index__global)|Archivia un oggetto [Indice](index-class.md) di rango 1, 2 o 3 che rappresenta l'indice globale in un oggetto Grid.|
|[local (costante)](#tiled_index__local)|Archivia un `index` oggetto di rango 1, 2 o 3 che rappresenta l'indice relativo nella sezione corrente di un oggetto [tiled_extent](tiled-extent-class.md) .|
|[Costante di rango](#tiled_index__rank)|Archivia il rango dell' `tiled_index` oggetto.|
|[Costante riquadro](#tiled_index__tile)|Archivia un `index` oggetto di rango 1, 2 o 3 che rappresenta le coordinate della sezione corrente di un `tiled_extent` oggetto.|
|[Costante tile_dim0](#tiled_index__tile_dim0)|Archivia la lunghezza della dimensione più significativa.|
|[Costante tile_dim1](#tiled_index__tile_dim1)|Archivia la lunghezza della dimensione più vicina alla dimensione più significativa.|
|[Costante tile_dim2](#tiled_index__tile_dim2)|Archivia la lunghezza della dimensione meno significativa.|
|[Costante tile_origin](#tiled_index__tile_origin)|Archivia un `index` oggetto di rango 1, 2 o 3 che rappresenta le coordinate globali dell'origine del riquadro corrente in un `tiled_extent` oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[tile_extent](#tile_extent)|Ottiene un oggetto [extent](extent-class.md) con i valori degli argomenti di `tiled_index` modello di argomenti `tiled_index` `_Dim0` , `_Dim1` , e `_Dim2` .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_Tiled_index_base`

`tiled_index`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concorrenza

## <a name="tiled_index-constructor"></a><a name="ctor"></a> Costruttore tiled_index

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
[Indice](index-class.md) globale del costruito `tiled_index` .

*_Local*<br/>
[Indice](index-class.md) locale del costruito`tiled_index`

*_Tile*<br/>
[Indice](index-class.md) di sezione del costruito`tiled_index`

*_Tile_origin*<br/>
[Indice](index-class.md) di origine della sezione del costruito`tiled_index`

*_Barrier*<br/>
Oggetto [tile_barrier](tile-barrier-class.md) del costruito `tiled_index` .

*_Other*<br/>
`tile_index`Oggetto da copiare nell'oggetto costruito `tiled_index` .

### <a name="overloads"></a>Overload

|Nome|Descrizione|
|-|-|
|`tiled_index(const index<rank>& _Global, const index<rank>& _Local, const index<rank>& _Tile, const index<rank>& _Tile_origin, const tile_barrier& _Barrier restrict(amp,cpu);`|Inizializza una nuova istanza della `tile_index` classe dall'indice del riquadro nelle coordinate globali e la posizione relativa nel riquadro nelle coordinate locali. `_Global` `_Tile_origin` Vengono calcolati i parametri e.|
|`tiled_index(    const tiled_index& _Other) restrict(amp,cpu);`|Inizializza una nuova istanza della `tile_index` classe copiando l'oggetto specificato `tiled_index` .|

## <a name="get_tile_extent"></a><a name="tiled_index__get_tile_extent"></a> get_tile_extent

Restituisce un oggetto [extent](extent-class.md) con i valori degli argomenti di `tiled_index` modello `_Dim0` , `_Dim1` e `_Dim2` .

### <a name="syntax"></a>Sintassi

```cpp
extent<rank> get_tile_extent()restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

`extent`Oggetto con i valori degli `tiled_index` argomenti di modello `_Dim0` , `_Dim1` e `_Dim2` .

## <a name="barrier"></a><a name="tiled_index__barrier"></a> barriera

Archivia un oggetto [tile_barrier](tile-barrier-class.md) che rappresenta una barriera nel riquadro corrente dei thread.

### <a name="syntax"></a>Sintassi

```cpp
const tile_barrier barrier;
```

## <a name="global"></a><a name="tiled_index__global"></a> globale

Archivia un oggetto [Indice](index-class.md) di rango 1, 2 o 3 che rappresenta l'indice globale di un oggetto.

### <a name="syntax"></a>Sintassi

```cpp
const index<rank> global;
```

## <a name="local"></a><a name="tiled_index__local"></a> locale

Archivia un oggetto [Indice](index-class.md) di rango 1, 2 o 3 che rappresenta l'indice relativo nella sezione corrente di un oggetto [tiled_extent](tiled-extent-class.md) .

### <a name="syntax"></a>Sintassi

```cpp
const index<rank> local;
```

## <a name="rank"></a><a name="tiled_index__rank"></a> Rank

Archivia il rango dell' `tiled_index` oggetto.

### <a name="syntax"></a>Sintassi

```cpp
static const int rank = _Rank;
```

## <a name="tile"></a><a name="tiled_index__tile"></a> piastrelle

Archivia un oggetto [Indice](index-class.md) di rango 1, 2 o 3 che rappresenta le coordinate della sezione corrente di un oggetto [tiled_extent](tiled-extent-class.md) .

### <a name="syntax"></a>Sintassi

```cpp
const index<rank> tile;
```

## <a name="tile_dim0"></a><a name="tiled_index__tile_dim0"></a> tile_dim0

Archivia la lunghezza della dimensione più significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim0 = _Dim0;
```

## <a name="tile_dim1"></a><a name="tiled_index__tile_dim1"></a> tile_dim1

Archivia la lunghezza della dimensione più vicina alla dimensione più significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim1 = _Dim1;
```

## <a name="tile_dim2"></a><a name="tiled_index__tile_dim2"></a> tile_dim2

Archivia la lunghezza della dimensione meno significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim2 = _Dim2;
```

## <a name="tile_origin"></a><a name="tiled_index__tile_origin"></a> tile_origin

Archivia un oggetto [Indice](index-class.md) di rango 1, 2 o 3 che rappresenta le coordinate globali dell'origine del riquadro corrente all'interno di un oggetto [tiled_extent](tiled-extent-class.md) .

### <a name="syntax"></a>Sintassi

```cpp
const index<rank> tile_origin
```

## <a name="tile_extent"></a><a name="tile_extent"></a> tile_extent

Ottiene un oggetto [extent](extent-class.md) con i valori degli argomenti di `tiled_index` modello di argomenti `tiled_index` `_Dim0` , `_Dim1` , e `_Dim2` .

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_tile_extent)) extent<rank> tile_extent;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
