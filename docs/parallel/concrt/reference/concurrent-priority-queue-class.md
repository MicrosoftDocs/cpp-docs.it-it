---
title: Classe concurrent_priority_queue
ms.date: 11/04/2016
f1_keywords:
- concurrent_priority_queue
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::concurrent_priority_queue
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::clear
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::empty
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::get_allocator
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::push
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::size
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::swap
- CONCURRENT_PRIORITY_QUEUE/concurrency::concurrent_priority_queue::try_pop
helpviewer_keywords:
- concurrent_priority_queue class
ms.assetid: 3e740381-0f4e-41fc-8b66-ad0bb55f17a3
ms.openlocfilehash: 024bd2a100b8a0b871d98a5e6001858b55977565
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230363"
---
# <a name="concurrent_priority_queue-class"></a>Classe concurrent_priority_queue

La classe `concurrent_priority_queue` è un contenitore che consente a più thread di inserire e togliere elementi contemporaneamente. Gli elementi vengono prelevati secondo un ordine di priorità dove la priorità è determinata da una funzione fornita come argomento del modello.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T,
    typename _Compare= std::less<T>,
    typename _Ax = std::allocator<T>
>,
    typename _Ax = std::allocator<T>> class concurrent_priority_queue;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati degli elementi da archiviare nella coda di priorità.

*_Compare*<br/>
Tipo dell'oggetto funzione tramite cui è possibile confrontare i valori di due elementi come chiavi di ordinamento per determinarne l'ordine relativo nella coda di priorità. Questo argomento è facoltativo e il predicato binario `less<T>` rappresenta il valore predefinito.

*_Ax*<br/>
Tipo che rappresenta l'oggetto allocatore archiviato in cui sono inclusi i dettagli sull'allocazione e sulla deallocazione di memoria per la coda di priorità simultanea. Questo argomento è facoltativo e il valore predefinito è `allocator<T>`.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`allocator_type`|Tipo che rappresenta la classe dell'allocatore per la coda di priorità simultanea.|
|`const_reference`|Tipo che rappresenta un riferimento const a un elemento del tipo archiviato in una coda di priorità simultanea.|
|`reference`|Tipo che rappresenta un riferimento a un elemento del tipo archiviato in una coda di priorità simultanea.|
|`size_type`|Tipo che conta il numero di elementi in una coda di priorità simultanea.|
|`value_type`|Tipo che rappresenta il tipo di dati archiviati in una coda di priorità simultanea.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[concurrent_priority_queue](#ctor)|Di overload. Costruisce una coda di priorità simultanea.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[deselezionare](#clear)|Cancella tutti gli elementi nella coda di priorità simultanea. Questo metodo non è indipendente dalla concorrenza.|
|[empty](#empty)|Testa se la coda di priorità simultanea è vuota nel momento in cui questo metodo viene chiamato. Questo metodo è indipendente dalla concorrenza.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'allocatore utilizzato per costruire la coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.|
|[push](#push)|Di overload. Aggiunge un elemento alla coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.|
|[size](#size)|Restituisce il numero di elementi presenti nella coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.|
|[scambio](#swap)|Scambia il contenuto di due code di priorità simultanee. Questo metodo non è indipendente dalla concorrenza.|
|[try_pop](#try_pop)|Rimuove e restituisce l'elemento con la priorità più elevata dalla coda se quest'ultima non è vuota. Questo metodo è indipendente dalla concorrenza.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operatore =](#operator_eq)|Di overload. Assegna il contenuto di un altro `concurrent_priority_queue` oggetto a quello corrente. Questo metodo non è indipendente dalla concorrenza.|

## <a name="remarks"></a>Osservazioni

Per informazioni dettagliate sulla `concurrent_priority_queue` classe, vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`concurrent_priority_queue`

## <a name="requirements"></a>Requisiti

**Intestazione:** concurrent_priority_queue. h

**Spazio dei nomi:** Concurrency

## <a name="clear"></a><a name="clear"></a>deselezionare

Cancella tutti gli elementi nella coda di priorità simultanea. Questo metodo non è indipendente dalla concorrenza.

```cpp
void clear();
```

### <a name="remarks"></a>Osservazioni

`clear`non è indipendente dalla concorrenza. Quando si chiama questo metodo, è necessario assicurarsi che nessun altro thread richiami metodi nella coda di priorità simultanea. `clear`non libera la memoria.

## <a name="concurrent_priority_queue"></a><a name="ctor"></a>concurrent_priority_queue

Costruisce una coda di priorità simultanea.

```cpp
explicit concurrent_priority_queue(
    const allocator_type& _Al = allocator_type());

explicit concurrent_priority_queue(
    size_type _Init_capacity,
    const allocator_type& _Al = allocator_type());

template<typename _InputIterator>
concurrent_priority_queue(_InputIterator _Begin,
    _InputIterator _End,
    const allocator_type& _Al = allocator_type());

concurrent_priority_queue(
    const concurrent_priority_queue& _Src);

concurrent_priority_queue(
    const concurrent_priority_queue& _Src,
    const allocator_type& _Al);

concurrent_priority_queue(
    concurrent_priority_queue&& _Src);

concurrent_priority_queue(
    concurrent_priority_queue&& _Src,
    const allocator_type& _Al);
```

### <a name="parameters"></a>Parametri

*_InputIterator*<br/>
Tipo di iteratore di input.

*_Al*<br/>
Classe Allocator da usare con questo oggetto.

*_Init_capacity*<br/>
Capacità iniziale dell'oggetto `concurrent_priority_queue`.

*_Begin*<br/>
Posizione del primo elemento nell'intervallo di elementi da copiare.

*_End*<br/>
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

*_Src*<br/>
Oggetto `concurrent_priority_queue` di origine da cui copiare o spostare elementi.

### <a name="remarks"></a>Osservazioni

Tutti i costruttori archiviano un oggetto allocatore `_Al` e inizializzano la coda di priorità.

Il primo costruttore specifica una coda di priorità iniziale vuota e, facoltativamente, specifica un allocatore.

Il secondo costruttore specifica una coda di priorità con una capacità iniziale `_Init_capacity` e, facoltativamente, specifica un allocatore.

Il terzo costruttore specifica i valori forniti dall'intervallo iteratore [ `_Begin` , `_End` ) e, facoltativamente, specifica un allocatore.

Il quarto e il quinto costruttore specificano una copia della coda di priorità `_Src` .

Il sesto e il settimo costruttore specificano uno spostamento della coda di priorità `_Src` .

## <a name="empty"></a><a name="empty"></a>vuoto

Testa se la coda di priorità simultanea è vuota nel momento in cui questo metodo viene chiamato. Questo metodo è indipendente dalla concorrenza.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se la coda di priorità è vuota nel momento in cui la funzione è stata chiamata; **`false`** in caso contrario,.

## <a name="get_allocator"></a><a name="get_allocator"></a>get_allocator

Restituisce una copia dell'allocatore utilizzato per costruire la coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.

```cpp
allocator_type get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Copia dell'allocatore utilizzato per costruire l' `concurrent_priority_queue` oggetto.

## <a name="operator"></a><a name="operator_eq"></a>operatore =

Assegna il contenuto di un altro `concurrent_priority_queue` oggetto a quello corrente. Questo metodo non è indipendente dalla concorrenza.

```cpp
concurrent_priority_queue& operator= (const concurrent_priority_queue& _Src);

concurrent_priority_queue& operator= (concurrent_priority_queue&& _Src);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Oggetto `concurrent_priority_queue` di origine.

### <a name="return-value"></a>Valore restituito

Riferimento a questo `concurrent_priority_queue` oggetto.

## <a name="push"></a><a name="push"></a>spingere

Aggiunge un elemento alla coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.

```cpp
void push(const value_type& _Elem);

void push(value_type&& _Elem);
```

### <a name="parameters"></a>Parametri

*_Elem*<br/>
Elemento da aggiungere alla coda di priorità simultanea.

## <a name="size"></a><a name="size"></a>dimensioni

Restituisce il numero di elementi presenti nella coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi in questo `concurrent_priority_queue` oggetto.

### <a name="remarks"></a>Osservazioni

Alla dimensione restituita è garantita l'inclusione di tutti gli elementi aggiunti dalle chiamate alla funzione `push` . Tuttavia, potrebbe non riflettere i risultati delle operazioni simultanee in sospeso.

## <a name="swap"></a><a name="swap"></a>scambio

Scambia il contenuto di due code di priorità simultanee. Questo metodo non è indipendente dalla concorrenza.

```cpp
void swap(concurrent_priority_queue& _Queue);
```

### <a name="parameters"></a>Parametri

*_Queue*<br/>
Oggetto `concurrent_priority_queue` i cui contenuti devono venire scambiati.

## <a name="try_pop"></a><a name="try_pop"></a>try_pop

Rimuove e restituisce l'elemento con la priorità più elevata dalla coda se quest'ultima non è vuota. Questo metodo è indipendente dalla concorrenza.

```cpp
bool try_pop(reference _Elem);
```

### <a name="parameters"></a>Parametri

*_Elem*<br/>
Riferimento a una variabile che verrà popolata con l'elemento con la priorità più alta, se la coda non è vuota.

### <a name="return-value"></a>Valore restituito

**`true`** Se è stato estratto un valore; **`false`** in caso contrario,.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md)
