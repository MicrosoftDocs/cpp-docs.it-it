---
description: 'Altre informazioni su: classe extent (C++ AMP)'
title: Classe extent (C++ AMP)
ms.date: 03/27/2019
f1_keywords:
- extent
- AMP/extent
- AMP/Concurrency::extent::extent
- AMP/Concurrency::extent::contains
- AMP/Concurrency::extent::size
- AMP/Concurrency::extent::tile
- AMP/Concurrency::extent::rank Constant
helpviewer_keywords:
- extent structure
ms.assetid: edb5de3d-3935-4dbb-8365-4cc6c4fb0269
ms.openlocfilehash: fb355d0ab0676256df42a880722ebaac33eb3cb5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325863"
---
# <a name="extent-class-c-amp"></a>Classe extent (C++ AMP)

Rappresenta un vettore di *n* valori integer che specificano i limiti di uno spazio *n*-dimensionale con un'origine di 0. I valori nel vettore sono ordinati dal più significativo al meno significativo.

## <a name="syntax"></a>Sintassi

```cpp
template <int _Rank>
class extent;
```

### <a name="parameters"></a>Parametri

*_Rank*<br/>
Rango dell' `extent` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concorrenza

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore extent](#ctor)|Inizializza una nuova istanza della classe `extent`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[contains](#contains)|Verifica che l'oggetto specificato `extent` disponga del rango specificato.|
|[size](#size)|Restituisce la dimensione lineare totale dell'extent (in unità di elementi).|
|[piastrelle](#tile)|Produce un `tiled_extent` oggetto con gli extent delle sezioni forniti dalle dimensioni specificate.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore](#operator_min)|Restituisce un nuovo `extent` oggetto creato sottraendo gli `index` elementi dagli `extent` elementi corrispondenti.|
|[operatore--](#operator_min_min)|Decrementa ogni elemento dell' `extent` oggetto.|
|[operatore% =](#operator_mod_eq)|Calcola il modulo (resto) di ogni elemento nell' `extent` oggetto quando tale elemento è diviso per un numero.|
|[operatore * =](#operator_star_eq)|Moltiplica ogni elemento dell' `extent` oggetto per un numero.|
|[operatore/=](#operator_min_eq)|Divide ogni elemento dell' `extent` oggetto in base a un numero.|
|[Operatore extent::\[\]](#operator_at)|Restituisce l'elemento che si trova in corrispondenza dell'indice specificato.|
|[operatore +](#operator_add)|Restituisce un nuovo `extent` oggetto creato aggiungendo gli `index` elementi e corrispondenti `extent` .|
|[operatore + +](#operator_add_add)|Incrementa ogni elemento dell' `extent` oggetto.|
|[operatore + =](#operator_add_eq)|Aggiunge il numero specificato a ogni elemento dell' `extent` oggetto.|
|[operatore =](#operator_eq)|Copia il contenuto di un altro `extent` oggetto in questo.|
|[operatore-=](#operator_min_eq)|Sottrae il numero specificato da ogni elemento dell' `extent` oggetto.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Description|
|----------|-----------------|
|[Costante di rango](#rank_constant)|Ottiene il rango dell' `extent` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`extent`

## <a name="contains"></a><a name="contains"></a> contiene

Indica se il valore di [Indice](index-class.md) specificato è contenuto all'interno dell'oggetto "extent".

### <a name="syntax"></a>Sintassi

```cpp
bool contains(const index<rank>& _Index) const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Valore `index` su cui eseguire il test.

### <a name="return-value"></a>Valore restituito

**`true`** Se il valore di *Indice* specificato è contenuto nell' `extent` oggetto; in caso contrario, **`false`** .

## <a name="extent"></a><a name="ctor"></a> extent

Inizializza una nuova istanza della classe ' extent '.

### <a name="syntax"></a>Sintassi

```cpp
extent() restrict(amp,cpu);
extent(const extent<_Rank>& _Other) restrict(amp,cpu);
explicit extent(int _I) restrict(amp,cpu);
extent(int _I0,  int _I1) restrict(amp,cpu);
extent(int _I0,  int _I1, int _I2) restrict(amp,cpu);
explicit extent(const int _Array[_Rank])restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Array*<br/>
Matrice di `_Rank` numeri interi utilizzata per creare il nuovo `extent` oggetto.

*_I*<br/>
Lunghezza dell'extent.

*_I0*<br/>
Lunghezza della dimensione più significativa.

*_I1*<br/>
Lunghezza della dimensione più vicina alla dimensione più significativa.

*_I2*<br/>
Lunghezza della dimensione meno significativa.

*_Other*<br/>
`extent`Oggetto su cui `extent` è basato il nuovo oggetto.

## <a name="remarks"></a>Commenti

Il costruttore predefinito inizializza un `extent` oggetto con un rango pari a tre.

Se viene utilizzata una matrice per costruire un `extent` oggetto, la lunghezza della matrice deve corrispondere al rango dell' `extent` oggetto.

## <a name="operator"></a><a name="operator_mod_eq"></a> operatore% =

Calcola il modulo (resto) di ogni elemento in ' extent ' quando tale elemento è diviso per un numero.

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank>& operator%=(int _Rhs) restrict(cpu, direct3d);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero per cui trovare il modulo.

### <a name="return-value"></a>Valore restituito

Oggetto `extent`.

## <a name="operator"></a><a name="operator_star_eq"></a> operatore * =

Moltiplica ogni elemento nell'oggetto ' extent ' per il numero specificato.

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank>& operator*=(int _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero da moltiplicare.

### <a name="return-value"></a>Valore restituito

Oggetto `extent`.

## <a name="operator"></a><a name="operator_add"></a> operatore +

Restituisce un nuovo `extent` oggetto creato aggiungendo gli `index` elementi e corrispondenti `extent` .

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank> operator+(const index<_Rank>& _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
`index`Oggetto che contiene gli elementi da aggiungere.

### <a name="return-value"></a>Valore restituito

Nuovo oggetto `extent`.

## <a name="operator"></a><a name="operator_add_add"></a> operatore + +

Incrementa ogni elemento dell'oggetto "extent".

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank>& operator++() restrict(amp,cpu);
extent<_Rank> operator++(int)restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

Per l'operatore di prefisso, l' `extent` oggetto ( **`*this`** ). Per l'operatore di suffisso, un nuovo `extent` oggetto.

## <a name="operator"></a><a name="operator_add_eq"></a> operatore + =

Aggiunge il numero specificato a ogni elemento dell'oggetto "extent".

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank>& operator+=(const extent<_Rank>& _Rhs) restrict(amp,cpu);
extent<_Rank>& operator+=(const index<_Rank>& _Rhs) restrict(amp,cpu);
extent<_Rank>& operator+=(int _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero, indice o extent da aggiungere.

### <a name="return-value"></a>Valore restituito

L'oggetto `extent` risultante.

## <a name="operator-"></a><a name="operator_min"></a> operatore

Crea un nuovo `extent` oggetto sottraendo ogni elemento nell' `index` oggetto specificato dall'elemento corrispondente in questo `extent` oggetto.

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank> operator-(const index<_Rank>& _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
`index`Oggetto che contiene gli elementi da sottrarre.

### <a name="return-value"></a>Valore restituito

Nuovo oggetto `extent`.

## <a name="operator--"></a><a name="operator_min_min"></a> operatore--

Decrementa ogni elemento nell'oggetto "extent".

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank>& operator--() restrict(amp,cpu);
extent<_Rank> operator--(int)restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

Per l'operatore di prefisso, l' `extent` oggetto ( **`*this`** ). Per l'operatore di suffisso, un nuovo `extent` oggetto.

## <a name="operator"></a><a name="operator_div_eq"></a> operatore/=

Divide ogni elemento nell'oggetto ' extent ' in base al numero specificato.

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank>& operator/=(int _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero per cui dividere.

### <a name="return-value"></a>Valore restituito

Oggetto `extent`.

## <a name="operator-"></a><a name="operator_min_eq"></a> operatore-=

Sottrae il numero specificato da ogni elemento dell'oggetto "extent".

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank>& operator-=(const extent<_Rank>& _Rhs) restrict(amp,cpu);
extent<_Rank>& operator-=(const index<_Rank>& _Rhs) restrict(amp,cpu);
extent<_Rank>& operator-=(int _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero da sottrarre.

### <a name="return-value"></a>Valore restituito

L'oggetto `extent` risultante.

## <a name="operator"></a><a name="operator_eq"></a> operatore =

Copia il contenuto di un altro oggetto ' extent ' in questo.

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank>& operator=(const extent<_Rank>& _Other) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
`extent`Oggetto da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento a questo `extent` oggetto.

## <a name="extentoperator-"></a><a name="operator_at"></a> Operatore extent:: \[\]

Restituisce l'elemento che si trova in corrispondenza dell'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
int operator[](unsigned int _Index) const restrict(amp,cpu);
int& operator[](unsigned int _Index) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Intero compreso tra 0 e il rango meno 1.

### <a name="return-value"></a>Valore restituito

Elemento in corrispondenza dell'indice specificato.

## <a name="rank"></a><a name="rank_constant"></a> Rank

Archivia il rango dell'oggetto "extent".

### <a name="syntax"></a>Sintassi

```cpp
static const int rank = _Rank;
```

## <a name="size"></a><a name="size"></a> dimensioni

Restituisce le dimensioni lineari totali dell' `extent` oggetto (in unità di elementi).

### <a name="syntax"></a>Sintassi

```cpp
unsigned int size() const restrict(amp,cpu);
```

## <a name="tile"></a><a name="tile"></a> piastrelle

Produce un oggetto tiled_extent con le dimensioni del riquadro specificate.

```cpp
template <int _Dim0>
tiled_extent<_Dim0> tile() const ;

template <int _Dim0, int _Dim1>
tiled_extent<_Dim0, _Dim1> tile() const ;

template <int _Dim0, int _Dim1, int _Dim2>
tiled_extent<_Dim0, _Dim1, _Dim2> tile() const ;
```

### <a name="parameters"></a>Parametri

*_Dim0*<br/>
Componente più significativo dell'extent affiancato.
*_Dim1*<br/>
Componente successivo a quello più significativo dell'extent affiancato.
*_Dim2*<br/>
Componente meno significativo dell'extent affiancato.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
