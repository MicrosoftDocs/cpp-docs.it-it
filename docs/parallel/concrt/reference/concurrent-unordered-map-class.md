---
title: Classe concurrent_unordered_map
ms.date: 11/04/2016
f1_keywords:
- concurrent_unordered_map
- CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map
- CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::concurrent_unordered_map
- CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::at
- CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::hash_function
- CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::insert
- CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::key_eq
- CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::swap
- CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::unsafe_erase
helpviewer_keywords:
- concurrent_unordered_map class
ms.assetid: b2d879dd-87ef-4af9-a266-a5443fd538b8
ms.openlocfilehash: eb2493c3e3303a80c9825620aae0c2ef5270a71a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230337"
---
# <a name="concurrent_unordered_map-class"></a>Classe concurrent_unordered_map

La classe `concurrent_unordered_map` è un contenitore indipendente dalla concorrenza che controlla una sequenza di lunghezza variabile di elementi di tipo `std::pair<const K, _Element_type>`. La sequenza viene rappresentata in un modo che abilita le operazioni di accodamento, accesso elementi, accesso iteratori e attraversamento iteratori in modo indipendente dalla concorrenza. In tal caso, i puntatori o gli iteratori sono sempre validi. Non si tratta di una garanzia di inizializzazione di elementi o di un ordine di attraversamento specifico.

## <a name="syntax"></a>Sintassi

```cpp
template <typename K,
    typename _Element_type,
    typename _Hasher = std::hash<K>,
    typename key_equality = std::equal_to<K>,
    typename _Allocator_type = std::allocator<std::pair<const K,
    _Element_type>>
>,
typename key_equality = std::equal_to<K>,
    typename _Allocator_type = std::allocator<std::pair<const K,
    _Element_type>>> class concurrent_unordered_map : public details::_Concurrent_hash<details::_Concurrent_unordered_map_traits<K,
    _Element_type,
details::_Hash_compare<K,
    _Hasher,
key_equality>,
    _Allocator_type,
false>>;
```

### <a name="parameters"></a>Parametri

*K*<br/>
Tipo di chiave.

*_Element_type*<br/>
Tipo mappato.

*_Hasher*<br/>
Tipo di oggetto della funzione hash. Questo argomento è facoltativo e il valore predefinito è `std::hash<K>`.

*key_equality*<br/>
Tipo di oggetto della funzione di confronto di uguaglianza. Questo argomento è facoltativo e il valore predefinito è `std::equal_to<K>`.

*_Allocator_type*<br/>
Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione e alla deallocazione della memoria per la mappa non ordinata simultanea. Questo argomento è facoltativo e il valore predefinito è `std::allocator<std::pair<K` , `_Element_type>>` .

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`allocator_type`|Tipo di un allocatore per gestire l'archiviazione.|
|`const_iterator`|Tipo di un iteratore costante per la sequenza controllata.|
|`const_local_iterator`|Tipo di un iteratore di bucket costante per la sequenza controllata.|
|`const_pointer`|Tipo di un puntatore costante a un elemento.|
|`const_reference`|Tipo di un riferimento costante a un elemento.|
|`difference_type`|Tipo di una distanza Signed tra due elementi.|
|`hasher`|Tipo della funzione hash.|
|`iterator`|Tipo di un iteratore per la sequenza controllata.|
|`key_equal`|Tipo della funzione di confronto.|
|`key_type`|Tipo di una chiave di ordinamento.|
|`local_iterator`|Tipo di un iteratore di bucket per la sequenza controllata.|
|`mapped_type`|Tipo di un valore mappato associato a ogni chiave.|
|`pointer`|Tipo di un puntatore a un elemento.|
|`reference`|Tipo di un riferimento a un elemento.|
|`size_type`|Tipo di una distanza Unsigned tra due elementi.|
|`value_type`|Tipo di un elemento.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[concurrent_unordered_map](#ctor)|Di overload. Costruisce una mappa non ordinata simultanea.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[at](#at)|Di overload. Trova un elemento in un oggetto `concurrent_unordered_map` con un valore di chiave specificato. Questo metodo è indipendente dalla concorrenza.|
|[hash_function](#hash_function)|Ottiene l'oggetto della funzione hash archiviato.|
|[insert](#insert)|Di overload. Aggiunge elementi all' `concurrent_unordered_map` oggetto.|
|[key_eq](#key_eq)|Ottiene l'oggetto della funzione di confronto di uguaglianza archiviato.|
|[scambio](#swap)|Scambia il contenuto di due oggetti `concurrent_unordered_map`. Questo metodo non è indipendente dalla concorrenza.|
|[unsafe_erase](#unsafe_erase)|Di overload. Rimuove gli elementi dalla `concurrent_unordered_map` posizione specificata. Questo metodo non è indipendente dalla concorrenza.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operatore\[\]](#operator_at)|Di overload. Trova o inserisce un elemento con la chiave specificata. Questo metodo è indipendente dalla concorrenza.|
|[operatore =](#operator_eq)|Di overload. Assegna il contenuto di un altro `concurrent_unordered_map` oggetto a quello corrente. Questo metodo non è indipendente dalla concorrenza.|

## <a name="remarks"></a>Osservazioni

Per informazioni dettagliate sulla `concurrent_unordered_map` classe, vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_Traits`

`_Concurrent_hash`

`concurrent_unordered_map`

## <a name="requirements"></a>Requisiti

**Intestazione:** concurrent_unordered_map. h

**Spazio dei nomi:** Concurrency

## <a name="at"></a><a name="at"></a>a

Trova un elemento in un oggetto `concurrent_unordered_map` con un valore di chiave specificato. Questo metodo è indipendente dalla concorrenza.

```cpp
mapped_type& at(const key_type& KVal);

const mapped_type& at(const key_type& KVal) const;
```

### <a name="parameters"></a>Parametri

*KVal*<br/>
Valore di chiave da trovare.

### <a name="return-value"></a>Valore restituito

Riferimento al valore dei dati dell'elemento trovato.

### <a name="remarks"></a>Osservazioni

Se il valore della chiave dell'argomento non è presente, tramite la funzione viene generato un oggetto di classe `out_of_range`.

## <a name="begin"></a><a name="begin"></a>iniziare

Restituisce un iteratore che punta al primo elemento nel contenitore simultaneo. Questo metodo è sicuro per la concorrenza.

```cpp
iterator begin();

const_iterator begin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore per il primo elemento nel contenitore simultaneo.

## <a name="cbegin"></a><a name="cbegin"></a>cbegin

Restituisce un iteratore const che punta al primo elemento nel contenitore simultaneo. Questo metodo è sicuro per la concorrenza.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore const al primo elemento nel contenitore simultaneo.

## <a name="cend"></a><a name="cend"></a>cend

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento nel contenitore simultaneo. Questo metodo è sicuro per la concorrenza.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore const alla posizione successiva all'ultimo elemento nel contenitore simultaneo.

## <a name="clear"></a><a name="clear"></a>deselezionare

Cancella tutti gli elementi nel contenitore simultaneo. Questa funzione non è sicura per la concorrenza.

```cpp
void clear();
```

## <a name="concurrent_unordered_map"></a><a name="ctor"></a>concurrent_unordered_map

Costruisce una mappa non ordinata simultanea.

```cpp
explicit concurrent_unordered_map(
    size_type _Number_of_buckets = 8,
    const hasher& _Hasher = hasher(),
    const key_equal& key_equality = key_equal(),
    const allocator_type& _Allocator = allocator_type());

concurrent_unordered_map(
    const allocator_type& _Allocator);

template <typename _Iterator>
concurrent_unordered_map(_Iterator _Begin,
    _Iterator _End,
    size_type _Number_of_buckets = 8,
    const hasher& _Hasher = hasher(),
    const key_equal& key_equality = key_equal(),
    const allocator_type& _Allocator = allocator_type());

concurrent_unordered_map(
    const concurrent_unordered_map& _Umap);

concurrent_unordered_map(
    const concurrent_unordered_map& _Umap,
    const allocator_type& _Allocator);

concurrent_unordered_map(
    concurrent_unordered_map&& _Umap);
```

### <a name="parameters"></a>Parametri

*_Iterator*<br/>
Tipo di iteratore di input.

*_Number_of_buckets*<br/>
Numero iniziale di bucket per questa mappa non ordinata.

*_Hasher*<br/>
Funzione hash per questa mappa non ordinata.

*key_equality*<br/>
Funzione di confronto di uguaglianza per questa mappa non ordinata.

*_Allocator*<br/>
Allocatore per questa mappa non ordinata.

*_Begin*<br/>
Posizione del primo elemento nell'intervallo di elementi da copiare.

*_End*<br/>
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

*_Umap*<br/>
Oggetto `concurrent_unordered_map` di origine da cui copiare o spostare elementi.

### <a name="remarks"></a>Osservazioni

Tramite tutti i costruttori viene archiviato un oggetto allocatore `_Allocator` e viene inizializzata la mappa non ordinata.

Tramite il primo costruttore viene specificata una mappa iniziale vuota e vengono indicati in modo esplicito il numero di bucket, la funzione hash, la funzione di uguaglianza e il tipo di allocatore da utilizzare.

Tramite il secondo costruttore viene specificato un allocatore per la mappa non ordinata.

Il terzo costruttore specifica i valori forniti dall'intervallo dell'iteratore [ `_Begin` , `_End` ).

Tramite il quarto e il quinto costruttore viene specificata una copia della mappa non ordinata simultanea `_Umap`.

Tramite l'ultimo costruttore viene specificato uno spostamento della mappa non ordinata simultanea `_Umap`.

## <a name="count"></a><a name="count"></a>conteggio

Conta il numero di elementi corrispondenti a una chiave specificata. Questa funzione è sicura per la concorrenza.

```cpp
size_type count(const key_type& KVal) const;
```

### <a name="parameters"></a>Parametri

*KVal*<br/>
Chiave da ricercare.

### <a name="return-value"></a>Valore restituito

Il numero di volte in cui la chiave viene visualizzata nel contenitore.

## <a name="empty"></a><a name="empty"></a>vuoto

Verifica se sono presenti o meno degli elementi. Questo metodo è sicuro per la concorrenza.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se il contenitore simultaneo è vuoto; **`false`** in caso contrario,.

### <a name="remarks"></a>Osservazioni

In presenza di inserimenti simultanei, se il contenitore simultaneo è vuoto può cambiare immediatamente dopo la chiamata a questa funzione, prima che venga letto anche il valore restituito.

## <a name="end"></a><a name="end"></a>fine

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento nel contenitore simultaneo. Questo metodo è sicuro per la concorrenza.

```cpp
iterator end();

const_iterator end() const;
```

### <a name="return-value"></a>Valore restituito

Un iteratore alla posizione successiva all'ultimo elemento nel contenitore simultaneo.

## <a name="equal_range"></a><a name="equal_range"></a>equal_range

Trova un intervallo che corrisponde a una chiave specificata. Questa funzione è sicura per la concorrenza.

```cpp
std::pair<iterator,
    iterator> equal_range(
    const key_type& KVal);

std::pair<const_iterator,
    const_iterator> equal_range(
    const key_type& KVal) const;
```

### <a name="parameters"></a>Parametri

*KVal*<br/>
Valore chiave da cercare.

### <a name="return-value"></a>Valore restituito

Una [coppia](../../../standard-library/pair-structure.md) in cui il primo elemento è un iteratore all'inizio e il secondo elemento è un iteratore alla fine dell'intervallo.

### <a name="remarks"></a>Osservazioni

È possibile che gli inserimenti simultanei causino l'inserimento di chiavi aggiuntive dopo l'iteratore Begin e prima dell'iteratore finale.

## <a name="find"></a><a name="find"></a>trovare

Trova un elemento che corrisponde a una chiave specificata. Questa funzione è sicura per la concorrenza.

```cpp
iterator find(const key_type& KVal);

const_iterator find(const key_type& KVal) const;
```

### <a name="parameters"></a>Parametri

*KVal*<br/>
Valore chiave da cercare.

### <a name="return-value"></a>Valore restituito

Iteratore che punta alla posizione del primo elemento che corrisponde alla chiave specificata o all'iteratore `end()` se tale elemento non esiste.

## <a name="get_allocator"></a><a name="get_allocator"></a>get_allocator

Restituisce l'oggetto allocatore archiviato per il contenitore simultaneo. Questo metodo è sicuro per la concorrenza.

```cpp
allocator_type get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto allocatore archiviato per il contenitore simultaneo.

## <a name="hash_function"></a><a name="hash_function"></a>hash_function

Ottiene l'oggetto della funzione hash archiviato.

```cpp
hasher hash_function() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto della funzione hash archiviato.

## <a name="insert"></a><a name="insert"></a>inserire

Aggiunge elementi all' `concurrent_unordered_map` oggetto.

```cpp
std::pair<iterator,
    bool> insert(
    const value_type& value);

iterator insert(
    const_iterator _Where,
    const value_type& value);

template<class _Iterator>
void insert(_Iterator first,
    _Iterator last);

template<class V>
std::pair<iterator,
    bool> insert(
    V&& value);

template<class V>
typename std::enable_if<!std::is_same<const_iterator,
    typename std::remove_reference<V>::type>::value,
    iterator>::type insert(
    const_iterator _Where,
    V&& value);
```

### <a name="parameters"></a>Parametri

*_Iterator*<br/>
Tipo di iteratore utilizzato per l'inserimento.

*V*<br/>
Tipo del valore inserito nella mappa.

*value*<br/>
Valore da inserire.

*_Where*<br/>
Posizione iniziale in corrispondenza della quale cercare un punto di inserimento.

*first*<br/>
Inizio dell'intervallo da inserire.

*last*<br/>
Fine dell'intervallo da inserire.

### <a name="return-value"></a>Valore restituito

Coppia che contiene un iteratore e un valore booleano. Per altre informazioni, vedere le sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

La prima funzione membro determina se un elemento X è presente nella sequenza la cui chiave ha un ordinamento equivalente a quella di `value` . In caso contrario, crea tale elemento X e lo inizializza con `value` . La funzione determina quindi l'iteratore `where` che designa X. Se si è verificato un inserimento, la funzione restituisce `std::pair(where, true)` . In caso contrario, viene restituito `std::pair(where, false)`.

La seconda funzione membro restituisce Insert ( `value` ), utilizzando `_Where` come posizione iniziale nella sequenza controllata per cercare il punto di inserimento.

La terza funzione membro inserisce la sequenza di valori di elemento dall'intervallo [ `first` , `last` ).

Il comportamento delle ultime due funzioni membro è uguale a quello delle prime due, con la differenza che `value` viene utilizzato per costruire il valore inserito.

## <a name="key_eq"></a><a name="key_eq"></a>key_eq

Ottiene l'oggetto della funzione di confronto di uguaglianza archiviato.

```cpp
key_equal key_eq() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto della funzione di confronto di uguaglianza archiviato.

## <a name="load_factor"></a><a name="load_factor"></a>load_factor

Calcola e restituisce il fattore di carico corrente del contenitore. Il fattore di carico è il numero di elementi nel contenitore diviso per il numero di bucket.

```cpp
float load_factor() const;
```

### <a name="return-value"></a>Valore restituito

Il fattore di carico per il contenitore.

## <a name="max_load_factor"></a><a name="max_load_factor"></a>max_load_factor

Ottiene o imposta il fattore di carico massimo del contenitore. Il fattore di carico massimo è il maggior numero di elementi che possono essere presenti in qualsiasi bucket prima che il contenitore cresca la tabella interna.

```cpp
float max_load_factor() const;

void max_load_factor(float _Newmax);
```

### <a name="parameters"></a>Parametri

`_Newmax`

### <a name="return-value"></a>Valore restituito

La prima funzione membro restituisce il fattore di carico massimo archiviato. La seconda funzione membro non restituisce un valore, ma genera un'eccezione [out_of_range](../../../standard-library/out-of-range-class.md) se il fattore di carico fornito non è valido.

## <a name="max_size"></a><a name="max_size"></a>max_size

Restituisce la dimensione massima del contenitore simultaneo, determinato dall'allocatore. Questo metodo è sicuro per la concorrenza.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Numero massimo di elementi che possono essere inseriti in questo contenitore simultaneo.

### <a name="remarks"></a>Osservazioni

Questo valore limite superiore può essere effettivamente superiore rispetto a quello che il contenitore può effettivamente contenere.

## <a name="operator"></a><a name="operator_at"></a>operator []

Trova o inserisce un elemento con la chiave specificata. Questo metodo è indipendente dalla concorrenza.

```cpp
mapped_type& operator[](const key_type& kval);

mapped_type& operator[](key_type&& kval);
```

### <a name="parameters"></a>Parametri

*KVal*<br/>
Valore della chiave da

trovare o inserire.

### <a name="return-value"></a>Valore restituito

Riferimento al valore dei dati dell'elemento trovato o inserito.

### <a name="remarks"></a>Osservazioni

Se non viene trovato il valore della chiave dell'argomento, viene inserito insieme al valore predefinito del tipo di dati.

`operator[]` può essere utilizzato per inserire elementi in una mappa `m` utilizzando `m[key] = DataValue;`, dove `DataValue` è il valore di `mapped_type` dell'elemento con un valore della chiave pari a `key`.

Quando si utilizza `operator[]` per inserire gli elementi, il riferimento restituito non indica se un inserimento modifica un elemento già esistente o ne crea uno nuovo. Le funzioni membro `find` e [Insert](#insert) possono essere utilizzate per determinare se un elemento con una chiave specificata è già presente prima di un inserimento.

## <a name="operator"></a><a name="operator_eq"></a>operatore =

Assegna il contenuto di un altro `concurrent_unordered_map` oggetto a quello corrente. Questo metodo non è indipendente dalla concorrenza.

```cpp
concurrent_unordered_map& operator= (const concurrent_unordered_map& _Umap);

concurrent_unordered_map& operator= (concurrent_unordered_map&& _Umap);
```

### <a name="parameters"></a>Parametri

*_Umap*<br/>
Oggetto `concurrent_unordered_map` di origine.

### <a name="return-value"></a>Valore restituito

Riferimento a questo `concurrent_unordered_map` oggetto.

### <a name="remarks"></a>Osservazioni

Dopo l'eliminazione di tutti gli elementi esistenti, tramite `operator=` il contenuto di `_Umap` viene copiato o spostato nel vettore simultaneo.

## <a name="rehash"></a><a name="rehash"></a>rehash

Ricompila la tabella hash.

```cpp
void rehash(size_type _Buckets);
```

### <a name="parameters"></a>Parametri

*_Buckets*<br/>
Numero desiderato di bucket.

### <a name="remarks"></a>Osservazioni

La funzione membro modifica il numero di bucket in modo da essere almeno pari a `_Buckets` e ricompila la tabella hash in base alle esigenze. Il numero di bucket deve essere una potenza di 2. Se non è una potenza di 2, verrà arrotondata per eccesso alla successiva potenza di 2.

Genera un'eccezione [out_of_range](../../../standard-library/out-of-range-class.md) se il numero di bucket non è valido (0 o maggiore del numero massimo di bucket).

## <a name="size"></a><a name="size"></a>dimensioni

Restituisce il numero di elementi in questo contenitore simultaneo. Questo metodo è sicuro per la concorrenza.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi presenti nel contenitore.

### <a name="remarks"></a>Osservazioni

In presenza di operazioni di inserimento simultanee, il numero di elementi presenti nel contenitore simultaneo potrebbe cambiare immediatamente dopo la chiamata a questa funzione, prima che il valore restituito venga letto.

## <a name="swap"></a><a name="swap"></a>scambio

Scambia il contenuto di due oggetti `concurrent_unordered_map`. Questo metodo non è indipendente dalla concorrenza.

```cpp
void swap(concurrent_unordered_map& _Umap);
```

### <a name="parameters"></a>Parametri

*_Umap*<br/>
Oggetto `concurrent_unordered_map` con cui eseguire lo scambio.

## <a name="unsafe_begin"></a><a name="unsafe_begin"></a>unsafe_begin

Restituisce un iteratore al primo elemento in questo contenitore per un bucket specifico.

```cpp
local_iterator unsafe_begin(size_type _Bucket);

const_local_iterator unsafe_begin(size_type _Bucket) const;
```

### <a name="parameters"></a>Parametri

*_Bucket*<br/>
Indice del bucket.

### <a name="return-value"></a>Valore restituito

Iteratore che punta all'inizio del bucket.

## <a name="unsafe_bucket"></a><a name="unsafe_bucket"></a>unsafe_bucket

Restituisce l'indice del bucket a cui viene mappata una chiave specifica in questo contenitore.

```cpp
size_type unsafe_bucket(const key_type& KVal) const;
```

### <a name="parameters"></a>Parametri

*KVal*<br/>
Chiave dell'elemento cercata.

### <a name="return-value"></a>Valore restituito

Indice del bucket per la chiave in questo contenitore.

## <a name="unsafe_bucket_count"></a><a name="unsafe_bucket_count"></a>unsafe_bucket_count

Restituisce il numero corrente di bucket in questo contenitore.

```cpp
size_type unsafe_bucket_count() const;
```

### <a name="return-value"></a>Valore restituito

Numero corrente di bucket in questo contenitore.

## <a name="unsafe_bucket_size"></a><a name="unsafe_bucket_size"></a>unsafe_bucket_size

Restituisce il numero di elementi in un bucket specifico di questo contenitore.

```cpp
size_type unsafe_bucket_size(size_type _Bucket);
```

### <a name="parameters"></a>Parametri

*_Bucket*<br/>
Bucket da ricercare.

### <a name="return-value"></a>Valore restituito

Numero corrente di bucket in questo contenitore.

## <a name="unsafe_cbegin"></a><a name="unsafe_cbegin"></a>unsafe_cbegin

Restituisce un iteratore al primo elemento in questo contenitore per un bucket specifico.

```cpp
const_local_iterator unsafe_cbegin(size_type _Bucket) const;
```

### <a name="parameters"></a>Parametri

*_Bucket*<br/>
Indice del bucket.

### <a name="return-value"></a>Valore restituito

Iteratore che punta all'inizio del bucket.

## <a name="unsafe_cend"></a><a name="unsafe_cend"></a>unsafe_cend

Restituisce un iteratore alla posizione successiva all'ultimo elemento in un bucket specifico.

```cpp
const_local_iterator unsafe_cend(size_type _Bucket) const;
```

### <a name="parameters"></a>Parametri

*_Bucket*<br/>
Indice del bucket.

### <a name="return-value"></a>Valore restituito

Iteratore che punta all'inizio del bucket.

## <a name="unsafe_end"></a><a name="unsafe_end"></a>unsafe_end

Restituisce un iteratore all'ultimo elemento in questo contenitore per un bucket specifico.

```cpp
local_iterator unsafe_end(size_type _Bucket);

const_local_iterator unsafe_end(size_type _Bucket) const;
```

### <a name="parameters"></a>Parametri

*_Bucket*<br/>
Indice del bucket.

### <a name="return-value"></a>Valore restituito

Iteratore che punta alla fine del bucket.

## <a name="unsafe_erase"></a><a name="unsafe_erase"></a>unsafe_erase

Rimuove gli elementi dalla `concurrent_unordered_map` posizione specificata. Questo metodo non è indipendente dalla concorrenza.

```cpp
iterator unsafe_erase(
    const_iterator _Where);

iterator unsafe_erase(
    const_iterator _Begin,
    const_iterator _End);

size_type unsafe_erase(
    const key_type& KVal);
```

### <a name="parameters"></a>Parametri

*_Where*<br/>
Posizione dell'iteratore da cui cancellare.

*_Begin*<br/>
Posizione del primo elemento nell'intervallo di elementi da cancellare.

*_End*<br/>
Posizione del primo elemento oltre l'intervallo di elementi da cancellare.

*KVal*<br/>
Valore chiave da cancellare.

### <a name="return-value"></a>Valore restituito

Le prime due funzioni membro restituiscono un iteratore che definisce il primo elemento rimanente oltre gli eventuali elementi rimossi o `concurrent_unordered_map::end` () se tale elemento non esiste. La terza funzione membro restituisce il numero di elementi che rimuove.

### <a name="remarks"></a>Osservazioni

Tramite la prima funzione membro viene rimosso l'elemento della sequenza controllata puntata da `_Where`. La seconda funzione membro rimuove gli elementi compresi nell'intervallo [ `_Begin` , `_End` ).

La terza funzione membro rimuove gli elementi nell'intervallo delimitato da `concurrent_unordered_map::equal_range` (KVal).

## <a name="unsafe_max_bucket_count"></a><a name="unsafe_max_bucket_count"></a>unsafe_max_bucket_count

Restituisce il numero massimo di bucket in questo contenitore.

```cpp
size_type unsafe_max_bucket_count() const;
```

### <a name="return-value"></a>Valore restituito

Numero massimo di bucket in questo contenitore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md)
