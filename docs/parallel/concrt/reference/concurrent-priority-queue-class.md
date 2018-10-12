---
title: Classe concurrent_priority_queue | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- concurrent_priority_queue class
ms.assetid: 3e740381-0f4e-41fc-8b66-ad0bb55f17a3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: de97557025929c394039b1a786fe12a7035381e1
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49163153"
---
# <a name="concurrentpriorityqueue-class"></a>Classe concurrent_priority_queue

La classe `concurrent_priority_queue` è un contenitore che consente a più thread di inserire e togliere elementi contemporaneamente. Gli elementi vengono prelevati secondo un ordine di priorità dove la priorità è determinata da una funzione fornita come argomento del modello.

## <a name="syntax"></a>Sintassi

```
template <typename T,
    typename _Compare= std::less<T>,
    typename _Ax = std::allocator<T>
>,
    typename _Ax = std::allocator<T>> class concurrent_priority_queue;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati degli elementi da archiviare nella coda di priorità.

*Confronta*<br/>
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
|[clear](#clear)|Cancella tutti gli elementi nella coda di priorità simultanea. Questo metodo non è indipendente dalla concorrenza.|
|[empty](#empty)|Testa se la coda di priorità simultanea è vuota nel momento in cui questo metodo viene chiamato. Questo metodo è indipendente dalla concorrenza.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'allocatore utilizzato per costruire la coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.|
|[push](#push)|Di overload. Aggiunge un elemento alla coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.|
|[size](#size)|Restituisce il numero di elementi presenti nella coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.|
|[swap](#swap)|Scambia il contenuto di due code di priorità simultanee. Questo metodo non è indipendente dalla concorrenza.|
|[try_pop](#try_pop)|Rimuove e restituisce l'elemento con la priorità più elevata dalla coda se quest'ultima non è vuota. Questo metodo è indipendente dalla concorrenza.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator=](#operator_eq)|Di overload. Assegna il contenuto di un altro `concurrent_priority_queue` a questo oggetto. Questo metodo non è indipendente dalla concorrenza.|

## <a name="remarks"></a>Note

Per informazioni dettagliate sul `concurrent_priority_queue` classe, vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`concurrent_priority_queue`

## <a name="requirements"></a>Requisiti

**Intestazione:** concurrent_priority_queue. h

**Spazio dei nomi:** Concurrency

##  <a name="clear"></a> Cancella

Cancella tutti gli elementi nella coda di priorità simultanea. Questo metodo non è indipendente dalla concorrenza.

```
void clear();
```

### <a name="remarks"></a>Note

`clear` non è indipendente dalla concorrenza. È necessario assicurarsi che nessun altro thread richiamano metodi nella coda di priorità simultanea quando si chiama questo metodo. `clear` non liberare la memoria.

##  <a name="ctor"></a> concurrent_priority_queue

Costruisce una coda di priorità simultanea.

```
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

*Ini_zia*<br/>
Posizione del primo elemento nell'intervallo di elementi da copiare.

*End*<br/>
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

*_Src*<br/>
Oggetto `concurrent_priority_queue` di origine da cui copiare o spostare elementi.

### <a name="remarks"></a>Note

Tutti i costruttori archiviano un oggetto allocatore `_Al` e inizializzare la coda di priorità.

Il primo costruttore specifica una coda di priorità iniziale vuoto e, facoltativamente, viene specificato un allocatore.

Il secondo costruttore specifica una coda di priorità con una capacità iniziale `_Init_capacity` e, facoltativamente, viene specificato un allocatore.

Il terzo costruttore specifica i valori forniti dall'intervallo dell'iteratore [ `_Begin`, `_End`) e, facoltativamente, viene specificato un allocatore.

Il quarto e quinto costruttore viene specificata una copia della coda di priorità `_Src`.

Il sesto e il settimo costruttore specificano un'operazione di spostamento della coda di priorità `_Src`.

##  <a name="empty"></a> vuota

Testa se la coda di priorità simultanea è vuota nel momento in cui questo metodo viene chiamato. Questo metodo è indipendente dalla concorrenza.

```
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**true** se la coda di priorità era vuota al momento della chiamata della funzione, **false** in caso contrario.

##  <a name="get_allocator"></a> get_allocator

Restituisce una copia dell'allocatore utilizzato per costruire la coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.

```
allocator_type get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Una copia dell'allocatore utilizzato per costruire il `concurrent_priority_queue` oggetto.

##  <a name="operator_eq"></a> operator=

Assegna il contenuto di un altro `concurrent_priority_queue` a questo oggetto. Questo metodo non è indipendente dalla concorrenza.

```
concurrent_priority_queue& operator= (const concurrent_priority_queue& _Src);

concurrent_priority_queue& operator= (concurrent_priority_queue&& _Src);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Oggetto `concurrent_priority_queue` di origine.

### <a name="return-value"></a>Valore restituito

Un riferimento a questo `concurrent_priority_queue` oggetto.

##  <a name="push"></a> push

Aggiunge un elemento alla coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.

```
void push(const value_type& _Elem);

void push(value_type&& _Elem);
```

### <a name="parameters"></a>Parametri

*_Elem*<br/>
L'elemento da aggiungere alla coda di priorità simultanea.

##  <a name="size"></a> Dimensioni

Restituisce il numero di elementi presenti nella coda di priorità simultanea. Questo metodo è indipendente dalla concorrenza.

```
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi in questo `concurrent_priority_queue` oggetto.

### <a name="remarks"></a>Note

La dimensione restituita è garantita per includere tutti gli elementi aggiunti dalle chiamate alla funzione `push`. Tuttavia, potrebbe non riflettere i risultati di operazioni simultanee in sospeso.

##  <a name="swap"></a> swap

Scambia il contenuto di due code di priorità simultanee. Questo metodo non è indipendente dalla concorrenza.

```
void swap(concurrent_priority_queue& _Queue);
```

### <a name="parameters"></a>Parametri

*Fronty*<br/>
Il `concurrent_priority_queue` oggetto cui scambiare il contenuto con.

##  <a name="try_pop"></a> try_pop

Rimuove e restituisce l'elemento con la priorità più elevata dalla coda se quest'ultima non è vuota. Questo metodo è indipendente dalla concorrenza.

```
bool try_pop(reference _Elem);
```

### <a name="parameters"></a>Parametri

*_Elem*<br/>
Un riferimento a una variabile che verrà popolato con l'elemento con priorità più alta, se la coda è non vuoto.

### <a name="return-value"></a>Valore restituito

**true** se è stato estratto un valore, **false** in caso contrario.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md)

