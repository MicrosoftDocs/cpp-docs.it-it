---
description: 'Altre informazioni su: tiled_extent Class'
title: Classe tiled_extent
ms.date: 11/04/2016
f1_keywords:
- tiled_extent
- AMP/tiled_extent
- AMP/Concurrency::tiled_extent::tiled_extent
- AMP/Concurrency::tiled_extent::get_tile_extent
- AMP/Concurrency::tiled_extent::pad
- AMP/Concurrency::tiled_extent::truncate
- AMP/Concurrency::tiled_extent::tile_dim0
- AMP/Concurrency::tiled_extent::tile_dim1
- AMP/Concurrency::tiled_extent::tile_dim2
- AMP/Concurrency::tiled_extent::tile_extent
ms.assetid: 671ecaf8-c7b0-4ac8-bbdc-e30bd92da7c0
ms.openlocfilehash: ca5b5c630152263ca49adf5c201ee0b892a192c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163873"
---
# <a name="tiled_extent-class"></a>Classe tiled_extent

Un `tiled_extent` oggetto è un `extent` oggetto da una a tre dimensioni che suddivide lo spazio dell'extent in riquadri a una, due o tre dimensioni.

## <a name="syntax"></a>Sintassi

```cpp
template <
    int _Dim0,
    int _Dim1,
    int _Dim2
>
class tiled_extent : public Concurrency::extent<3>;

template <
    int _Dim0,
    int _Dim1
>
class tiled_extent<_Dim0, _Dim1, 0> : public Concurrency::extent<2>;

template <
    int _Dim0
>
class tiled_extent<_Dim0, 0, 0> : public Concurrency::extent<1>;
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

|Nome|Description|
|----------|-----------------|
|[Costruttore tiled_extent](#ctor)|Inizializza una nuova istanza della classe `tiled_extent`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[get_tile_extent](#get_tile_extent)|Restituisce un `extent` oggetto che acquisisce i valori degli `tiled_extent` argomenti di modello `_Dim0` , `_Dim1` e `_Dim2` .|
|[Pad](#pad)|Restituisce un nuovo `tiled_extent` oggetto con gli extent adattati per essere divisibile in modo uniforme dalle dimensioni del riquadro.|
|[truncate](#truncate)|Restituisce un nuovo `tiled_extent` oggetto con gli extent modificati in modo da essere divisibile in modo uniforme dalle dimensioni del riquadro.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore =](#operator_eq)|Copia il contenuto dell'oggetto specificato `tiled_index` in questo.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Description|
|----------|-----------------|
|[Costante tile_dim0](#tile_dim0)|Archivia la lunghezza della dimensione più significativa.|
|[Costante tile_dim1](#tile_dim1)|Archivia la lunghezza della dimensione più vicina alla dimensione più significativa.|
|[Costante tile_dim2](#tile_dim2)|Archivia la lunghezza della dimensione meno significativa.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[tile_extent](#tile_extent)|Ottiene un `extent` oggetto che acquisisce i valori degli `tiled_extent` argomenti di modello `_Dim0` , `_Dim1` e `_Dim2` .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`extent`

`tiled_extent`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concorrenza

## <a name="tiled_extent-constructor"></a><a name="ctor"></a> Costruttore tiled_extent

Inizializza una nuova istanza della classe `tiled_extent`.

### <a name="syntax"></a>Sintassi

```cpp
tiled_extent();

tiled_extent(
    const Concurrency::extent<rank>& _Other );

tiled_extent(
    const tiled_extent& _Other );
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
`extent`Oggetto o `tiled_extent` da copiare.

## <a name="get_tile_extent"></a><a name="get_tile_extent"></a> get_tile_extent

Restituisce un `extent` oggetto che acquisisce i valori degli `tiled_extent` argomenti di modello `_Dim0` , `_Dim1` e `_Dim2` .

### <a name="syntax"></a>Sintassi

```cpp
Concurrency::extent<rank> get_tile_extent() const restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

`extent`Oggetto che acquisisce le dimensioni di questa `tiled_extent` istanza.

## <a name="pad"></a><a name="pad"></a> riquadro

Restituisce un nuovo `tiled_extent` oggetto con gli extent adattati per essere divisibile in modo uniforme dalle dimensioni del riquadro.

### <a name="syntax"></a>Sintassi

```cpp
tiled_extent pad() const;
```

### <a name="return-value"></a>Valore restituito

Nuovo `tiled_extent` oggetto, in base al valore.

## <a name="truncate"></a><a name="truncate"></a> tronca

Restituisce un nuovo `tiled_extent` oggetto con gli extent modificati in modo da essere divisibile in modo uniforme dalle dimensioni del riquadro.

### <a name="syntax"></a>Sintassi

```cpp
tiled_extent truncate() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un nuovo `tiled_extent` oggetto con gli extent modificati in modo da essere divisibile in modo uniforme dalle dimensioni del riquadro.

## <a name="operator"></a><a name="operator_eq"></a> operatore =

Copia il contenuto dell'oggetto specificato `tiled_index` in questo.

### <a name="syntax"></a>Sintassi

```cpp
tiled_extent&  operator= (
    const tiled_extent& _Other ) restrict (amp, cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
`tiled_index`Oggetto da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento a questa `tiled_index` istanza.

## <a name="tile_dim0"></a><a name="tile_dim0"></a> tile_dim0

Archivia la lunghezza della dimensione più significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim0 = _Dim0;
```

## <a name="tile_dim1"></a><a name="tile_dim1"></a> tile_dim1

Archivia la lunghezza della dimensione più vicina alla dimensione più significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim1 = _Dim1;
```

## <a name="tile_dim2"></a><a name="tile_dim2"></a> tile_dim2

Archivia la lunghezza della dimensione meno significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim2 = _Dim2;
```

## <a name="tile_extent"></a><a name="tile_extent"></a> tile_extent

Ottiene un `extent` oggetto che acquisisce i valori degli `tiled_extent` argomenti di modello `_Dim0` , `_Dim1` e `_Dim2` .

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_tile_extent)) Concurrency::extent<rank> tile_extent;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
