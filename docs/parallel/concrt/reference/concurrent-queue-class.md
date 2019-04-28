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
ms.openlocfilehash: d5bbd361dc2dedc24c2a59050ffa680517186494
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62263087"
---
# <a name="concurrentqueue-class"></a>Classe concurrent_queue

La classe `concurrent_queue` è una classe contenitore di sequenze che consente l'accesso di tipo First in First out ai relativi elementi. Abilita un set limitato di operazioni sicure per concorrenza, ad esempio `push` e `try_pop`.

## <a name="syntax"></a>Sintassi

```
template<typename T, class _Ax>
class concurrent_queue: public ::Concurrency::details::_Concurrent_queue_base_v4;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati degli elementi da archiviare nella coda.

*_Ax*<br/>
Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli sull'allocazione e deallocazione della memoria per la coda simultanea. Questo argomento è facoltativo e il valore predefinito è `allocator<T>`.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`allocator_type`|Tipo che rappresenta la classe allocator per la coda simultanea.|
|`const_iterator`|Un tipo che rappresenta un non-thread-safe `const` iteratore su elementi in una coda simultanea.|
|`const_reference`|Tipo che fornisce un riferimento a un `const` elemento archiviato in una coda per la lettura e l'esecuzione simultanea `const` operazioni.|
|`difference_type`|Tipo che fornisce la distanza signed tra due elementi in una coda simultanea.|
|`iterator`|Tipo che rappresenta un iteratore non thread-safe sugli elementi in una coda simultanea.|
|`reference`|Tipo che fornisce un riferimento a un elemento archiviato in una coda simultanea.|
|`size_type`|Tipo che conta il numero di elementi in una coda simultanea.|
|`value_type`|Tipo che rappresenta il tipo di dati archiviati in una coda simultanea.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[concurrent_queue](#ctor)|Di overload. Costruisce una coda simultanea.|
|[~ concurrent_queue distruttore](#dtor)|Elimina la coda simultanea.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[clear](#clear)|Cancella la coda simultanea, distruggendo qualsiasi elemento attualmente in coda. Questo metodo non è indipendente dalla concorrenza.|
|[empty](#empty)|Verifica se la coda simultanea è vuota nel momento in cui questo metodo viene chiamato. Questo metodo è indipendente dalla concorrenza.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'allocatore usato per costruire la coda simultanea. Questo metodo è indipendente dalla concorrenza.|
|[push](#push)|Di overload. Accoda un elemento in corrispondenza della parte finale della coda simultanea. Questo metodo è indipendente dalla concorrenza.|
|[try_pop](#try_pop)|Elimina un elemento dalla coda, se disponibile. Questo metodo è indipendente dalla concorrenza.|
|[unsafe_begin](#unsafe_begin)|Di overload. Restituisce un iteratore di tipo `iterator` o `const_iterator` all'inizio della coda simultanea. Questo metodo non è indipendente dalla concorrenza.|
|[unsafe_end](#unsafe_end)|Di overload. Restituisce un iteratore di tipo `iterator` o `const_iterator` alla fine della coda simultanea. Questo metodo non è indipendente dalla concorrenza.|
|[unsafe_size](#unsafe_size)|Restituisce il numero di elementi nella coda. Questo metodo non è indipendente dalla concorrenza.|

## <a name="remarks"></a>Note

Per altre informazioni, vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`concurrent_queue`

## <a name="requirements"></a>Requisiti

**Intestazione:** concurrent_queue

**Spazio dei nomi:** Concurrency

##  <a name="clear"></a> Cancella

Cancella la coda simultanea, distruggendo qualsiasi elemento attualmente in coda. Questo metodo non è indipendente dalla concorrenza.

```
void clear();
```

##  <a name="ctor"></a> concurrent_queue

Costruisce una coda simultanea.

```
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

### <a name="remarks"></a>Note

Tutti i costruttori archiviano un oggetto allocatore `_Al` e inizializzare la coda.

Il primo costruttore specifica una coda vuota iniziale e specifica in modo esplicito il tipo di allocatore da utilizzare.

Il secondo costruttore specifica una copia della coda simultanea `_OtherQ`.

Tramite il terzo costruttore viene specificato uno spostamento della coda simultanea `_OtherQ`.

Il quarto costruttore specifica i valori forniti dall'intervallo dell'iteratore [ `_Begin`, `_End`).

##  <a name="dtor"></a> ~concurrent_queue

Elimina la coda simultanea.

```
~concurrent_queue();
```

##  <a name="empty"></a> empty

Verifica se la coda simultanea è vuota nel momento in cui questo metodo viene chiamato. Questo metodo è indipendente dalla concorrenza.

```
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**true** se la coda simultanea è vuota nel momento in cui è stato illustrato, **false** in caso contrario.

### <a name="remarks"></a>Note

Sebbene questo metodo è indipendente dalla concorrenza rispetto alle chiamate ai metodi `push`, `try_pop`, e `empty`, il valore restituito potrebbe non essere corretto nel momento in cui viene controllato dal thread chiamante.

##  <a name="get_allocator"></a> get_allocator

Restituisce una copia dell'allocatore usato per costruire la coda simultanea. Questo metodo è indipendente dalla concorrenza.

```
allocator_type get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Copia dell'allocatore usato per costruire la coda simultanea.

##  <a name="push"></a> push

Accoda un elemento in corrispondenza della parte finale della coda simultanea. Questo metodo è indipendente dalla concorrenza.

```
void push(const T& _Src);

void push(T&& _Src);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
L'elemento da aggiungere alla coda.

### <a name="remarks"></a>Note

`push` è indipendente dalla concorrenza rispetto alle chiamate ai metodi `push`, `try_pop`, e `empty`.

##  <a name="try_pop"></a> try_pop

Elimina un elemento dalla coda, se disponibile. Questo metodo è indipendente dalla concorrenza.

```
bool try_pop(T& _Dest);
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Un riferimento a un percorso per archiviare l'elemento rimosso dalla coda.

### <a name="return-value"></a>Valore restituito

**true** se è stato rimosso correttamente dalla coda, un elemento **false** in caso contrario.

### <a name="remarks"></a>Note

Se un elemento è stato rimosso correttamente dalla coda, il parametro `_Dest` riceve il valore rimosso dalla coda, il valore originale nella coda viene distrutto e questa funzione restituisce **true**. Se si è verificato alcun elemento da rimuovere dalla coda, questa funzione restituisce `false` senza blocco e il contenuto del `_Dest` parametro sono definiti.

`try_pop` è indipendente dalla concorrenza rispetto alle chiamate ai metodi `push`, `try_pop`, e `empty`.

##  <a name="unsafe_begin"></a> unsafe_begin

Restituisce un iteratore di tipo `iterator` o `const_iterator` all'inizio della coda simultanea. Questo metodo non è indipendente dalla concorrenza.

```
iterator unsafe_begin();

const_iterator unsafe_begin() const;
```

### <a name="return-value"></a>Valore restituito

Un iteratore di tipo `iterator` o `const_iterator` all'inizio dell'oggetto coda simultanea.

### <a name="remarks"></a>Note

Gli iteratori per il `concurrent_queue` classe è destinata principalmente il debug, come sono lenti e iterazione non è indipendente dalla concorrenza relazione alle altre operazioni di coda.

##  <a name="unsafe_end"></a> unsafe_end

Restituisce un iteratore di tipo `iterator` o `const_iterator` alla fine della coda simultanea. Questo metodo non è indipendente dalla concorrenza.

```
iterator unsafe_end();

const_iterator unsafe_end() const;
```

### <a name="return-value"></a>Valore restituito

Un iteratore di tipo `iterator` o `const_iterator` alla fine della coda simultanea.

### <a name="remarks"></a>Note

Gli iteratori per il `concurrent_queue` classe è destinata principalmente il debug, come sono lenti e iterazione non è indipendente dalla concorrenza relazione alle altre operazioni di coda.

##  <a name="unsafe_size"></a> unsafe_size

Restituisce il numero di elementi nella coda. Questo metodo non è indipendente dalla concorrenza.

```
size_type unsafe_size() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni della coda simultanea.

### <a name="remarks"></a>Note

`unsafe_size` non è indipendente dalla concorrenza e possono produrre risultati non corretti se chiamato contemporaneamente a chiamate ai metodi `push`, `try_pop`, e `empty`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
