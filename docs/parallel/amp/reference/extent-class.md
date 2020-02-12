---
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
ms.openlocfilehash: 3e8dae7b76ea2efc852486a19f5d298cda477012
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77126721"
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
Rango dell'oggetto `extent`.

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concurrency

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore extent](#ctor)|Inizializza una nuova istanza della classe `extent`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[contains](#contains)|Verifica che l'oggetto `extent` specificato disponga del rango specificato.|
|[size](#size)|Restituisce la dimensione lineare totale dell'extent (in unità di elementi).|
|[piastrelle](#tile)|Produce un oggetto `tiled_extent` con gli extent del riquadro specificati dalle dimensioni specificate.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator-](#operator_min)|Restituisce un nuovo oggetto `extent` creato sottraendo gli elementi `index` dagli elementi `extent` corrispondenti.|
|[operator--](#operator_min_min)|Decrementa ogni elemento dell'oggetto `extent`.|
|[operator%=](#operator_mod_eq)|Calcola il modulo (resto) di ogni elemento nell'oggetto `extent` quando tale elemento è diviso per un numero.|
|[operator*=](#operator_star_eq)|Moltiplica ogni elemento dell'oggetto `extent` in base a un numero.|
|[operator/=](#operator_min_eq)|Divide ogni elemento dell'oggetto `extent` in base a un numero.|
|[extent:: operator\[\]](#operator_at)|Restituisce l'elemento che si trova in corrispondenza dell'indice specificato.|
|[operator+](#operator_add)|Restituisce un nuovo oggetto `extent` creato aggiungendo gli elementi `index` e `extent` corrispondenti.|
|[operator++](#operator_add_add)|Incrementa ogni elemento dell'oggetto `extent`.|
|[operator+=](#operator_add_eq)|Aggiunge il numero specificato a ogni elemento dell'oggetto `extent`.|
|[operator=](#operator_eq)|Copia il contenuto di un altro `extent` oggetto in questo.|
|[operator-=](#operator_min_eq)|Sottrae il numero specificato da ogni elemento dell'oggetto `extent`.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Costante di rango](#rank_constant)|Ottiene il rango dell'oggetto `extent`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`extent`

## <a name="contains"></a>contiene

Indica se il valore di [Indice](index-class.md) specificato è contenuto all'interno dell'oggetto "extent".

### <a name="syntax"></a>Sintassi

```cpp
bool contains(const index<rank>& _Index) const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Valore `index` su cui eseguire il test.

### <a name="return-value"></a>Valore restituito

**true** se il valore di *Indice* specificato è contenuto nell'oggetto `extent`; in caso contrario, **false**.

## <a name="ctor"></a>extent

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
Matrice di `_Rank` integer utilizzata per creare il nuovo oggetto `extent`.

*_I*<br/>
Lunghezza dell'extent.

*_I0*<br/>
Lunghezza della dimensione più significativa.

*_I1*<br/>
Lunghezza della dimensione più vicina alla dimensione più significativa.

*_I2*<br/>
Lunghezza della dimensione meno significativa.

*_Other*<br/>
Oggetto `extent` su cui è basato il nuovo oggetto `extent`.

## <a name="remarks"></a>Osservazioni

Il costruttore predefinito inizializza un oggetto `extent` con un rango pari a tre.

Se viene utilizzata una matrice per costruire un oggetto `extent`, la lunghezza della matrice deve corrispondere al rango dell'oggetto `extent`.

## <a name="operator_mod_eq"></a>operatore% =

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

## <a name="operator_star_eq"></a>operatore * =

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

## <a name="operator_add"></a>operatore +

Restituisce un nuovo oggetto `extent` creato aggiungendo gli elementi `index` e `extent` corrispondenti.

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank> operator+(const index<_Rank>& _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Oggetto `index` che contiene gli elementi da aggiungere.

### <a name="return-value"></a>Valore restituito

Nuovo oggetto `extent`.

## <a name="operator_add_add"></a>operatore + +

Incrementa ogni elemento dell'oggetto "extent".

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank>& operator++() restrict(amp,cpu);
extent<_Rank> operator++(int)restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

Per l'operatore di prefisso, l'oggetto `extent` (`*this`). Per l'operatore suffisso, un nuovo oggetto `extent`.

## <a name="operator_add_eq"></a>operatore + =

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

## <a name="operator_min"></a>operatore

Crea un nuovo oggetto `extent` sottraendo ogni elemento nell'oggetto `index` specificato dall'elemento corrispondente in questo oggetto `extent`.

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank> operator-(const index<_Rank>& _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Oggetto `index` contenente gli elementi da sottrarre.

### <a name="return-value"></a>Valore restituito

Nuovo oggetto `extent`.

## <a name="operator_min_min"></a>operatore--

Decrementa ogni elemento nell'oggetto "extent".

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank>& operator--() restrict(amp,cpu);
extent<_Rank> operator--(int)restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

Per l'operatore di prefisso, l'oggetto `extent` (`*this`). Per l'operatore suffisso, un nuovo oggetto `extent`.

## <a name="operator_div_eq"></a>operatore/=

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

## <a name="operator_min_eq"></a>operatore-=

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

## <a name="operator_eq"></a>operatore =

Copia il contenuto di un altro oggetto ' extent ' in questo.

### <a name="syntax"></a>Sintassi

```cpp
extent<_Rank>& operator=(const extent<_Rank>& _Other) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto `extent` da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento a questo oggetto `extent`.

## <a name="operator_at"></a>extent:: operator \[\]

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

## <a name="rank_constant"></a>Rank

Archivia il rango dell'oggetto "extent".

### <a name="syntax"></a>Sintassi

```cpp
static const int rank = _Rank;
```

## <a name="size"></a>dimensioni

Restituisce le dimensioni lineari totali dell'oggetto `extent` (in unità di elementi).

### <a name="syntax"></a>Sintassi

```cpp
unsigned int size() const restrict(amp,cpu);
```

## <a name="tile"></a>piastrelle

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

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
