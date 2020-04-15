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
ms.openlocfilehash: ce2710da1a745efedcd6e9e524355eda41e26de2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374707"
---
# <a name="tiled_extent-class"></a>Classe tiled_extent

Un `tiled_extent` oggetto `extent` è un oggetto di una o tre dimensioni che suddivide lo spazio dell'estensione in riquadri unidirezionali, bidimensionali o tridimensionali.

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
Lunghezza della dimensione successiva alla più significativa.

*_Dim2*<br/>
Lunghezza della dimensione meno significativa.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore tiled_extent](#ctor)|Inizializza una nuova istanza della classe `tiled_extent`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get_tile_extent](#get_tile_extent)|Restituisce `extent` un oggetto che acquisisce `_Dim0`i `_Dim1`valori `_Dim2`degli argomenti di `tiled_extent` modello , , e .|
|[pad](#pad)|Restituisce `tiled_extent` un nuovo oggetto con estensioni regolate fino a essere divisibili in modo uniforme dalle dimensioni del riquadro.|
|[Troncare](#truncate)|Restituisce `tiled_extent` un nuovo oggetto con estensioni regolate verso il basso per essere uniformemente divisibili dalle dimensioni del riquadro.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operatore di comando](#operator_eq)|Copia il contenuto dell'oggetto specificato `tiled_index` in questo.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[tile_dim0 costante](#tile_dim0)|Memorizza la lunghezza della dimensione più significativa.|
|[tile_dim1 costante](#tile_dim1)|Memorizza la lunghezza della dimensione successiva alla più significativa.|
|[tile_dim2 costante](#tile_dim2)|Memorizza la lunghezza della dimensione meno significativa.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[tile_extent](#tile_extent)|Ottiene `extent` un oggetto che acquisisce `tiled_extent` i `_Dim0` `_Dim1`valori `_Dim2`degli argomenti del modello , , e .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`extent`

`tiled_extent`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concorrenza

## <a name="tiled_extent-constructor"></a><a name="ctor"> </a> Costruttore tiled_extent

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
Oggetto `extent` `tiled_extent` o da copiare.

## <a name="get_tile_extent"></a><a name="get_tile_extent"> </a> get_tile_extent

Restituisce `extent` un oggetto che acquisisce `_Dim0`i `_Dim1`valori `_Dim2`degli argomenti di `tiled_extent` modello , , e .

### <a name="syntax"></a>Sintassi

```cpp
Concurrency::extent<rank> get_tile_extent() const restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

Oggetto `extent` che acquisisce le `tiled_extent` dimensioni di questa istanza.

## <a name="pad"></a><a name="pad"> </a> pad

Restituisce `tiled_extent` un nuovo oggetto con estensioni regolate fino a essere divisibili in modo uniforme dalle dimensioni del riquadro.

### <a name="syntax"></a>Sintassi

```cpp
tiled_extent pad() const;
```

### <a name="return-value"></a>Valore restituito

Nuovo `tiled_extent` oggetto, per valore.

## <a name="truncate"></a><a name="truncate"> </a> troncare

Restituisce `tiled_extent` un nuovo oggetto con estensioni regolate verso il basso per essere uniformemente divisibili dalle dimensioni del riquadro.

### <a name="syntax"></a>Sintassi

```cpp
tiled_extent truncate() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce `tiled_extent` un nuovo oggetto con estensioni regolate verso il basso per essere uniformemente divisibili dalle dimensioni del riquadro.

## <a name="operator"></a><a name="operator_eq"> </a> operatore di comando

Copia il contenuto dell'oggetto specificato `tiled_index` in questo.

### <a name="syntax"></a>Sintassi

```cpp
tiled_extent&  operator= (
    const tiled_extent& _Other ) restrict (amp, cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto `tiled_index` da cui copiare.

### <a name="return-value"></a>Valore restituito

Un riferimento `tiled_index` a questa istanza.

## <a name="tile_dim0"></a><a name="tile_dim0"> </a> TILE_DIM0

Memorizza la lunghezza della dimensione più significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim0 = _Dim0;
```

## <a name="tile_dim1"></a><a name="tile_dim1"> </a> tile_dim1

Memorizza la lunghezza della dimensione successiva alla più significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim1 = _Dim1;
```

## <a name="tile_dim2"></a><a name="tile_dim2"> </a> tile_dim2

Memorizza la lunghezza della dimensione meno significativa.

### <a name="syntax"></a>Sintassi

```cpp
static const int tile_dim2 = _Dim2;
```

## <a name="tile_extent"></a><a name="tile_extent"> </a> tile_extent

Ottiene `extent` un oggetto che acquisisce `tiled_extent` i `_Dim0` `_Dim1`valori `_Dim2`degli argomenti del modello , , e .

### <a name="syntax"></a>Sintassi

```cpp
__declspec(property(get= get_tile_extent)) Concurrency::extent<rank> tile_extent;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (AMP)](concurrency-namespace-cpp-amp.md)
