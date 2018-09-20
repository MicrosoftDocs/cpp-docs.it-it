---
title: Classe tiled_extent | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
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
dev_langs:
- C++
ms.assetid: 671ecaf8-c7b0-4ac8-bbdc-e30bd92da7c0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a15cc3aae03c0f9c57d982aac93cf711c735b35b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46393495"
---
# <a name="tiledextent-class"></a>Classe tiled_extent

Oggetto `tiled_extent` oggetto è un `extent` oggetto di tre dimensioni che suddivide lo spazio dell'extent in una, due o riquadri tridimensionali.

### <a name="syntax"></a>Sintassi

```
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
La lunghezza della dimensione più significativa.

*_Dim1*<br/>
La lunghezza della dimensione significativa next-a-la maggior parte.

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
|[get_tile_extent](#get_tile_extent)|Restituisce un `extent` che acquisisce i valori dell'oggetto di `tiled_extent` gli argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.|
|[pad](#pad)|Restituisce un nuovo `tiled_extent` oggetto con gli extent regolati per essere agevolmente divisibili per le dimensioni della sezione.|
|[truncate](#truncate)|Restituisce un nuovo `tiled_extent` oggetto con gli extent modificati verso il basso per essere agevolmente divisibili per le dimensioni della sezione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto specificato `tiled_index` in questo oggetto.|

### <a name="public-constants"></a>Costanti pubbliche

|nome|Descrizione|
|----------|-----------------|
|[tile_dim0 (costante)](#tile_dim0)|Archivia la lunghezza della dimensione più significativa.|
|[tile_dim1 (costante)](#tile_dim1)|Archivia la lunghezza della dimensione significativa next-a-la maggior parte.|
|[tile_dim2 (costante)](#tile_dim2)|Archivia la lunghezza della dimensione meno significativa.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[tile_extent](#tile_extent)|Ottiene un' `extent` che acquisisce i valori dell'oggetto di `tiled_extent` gli argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`extent`

`tiled_extent`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concurrency

## <a name="ctor"> </a>  Costruttore tiled_extent

Inizializza una nuova istanza della classe `tiled_extent`.

### <a name="syntax"></a>Sintassi

```
tiled_extent();

tiled_extent(
    const Concurrency::extent<rank>& _Other );

tiled_extent(
    const tiled_extent& _Other );
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Il `extent` o `tiled_extent` oggetto da copiare.

## <a name="get_tile_extent"> </a>  get_tile_extent

Restituisce un `extent` che acquisisce i valori dell'oggetto di `tiled_extent` gli argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.

### <a name="syntax"></a>Sintassi

```
Concurrency::extent<rank> get_tile_extent() const restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

Un' `extent` che acquisisce le dimensioni di questo oggetto `tiled_extent` istanza.

## <a name="pad"> </a>  pad

Restituisce un nuovo `tiled_extent` oggetto con gli extent regolati per essere agevolmente divisibili per le dimensioni della sezione.

### <a name="syntax"></a>Sintassi

```
tiled_extent pad() const;
```

### <a name="return-value"></a>Valore restituito

Il nuovo `tiled_extent` oggetto per valore.
## <a name="truncate"> </a>  truncate

Restituisce un nuovo `tiled_extent` oggetto con gli extent modificati verso il basso per essere agevolmente divisibili per le dimensioni della sezione.

### <a name="syntax"></a>Sintassi

```
tiled_extent truncate() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un nuovo `tiled_extent` oggetto con gli extent modificati verso il basso per essere agevolmente divisibili per le dimensioni della sezione.

## <a name="operator_eq"> </a>  operator=

Copia il contenuto dell'oggetto specificato `tiled_index` in questo oggetto.

### <a name="syntax"></a>Sintassi

```
tiled_extent&  operator= (
    const tiled_extent& _Other ) restrict (amp, cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Il `tiled_index` da copiare dall'oggetto.

### <a name="return-value"></a>Valore restituito

Un riferimento a questo `tiled_index` istanza.

## <a name="tile_dim0"> </a>  tile_dim0

Archivia la lunghezza della dimensione più significativa.

### <a name="syntax"></a>Sintassi

```
static const int tile_dim0 = _Dim0;
```

## <a name="tile_dim1"> </a>  tile_dim1

Archivia la lunghezza della dimensione significativa next-a-la maggior parte.

### <a name="syntax"></a>Sintassi

```
static const int tile_dim1 = _Dim1;
```
## <a name="tile_dim2"> </a>  tile_dim2

Archivia la lunghezza della dimensione meno significativa.

### <a name="syntax"></a>Sintassi

```
static const int tile_dim2 = _Dim2;
```
## <a name="tile_extent"> </a>  tile_extent
  Ottiene un' `extent` che acquisisce i valori dell'oggetto di `tiled_extent` gli argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.

### <a name="syntax"></a>Sintassi

```
__declspec(property(get= get_tile_extent)) Concurrency::extent<rank> tile_extent;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
