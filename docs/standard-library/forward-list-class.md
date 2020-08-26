---
title: Classe forward_list
ms.date: 11/04/2016
f1_keywords:
- forward_list/std::forward_list
- forward_list/std::forward_list::allocator_type
- forward_list/std::forward_list::const_iterator
- forward_list/std::forward_list::const_pointer
- forward_list/std::forward_list::const_reference
- forward_list/std::forward_list::difference_type
- forward_list/std::forward_list::iterator
- forward_list/std::forward_list::pointer
- forward_list/std::forward_list::reference
- forward_list/std::forward_list::size_type
- forward_list/std::forward_list::value_type
- forward_list/std::forward_list::assign
- forward_list/std::forward_list::before_begin
- forward_list/std::forward_list::begin
- forward_list/std::forward_list::cbefore_begin
- forward_list/std::forward_list::cbegin
- forward_list/std::forward_list::cend
- forward_list/std::forward_list::clear
- forward_list/std::forward_list::emplace_after
- forward_list/std::forward_list::emplace_front
- forward_list/std::forward_list::empty
- forward_list/std::forward_list::end
- forward_list/std::forward_list::erase_after
- forward_list/std::forward_list::front
- forward_list/std::forward_list::get_allocator
- forward_list/std::forward_list::insert_after
- forward_list/std::forward_list::max_size
- forward_list/std::forward_list::merge
- forward_list/std::forward_list::pop_front
- forward_list/std::forward_list::push_front
- forward_list/std::forward_list::remove
- forward_list/std::forward_list::remove_if
- forward_list/std::forward_list::resize
- forward_list/std::forward_list::reverse
- forward_list/std::forward_list::sort
- forward_list/std::forward_list::splice_after
- forward_list/std::forward_list::swap
- forward_list/std::forward_list::unique
helpviewer_keywords:
- std::forward_list
- std::forward_list::allocator_type
- std::forward_list::const_iterator
- std::forward_list::const_pointer
- std::forward_list::const_reference
- std::forward_list::difference_type
- std::forward_list::iterator
- std::forward_list::pointer
- std::forward_list::reference
- std::forward_list::size_type
- std::forward_list::value_type
- std::forward_list::assign
- std::forward_list::before_begin
- std::forward_list::begin
- std::forward_list::cbefore_begin
- std::forward_list::cbegin
- std::forward_list::cend
- std::forward_list::clear
- std::forward_list::emplace_after
- std::forward_list::emplace_front
- std::forward_list::empty
- std::forward_list::end
- std::forward_list::erase_after
- std::forward_list::front
- std::forward_list::get_allocator
- std::forward_list::insert_after
- std::forward_list::max_size
- std::forward_list::merge
- std::forward_list::pop_front
- std::forward_list::push_front
- std::forward_list::remove
- std::forward_list::remove_if
- std::forward_list::resize
- std::forward_list::reverse
- std::forward_list::sort
- std::forward_list::splice_after
- std::forward_list::swap
- std::forward_list::unique
ms.openlocfilehash: 16471f0986d58e38fed436b2921ce3f8a3e89325
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88835779"
---
# <a name="forward_list-class"></a>Classe forward_list

Descrive un oggetto che controlla una sequenza di elementi di lunghezza variabile. La sequenza viene archiviata come elenco collegato singolarmente di nodi, ognuno dei quali contiene un membro di tipo `Type`.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type,
    class Allocator = allocator<Type>>
class forward_list
```

### <a name="parameters"></a>Parametri

Tipo * \
Tipo di dati degli elementi da archiviare in forward_list.

*Allocatore*\
Oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione di forward_list e alla deallocazione della memoria. Questo parametro è facoltativo e, Il valore predefinito è allocator<`Type`>.

## <a name="remarks"></a>Osservazioni

Un `forward_list` oggetto alloca e libera la memoria per la sequenza che controlla tramite un oggetto archiviato della classe *allocator* basata sulla [classe allocator](../standard-library/allocator-class.md) , comunemente nota come `std::allocator)` . Per altre informazioni, vedere [Allocatori](../standard-library/allocators.md). Un oggetto allocatore deve avere la stessa interfaccia esterna di un oggetto di tipo `allocator` .

> [!NOTE]
> L'oggetto allocatore archiviato non viene copiato quando viene assegnato l'oggetto contenitore.

Iteratori, puntatori e riferimenti potrebbero diventare non validi quando vengono cancellati gli elementi della loro sequenza controllata tramite `forward_list`. Operazioni di splicing e inserimento eseguite nella sequenza controllata tramite `forward_list` non invalidano gli iteratori.

Le aggiunte alla sequenza controllata possono avvenire mediante chiamate a [forward_list::insert_after](#insert_after), che è l'unica funzione membro che chiama il costruttore `Type(const  T&)`. `forward_list` potrebbe anche chiamare costruttori di spostamento. Se tale espressione genera un'eccezione, l'oggetto contenitore non inserisce nuovi elementi e genera di nuovo l'eccezione. Pertanto, un oggetto di tipo `forward_list` viene lasciato in uno stato noto quando si verificano tali eccezioni.

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Nome|Descrizione|
|-|-|
|[forward_list](#forward_list)|Costruisce un oggetto di tipo `forward_list`.|

### <a name="typedefs"></a>Typedef

|Nome|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Tipo che rappresenta la classe allocator per un oggetto elenco di inoltro.|
|[const_iterator](#const_iterator)|Tipo che fornisce un iteratore costante per l'elenco di inoltro.|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore a un **`const`** elemento in un elenco di inoltri.|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento costante a un elemento nell'elenco di inoltro.|
|[difference_type](#difference_type)|Tipo intero con segno che può essere usato per rappresentare il numero di elementi di un elenco di inoltro in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|
|[iteratore](#iterator)|Tipo che fornisce un iteratore per l'elenco di inoltro.|
|[puntatore](#pointer)|Tipo che fornisce un puntatore a un elemento nell'elenco di inoltro.|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento nell'elenco di inoltro.|
|[size_type](#size_type)|Tipo che rappresenta la distanza senza segno tra due elementi.|
|[value_type](#value_type)|Tipo che rappresenta il tipo di elemento archiviato in un elenco di inoltro.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|-|-|
|[assign](#assign)|Cancella gli elementi da un elenco di inoltro e copia un nuovo set di elementi in un elenco di inoltro di destinazione.|
|[before_begin](#before_begin)|Restituisce un iteratore che punta alla posizione precedente al primo elemento in un elenco di inoltro.|
|[iniziare](#begin)|Restituisce un iteratore che punta al primo elemento in un elenco di inoltro.|
|[cbefore_begin](#cbefore_begin)|Restituisce un iteratore const che punta alla posizione precedente al primo elemento in un elenco di inoltro.|
|[cbegin](#cbegin)|Restituisce un iteratore const che punta al primo elemento in un elenco di inoltro.|
|[cend](#cend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento in un elenco di inoltro.|
|[deselezionare](#clear)|Cancella tutti gli elementi di un elenco di inoltro.|
|[emplace_after](#emplace_after)|Sposta un nuovo elemento dopo una posizione specificata.|
|[emplace_front](#emplace_front)|Aggiunge un elemento costruito sul posto all'inizio dell'elenco.|
|[empty](#empty)|Verifica se un elenco di inoltro è vuoto.|
|[fine](#end)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento in un elenco di inoltro.|
|[erase_after](#erase_after)|Rimuove gli elementi dall'elenco di inoltro dopo una posizione specificata.|
|[fronte](#front)|Restituisce un riferimento al primo elemento in un elenco di inoltro.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'oggetto allocatore usato per costruire un elenco di inoltro.|
|[insert_after](#insert_after)|Aggiunge elementi all'elenco di inoltro dopo una posizione specificata.|
|[max_size](#max_size)|Restituisce la lunghezza massima di un elenco di inoltro.|
|[merge](#merge)|Rimuove gli elementi dall'elenco di argomenti, li inserisce nell'elenco di inoltro di destinazione e dispone il nuovo set combinato di elementi in ordine crescente o in un altro ordine specificato.|
|[pop_front](#pop_front)|Elimina l'elemento all'inizio di un elenco di inoltro.|
|[push_front](#push_front)|Elimina un elemento all'inizio di un elenco di inoltro.|
|[remove](#remove)|Cancella gli elementi in un elenco di inoltro che corrispondono a un valore specificato.|
|[remove_if](#remove_if)|Cancella gli elementi da un elenco di inoltro per il quale viene soddisfatto un predicato specificato.|
|[ridimensionare](#resize)|Specifica una nuova dimensione per un elenco di inoltro.|
|[inverso](#reverse)|Inverte l'ordine degli elementi in un elenco di inoltro.|
|[sort](#sort)|Dispone gli elementi in ordine crescente o in base a un ordine specificato da un predicato.|
|[splice_after](#splice_after)|Unisce di nuovo i collegamenti tra nodi.|
|[scambio](#swap)|Scambia gli elementi di due elenchi di inoltro.|
|[unique](#unique)|Rimuove gli elementi adiacenti che superano un test specificato.|

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|-|
|[operatore =](#op_eq)|Sostituisce gli elementi dell'elenco con una copia di un altro elenco di inoltro.|

## <a name="allocator_type"></a><a name="allocator_type"></a> allocator_type

Tipo che rappresenta la classe allocator per un oggetto elenco di inoltro.

```cpp
typedef Allocator allocator_type;
```

### <a name="remarks"></a>Osservazioni

`allocator_type` è sinonimo del parametro di modello Allocator.

## <a name="assign"></a><a name="assign"></a> assegnare

Cancella gli elementi da un elenco di inoltro e copia un nuovo set di elementi in un elenco di inoltro di destinazione.

```cpp
void assign(
    size_type Count,
    const Type& Val);

void assign(
    initializer_list<Type> IList);

template <class InputIterator>
void assign(InputIterator First, InputIterator Last);
```

### <a name="parameters"></a>Parametri

*prima*\
Inizio dell'intervallo di sostituzione.

*Ultima*\
Fine dell'intervallo di sostituzione.

*conteggio*\
Numero di elementi da assegnare.

*Val*\
Valore da assegnare a ogni elemento.

*Tipo*\
Tipo del valore.

*IList*\
Initializer_list da copiare.

### <a name="remarks"></a>Osservazioni

Se forward_list è di tipo Integer, la prima funzione membro si comporta come `assign((size_type)First, (Type)Last)`. In caso contrario, la prima funzione membro sostituisce la sequenza controllata da **`*this`** con la sequenza [ `First, Last)` , che non deve sovrapporsi alla sequenza controllata iniziale.

La seconda funzione membro sostituisce la sequenza controllata da **`*this`** con una ripetizione di `Count` elementi di valore `Val` .

La terza funzione membro copia gli elementi di initializer_list in forward_list.

## <a name="before_begin"></a><a name="before_begin"></a> before_begin

Restituisce un iteratore che punta alla posizione precedente al primo elemento in un elenco di inoltro.

```cpp
const_iterator before_begin() const;
iterator before_begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta subito prima del primo elemento della sequenza (o subito prima della fine di una sequenza vuota).

### <a name="remarks"></a>Osservazioni

## <a name="begin"></a><a name="begin"></a> iniziare

Restituisce un iteratore che punta al primo elemento in un elenco di inoltro.

```cpp
const_iterator begin() const;
iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta al primo elemento della sequenza (o appena oltre la fine di una sequenza vuota).

### <a name="remarks"></a>Osservazioni

## <a name="cbefore_begin"></a><a name="cbefore_begin"></a> cbefore_begin

Restituisce un iteratore const che punta alla posizione precedente al primo elemento in un elenco di inoltro.

```cpp
const_iterator cbefore_begin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta subito prima del primo elemento della sequenza (o subito prima della fine di una sequenza vuota).

### <a name="remarks"></a>Osservazioni

## <a name="cbegin"></a><a name="cbegin"></a> cbegin

Restituisce un **`const`** iteratore che punta al primo elemento nell'intervallo.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

**`const`** Iteratore di accesso in avanti che punta al primo elemento dell'intervallo o alla posizione oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()` ).

### <a name="remarks"></a>Osservazioni

Con il valore restituito di `cbegin`, gli elementi dell'intervallo non possono essere modificati.

È possibile usare questa funzione membro anziché la funzione membro `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, si consideri come `Container` un contenitore (non **`const`** ) modificabile di qualsiasi tipo che supporta `begin()` e `cbegin()` .

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator
auto i2 = Container.cbegin();
// i2 is Container<T>::const_iterator
```

## <a name="cend"></a><a name="cend"></a> cend

Restituisce un **`const`** iteratore che punta alla posizione immediatamente successiva all'ultimo elemento di un intervallo.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di accesso in avanti che punta oltre la fine dell'intervallo.

### <a name="remarks"></a>Osservazioni

`cend` viene utilizzato per verificare se un iteratore ha superato la fine del relativo intervallo.

È possibile usare questa funzione membro anziché la funzione membro `end()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, si consideri come `Container` un contenitore (non **`const`** ) modificabile di qualsiasi tipo che supporta `end()` e `cend()` .

```cpp
auto i1 = Container.end();
// i1 is Container<T>::iterator
auto i2 = Container.cend();

// i2 is Container<T>::const_iterator
```

Non è consigliabile dereferenziare il valore restituito da `cend`.

## <a name="clear"></a><a name="clear"></a> deselezionare

Cancella tutti gli elementi di un elenco di inoltro.

```cpp
void clear();
```

### <a name="remarks"></a>Osservazioni

Questa funzione membro chiama `erase_after(before_begin(), end()).`

## <a name="const_iterator"></a><a name="const_iterator"></a> const_iterator

Tipo che fornisce un iteratore costante per l'elenco di inoltro.

```cpp
typedef implementation-defined const_iterator;
```

### <a name="remarks"></a>Osservazioni

`const_iterator` descrive un oggetto che può essere usato come iteratore in avanti costante per la sequenza controllata. Qui è descritto come sinonimo di un tipo definito dall'implementazione.

## <a name="const_pointer"></a><a name="const_pointer"></a> const_pointer

Tipo che fornisce un puntatore a un **`const`** elemento in un elenco di inoltri.

```cpp
typedef typename Allocator::const_pointer
    const_pointer;
```

### <a name="remarks"></a>Osservazioni

## <a name="const_reference"></a><a name="const_reference"></a> const_reference

Tipo che fornisce un riferimento costante a un elemento nell'elenco di inoltro.

```cpp
typedef typename Allocator::const_reference const_reference;
```

### <a name="remarks"></a>Osservazioni

## <a name="difference_type"></a><a name="difference_type"></a> difference_type

Tipo intero con segno che può essere usato per rappresentare il numero di elementi di un elenco di inoltro in un intervallo compreso tra gli elementi a cui puntano gli iteratori.

```cpp
typedef typename Allocator::difference_type difference_type;
```

### <a name="remarks"></a>Osservazioni

`difference_type` descrive un oggetto che può rappresentare la differenza tra gli indirizzi di due elementi qualsiasi nella sequenza controllata.

## <a name="emplace_after"></a><a name="emplace_after"></a> emplace_after

Sposta un nuovo elemento dopo una posizione specificata.

```cpp
template <class T>
iterator emplace_after(const_iterator Where, Type&& val);
```

### <a name="parameters"></a>Parametri

*In cui*\
Posizione all'interno dell'elenco di inoltro di destinazione in cui viene costruito il nuovo elemento.

*Val*\
Argomento costruttore.

### <a name="return-value"></a>Valore restituito

Iteratore che designa l'elemento appena inserito.

### <a name="remarks"></a>Osservazioni

Questa funzione membro inserisce un elemento con gli argomenti del costruttore *Val* subito dopo l'elemento a *cui* punta nella sequenza controllata. Il comportamento altrimenti è uguale a quello di [forward_list::insert_after](#insert_after).

## <a name="emplace_front"></a><a name="emplace_front"></a> emplace_front

Aggiunge un elemento costruito sul posto all'inizio dell'elenco.

```cpp
template <class Type>
    void emplace_front(Type&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Elemento aggiunto all'inizio dell'elenco di inoltro.

### <a name="remarks"></a>Osservazioni

Questa funzione membro inserisce un elemento con gli argomenti costruttore `_ val` alla fine della sequenza controllata.

Se viene generata un'eccezione, il contenitore viene lasciato inalterato e viene nuovamente generata l'eccezione.

## <a name="empty"></a><a name="empty"></a> vuoto

Verifica se un elenco di inoltro è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'elenco di inoltri è vuoto; in caso contrario, **`false`** .

## <a name="end"></a><a name="end"></a> fine

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento in un elenco di inoltro.

```cpp
const_iterator end() const;
iterator end();
```

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta poco oltre la fine della sequenza.

## <a name="erase_after"></a><a name="erase_after"></a> erase_after

Rimuove gli elementi dall'elenco di inoltro dopo una posizione specificata.

```cpp
iterator erase_after(const_iterator Where);
iterator erase_after(const_iterator first, const_iterator last);
```

### <a name="parameters"></a>Parametri

*In cui*\
Posizione all'interno dell'elenco di inoltro di destinazione in cui viene cancellato l'elemento.

*prima*\
Inizio dell'intervallo da cancellare.

*Ultima*\
Fine dell'intervallo da cancellare.

### <a name="return-value"></a>Valore restituito

Iteratore che designa il primo elemento rimanente oltre tutti gli elementi rimossi oppure [forward_list::end](#end) se tale elemento non esiste.

### <a name="remarks"></a>Osservazioni

La prima funzione membro rimuove l'elemento della sequenza controllata subito dopo *where*.

La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo `( first,  last)` (i due endpoint non sono inclusi).

La cancellazione di `N` elementi comporta `N` chiamate al distruttore. Viene eseguita la [riallocazione](../standard-library/forward-list-class.md), pertanto gli iteratori e i riferimenti diventano non validi per gli elementi cancellati.

Le funzioni membro non generano mai un'eccezione.

## <a name="forward_list"></a><a name="forward_list"></a> forward_list

Costruisce un oggetto di tipo `forward_list`.

```cpp
forward_list();
explicit forward_list(const Allocator& Al);
explicit forward_list(size_type Count);
forward_list(size_type Count, const Type& Val);
forward_list(size_type Count, const Type& Val, const Allocator& Al);
forward_list(const forward_list& Right);
forward_list(const forward_list& Right, const Allocator& Al);
forward_list(forward_list&& Right);
forward_list(forward_list&& Right, const Allocator& Al);
forward_list(initializer_list<Type> IList, const Alloc& Al);
template <class InputIterator>
forward_list(InputIterator First, InputIterator Last);
template <class InputIterator>
forward_list(InputIterator First, InputIterator Last, const Allocator& Al);
```

### <a name="parameters"></a>Parametri

*Al*\
Classe Allocator da usare con questo oggetto.

*Conteggio*\
Numero di elementi dell'elenco costruito.

*Val*\
Valore degli elementi dell'elenco costruito.

*Ok*\
Elenco di cui l'elenco costruito deve essere una copia.

*Prima*\
Posizione del primo elemento nell'intervallo di elementi da copiare.

*Ultima*\
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

*IList*\
Initializer_list da copiare.

### <a name="remarks"></a>Osservazioni

Tutti i costruttori archiviano un oggetto [allocator](../standard-library/allocator-class.md) e inizializzano la sequenza controllata. L'oggetto allocatore è l'argomento *al*, se presente. Per il costruttore di copia, è `right.get_allocator()`. In caso contrario, è `Allocator()`.

I primi due costruttori specificano una sequenza controllata iniziale vuota.

Il terzo costruttore specifica una ripetizione di elementi *count* di value `Type()` .

Il quarto e il quinto costruttore specificano una ripetizione di elementi *count* del valore *Val*.

Il sesto costruttore specifica una copia della sequenza controllata da *right*. Se `InputIterator` è di tipo Integer, i due costruttori successivi specificano una ripetizione di `(size_type)First` elementi con valore `(Type)Last`. In caso contrario, i due costruttori successivi specificano la sequenza `[First, Last)`.

Il nono e il decimo costruttore sono uguali al sesto, ma con un riferimento [rvalue](../cpp/rvalue-reference-declarator-amp-amp.md).

L'ultimo costruttore specifica la sequenza controllata iniziale con un oggetto della classe `initializer_list<Type>`.

## <a name="front"></a><a name="front"></a> fronte

Restituisce un riferimento al primo elemento in un elenco di inoltro.

```cpp
reference front();
const_reference front() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento al primo elemento della sequenza controllata, che non deve essere vuoto.

## <a name="get_allocator"></a><a name="get_allocator"></a> get_allocator

Restituisce una copia dell'oggetto allocatore usato per costruire un elenco di inoltro.

```cpp
allocator_type get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [allocator](../standard-library/allocator-class.md) archiviato.

## <a name="insert_after"></a><a name="insert_after"></a> insert_after

Aggiunge elementi all'elenco di inoltro dopo una posizione specificata.

```cpp
iterator insert_after(const_iterator Where, const Type& Val);
void insert_after(const_iterator Where, size_type Count, const Type& Val);
void insert_after(const iterator Where, initializer_list<Type> IList);
iterator insert_after(const_iterator Where, Type&& Val);
template <class InputIterator>
    void insert_after(const_iterator Where, InputIterator First, InputIterator Last);
```

### <a name="parameters"></a>Parametri

*In cui*\
Posizione all'interno dell'elenco di inoltro di destinazione in cui viene inserito il primo elemento.

*Conteggio*\
Numero di elementi da inserire.

*Prima*\
Inizio dell'intervallo di inserimento.

*Ultima*\
Fine dell'intervallo di inserimento.

*Val*\
Elemento aggiunto all'elenco di inoltro.

*IList*\
Initializer_list da inserire.

### <a name="return-value"></a>Valore restituito

Iteratore che designa l'elemento appena inserito (solo prima e ultima funzione membro).

### <a name="remarks"></a>Osservazioni

Ogni funzione membro inserisce, subito dopo l'elemento a cui punta la *posizione* nella sequenza controllata, una sequenza specificata dagli operandi rimanenti.

La prima funzione membro inserisce un elemento con il valore *Val* e restituisce un iteratore che designa l'elemento appena inserito.

La seconda funzione membro inserisce una ripetizione di elementi *count* del valore *Val*.

Se `InputIterator` è di tipo Integer, la terza funzione membro si comporta come `insert(it, (size_type)First, (Type)Last)`. In caso contrario, inserisce la sequenza `[First, Last)`, che non deve sovrapporsi alla sequenza controllata iniziale.

La quarta funzione membro inserisce la sequenza specificata da un oggetto della classe `initializer_list<Type>`.

L'ultima funzione membro è uguale alla prima, ma con un riferimento [rvalue](../cpp/rvalue-reference-declarator-amp-amp.md).

L'inserimento di `N` elementi comporta `N` chiamate al costruttore. Viene eseguita la [riallocazione](../standard-library/forward-list-class.md), ma tutti gli iteratori e i riferimenti restano validi.

Se viene generata un'eccezione durante l'inserimento di uno o più elementi, il contenitore viene lasciato inalterato e viene nuovamente generata l'eccezione.

## <a name="iterator"></a><a name="iterator"></a> iteratore

Tipo che fornisce un iteratore per l'elenco di inoltro.

```cpp
typedef implementation-defined iterator;
```

### <a name="remarks"></a>Osservazioni

`iterator` descrive un oggetto che può essere usato come iteratore in avanti per la sequenza controllata. Qui è descritto come sinonimo di un tipo definito dall'implementazione.

## <a name="max_size"></a><a name="max_size"></a> max_size

Restituisce la lunghezza massima di un elenco di inoltro.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza della sequenza più lunga che l'oggetto può controllare.

### <a name="remarks"></a>Osservazioni

## <a name="merge"></a><a name="merge"></a> merge

Combina due sequenze ordinate in un'unica sequenza ordinata in un tempo lineare. Rimuove gli elementi dall'elenco di argomenti e li inserisce in `forward_list`. I due elenchi devono essere ordinati in base allo stesso oggetto funzione di confronto prima della chiamata a `merge`. L'elenco combinato sarà ordinato in base a tale oggetto funzione di confronto.

```cpp
void merge(forward_list& right);
template <class Predicate>
    void merge(forward_list& right, Predicate comp);
```

### <a name="parameters"></a>Parametri

*Ok*\
Elenco di inoltro a partire dal quale deve essere eseguita l'unione.

*comp*\
Oggetto funzione di confronto usato per ordinare gli elementi.

### <a name="remarks"></a>Osservazioni

`forward_list::merge` rimuove gli elementi da `forward_list` `right` e li inserisce in `forward_list` . Entrambe le sequenze devono essere ordinate in base allo stesso predicato, descritto di seguito. La sequenza combinata è ordinata anche in base all'oggetto funzione di confronto.

Per gli iteratori `Pi` e `Pj` che designano gli elementi nelle posizioni `i` e `j`, la prima funzione membro impone l'ordine `!(*Pj < *Pi)` ogni volta che `i < j` Gli elementi vengono ordinati in `ascending` ordine. La seconda funzione membro impone l'ordine `! comp(*Pj, *Pi)` ogni volta che `i < j` .

Nessuna coppia di elementi inclusa nella sequenza controllata originale viene invertita nella sequenza controllata risultante. Se una coppia di elementi nella sequenza controllata risultante risulta uguale ( `!(*Pi < *Pj) && !(*Pj < *Pi)`), un elemento della sequenza controllata originale appare prima di un elemento della sequenza controllata da `right`.

Si verifica un'eccezione solo se `comp` ne genera una. In questo caso, la sequenza controllata viene lasciata in un ordine non specificato e viene nuovamente generata l'eccezione.

## <a name="operator"></a><a name="op_eq"></a> operatore =

Sostituisce gli elementi dell'elenco con una copia di un altro elenco di inoltro.

```cpp
forward_list& operator=(const forward_list& right);
forward_list& operator=(initializer_list<Type> IList);
forward_list& operator=(forward_list&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Elenco di inoltro che viene copiato nell'elenco di inoltro.

*IList*\
Elenco di inizializzatori tra parentesi graffe che si comporta come una sequenza di elementi di tipo `Type`.

### <a name="remarks"></a>Osservazioni

Il primo operatore membro sostituisce la sequenza controllata con una copia della sequenza controllata da *right*.

Il secondo operatore membro sostituisce la sequenza controllata da un oggetto della classe `initializer_list<Type>`.

Il terzo operatore membro è uguale al primo, ma con un riferimento [rvalue](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="pointer"></a>Puntatore <a name="pointer"></a>

Tipo che fornisce un puntatore a un elemento nell'elenco di inoltro.

```cpp
typedef typename Allocator::pointer pointer;
```

## <a name="pop_front"></a><a name="pop_front"></a> pop_front

Elimina l'elemento all'inizio di un elenco di inoltro.

```cpp
void pop_front();
```

### <a name="remarks"></a>Osservazioni

Il primo elemento dell'elenco di inoltro non deve essere vuoto.

La funzione membro non genera mai un'eccezione.

## <a name="push_front"></a><a name="push_front"></a> push_front

Elimina un elemento all'inizio di un elenco di inoltro.

```cpp
void push_front(const Type& val);
void push_front(Type&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Elemento aggiunto all'inizio dell'elenco di inoltro.

### <a name="remarks"></a>Osservazioni

Se viene generata un'eccezione, il contenitore viene lasciato inalterato e viene nuovamente generata l'eccezione.

## <a name="reference"></a><a name="reference"></a> riferimento

Tipo che fornisce un riferimento a un elemento nell'elenco di inoltro.

```cpp
typedef typename Allocator::reference reference;
```

## <a name="remove"></a><a name="remove"></a> rimuovere

Cancella gli elementi in un elenco di inoltro che corrispondono a un valore specificato.

```cpp
void remove(const Type& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Valore che, se contenuto da un elemento, comporterà la rimozione dell'elemento dall'elenco.

### <a name="remarks"></a>Osservazioni

La funzione membro rimuove dalla sequenza controllata tutti gli elementi, designati dall'iteratore `P`, per cui `*P ==  val`.

La funzione membro non genera mai un'eccezione.

## <a name="remove_if"></a><a name="remove_if"></a> remove_if

Cancella gli elementi da un elenco di inoltro per il quale viene soddisfatto un predicato specificato.

```cpp
template <class Predicate>
    void remove_if(Predicate pred);
```

### <a name="parameters"></a>Parametri

*Pred*\
Predicato unario che, se soddisfatto da un elemento, comporta l'eliminazione di tale elemento dall'elenco.

### <a name="remarks"></a>Osservazioni

La funzione membro rimuove dalla sequenza controllata tutti gli elementi, designati dall'iteratore `P`, per cui `pred(*P)` è true.

Si verifica un'eccezione solo se *prede* genera un'eccezione. In questo caso, la sequenza controllata viene lasciata in uno stato non specificato e viene nuovamente generata l'eccezione.

## <a name="resize"></a><a name="resize"></a> ridimensionare

Specifica una nuova dimensione per un elenco di inoltro.

```cpp
void resize(size_type _Newsize);
void resize(size_type _Newsize, const Type& val);
```

### <a name="parameters"></a>Parametri

*_Newsize*\
Numero di elementi nell'elenco di inoltro ridimensionato.

*Val*\
Valore da usare per la spaziatura interna.

### <a name="remarks"></a>Osservazioni

Le funzioni membro assicurano che il numero di elementi nell'elenco sia in *_Newsize*. Se la sequenza controllata deve essere più lunga, la prima funzione membro accoda elementi con valore `Type()` , mentre la seconda funzione membro accoda gli elementi con il valore *Val*. Per accorciare la sequenza controllata, tutte e due le funzioni membro chiamano `erase_after(begin() + _Newsize - 1, end())`.

## <a name="reverse"></a><a name="reverse"></a> inverso

Inverte l'ordine degli elementi in un elenco di inoltro.

```cpp
void reverse();
```

## <a name="size_type"></a><a name="size_type"></a> size_type

Tipo che rappresenta la distanza senza segno tra due elementi.

```cpp
typedef typename Allocator::size_type size_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo Unsigned Integer descrive un oggetto che può rappresentare la lunghezza di una sequenza controllata.

## <a name="sort"></a><a name="sort"></a> ordinamento

Dispone gli elementi in ordine crescente o in base a un ordine specificato da un predicato.

```cpp
void sort();
template <class Predicate>
void sort(Predicate pred);
```

### <a name="parameters"></a>Parametri

*Pred*\
Predicato di ordinamento.

### <a name="remarks"></a>Osservazioni

Entrambe le funzioni membro ordinano gli elementi nella sequenza controllata in base a un predicato, descritto di seguito.

Per gli iteratori `Pi` e `Pj` che designano gli elementi nelle posizioni `i` e `j`, la prima funzione membro impone l'ordine `!(*Pj < *Pi)` ogni volta che `i < j` Gli elementi vengono ordinati in `ascending` ordine. La funzione del modello di membro impone l'ordine `! pred(*Pj, *Pi)` ogni volta che `i < j` . Nessuna coppia ordinata di elementi inclusa nella sequenza controllata originale viene invertita nella sequenza controllata risultante. L'ordinamento è stabile.

Si verifica un'eccezione solo se *prede* genera un'eccezione. In questo caso, la sequenza controllata viene lasciata in un ordine non specificato e viene nuovamente generata l'eccezione.

## <a name="splice_after"></a><a name="splice_after"></a> splice_after

Rimuove elementi da un elenco forward_list di origine e li inserisce in un elenco di destinazione.

```cpp
// insert the entire source forward_list
void splice_after(const_iterator Where, forward_list& Source);
void splice_after(const_iterator Where, forward_list&& Source);

// insert one element of the source forward_list
void splice_after(const_iterator Where, forward_list& Source, const_iterator Iter);
void splice_after(const_iterator Where, forward_list&& Source, const_iterator Iter);

// insert a range of elements from the source forward_list
void splice_after(
    const_iterator Where,
    forward_list& Source,
    const_iterator First,
    const_iterator Last);

void splice_after(
    const_iterator Where,
    forward_list&& Source,
    const_iterator First,
    const_iterator Last);
```

### <a name="parameters"></a>Parametri

*In cui*\
Posizione nell'elenco forward_list di destinazione prima dopo cui effettuare l'inserimento.

*Origine*\
Elenco forward_list di origine da inserire nell'elenco forward_list di destinazione.

*Iter*\
Elemento da inserire dall'elenco forward_list di origine.

*Prima*\
Primo elemento dell'intervallo da inserire dall'elenco forward_list di origine.

*Ultima*\
Prima posizione oltre l'intervallo da inserire dall'elenco forward_list di origine.

### <a name="remarks"></a>Osservazioni

La prima coppia di funzioni membro inserisce la sequenza controllata dall' *origine* subito dopo l'elemento nella sequenza controllata a *cui*punta. Rimuove anche tutti gli elementi dall' *origine*. ( `&Source` non deve essere uguale a **`this`** ).

La seconda coppia di funzioni membro rimuove l'elemento subito dopo *iter* nella sequenza controllata dall' *origine* e lo inserisce subito dopo l'elemento nella sequenza controllata a *cui*punta. Se `Where == Iter || Where == ++Iter`, non si verifica alcuna modifica.

La terza coppia di funzioni membro (splicing con intervallo) inserisce il sottointervallo designato da `(First, Last)` dalla sequenza controllata dall' *origine* subito dopo l'elemento nella sequenza controllata a *cui*punta. Viene anche rimosso il sottointervallo originale dalla sequenza controllata dall' *origine*. Se `&Source == this` , l'intervallo `(First, Last)` non deve includere l'elemento a *cui*punta.

Se l'operazione di splicing nell'intervallo inserisce `N` elementi e `&Source != this`, un oggetto della classe [iterator](#iterator) sarà incrementato `N` volte.

Nessun iteratore, puntatore o riferimento che designa elementi sottoposti a splicing diventerà non valido.

### <a name="example"></a>Esempio

```cpp
// forward_list_splice_after.cpp
// compile with: /EHsc /W4
#include <forward_list>
#include <iostream>

using namespace std;

template <typename S> void print(const S& s) {
    for (const auto& p : s) {
        cout << "(" << p << ") ";
    }

    cout << endl;
}

int main()
{
    forward_list<int> c1{ 10, 11 };
    forward_list<int> c2{ 20, 21, 22 };
    forward_list<int> c3{ 30, 31 };
    forward_list<int> c4{ 40, 41, 42, 43 };

    forward_list<int>::iterator where_iter;
    forward_list<int>::iterator first_iter;
    forward_list<int>::iterator last_iter;

    cout << "Beginning state of lists:" << endl;
    cout << "c1 = ";
    print(c1);
    cout << "c2 = ";
    print(c2);
    cout << "c3 = ";
    print(c3);
    cout << "c4 = ";
    print(c4);

    where_iter = c2.begin();
    ++where_iter; // start at second element
    c2.splice_after(where_iter, c1);
    cout << "After splicing c1 into c2:" << endl;
    cout << "c1 = ";
    print(c1);
    cout << "c2 = ";
    print(c2);

    first_iter = c3.begin();
    c2.splice_after(where_iter, c3, first_iter);
    cout << "After splicing the first element of c3 into c2:" << endl;
    cout << "c3 = ";
    print(c3);
    cout << "c2 = ";
    print(c2);

    first_iter = c4.begin();
    last_iter = c4.end();
    // set up to get the middle elements
    ++first_iter;
    c2.splice_after(where_iter, c4, first_iter, last_iter);
    cout << "After splicing a range of c4 into c2:" << endl;
    cout << "c4 = ";
    print(c4);
    cout << "c2 = ";
    print(c2);
}
```

```Output
Beginning state of lists:c1 = (10) (11)c2 = (20) (21) (22)c3 = (30) (31)c4 = (40) (41) (42) (43)After splicing c1 into c2:c1 =c2 = (20) (21) (10) (11) (22)After splicing the first element of c3 into c2:c3 = (30)c2 = (20) (21) (31) (10) (11) (22)After splicing a range of c4 into c2:c4 = (40) (41)c2 = (20) (21) (42) (43) (31) (10) (11) (22)
```

## <a name="swap"></a><a name="swap"></a> scambio

Scambia gli elementi di due elenchi di inoltro.

```cpp
void swap(forward_list& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Elenco di inoltro che fornisce gli elementi da scambiare.

### <a name="remarks"></a>Osservazioni

La funzione membro scambia le sequenze controllate tra **`*this`** e *right*. Se `get_allocator() ==  right.get_allocator()`, esegue l'operazione in un tempo costante, non genera alcuna eccezione e non invalida riferimenti, puntatori o iteratori che designano gli elementi nelle due sequenze controllate. In caso contrario, esegue un numero di assegnazioni di elementi e chiamate al costruttore proporzionale al numero di elementi nelle due sequenze controllate.

## <a name="unique"></a><a name="unique"></a> unico

Elimina tutti gli elementi tranne il primo da ogni gruppo consecutivo di elementi uguali.

```cpp
void unique();
template <class BinaryPredicate>
void unique(BinaryPredicate comp);
```

### <a name="parameters"></a>Parametri

*comp*\
Predicato binario usato per confrontare gli elementi successivi.

### <a name="remarks"></a>Osservazioni

Mantiene la prima istanza di ogni elemento univoco e rimuove il resto. Gli elementi devono essere ordinati in modo che quelli di valore uguale siano adiacenti nell'elenco.

La prima funzione membro rimuove dalla sequenza controllata tutti gli elementi che risultano uguali al relativo elemento precedente. Per gli iteratori `Pi` e `Pj` che designano gli elementi nelle posizioni `i` e `j`, la seconda funzione membro rimuove ogni elemento per cui `i + 1 == j &&  comp(*Pi, *Pj)`.

Per una sequenza controllata con lunghezza `N` (> 0), il predicato `comp(*Pi, *Pj)` viene valutato `N - 1` volte.

Si verifica un'eccezione solo se `comp` ne genera una. In questo caso, la sequenza controllata viene lasciata in uno stato non specificato e viene nuovamente generata l'eccezione.

## <a name="value_type"></a><a name="value_type"></a> value_type

Tipo che rappresenta il tipo di elemento archiviato in un elenco di inoltro.

```cpp
typedef typename Allocator::value_type value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `Type`.
