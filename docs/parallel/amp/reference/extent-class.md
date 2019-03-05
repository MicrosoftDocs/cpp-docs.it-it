---
title: Classe extent (C++ AMP)
ms.date: 11/04/2016
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
ms.openlocfilehash: 2236b1a1b72f307dae1efa0cfe197e222820c460
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57270189"
---
# <a name="extent-class-c-amp"></a>Classe extent (C++ AMP)

Rappresenta un vettore di *N* i valori interi che specificano i limiti di un' *N*-spazio dimensionale che ha origine in 0. I valori del vettore vengono ordinati dal più significativo al meno significativo.

### <a name="syntax"></a>Sintassi

```
template <int _Rank>
class extent;
```

### <a name="parameters"></a>Parametri

*_Rank*<br/>
Il rango del `extent` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concorrenza

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore extent](#ctor)|Inizializza una nuova istanza della classe `extent`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[contains](#contains)|Verifica che l'oggetto specificato `extent` oggetto con la classificazione specificata.|
|[size](#size)|Restituisce la dimensione lineare totale dell'extent (in unità degli elementi).|
|[tile](#tile)|Produce un `tiled_extent` oggetto con i tile extents forniti dalle dimensioni specificate.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator-](#operator_min)|Restituisce un nuovo `extent` oggetto creato sottraendo il `index` gli elementi dal corrispondente `extent` elementi.|
|[operator--](#operator_min_min)|Decrementa ogni elemento del `extent` oggetto.|
|[operator%=](#operator_mod_eq)|Calcola il modulo (resto) di ogni elemento di `extent` quando tale elemento viene diviso per un numero dell'oggetto.|
|[operator*=](#operator_star_eq)|Moltiplica ciascun elemento del `extent` oggetto da un numero.|
|[operator/=](#operator_min_eq)|Divide ogni elemento del `extent` oggetto da un numero.|
|[extent::operator\[\]](#operator_at)|Restituisce l'elemento in corrispondenza dell'indice specificato.|
|[operator+](#operator_add)|Restituisce un nuovo `extent` oggetto che viene creato aggiungendo i corrispondenti `index` e `extent` elementi.|
|[operator++](#operator_add_add)|Incrementa ogni elemento del `extent` oggetto.|
|[operator+=](#operator_add_eq)|Aggiunge il numero specificato ad ogni elemento del `extent` oggetto.|
|[operator=](#operator_eq)|Copia il contenuto di un altro `extent` in questo oggetto.|
|[operator-=](#operator_min_eq)|Sottrae il numero specificato da ogni elemento del `extent` oggetto.|

### <a name="public-constants"></a>Costanti pubbliche

|nome|Descrizione|
|----------|-----------------|
|[Rank (costante)](#rank)|Ottiene il rango del `extent` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`extent`

## <a name="contains"></a> Contiene

Indica se l'oggetto specificato [indice](index-class.md) valore è contenuto all'interno dell'oggetto 'extent'.

### <a name="syntax"></a>Sintassi

```
bool contains(const index<rank>& _Index) const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Il `index` valore da testare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto specificato *indice* valore è contenuto nel `extent` dell'oggetto; in caso contrario, **false**.

##  <a name="ctor"></a> extent

Inizializza una nuova istanza della classe 'extent'.

### <a name="syntax"></a>Sintassi

```
extent() restrict(amp,cpu);
extent(const extent<_Rank>& _Other) restrict(amp,cpu);
explicit extent(int _I) restrict(amp,cpu);
extent(int _I0,  int _I1) restrict(amp,cpu);
extent(int _I0,  int _I1, int _I2) restrict(amp,cpu);
explicit extent(const int _Array[_Rank])restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Array*<br/>
Matrice di `_Rank` interi che viene usato per creare il nuovo `extent` oggetto.

*_I*<br/>
La lunghezza dell'extent.

*_I0*<br/>
La lunghezza della dimensione più significativa.

*_I1*<br/>
La lunghezza della dimensione prossima-a-più significativo.

*_I2*<br/>
Lunghezza della dimensione meno significativa.

*_Other*<br/>
Un' `extent` oggetto su cui il nuovo `extent` è basato l'oggetto.

## <a name="remarks"></a>Note

Il costruttore senza parametri Inizializza un `extent` oggetto con una classificazione pari a tre.

Se una matrice viene usata per costruire un' `extent` dell'oggetto, la lunghezza della matrice deve corrispondere il rango del `extent` oggetto.

##  <a name="operator_mod_eq"></a> Operatore operator % =

Calcola il modulo (resto) di ogni elemento nella misura' ' quando tale elemento viene diviso per un numero.

### <a name="syntax"></a>Sintassi

```
extent<_Rank>& operator%=(int _Rhs) restrict(cpu, direct3d);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero di cui trovare il modulo di.

### <a name="return-value"></a>Valore restituito

Oggetto `extent`.

##  <a name="operator_star_eq"></a> operatore * =

Moltiplica ciascun elemento nell'oggetto 'extent' per il numero specificato.

### <a name="syntax"></a>Sintassi

```
extent<_Rank>& operator*=(int _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero da moltiplicare.

### <a name="return-value"></a>Valore restituito

Oggetto `extent`.

## <a name="operator_add"></a> operator+

Restituisce un nuovo `extent` oggetto creato aggiungendo i corrispondenti `index` e `extent` elementi.

### <a name="syntax"></a>Sintassi

```
extent<_Rank> operator+(const index<_Rank>& _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Il `index` oggetto che contiene gli elementi da aggiungere.

### <a name="return-value"></a>Valore restituito

Nuovo oggetto `extent`.

##  <a name="operator_add_add"></a> operator++

Incrementa ogni elemento dell'oggetto 'extent'.

### <a name="syntax"></a>Sintassi

```
extent<_Rank>& operator++() restrict(amp,cpu);
extent<_Rank> operator++(int)restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

Per l'operatore di prefisso, il `extent` oggetto (`*this`). Per l'operatore di suffisso, un nuovo `extent` oggetto.

##  <a name="operator_add_eq"></a> operator+=

Aggiunge il numero specificato ad ogni elemento dell'oggetto 'extent'.

### <a name="syntax"></a>Sintassi

```
extent<_Rank>& operator+=(const extent<_Rank>& _Rhs) restrict(amp,cpu);
extent<_Rank>& operator+=(const index<_Rank>& _Rhs) restrict(amp,cpu);
extent<_Rank>& operator+=(int _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Il numero, indice o extent da aggiungere.

### <a name="return-value"></a>Valore restituito

L'oggetto `extent` risultante.

##  <a name="operator_min"></a> Operatore operator-

Crea un nuovo `extent` oggetto sottraendo ogni elemento nell'oggetto specificato `index` dall'elemento corrispondente in questo oggetto `extent` oggetto.

### <a name="syntax"></a>Sintassi

```
extent<_Rank> operator-(const index<_Rank>& _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Il `index` oggetto che contiene gli elementi da sottrarre.

### <a name="return-value"></a>Valore restituito

Nuovo oggetto `extent`.

##  <a name="operator_min_min"></a> operator-

Decrementa ogni elemento nell'oggetto 'extent'.

### <a name="syntax"></a>Sintassi

```
extent<_Rank>& operator--() restrict(amp,cpu);
extent<_Rank> operator--(int)restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

Per l'operatore di prefisso, il `extent` oggetto (`*this`). Per l'operatore di suffisso, un nuovo `extent` oggetto.

##  <a name="operator_div_eq"></a> operatore / =

Divide ogni elemento nell'oggetto 'extent' per il numero specificato.

### <a name="syntax"></a>Sintassi

```
extent<_Rank>& operator/=(int _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero da dividere.

### <a name="return-value"></a>Valore restituito

Oggetto `extent`.

##  <a name="operator_min_eq"></a> operatore =

Sottrae il numero specificato da ogni elemento dell'oggetto 'extent'.

### <a name="syntax"></a>Sintassi

```
extent<_Rank>& operator-=(const extent<_Rank>& _Rhs) restrict(amp,cpu);
extent<_Rank>& operator-=(const index<_Rank>& _Rhs) restrict(amp,cpu);
extent<_Rank>& operator-=(int _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero da sottrarre.

### <a name="return-value"></a>Valore restituito

L'oggetto `extent` risultante.

##  <a name="operator_eq"></a> operator=

Copia il contenuto di un altro oggetto 'extent' in questo.

### <a name="syntax"></a>Sintassi

```
extent<_Rank>& operator=(const extent<_Rank>& _Other) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Il `extent` da copiare dall'oggetto.

### <a name="return-value"></a>Valore restituito

Un riferimento a questo `extent` oggetto.

##  <a name="operator_at"></a> operatore extent:: \[\]

Restituisce l'elemento in corrispondenza dell'indice specificato.

### <a name="syntax"></a>Sintassi

```
int operator[](unsigned int _Index) const restrict(amp,cpu);
int& operator[](unsigned int _Index) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Numero intero compreso tra 0 e il numero di dimensioni meno 1.

### <a name="return-value"></a>Valore restituito

L'elemento in corrispondenza dell'indice specificato.

##  <a name="rank_constant"></a> numero di dimensioni

Memorizza il rango dell'oggetto 'extent'.

### <a name="syntax"></a>Sintassi

```
static const int rank = _Rank;
```

##  <a name="size"></a> Dimensioni

Restituisce la dimensione lineare totale del `extent` oggetto (in unità degli elementi).

### <a name="syntax"></a>Sintassi

```
unsigned int size() const restrict(amp,cpu);
```

## <a name="tile"></a> riquadro

Produce un oggetto tiled_extent con le dimensioni della sezione specificata.

```
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
Il componente successivo-a-più significativo dell'extent affiancato.
*_Dim2*<br/>
Componente meno significativo dell'extent affiancato.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
