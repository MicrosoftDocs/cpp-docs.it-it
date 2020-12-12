---
description: 'Altre informazioni su: classe index'
title: Classe index
ms.date: 03/27/2019
f1_keywords:
- AMP/index
- AMP/Concurrency::index::index
- AMP/Concurrency::index::rank
helpviewer_keywords:
- index structure
ms.assetid: cbe79b08-0ba7-474c-9828-f1a71da39eb3
ms.openlocfilehash: 46b49a7e0f65f06ad64ed32367cdfe6f6ca5ed1e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330055"
---
# <a name="index-class"></a>Classe index

Definisce un vettore di indice *N*-dimensionale.

## <a name="syntax"></a>Sintassi

```cpp
template <int _Rank>
class index;
```

### <a name="parameters"></a>Parametri

*_Rank*<br/>
Rango o numero di dimensioni.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore index](#index_ctor)|Inizializza una nuova istanza della classe `index`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore--](#operator--)|Decrementa ogni elemento dell' `index` oggetto.|
|[operatore% =](#operator_mod_eq)|Calcola il modulo (resto) di ogni elemento nell' `index` oggetto quando tale elemento è diviso per un numero.|
|[operatore * =](#operator_star_eq)|Moltiplica ogni elemento dell' `index` oggetto per un numero.|
|[operatore/=](#operator_div_eq)|Divide ogni elemento dell' `index` oggetto in base a un numero.|
|[index:: operator\[\]](#operator_at)|Restituisce l'elemento che si trova in corrispondenza dell'indice specificato.|
|[operatore + +](#operator_add_add)|Incrementa ogni elemento dell' `index` oggetto.|
|[operatore + =](#operator_add_eq)|Aggiunge il numero specificato a ogni elemento dell' `index` oggetto.|
|[operatore =](#operator_eq)|Copia il contenuto dell'oggetto specificato `index` in questo.|
|[operatore-=](#operator_-_eq)|Sottrae il numero specificato da ogni elemento dell' `index` oggetto.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Description|
|----------|-----------------|
|[Costante di rango](#rank)|Archivia il rango dell' `index` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`index`

## <a name="remarks"></a>Commenti

La `index` struttura rappresenta un vettore di coordinate di *N* integer che specifica una posizione univoca in uno spazio *n*-dimensionale. I valori nel vettore sono ordinati dal più significativo al meno significativo. È possibile recuperare i valori dei componenti utilizzando [operator =](#operator_eq).

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concorrenza

## <a name="index-constructor"></a><a name="index_ctor"></a> Costruttore index

Inizializza una nuova istanza della classe index.

```cpp
index() restrict(amp,cpu);

index(
   const index<_Rank>& _Other
) restrict(amp,cpu);

explicit index(
   int _I
) restrict(amp,cpu);

index(
   int _I0,
   int _I1
) restrict(amp,cpu);

index(
   int _I0,
   int _I1,
   int _I2
) restrict(amp,cpu);

explicit index(
   const int _Array[_Rank]
) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Array*<br/>
Matrice unidimensionale con i valori di rango.

*_I*<br/>
Posizione dell'indice in un indice unidimensionale.

*_I0*<br/>
Lunghezza della dimensione più significativa.

*_I1*<br/>
Lunghezza della dimensione più vicina alla dimensione più significativa.

*_I2*<br/>
Lunghezza della dimensione meno significativa.

*_Other*<br/>
Oggetto index su cui è basato il nuovo oggetto index.

## <a name="operator--"></a><a name="operator--"></a> operatore--

Decrementa ogni elemento dell'oggetto index.

```cpp
index<_Rank>& operator--() restrict(amp,cpu);

index operator--(
   int
) restrict(amp,cpu);
```

### <a name="return-values"></a>Valori restituiti

Per l'operatore di prefisso, l'oggetto index (* this). Per l'operatore suffisso, un nuovo oggetto index.

## <a name="operator"></a><a name="operator_mod_eq"></a> operatore% =

Calcola il modulo (resto) di ogni elemento nell'oggetto index quando tale elemento viene diviso per il numero specificato.

```cpp
index<_Rank>& operator%=(
   int _Rhs
) restrict(cpu, amp);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero per cui dividere per trovare il modulo.

## <a name="return-value"></a>Valore restituito

Oggetto index.

## <a name="operator"></a><a name="operator_star_eq"></a> operatore * =

Moltiplica ogni elemento nell'oggetto index per il numero specificato.

```cpp
index<_Rank>& operator*=(
   int _Rhs
) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero da moltiplicare.

## <a name="operator"></a><a name="operator_div_eq"></a> operatore/=

Divide ogni elemento nell'oggetto index in base al numero specificato.

```cpp
index<_Rank>& operator/=(
   int _Rhs
) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero per cui dividere.

## <a name="operator"></a><a name="operator_at"></a> operatore\[\]

Restituisce il componente dell'indice nella posizione specificata.

```cpp
int operator[] (
   unsigned _Index
) const restrict(amp,cpu);

int& operator[] (
   unsigned _Index
) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Intero compreso tra 0 e il rango meno 1.

### <a name="return-value"></a>Valore restituito

Elemento in corrispondenza dell'indice specificato.

### <a name="remarks"></a>Commenti

Nell'esempio seguente vengono visualizzati i valori dei componenti dell'indice.

```cpp
// Prints 1 2 3.
concurrency::index<3> idx(1, 2, 3);
std::cout << idx[0] << "\n";
std::cout << idx[1] << "\n";
std::cout << idx[2] << "\n";
```

## <a name="operator"></a><a name="operator_add_add"></a> operatore + +

Incrementa ogni elemento dell'oggetto index.

```cpp
index<_Rank>& operator++() restrict(amp,cpu);

index<_Rank> operator++(
   int
) restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

Per l'operatore di prefisso, l'oggetto index (* this). Per l'operatore suffisso, un nuovo oggetto index.

## <a name="operator"></a><a name="operator_add_eq"></a> operatore + =

Aggiunge il numero specificato a ogni elemento dell'oggetto index.

```cpp
index<_Rank>& operator+=(
   const index<_Rank>& _Rhs
) restrict(amp,cpu);

index<_Rank>& operator+=(
   int _Rhs
) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero da aggiungere.

### <a name="return-value"></a>Valore restituito

Oggetto index.

## <a name="operator"></a><a name="operator_eq"></a> operatore =

Copia il contenuto dell'oggetto indice specificato in questo oggetto.

```cpp
index<_Rank>& operator=(
   const index<_Rank>& _Other
) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto index da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento a questo oggetto index.

## <a name="operator-"></a><a name="operator_-_eq"></a> operatore-=

Sottrae il numero specificato da ogni elemento dell'oggetto index.

```cpp
index<_Rank>& operator-=(
   const index<_Rank>& _Rhs
) restrict(amp,cpu);

index<_Rank>& operator-=(
   int _Rhs
) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Numero da sottrarre.

### <a name="return-value"></a>Valore restituito

Oggetto index.

## <a name="rank"></a><a name="rank"></a> Rank

Ottiene il rango dell'oggetto index.

```cpp
static const int rank = _Rank;
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
