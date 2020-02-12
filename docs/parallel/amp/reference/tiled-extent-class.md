---
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
ms.openlocfilehash: e2248c770c7eedde59d1cb592f7d5d7c1bfbde9a
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77126422"
---
# <a name="tiled_extent-class"></a>Classe tiled_extent

Un oggetto `tiled_extent` è un oggetto `extent` da una a tre dimensioni che suddivide lo spazio dell'extent in riquadri a una, due o tre dimensioni.

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

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore tiled_extent](#ctor)|Inizializza una nuova istanza della classe `tiled_extent`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get_tile_extent](#get_tile_extent)|Restituisce un `extent` oggetto che acquisisce i valori degli argomenti del modello `tiled_extent` `_Dim0`, `_Dim1`e `_Dim2`.|
|[Pad](#pad)|Restituisce un nuovo oggetto `tiled_extent` con gli extent adattati per essere divisibile in modo uniforme dalle dimensioni del riquadro.|
|[truncate](#truncate)|Restituisce un nuovo oggetto `tiled_extent` con gli extent modificati in modo da essere divisibile in modo uniforme dalle dimensioni del riquadro.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto `tiled_index` specificato in questo oggetto.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Costante tile_dim0](#tile_dim0)|Archivia la lunghezza della dimensione più significativa.|
|[Costante tile_dim1](#tile_dim1)|Archivia la lunghezza della dimensione più vicina alla dimensione più significativa.|
|[Costante tile_dim2](#tile_dim2)|Archivia la lunghezza della dimensione meno significativa.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[tile_extent](#tile_extent)|Ottiene un oggetto `extent` che acquisisce i valori degli argomenti del modello `tiled_extent` `_Dim0`, `_Dim1`e `_Dim2`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`extent`

`tiled_extent`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a> Costruttore tiled_extent

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
`extent` o `tiled_extent` oggetto da copiare.

## <a name="get_tile_extent"></a> get_tile_extent

Restituisce un `extent` oggetto che acquisisce i valori degli argomenti del modello `tiled_extent` `_Dim0`, `_Dim1`e `_Dim2`.

### <a name="syntax"></a>Sintassi

```cpp
Concurrency::extent<rank> get_tile_extent() const restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

Oggetto `extent` che acquisisce le dimensioni di questa istanza di `tiled_extent`.

## <a name="pad"></a> riquadro

Restituisce un nuovo oggetto `tiled_extent` con gli extent adattati per essere divisibile in modo uniforme dalle dimensioni del riquadro.

### <a name="syntax"></a>Sintassi

```cpp
tiled_extent pad() const;
```

### <a name="return-value"></a>Valore restituito

Nuovo oggetto `tiled_extent`, in base al valore.
## <a name="truncate"></a> tronca

Restituisce un nuovo oggetto `tiled_extent` con gli extent modificati in modo da essere divisibile in modo uniforme dalle dimensioni del riquadro.

### <a name="syntax"></a>Sintassi

```cpp
tiled_extent truncate() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un nuovo oggetto `tiled_extent` con gli extent modificati in modo da essere divisibile in modo uniforme dalle dimensioni del riquadro.

## <a name="operator_eq"></a> operatore =

Copia il contenuto dell'oggetto `tiled_index` specificato in questo oggetto.

### <a name="syntax"></a>Sintassi

```cpp
tiled_extent&  operator= (
    const tiled_extent& _Other ) restrict (amp, cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto `tiled_index` da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento a questa istanza di `tiled_index`.

## <a name="tile_dim0"></a> tile_dim0

Archivia la lunghezza della dimensione più significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim0 = _Dim0;
```

## <a name="tile_dim1"></a> tile_dim1

Archivia la lunghezza della dimensione più vicina alla dimensione più significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim1 = _Dim1;
```

## <a name="tile_dim2"></a> tile_dim2

Archivia la lunghezza della dimensione meno significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim2 = _Dim2;
```

## <a name="tile_extent"></a> tile_extent
  Ottiene un oggetto `extent` che acquisisce i valori degli argomenti del modello `tiled_extent` `_Dim0`, `_Dim1`e `_Dim2`.

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_tile_extent)) Concurrency::extent<rank> tile_extent;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
