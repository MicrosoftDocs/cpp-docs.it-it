---
title: Classe move_iterator
ms.date: 03/27/2019
f1_keywords:
- iterator/std::move_iterator
- iterator/std::move_iterator::iterator_type
- iterator/std::move_iterator::iterator_category
- iterator/std::move_iterator::value_type
- iterator/std::move_iterator::difference_type
- iterator/std::move_iterator::pointer
- iterator/std::move_iterator::reference
- iterator/std::move_iterator::base
helpviewer_keywords:
- std::move_iterator [C++]
- std::move_iterator [C++], iterator_type
- std::move_iterator [C++], iterator_category
- std::move_iterator [C++], value_type
- std::move_iterator [C++], difference_type
- std::move_iterator [C++], pointer
- std::move_iterator [C++], reference
- std::move_iterator [C++], base
ms.assetid: a5e5cdd8-a264-4c6b-9f9c-68b0e8edaab7
ms.openlocfilehash: 55e0c23aaf085a132ecab739ec1d4ff1f11858a0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228193"
---
# <a name="move_iterator-class"></a>Classe move_iterator

Il modello di classe `move_iterator` è un wrapper di un iteratore. move_iterator offre lo stesso comportamento dell'iteratore di cui esegue il wrapping (archivia), con la differenza che trasforma l'operatore di dereferenziazione dell'iteratore archiviato in un riferimento rvalue, trasformando una copia in uno spostamento. Per altre informazioni sui riferimenti rvalue, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="syntax"></a>Sintassi

```cpp
class move_iterator;
```

## <a name="remarks"></a>Osservazioni

Il modello di classe descrive un oggetto che si comporta come un iteratore eccetto quando viene dereferenziato. Archivia un iteratore ad accesso casuale di tipo `Iterator`, a cui si accede tramite la funzione membro `base()`. Tutte le operazioni effettuate su un `move_iterator` vengono eseguite direttamente sull'iteratore archiviato, ad eccezione del fatto che viene eseguito il cast in modo implicito del risultato di `operator*` a `value_type&&` per creare un riferimento rvalue.

Un `move_iterator` potrebbe essere in grado di effettuare operazioni non definite dall'iteratore di cui è stato eseguito il wrapping. Queste operazioni non devono essere utilizzate.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[move_iterator](#move_iterator)|Costruttore per oggetti di tipo `move_iterator`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[iterator_type](#iterator_type)|Sinonimo del parametro di modello `RandomIterator`.|
|[iterator_category](#iterator_category)|Sinonimo di un'espressione più lunga con **`typename`** lo stesso nome, `iterator_category` identifica le capacità generali dell'iteratore.|
|[value_type](#value_type)|Un sinonimo di un'espressione più lunga con **`typename`** lo stesso nome `value_type` descrive il tipo degli elementi iteratori.|
|[difference_type](#difference_type)|Sinonimo di un'espressione più lunga con **`typename`** lo stesso nome, `difference_type` descrive il tipo integrale necessario per esprimere i valori di differenza tra gli elementi.|
|[puntatore](#pointer)|Sinonimo del parametro di modello `RandomIterator`.|
|[reference](#reference)|Sinonimo del riferimento `rvalue``value_type&&`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[base](#base)|La funzione membro restituisce l'iteratore archiviato di cui è stato eseguito il wrapping da `move_iterator`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[move_iterator:: operator *](#op_star)|Restituisce `(reference)*base().`.|
|[move_iterator:: operator + +](#op_add_add)|Incrementa l'iteratore archiviato. Il comportamento esatto dipende dal fatto che si tratti di un'operazione di incremento prefisso o incremento suffisso.|
|[move_iterator::operator--](#operator--)|Decrementa l'iteratore archiviato. Il comportamento esatto dipende dal fatto che si tratti di un'operazione di incremento prefisso o di incremento suffisso.|
|[move_iterator:: operator-&gt;](#op_arrow)|Restituisce `&**this`.|
|[move_iterator:: operator-](#operator-)|Restituisce `move_iterator(*this) -=` sottraendo innanzitutto il valore a destra dalla posizione corrente.|
|[move_iterator:: operator []](#op_at)|Restituisce `(reference)*(*this + off)`. Consente di specificare un offset dalla base corrente per ottenere il valore in corrispondenza di tale posizione.|
|[move_iterator:: operator +](#op_add)|Restituisce il valore `move_iterator(*this) +=`. Consente di aggiungere un offset dalla base per ottenere il valore in corrispondenza di tale posizione.|
|[move_iterator:: operator + =](#op_add_eq)|Aggiunge il valore a destra all'iteratore archiviato e restituisce **`*this`** .|
|[move_iterator:: operator-=](#operator-_eq)|Sottrae il valore a destra dall'iteratore archiviato e restituisce **`*this`** .|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<iterator>

**Spazio dei nomi:** std

## <a name="move_iteratorbase"></a><a name="base"></a>move_iterator:: base

Restituisce l'iteratore archiviato per questo `move_iterator`.

```cpp
RandomIterator base() const;
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce l'iteratore archiviato.

## <a name="move_iteratordifference_type"></a><a name="difference_type"></a>move_iterator::d ifference_type

Il tipo `difference_type` è un oggetto `move_iterator` **`typedef`** basato sul tratto dell'iteratore `difference_type` e può essere usato in modo intercambiabile.

```cpp
typedef typename iterator_traits<RandomIterator>::difference_type difference_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del tratto dell'iteratore `typename iterator_traits<RandomIterator>::pointer`.

## <a name="move_iteratoriterator_category"></a><a name="iterator_category"></a>move_iterator:: iterator_category

Il tipo `iterator_category` è un oggetto `move_iterator` **`typedef`** basato sul tratto dell'iteratore `iterator_category` e può essere usato in modo intercambiabile.

```cpp
typedef typename iterator_traits<RandomIterator>::iterator_category  iterator_category;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del tratto dell'iteratore `typename iterator_traits<RandomIterator>::iterator_category`.

## <a name="move_iteratoriterator_type"></a><a name="iterator_type"></a>move_iterator:: iterator_type

Il tipo `iterator_type` è basato sul parametro di modello `RandomIterator` per il modello di classe `move_iterator` e può essere usato in modo intercambiabile al suo posto.

```cpp
typedef RandomIterator iterator_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `RandomIterator`.

## <a name="move_iteratormove_iterator"></a><a name="move_iterator"></a>move_iterator:: move_iterator

Costruisce un iteratore di spostamento. Usa il parametro come l'iteratore archiviato.

```cpp
move_iterator();
explicit move_iterator(RandomIterator right);
template <class Type>
move_iterator(const move_iterator<Type>& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Iteratore da usare come iteratore archiviato.

### <a name="remarks"></a>Osservazioni

Il primo costruttore inizializza l'iteratore archiviato con il relativo costruttore predefinito. I rimanenti costruttori inizializzano l'iteratore archiviato con `base.base()`.

## <a name="move_iteratoroperator"></a><a name="op_add_eq"></a>move_iterator:: operator + =

Aggiunge un offset all'iteratore archiviato, in modo che l'iteratore archiviato faccia riferimento all'elemento nella nuova posizione corrente. L'operatore passa quindi al nuovo elemento corrente.

```cpp
move_iterator& operator+=(difference_type _Off);
```

### <a name="parameters"></a>Parametri

*_Off*\
Offset da aggiungere alla posizione corrente per determinare la nuova posizione corrente.

### <a name="return-value"></a>Valore restituito

Restituisce il nuovo elemento corrente.

### <a name="remarks"></a>Osservazioni

L'operatore aggiunge *_Off* all'iteratore archiviato. Restituisce quindi **`*this`** .

## <a name="move_iteratoroperator-"></a><a name="operator-_eq"></a>move_iterator:: operator-=

Si sposta tra un numero specificato di elementi precedenti. Questo operatore sottrae un offset dall'iteratore archiviato.

```cpp
move_iterator& operator-=(difference_type _Off);
```

### <a name="parameters"></a>Parametri

### <a name="remarks"></a>Osservazioni

L'operatore valuta `*this += -_Off`. Restituisce quindi **`*this`** .

## <a name="move_iteratoroperator"></a><a name="op_add_add"></a>move_iterator:: operator + +

Incrementa l'iteratore archiviato che appartiene a `move_iterator.`. All'elemento corrente accede l'operatore di incremento suffisso. All'elemento successivo accederà l'operatore di incremento prefisso.

```cpp
move_iterator& operator++();
move_iterator operator++(int);
```

### <a name="parameters"></a>Parametri

### <a name="remarks"></a>Osservazioni

Il primo operatore (incremento prefisso) incrementa l'iteratore archiviato. Restituisce quindi **`*this`** .

Il secondo operatore (postincrement) crea una copia di **`*this`** , valuta `++*this` . Restituisce quindi la copia.

## <a name="move_iteratoroperator"></a><a name="op_add"></a>move_iterator:: operator +

Restituisce la posizione dell'iteratore avanzata tramite qualsiasi numero di elementi.

```cpp
move_iterator operator+(difference_type _Off) const;
```

### <a name="parameters"></a>Parametri

### <a name="remarks"></a>Osservazioni

L'operatore restituisce `move_iterator(*this) +=` `_Off` .

## <a name="move_iteratoroperator"></a><a name="op_at"></a>move_iterator:: operator []

Consente l'accesso di indice di matrice agli elementi nell'ambito della gamma del `move iterator`.

```cpp
reference operator[](difference_type _Off) const;
```

### <a name="parameters"></a>Parametri

### <a name="remarks"></a>Osservazioni

L'operatore restituisce `(reference)*(*this + _Off)`.

## <a name="move_iteratoroperator--"></a><a name="operator--"></a>move_iterator:: operator--

Gli operatori di decremento prefisso e di decremento suffisso eseguono un decremento sull'iteratore archiviato.

```cpp
move_iterator& operator--();
move_iterator operator--();
```

### <a name="parameters"></a>Parametri

### <a name="remarks"></a>Osservazioni

Il primo operatore membro (decremento prefisso) decrementa l'iteratore archiviato. Restituisce quindi **`*this`** .

Il secondo operatore (decremento) crea una copia di **`*this`** , valuta `--*this` . Restituisce quindi la copia.

## <a name="move_iteratoroperator-"></a><a name="operator-"></a>move_iterator:: operator-

Decrementa l'iteratore archiviato e restituisce il valore indicato.

```cpp
move_iterator operator-(difference_type _Off) const;
```

### <a name="parameters"></a>Parametri

### <a name="remarks"></a>Osservazioni

L'operatore restituisce `move_iterator(*this) -= _Off`.

## <a name="move_iteratoroperator"></a><a name="op_star"></a>move_iterator:: operator *

Dereferenzia l'iteratore archiviato e restituisce il valore. Si comporta come un oggetto `rvalue reference` ed esegue un'assegnazione di spostamento. L'operatore trasferisce l'elemento corrente all'esterno dell'iteratore di base. L'elemento che segue diventa il nuovo elemento corrente.

```cpp
reference operator*() const;
```

### <a name="remarks"></a>Osservazioni

L'operatore restituisce `(reference)*base()`.

## <a name="move_iteratoroperator-gt"></a><a name="op_arrow"></a>move_iterator:: operator-&gt;

Analogamente a un normale `RandomIterator` `operator->`, fornisce accesso ai campi che appartengono all'elemento corrente.

```cpp
pointer operator->() const;
```

### <a name="remarks"></a>Osservazioni

L'operatore restituisce `&**this`.

## <a name="move_iteratorpointer"></a><a name="pointer"></a>move_iterator::p ointer

Il tipo `pointer` è un oggetto **`typedef`** basato sull'iteratore casuale `RandomIterator` per `move_iterator` e può essere usato in modo intercambiabile.

```cpp
typedef RandomIterator  pointer;
```

### <a name="remarks"></a>Osservazioni

Il tipo è sinonimo di `RandomIterator`.

## <a name="move_iteratorreference"></a><a name="reference"></a>move_iterator:: Reference

Il tipo `reference` è un **`typedef`** basato su `value_type&&` per `move_iterator` e può essere usato in modo intercambiabile con `value_type&&` .

```cpp
typedef value_type&& reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di `value_type&&`, che è un riferimento rvalue.

## <a name="move_iteratorvalue_type"></a><a name="value_type"></a>move_iterator:: value_type

Il tipo `value_type` è un oggetto `move_iterator` **`typedef`** basato sul tratto dell'iteratore `value_type` e può essere usato in modo intercambiabile.

```cpp
typedef typename iterator_traits<RandomIterator>::value_type   value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del tratto dell'iteratore `typename iterator_traits<RandomIterator>::value_type`.

## <a name="see-also"></a>Vedere anche

[\<iterator>](../standard-library/iterator.md)\
[Lvalue e rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md)\
[Costruttori di spostamento e operatori di assegnazione di spostamento (C++)](../cpp/move-constructors-and-move-assignment-operators-cpp.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
