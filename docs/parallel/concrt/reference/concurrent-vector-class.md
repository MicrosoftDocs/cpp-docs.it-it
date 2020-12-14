---
description: 'Altre informazioni su: concurrent_vector Class'
title: Classe concurrent_vector
ms.date: 11/04/2016
f1_keywords:
- concurrent_vector
- CONCURRENT_VECTOR/concurrency::concurrent_vector
- CONCURRENT_VECTOR/concurrency::concurrent_vector::concurrent_vector
- CONCURRENT_VECTOR/concurrency::concurrent_vector::assign
- CONCURRENT_VECTOR/concurrency::concurrent_vector::at
- CONCURRENT_VECTOR/concurrency::concurrent_vector::back
- CONCURRENT_VECTOR/concurrency::concurrent_vector::begin
- CONCURRENT_VECTOR/concurrency::concurrent_vector::capacity
- CONCURRENT_VECTOR/concurrency::concurrent_vector::cbegin
- CONCURRENT_VECTOR/concurrency::concurrent_vector::cend
- CONCURRENT_VECTOR/concurrency::concurrent_vector::clear
- CONCURRENT_VECTOR/concurrency::concurrent_vector::crbegin
- CONCURRENT_VECTOR/concurrency::concurrent_vector::crend
- CONCURRENT_VECTOR/concurrency::concurrent_vector::empty
- CONCURRENT_VECTOR/concurrency::concurrent_vector::end
- CONCURRENT_VECTOR/concurrency::concurrent_vector::front
- CONCURRENT_VECTOR/concurrency::concurrent_vector::get_allocator
- CONCURRENT_VECTOR/concurrency::concurrent_vector::grow_by
- CONCURRENT_VECTOR/concurrency::concurrent_vector::grow_to_at_least
- CONCURRENT_VECTOR/concurrency::concurrent_vector::max_size
- CONCURRENT_VECTOR/concurrency::concurrent_vector::push_back
- CONCURRENT_VECTOR/concurrency::concurrent_vector::rbegin
- CONCURRENT_VECTOR/concurrency::concurrent_vector::rend
- CONCURRENT_VECTOR/concurrency::concurrent_vector::reserve
- CONCURRENT_VECTOR/concurrency::concurrent_vector::resize
- CONCURRENT_VECTOR/concurrency::concurrent_vector::shrink_to_fit
- CONCURRENT_VECTOR/concurrency::concurrent_vector::size
- CONCURRENT_VECTOR/concurrency::concurrent_vector::swap
helpviewer_keywords:
- concurrent_vector class
ms.assetid: a217b4ac-af2b-4d41-94eb-09a75ee28622
ms.openlocfilehash: c4149fc52d726cc5beea487c8ad24960c3698abd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189119"
---
# <a name="concurrent_vector-class"></a>Classe concurrent_vector

La classe `concurrent_vector` è una classe contenitore di sequenze che consente un accesso casuale a qualsiasi elemento. Abilita accodamento, accesso elementi, accesso iteratori e operazioni traversali di iterazione indipendenti dalla concorrenza. In tal caso, i puntatori o gli iteratori sono sempre validi. Non si tratta di una garanzia di inizializzazione di elementi o di un ordine di attraversamento specifico.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T, class _Ax>
class concurrent_vector: protected details::_Allocator_base<T,
    _Ax>,
private details::_Concurrent_vector_base_v4;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati degli elementi da archiviare nel vettore.

*_Ax*<br/>
Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione e alla deallocazione della memoria per il vettore simultaneo. Questo argomento è facoltativo e il valore predefinito è `allocator<T>`.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`allocator_type`|Tipo che rappresenta la classe allocator per il vettore simultaneo.|
|`const_iterator`|Tipo che fornisce un iteratore ad accesso casuale che può leggere un **`const`** elemento in un vettore simultaneo.|
|`const_pointer`|Tipo che fornisce un puntatore a un **`const`** elemento in un vettore simultaneo.|
|`const_reference`|Tipo che fornisce un riferimento a un **`const`** elemento archiviato in un vettore simultaneo per la lettura e l'esecuzione di **`const`** operazioni.|
|`const_reverse_iterator`|Tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi **`const`** elemento nel vettore simultaneo.|
|`difference_type`|Tipo che fornisce la distanza con segno tra due elementi in un vettore simultaneo.|
|`iterator`|Tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi elemento in un vettore simultaneo. La modifica di un elemento tramite l'iteratore non è indipendente dalla concorrenza.|
|`pointer`|Tipo che fornisce un puntatore a un elemento in un vettore simultaneo.|
|`reference`|Tipo che fornisce un riferimento a un elemento archiviato in un vettore simultaneo.|
|`reverse_iterator`|Tipo che fornisce un iteratore ad accesso casuale in grado di leggere qualsiasi elemento in un vettore simultaneo invertito. La modifica di un elemento tramite l'iteratore non è indipendente dalla concorrenza.|
|`size_type`|Tipo che conta il numero di elementi in un vettore simultaneo.|
|`value_type`|Tipo che rappresenta il tipo di dati archiviato in un vettore simultaneo.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[concurrent_vector](#ctor)|Di overload. Costruisce un vettore simultaneo.|
|[distruttore ~ concurrent_vector](#dtor)|Cancella tutti gli elementi ed Elimina il vettore simultaneo.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[assign](#assign)|Di overload. Cancella gli elementi del vettore simultaneo e assegna a esso una `_N` copia di `_Item` o valori specificati dall'intervallo di iteratore [ `_Begin` , `_End` ). Questo metodo non è indipendente dalla concorrenza.|
|[at](#at)|Di overload. Fornisce l'accesso all'elemento in corrispondenza dell'indice specificato nel vettore simultaneo. Questo metodo è indipendente dalla concorrenza per le operazioni di lettura e anche durante la crescita del vettore, purché sia stato verificato che il valore `_Index` sia minore della dimensione del vettore simultaneo.|
|[Indietro](#back)|Di overload. Restituisce un riferimento o un **`const`** riferimento all'ultimo elemento nel vettore simultaneo. Se il vettore simultaneo è vuoto, il valore restituito non è definito. Questo metodo è indipendente dalla concorrenza.|
|[iniziare](#begin)|Di overload. Restituisce un iteratore di tipo `iterator` o `const_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|
|[capacità](#capacity)|Restituisce le dimensioni massime consentite per l'aumento del vettore simultaneo senza dover allocare ulteriore memoria. Questo metodo è indipendente dalla concorrenza.|
|[cbegin](#cbegin)|Restituisce un iteratore di tipo `const_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|
|[cend](#cend)|Restituisce un iteratore di tipo `const_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|
|[deselezionare](#clear)|Cancella tutti gli elementi nel vettore simultaneo. Questo metodo non è indipendente dalla concorrenza.|
|[crbegin](#crbegin)|Restituisce un iteratore di tipo `const_reverse_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|
|[crend](#crend)|Restituisce un iteratore di tipo `const_reverse_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|
|[empty](#empty)|Verifica se il vettore simultaneo è vuoto nel momento in cui viene chiamato questo metodo. Questo metodo è indipendente dalla concorrenza.|
|[end](#end)|Di overload. Restituisce un iteratore di tipo `iterator` o `const_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|
|[fronte](#front)|Di overload. Restituisce un riferimento o un **`const`** riferimento al primo elemento nel vettore simultaneo. Se il vettore simultaneo è vuoto, il valore restituito non è definito. Questo metodo è indipendente dalla concorrenza.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'allocatore usato per costruire il vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|
|[grow_by](#grow_by)|Di overload. Cresce questo vettore simultaneo per `_Delta` elementi. Questo metodo è indipendente dalla concorrenza.|
|[grow_to_at_least](#grow_to_at_least)|Cresce questo vettore simultaneo fino a quando non contiene almeno `_N` elementi. Questo metodo è indipendente dalla concorrenza.|
|[max_size](#max_size)|Restituisce il numero massimo di elementi che possono essere mantenuti nel vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|
|[push_back](#push_back)|Di overload. Aggiunge l'elemento specificato alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|
|[rbegin](#rbegin)|Di overload. Restituisce un iteratore di tipo `reverse_iterator` o `const_reverse_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|
|[rend](#rend)|Di overload. Restituisce un iteratore di tipo `reverse_iterator` o `const_reverse_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|
|[riserva](#reserve)|Alloca spazio sufficiente per aumentare il vettore simultaneo alle dimensioni `_N` senza dover allocare più memoria in un secondo momento. Questo metodo non è indipendente dalla concorrenza.|
|[ridimensionare](#resize)|Di overload. Modifica la dimensione del vettore simultaneo alla dimensione richiesta, eliminando o aggiungendo elementi se necessario. Questo metodo non è indipendente dalla concorrenza.|
|[shrink_to_fit](#shrink_to_fit)|Compatta la rappresentazione interna del vettore simultaneo per ridurre la frammentazione e ottimizzare l'utilizzo della memoria. Questo metodo non è indipendente dalla concorrenza.|
|[size](#size)|Restituisce il numero di elementi nel vettore simultaneo. Questo metodo è indipendente dalla concorrenza.|
|[scambio](#swap)|Scambia il contenuto di due vettori simultanei. Questo metodo non è indipendente dalla concorrenza.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore\[\]](#operator_at)|Di overload. Fornisce l'accesso all'elemento in corrispondenza dell'indice specificato nel vettore simultaneo. Questo metodo è indipendente dalla concorrenza per le operazioni di lettura e anche durante la crescita del vettore, purché sia stato verificato che il valore `_Index` sia minore della dimensione del vettore simultaneo.|
|[operatore =](#operator_eq)|Di overload. Assegna il contenuto di un altro `concurrent_vector` oggetto a quello corrente. Questo metodo non è indipendente dalla concorrenza.|

## <a name="remarks"></a>Commenti

Per informazioni dettagliate sulla `concurrent_vector` classe, vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_Concurrent_vector_base_v4`

`_Allocator_base`

`concurrent_vector`

## <a name="requirements"></a>Requisiti

**Intestazione:** concurrent_vector. h

**Spazio dei nomi:** Concurrency

## <a name="assign"></a><a name="assign"></a> assegnare

Cancella gli elementi del vettore simultaneo e assegna a esso una `_N` copia di `_Item` o valori specificati dall'intervallo di iteratore [ `_Begin` , `_End` ). Questo metodo non è indipendente dalla concorrenza.

```cpp
void assign(
    size_type _N,
    const_reference _Item);

template<class _InputIterator>
void assign(_InputIterator _Begin,
    _InputIterator _End);
```

### <a name="parameters"></a>Parametri

*_InputIterator*<br/>
Tipo dell'iteratore specificato.

*_N*<br/>
Numero di elementi da copiare nel vettore simultaneo.

*_Item*<br/>
Riferimento a un valore utilizzato per riempire il vettore simultaneo.

*_Begin*<br/>
Iteratore per il primo elemento dell'intervallo di origine.

*_End*<br/>
Iteratore successivo all'ultimo elemento dell'intervallo di origine.

### <a name="remarks"></a>Commenti

`assign` non è indipendente dalla concorrenza. Quando si chiama questo metodo, è necessario assicurarsi che nessun altro thread richiami metodi sul vettore simultaneo.

## <a name="at"></a><a name="at"></a> a

Fornisce l'accesso all'elemento in corrispondenza dell'indice specificato nel vettore simultaneo. Questo metodo è indipendente dalla concorrenza per le operazioni di lettura e anche durante la crescita del vettore, purché sia stato verificato che il valore `_Index` sia minore della dimensione del vettore simultaneo.

```cpp
reference at(size_type _Index);

const_reference at(size_type _Index) const;
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice dell'elemento da recuperare.

### <a name="return-value"></a>Valore restituito

Riferimento all'elemento in corrispondenza dell'indice specificato.

### <a name="remarks"></a>Commenti

La versione della funzione `at` che restituisce un non **`const`** riferimento non può essere utilizzata per scrivere contemporaneamente nell'elemento da thread diversi. È necessario utilizzare un oggetto di sincronizzazione diverso per sincronizzare le operazioni di lettura e scrittura simultanee con lo stesso elemento dati.

Il metodo genera un'eccezione `out_of_range` se `_Index` è maggiore o uguale alla dimensione del vettore simultaneo e `range_error` se l'indice è per una parte interrotta del vettore. Per informazioni dettagliate su come un vettore può essere danneggiato, vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="back"></a><a name="back"></a> Indietro

Restituisce un riferimento o un **`const`** riferimento all'ultimo elemento nel vettore simultaneo. Se il vettore simultaneo è vuoto, il valore restituito non è definito. Questo metodo è indipendente dalla concorrenza.

```cpp
reference back();

const_reference back() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento o un **`const`** riferimento all'ultimo elemento nel vettore simultaneo.

## <a name="begin"></a><a name="begin"></a> iniziare

Restituisce un iteratore di tipo `iterator` o `const_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.

```cpp
iterator begin();

const_iterator begin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di tipo `iterator` o `const_iterator` all'inizio del vettore simultaneo.

## <a name="capacity"></a><a name="capacity"></a> capacità

Restituisce le dimensioni massime consentite per l'aumento del vettore simultaneo senza dover allocare ulteriore memoria. Questo metodo è indipendente dalla concorrenza.

```cpp
size_type capacity() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione massima raggiungibile dal vettore simultaneo senza dover allocare altra memoria.

### <a name="remarks"></a>Commenti

A differenza di una libreria standard C++ `vector` , un `concurrent_vector` oggetto non sposta gli elementi esistenti se alloca una maggiore quantità di memoria.

## <a name="cbegin"></a><a name="cbegin"></a> cbegin

Restituisce un iteratore di tipo `const_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di tipo `const_iterator` all'inizio del vettore simultaneo.

## <a name="cend"></a><a name="cend"></a> cend

Restituisce un iteratore di tipo `const_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di tipo `const_iterator` alla fine del vettore simultaneo.

## <a name="clear"></a><a name="clear"></a> deselezionare

Cancella tutti gli elementi nel vettore simultaneo. Questo metodo non è indipendente dalla concorrenza.

```cpp
void clear();
```

### <a name="remarks"></a>Commenti

`clear` non è indipendente dalla concorrenza. Quando si chiama questo metodo, è necessario assicurarsi che nessun altro thread richiami metodi sul vettore simultaneo. `clear` non libera le matrici interne. Per liberare matrici interne, chiamare la funzione `shrink_to_fit` dopo `clear` .

## <a name="concurrent_vector"></a><a name="ctor"></a> concurrent_vector

Costruisce un vettore simultaneo.

```cpp
explicit concurrent_vector(
    const allocator_type& _Al = allocator_type());

concurrent_vector(
    const concurrent_vector& _Vector);

template<class M>
concurrent_vector(
    const concurrent_vector<T,
    M>& _Vector,
    const allocator_type& _Al = allocator_type());

concurrent_vector(
    concurrent_vector&& _Vector);

explicit concurrent_vector(
    size_type _N);

concurrent_vector(
    size_type _N,
    const_reference _Item,
    const allocator_type& _Al = allocator_type());

template<class _InputIterator>
concurrent_vector(_InputIterator _Begin,
    _InputIterator _End,
    const allocator_type& _Al = allocator_type());
```

### <a name="parameters"></a>Parametri

*M*<br/>
Tipo di allocatore del vettore di origine.

*_InputIterator*<br/>
Tipo di iteratore di input.

*_Al*<br/>
Classe Allocator da usare con questo oggetto.

*_Vector*<br/>
Oggetto `concurrent_vector` di origine da cui copiare o spostare elementi.

*_N*<br/>
Capacità iniziale dell'oggetto `concurrent_vector`.

*_Item*<br/>
Valore degli elementi nell'oggetto costruito.

*_Begin*<br/>
Posizione del primo elemento nell'intervallo di elementi da copiare.

*_End*<br/>
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

### <a name="remarks"></a>Commenti

Tutti i costruttori archiviano un oggetto allocatore `_Al` e inizializzano il vettore.

Il primo costruttore specifica un vettore iniziale vuoto e specifica in modo esplicito il tipo di allocatore. da usare.

Il secondo e il terzo costruttore specificano una copia del vettore simultaneo `_Vector` .

Tramite il quarto costruttore viene specificato un movimento del vettore simultaneo `_Vector`.

Il quinto costruttore specifica una ripetizione di un numero specificato ( `_N` ) di elementi del valore predefinito per la classe `T` .

Il sesto costruttore specifica una ripetizione di ( `_N` ) elementi di valore `_Item` .

L'ultimo costruttore specifica i valori forniti dall'intervallo dell'iteratore [ `_Begin` , `_End` ).

## <a name="concurrent_vector"></a><a name="dtor"></a> ~ concurrent_vector

Cancella tutti gli elementi ed Elimina il vettore simultaneo.

```cpp
~concurrent_vector();
```

## <a name="crbegin"></a><a name="crbegin"></a> crbegin

Restituisce un iteratore di tipo `const_reverse_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.

```cpp
const_reverse_iterator crbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di tipo `const_reverse_iterator` all'inizio del vettore simultaneo.

## <a name="crend"></a><a name="crend"></a> crend

Restituisce un iteratore di tipo `const_reverse_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.

```cpp
const_reverse_iterator crend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di tipo `const_reverse_iterator` alla fine del vettore simultaneo.

## <a name="empty"></a><a name="empty"></a> vuoto

Verifica se il vettore simultaneo è vuoto nel momento in cui viene chiamato questo metodo. Questo metodo è indipendente dalla concorrenza.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se il vettore è vuoto nel momento in cui la funzione è stata chiamata; **`false`** in caso contrario,.

## <a name="end"></a><a name="end"></a> fine

Restituisce un iteratore di tipo `iterator` o `const_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.

```cpp
iterator end();

const_iterator end() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di tipo `iterator` o `const_iterator` alla fine del vettore simultaneo.

## <a name="front"></a><a name="front"></a> fronte

Restituisce un riferimento o un **`const`** riferimento al primo elemento nel vettore simultaneo. Se il vettore simultaneo è vuoto, il valore restituito non è definito. Questo metodo è indipendente dalla concorrenza.

```cpp
reference front();

const_reference front() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento o un **`const`** riferimento al primo elemento nel vettore simultaneo.

## <a name="get_allocator"></a><a name="get_allocator"></a> get_allocator

Restituisce una copia dell'allocatore usato per costruire il vettore simultaneo. Questo metodo è indipendente dalla concorrenza.

```cpp
allocator_type get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Copia dell'allocatore utilizzato per costruire l' `concurrent_vector` oggetto.

## <a name="grow_by"></a><a name="grow_by"></a> grow_by

Cresce questo vettore simultaneo per `_Delta` elementi. Questo metodo è indipendente dalla concorrenza.

```cpp
iterator grow_by(
    size_type _Delta);

iterator grow_by(
    size_type _Delta,
    const_reference _Item);
```

### <a name="parameters"></a>Parametri

*_Delta*<br/>
Numero di elementi da accodare all'oggetto.

*_Item*<br/>
Valore con cui inizializzare i nuovi elementi.

### <a name="return-value"></a>Valore restituito

Iteratore al primo elemento accodato.

### <a name="remarks"></a>Commenti

Se `_Item` viene omesso, i nuovi elementi vengono costruiti per impostazione predefinita.

## <a name="grow_to_at_least"></a><a name="grow_to_at_least"></a> grow_to_at_least

Cresce questo vettore simultaneo fino a quando non contiene almeno `_N` elementi. Questo metodo è indipendente dalla concorrenza.

```cpp
iterator grow_to_at_least(size_type _N);
```

### <a name="parameters"></a>Parametri

*_N*<br/>
Nuove dimensioni minime per l' `concurrent_vector` oggetto.

### <a name="return-value"></a>Valore restituito

Iteratore che punta all'inizio della sequenza accodata o all'elemento in corrispondenza dell'indice `_N` se non è stato aggiunto alcun elemento.

## <a name="max_size"></a><a name="max_size"></a> max_size

Restituisce il numero massimo di elementi che possono essere mantenuti nel vettore simultaneo. Questo metodo è indipendente dalla concorrenza.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Numero massimo di elementi che l' `concurrent_vector` oggetto può mantenere.

## <a name="operator"></a><a name="operator_eq"></a> operatore =

Assegna il contenuto di un altro `concurrent_vector` oggetto a quello corrente. Questo metodo non è indipendente dalla concorrenza.

```cpp
concurrent_vector& operator= (
    const concurrent_vector& _Vector);

template<class M>
concurrent_vector& operator= (
    const concurrent_vector<T, M>& _Vector);

concurrent_vector& operator= (
    concurrent_vector&& _Vector);
```

### <a name="parameters"></a>Parametri

*M*<br/>
Tipo di allocatore del vettore di origine.

*_Vector*<br/>
Oggetto `concurrent_vector` di origine.

### <a name="return-value"></a>Valore restituito

Riferimento a questo `concurrent_vector` oggetto.

## <a name="operator"></a><a name="operator_at"></a> operator []

Fornisce l'accesso all'elemento in corrispondenza dell'indice specificato nel vettore simultaneo. Questo metodo è indipendente dalla concorrenza per le operazioni di lettura e anche durante la crescita del vettore, purché sia stato verificato che il valore `_Index` sia minore della dimensione del vettore simultaneo.

```cpp
reference operator[](size_type _index);

const_reference operator[](size_type _index) const;
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice dell'elemento da recuperare.

### <a name="return-value"></a>Valore restituito

Riferimento all'elemento in corrispondenza dell'indice specificato.

### <a name="remarks"></a>Commenti

La versione di `operator []` che restituisce un non **`const`** riferimento non può essere utilizzata per scrivere contemporaneamente nell'elemento da thread diversi. È necessario utilizzare un oggetto di sincronizzazione diverso per sincronizzare le operazioni di lettura e scrittura simultanee con lo stesso elemento dati.

Non viene eseguito alcun controllo dei limiti per assicurarsi che `_Index` sia un indice valido nel vettore simultaneo.

## <a name="push_back"></a><a name="push_back"></a> push_back

Aggiunge l'elemento specificato alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.

```cpp
iterator push_back(const_reference _Item);

iterator push_back(T&& _Item);
```

### <a name="parameters"></a>Parametri

*_Item*<br/>
Valore da accodare.

### <a name="return-value"></a>Valore restituito

Iteratore all'elemento accodato.

## <a name="rbegin"></a><a name="rbegin"></a> rbegin

Restituisce un iteratore di tipo `reverse_iterator` o `const_reverse_iterator` all'inizio del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.

```cpp
reverse_iterator rbegin();

const_reverse_iterator rbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di tipo `reverse_iterator` o `const_reverse_iterator` all'inizio del vettore simultaneo.

## <a name="rend"></a><a name="rend"></a> rend

Restituisce un iteratore di tipo `reverse_iterator` o `const_reverse_iterator` alla fine del vettore simultaneo. Questo metodo è indipendente dalla concorrenza.

```cpp
reverse_iterator rend();

const_reverse_iterator rend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di tipo `reverse_iterator` o `const_reverse_iterator` alla fine del vettore simultaneo.

## <a name="reserve"></a><a name="reserve"></a> riserva

Alloca spazio sufficiente per aumentare il vettore simultaneo alle dimensioni `_N` senza dover allocare più memoria in un secondo momento. Questo metodo non è indipendente dalla concorrenza.

```cpp
void reserve(size_type _N);
```

### <a name="parameters"></a>Parametri

*_N*<br/>
Numero di elementi per i quali riservare spazio.

### <a name="remarks"></a>Commenti

`reserve` non è indipendente dalla concorrenza. Quando si chiama questo metodo, è necessario assicurarsi che nessun altro thread richiami metodi sul vettore simultaneo. La capacità del vettore simultaneo dopo la restituzione del metodo può essere maggiore della prenotazione richiesta.

## <a name="resize"></a><a name="resize"></a> ridimensionare

Modifica la dimensione del vettore simultaneo alla dimensione richiesta, eliminando o aggiungendo elementi se necessario. Questo metodo non è indipendente dalla concorrenza.

```cpp
void resize(
    size_type _N);

void resize(
    size_type _N,
    const T& val);
```

### <a name="parameters"></a>Parametri

*_N*<br/>
Nuova dimensione di concurrent_vector.

*Val*<br/>
Valore di nuovi elementi aggiunti al vettore se la nuova dimensione è maggiore di quella originale. Se il valore viene omesso, ai nuovi oggetti viene assegnato il valore predefinito per il relativo tipo.

### <a name="remarks"></a>Commenti

Se le dimensioni del contenitore sono inferiori alla dimensione richiesta, gli elementi vengono aggiunti al vettore fino a raggiungere le dimensioni richieste. Se le dimensioni del contenitore sono maggiori della dimensione richiesta, gli elementi più vicini alla fine del contenitore vengono eliminati finché il contenitore non raggiunge la dimensione `_N` . Se la dimensione attuale del contenitore corrisponde a quella richiesta, non viene eseguita alcuna azione.

`resize` non è Safe per la concorrenza. Quando si chiama questo metodo, è necessario assicurarsi che nessun altro thread richiami metodi sul vettore simultaneo.

## <a name="shrink_to_fit"></a><a name="shrink_to_fit"></a> shrink_to_fit

Compatta la rappresentazione interna del vettore simultaneo per ridurre la frammentazione e ottimizzare l'utilizzo della memoria. Questo metodo non è indipendente dalla concorrenza.

```cpp
void shrink_to_fit();
```

### <a name="remarks"></a>Commenti

Questo metodo allocherà internamente gli elementi di spostamento della memoria in modo da invalidare tutti gli iteratori. `shrink_to_fit` non è indipendente dalla concorrenza. Quando si chiama questa funzione, è necessario assicurarsi che nessun altro thread richiami metodi sul vettore simultaneo.

## <a name="size"></a><a name="size"></a> dimensioni

Restituisce il numero di elementi nel vettore simultaneo. Questo metodo è indipendente dalla concorrenza.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi in questo `concurrent_vector` oggetto.

### <a name="remarks"></a>Commenti

Per la dimensione restituita è garantita l'inclusione di tutti gli elementi accodati dalle chiamate alla funzione `push_back` o la crescita delle operazioni completate prima di richiamare questo metodo. Tuttavia, può includere anche elementi allocati ma ancora in fase di costruzione dalle chiamate simultanee a uno dei metodi di crescita.

## <a name="swap"></a><a name="swap"></a> scambio

Scambia il contenuto di due vettori simultanei. Questo metodo non è indipendente dalla concorrenza.

```cpp
void swap(concurrent_vector& _Vector);
```

### <a name="parameters"></a>Parametri

*_Vector*<br/>
Oggetto `concurrent_vector` i cui contenuti devono venire scambiati.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md)
