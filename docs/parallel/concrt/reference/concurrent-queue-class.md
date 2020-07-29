---
title: Classe concurrent_queue
ms.date: 11/04/2016
f1_keywords:
- concurrent_queue
- CONCURRENT_QUEUE/concurrency::concurrent_queue
- CONCURRENT_QUEUE/concurrency::concurrent_queue::concurrent_queue
- CONCURRENT_QUEUE/concurrency::concurrent_queue::clear
- CONCURRENT_QUEUE/concurrency::concurrent_queue::empty
- CONCURRENT_QUEUE/concurrency::concurrent_queue::get_allocator
- CONCURRENT_QUEUE/concurrency::concurrent_queue::push
- CONCURRENT_QUEUE/concurrency::concurrent_queue::try_pop
- CONCURRENT_QUEUE/concurrency::concurrent_queue::unsafe_begin
- CONCURRENT_QUEUE/concurrency::concurrent_queue::unsafe_end
- CONCURRENT_QUEUE/concurrency::concurrent_queue::unsafe_size
helpviewer_keywords:
- concurrent_queue class
ms.assetid: c2218996-d0ea-40e9-b002-e9a15b085f51
ms.openlocfilehash: a117a040adbf7f3aa316c346489bd2731d6c2402
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230350"
---
# <a name="concurrent_queue-class"></a>Classe concurrent_queue

La classe `concurrent_queue` è una classe contenitore di sequenze che consente l'accesso di tipo First in First out ai relativi elementi. Abilita un set limitato di operazioni sicure per concorrenza, ad esempio `push` e `try_pop`. In tal caso, i puntatori o gli iteratori sono sempre validi. Non si tratta di una garanzia di inizializzazione di elementi o di un ordine di attraversamento specifico.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T, class _Ax>
class concurrent_queue: public ::Concurrency::details::_Concurrent_queue_base_v4;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati degli elementi da archiviare nella coda.

*_Ax*<br/>
Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione e alla deallocazione della memoria per questa coda simultanea. Questo argomento è facoltativo e il valore predefinito è `allocator<T>`.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`allocator_type`|Tipo che rappresenta la classe allocator per la coda simultanea.|
|`const_iterator`|Tipo che rappresenta un iteratore non thread-safe **`const`** sugli elementi in una coda simultanea.|
|`const_reference`|Tipo che fornisce un riferimento a un **`const`** elemento archiviato in una coda simultanea per la lettura e l'esecuzione di **`const`** operazioni.|
|`difference_type`|Tipo che fornisce la distanza con segno tra due elementi in una coda simultanea.|
|`iterator`|Tipo che rappresenta un iteratore non thread-safe sugli elementi in una coda simultanea.|
|`reference`|Tipo che fornisce un riferimento a un elemento archiviato in una coda simultanea.|
|`size_type`|Tipo che conta il numero di elementi in una coda simultanea.|
|`value_type`|Tipo che rappresenta il tipo di dati archiviato in una coda simultanea.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[concurrent_queue](#ctor)|Di overload. Costruisce una coda simultanea.|
|[Distruttore ~ concurrent_queue](#dtor)|Elimina la coda simultanea.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[deselezionare](#clear)|Cancella la coda simultanea, eliminando tutti gli elementi attualmente accodati. Questo metodo non è indipendente dalla concorrenza.|
|[empty](#empty)|Verifica se la coda simultanea è vuota nel momento in cui viene chiamato questo metodo. Questo metodo è indipendente dalla concorrenza.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'allocatore utilizzato per costruire la coda simultanea. Questo metodo è indipendente dalla concorrenza.|
|[push](#push)|Di overload. Accoda un elemento alla fine della coda simultanea. Questo metodo è indipendente dalla concorrenza.|
|[try_pop](#try_pop)|Rimuove dalla coda un elemento se ne è disponibile uno. Questo metodo è indipendente dalla concorrenza.|
|[unsafe_begin](#unsafe_begin)|Di overload. Restituisce un iteratore di tipo `iterator` o `const_iterator` all'inizio della coda simultanea. Questo metodo non è indipendente dalla concorrenza.|
|[unsafe_end](#unsafe_end)|Di overload. Restituisce un iteratore di tipo `iterator` o `const_iterator` alla fine della coda simultanea. Questo metodo non è indipendente dalla concorrenza.|
|[unsafe_size](#unsafe_size)|Restituisce il numero di elementi nella coda. Questo metodo non è indipendente dalla concorrenza.|

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`concurrent_queue`

## <a name="requirements"></a>Requisiti

**Intestazione:** concurrent_queue. h

**Spazio dei nomi:** Concurrency

## <a name="clear"></a><a name="clear"></a>deselezionare

Cancella la coda simultanea, eliminando tutti gli elementi attualmente accodati. Questo metodo non è indipendente dalla concorrenza.

```cpp
void clear();
```

## <a name="concurrent_queue"></a><a name="ctor"></a>concurrent_queue

Costruisce una coda simultanea.

```cpp
explicit concurrent_queue(
    const allocator_type& _Al = allocator_type());

concurrent_queue(
    const concurrent_queue& _OtherQ,
    const allocator_type& _Al = allocator_type());

concurrent_queue(
    concurrent_queue&& _OtherQ,
    const allocator_type& _Al = allocator_type());

template<typename _InputIterator>
concurrent_queue(_InputIterator _Begin,
    _InputIterator _End);
```

### <a name="parameters"></a>Parametri

*_InputIterator*<br/>
Tipo di iteratore di input che specifica un intervallo di valori.

*_Al*<br/>
Classe Allocator da usare con questo oggetto.

*_OtherQ*<br/>
Oggetto `concurrent_queue` di origine da cui copiare o spostare elementi.

*_Begin*<br/>
Posizione del primo elemento nell'intervallo di elementi da copiare.

*_End*<br/>
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

### <a name="remarks"></a>Osservazioni

Tutti i costruttori archiviano un oggetto allocatore `_Al` e inizializzano la coda.

Il primo costruttore specifica una coda iniziale vuota e specifica in modo esplicito il tipo di allocatore da utilizzare.

Il secondo costruttore specifica una copia della coda simultanea `_OtherQ` .

Tramite il terzo costruttore viene specificato uno spostamento della coda simultanea `_OtherQ`.

Il quarto costruttore specifica i valori forniti dall'intervallo dell'iteratore [ `_Begin` , `_End` ).

## <a name="concurrent_queue"></a><a name="dtor"></a>~ concurrent_queue

Elimina la coda simultanea.

```cpp
~concurrent_queue();
```

## <a name="empty"></a><a name="empty"></a>vuoto

Verifica se la coda simultanea è vuota nel momento in cui viene chiamato questo metodo. Questo metodo è indipendente dalla concorrenza.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se la coda simultanea è vuota nel momento in cui è stato osservato, **`false`** in caso contrario.

### <a name="remarks"></a>Osservazioni

Sebbene questo metodo sia indipendente dalla concorrenza rispetto alle chiamate ai metodi `push` , `try_pop` e `empty` , il valore restituito potrebbe non essere corretto nel momento in cui viene controllato dal thread chiamante.

## <a name="get_allocator"></a><a name="get_allocator"></a>get_allocator

Restituisce una copia dell'allocatore utilizzato per costruire la coda simultanea. Questo metodo è indipendente dalla concorrenza.

```cpp
allocator_type get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Copia dell'allocatore utilizzato per costruire la coda simultanea.

## <a name="push"></a><a name="push"></a>spingere

Accoda un elemento alla fine della coda simultanea. Questo metodo è indipendente dalla concorrenza.

```cpp
void push(const T& _Src);

void push(T&& _Src);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Elemento da aggiungere alla coda.

### <a name="remarks"></a>Osservazioni

`push`è indipendente dalla concorrenza rispetto alle chiamate ai metodi `push` , `try_pop` e `empty` .

## <a name="try_pop"></a><a name="try_pop"></a>try_pop

Rimuove dalla coda un elemento se ne è disponibile uno. Questo metodo è indipendente dalla concorrenza.

```cpp
bool try_pop(T& _Dest);
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Riferimento a un percorso in cui archiviare l'elemento rimosso dalla coda.

### <a name="return-value"></a>Valore restituito

**`true`** Se un elemento è stato rimosso dalla coda, **`false`** in caso contrario.

### <a name="remarks"></a>Osservazioni

Se un elemento è stato rimosso dalla coda, il parametro `_Dest` riceve il valore rimosso dalla coda, il valore originale contenuto nella coda viene eliminato definitivamente e questa funzione restituisce **`true`** . Se non è presente alcun elemento da rimuovere dalla coda, questa funzione restituisce **`false`** senza blocco e il contenuto del `_Dest` parametro non è definito.

`try_pop`è indipendente dalla concorrenza rispetto alle chiamate ai metodi `push` , `try_pop` e `empty` .

## <a name="unsafe_begin"></a><a name="unsafe_begin"></a>unsafe_begin

Restituisce un iteratore di tipo `iterator` o `const_iterator` all'inizio della coda simultanea. Questo metodo non è indipendente dalla concorrenza.

```cpp
iterator unsafe_begin();

const_iterator unsafe_begin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di tipo `iterator` o `const_iterator` all'inizio dell'oggetto coda simultaneo.

### <a name="remarks"></a>Osservazioni

Gli iteratori per la `concurrent_queue` classe sono destinati principalmente al debug, perché sono lenti e l'iterazione non è indipendente dalla concorrenza rispetto ad altre operazioni della coda.

## <a name="unsafe_end"></a><a name="unsafe_end"></a>unsafe_end

Restituisce un iteratore di tipo `iterator` o `const_iterator` alla fine della coda simultanea. Questo metodo non è indipendente dalla concorrenza.

```cpp
iterator unsafe_end();

const_iterator unsafe_end() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di tipo `iterator` o `const_iterator` alla fine della coda simultanea.

### <a name="remarks"></a>Osservazioni

Gli iteratori per la `concurrent_queue` classe sono destinati principalmente al debug, perché sono lenti e l'iterazione non è indipendente dalla concorrenza rispetto ad altre operazioni della coda.

## <a name="unsafe_size"></a><a name="unsafe_size"></a>unsafe_size

Restituisce il numero di elementi nella coda. Questo metodo non è indipendente dalla concorrenza.

```cpp
size_type unsafe_size() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione della coda simultanea.

### <a name="remarks"></a>Osservazioni

`unsafe_size`non è indipendente dalla concorrenza e può produrre risultati non corretti se viene chiamato contemporaneamente alle chiamate ai metodi `push` , `try_pop` e `empty` .

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
