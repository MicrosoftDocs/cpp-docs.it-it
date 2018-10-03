---
title: Classe unordered_multiset | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- unordered_set/std::unordered_multiset
- unordered_set/std::unordered_multiset::allocator_type
- unordered_set/std::unordered_multiset::const_iterator
- unordered_set/std::unordered_multiset::const_local_iterator
- unordered_set/std::unordered_multiset::const_pointer
- unordered_set/std::unordered_multiset::const_reference
- unordered_set/std::unordered_multiset::difference_type
- unordered_set/std::unordered_multiset::hasher
- unordered_set/std::unordered_multiset::iterator
- unordered_set/std::unordered_multiset::key_equal
- unordered_set/std::unordered_multiset::key_type
- unordered_set/std::unordered_multiset::local_iterator
- unordered_set/std::unordered_multiset::pointer
- unordered_set/std::unordered_multiset::reference
- unordered_set/std::unordered_multiset::size_type
- unordered_set/std::unordered_multiset::value_type
- unordered_set/std::unordered_multiset::begin
- unordered_set/std::unordered_multiset::bucket
- unordered_set/std::unordered_multiset::bucket_count
- unordered_set/std::unordered_multiset::bucket_size
- unordered_set/std::unordered_multiset::cbegin
- unordered_set/std::unordered_multiset::cend
- unordered_set/std::unordered_multiset::clear
- unordered_set/std::unordered_multiset::count
- unordered_set/std::unordered_multiset::emplace
- unordered_set/std::unordered_multiset::emplace_hint
- unordered_set/std::unordered_multiset::empty
- unordered_set/std::unordered_multiset::end
- unordered_set/std::unordered_multiset::equal_range
- unordered_set/std::unordered_multiset::erase
- unordered_set/std::unordered_multiset::find
- unordered_set/std::unordered_multiset::get_allocator
- unordered_set/std::unordered_multiset::hash
- unordered_set/std::unordered_multiset::insert
- unordered_set/std::unordered_multiset::key_eq
- unordered_set/std::unordered_multiset::load_factor
- unordered_set/std::unordered_multiset::max_bucket_count
- unordered_set/std::unordered_multiset::max_load_factor
- unordered_set/std::unordered_multiset::max_size
- unordered_set/std::unordered_multiset::rehash
- unordered_set/std::unordered_multiset::size
- unordered_set/std::unordered_multiset::swap
- unordered_set/std::unordered_multiset::unordered_multiset
- unordered_set/std::unordered_multiset::operator=
- unordered_set/std::unordered_multiset::hash_function
dev_langs:
- C++
helpviewer_keywords:
- std::unordered_multiset
- std::unordered_multiset::allocator_type
- std::unordered_multiset::const_iterator
- std::unordered_multiset::const_local_iterator
- std::unordered_multiset::const_pointer
- std::unordered_multiset::const_reference
- std::unordered_multiset::difference_type
- std::unordered_multiset::hasher
- std::unordered_multiset::iterator
- std::unordered_multiset::key_equal
- std::unordered_multiset::key_type
- std::unordered_multiset::local_iterator
- std::unordered_multiset::pointer
- std::unordered_multiset::reference
- std::unordered_multiset::size_type
- std::unordered_multiset::value_type
- std::unordered_multiset::begin
- std::unordered_multiset::bucket
- std::unordered_multiset::bucket_count
- std::unordered_multiset::bucket_size
- std::unordered_multiset::cbegin
- std::unordered_multiset::cend
- std::unordered_multiset::clear
- std::unordered_multiset::count
- std::unordered_multiset::emplace
- std::unordered_multiset::emplace_hint
- std::unordered_multiset::empty
- std::unordered_multiset::end
- std::unordered_multiset::equal_range
- std::unordered_multiset::erase
- std::unordered_multiset::find
- std::unordered_multiset::get_allocator
- std::unordered_multiset::hash
- std::unordered_multiset::insert
- std::unordered_multiset::key_eq
- std::unordered_multiset::load_factor
- std::unordered_multiset::max_bucket_count
- std::unordered_multiset::max_load_factor
- std::unordered_multiset::max_size
- std::unordered_multiset::rehash
- std::unordered_multiset::size
- std::unordered_multiset::swap
- std::unordered_multiset::unordered_multiset
- std::unordered_multiset::operator=
- std::unordered_multiset::allocator_type
- std::unordered_multiset::const_iterator
- std::unordered_multiset::const_local_iterator
- std::unordered_multiset::const_pointer
- std::unordered_multiset::const_reference
- std::unordered_multiset::difference_type
- std::unordered_multiset::hasher
- std::unordered_multiset::iterator
- std::unordered_multiset::key_equal
- std::unordered_multiset::key_type
- std::unordered_multiset::local_iterator
- std::unordered_multiset::pointer
- std::unordered_multiset::reference
- std::unordered_multiset::size_type
- std::unordered_multiset::value_type
- std::unordered_multiset::begin
- std::unordered_multiset::bucket
- std::unordered_multiset::bucket_count
- std::unordered_multiset::bucket_size
- std::unordered_multiset::cbegin
- std::unordered_multiset::cend
- std::unordered_multiset::clear
- std::unordered_multiset::count
- std::unordered_multiset::emplace
- std::unordered_multiset::emplace_hint
- std::unordered_multiset::empty
- std::unordered_multiset::end
- std::unordered_multiset::equal_range
- std::unordered_multiset::erase
- std::unordered_multiset::find
- std::unordered_multiset::get_allocator
- std::unordered_multiset::hash_function
- std::unordered_multiset::insert
- std::unordered_multiset::key_eq
- std::unordered_multiset::load_factor
- std::unordered_multiset::max_bucket_count
- std::unordered_multiset::max_load_factor
- std::unordered_multiset::max_size
- std::unordered_multiset::rehash
- std::unordered_multiset::size
- std::unordered_multiset::swap
ms.assetid: 70c8dfc5-492a-4af2-84f5-1aa9cb04b71c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 35c13890262bf7d1bbcf5d86d71e50ed55a073ff
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48235750"
---
# <a name="unorderedmultiset-class"></a>Classe unordered_multiset

La classe modello descrive un oggetto che controlla una sequenza di elementi di lunghezza diversa di tipo `const Key`. La sequenza viene ordinata in modo debole da una funzione hash, che esegue il partizionamento della sequenza in un set ordinato di sottosequenze denominate bucket. In ogni bucket una funzione di confronto determina se una coppia di elementi ha un ordinamento equivalente. Ogni elemento viene utilizzato sia come chiave di ordinamento che come valore. La sequenza viene rappresentata in modo da consentire la ricerca, l'inserimento e la rimozione di un elemento arbitrario mediante una serie di operazioni che possono essere indipendenti dal numero di elementi della sequenza (tempo costante), almeno quando tutti i bucket sono più o meno lunghi uguali. Nella peggiore delle ipotesi, quando tutti gli elementi si trovano in un unico bucket, il numero di operazioni è proporzionale al numero di elementi della sequenza (tempo lineare). Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.

## <a name="syntax"></a>Sintassi

```cpp
template <class Key,
    class Hash = std::hash<Key>,
    class Pred = std::equal_to<Key>,
    class Alloc = std::allocator<Key>>
class unordered_multiset;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*Key*|Tipo di chiave.|
|*hash*|Tipo di oggetto della funzione hash.|
|*Pred*|Tipo di oggetto della funzione di confronto di uguaglianza.|
|*Alloc*|Classe Allocator.|

## <a name="members"></a>Membri

|Definizione dei tipi|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Tipo di un allocatore per gestire l'archiviazione.|
|[const_iterator](#const_iterator)|Tipo di un iteratore costante per la sequenza controllata.|
|[const_local_iterator](#const_local_iterator)|Tipo di un iteratore di bucket costante per la sequenza controllata.|
|[const_pointer](#const_pointer)|Tipo di un puntatore costante a un elemento.|
|[const_reference](#const_reference)|Tipo di un riferimento costante a un elemento.|
|[difference_type](#difference_type)|Tipo di una distanza Signed tra due elementi.|
|[hasher](#hasher)|Tipo della funzione hash.|
|[iterator](#iterator)|Tipo di un iteratore per la sequenza controllata.|
|[key_equal](#key_equal)|Tipo della funzione di confronto.|
|[key_type](#key_type)|Tipo di una chiave di ordinamento.|
|[local_iterator](#local_iterator)|Tipo di un iteratore di bucket per la sequenza controllata.|
|[pointer](#pointer)|Tipo di un puntatore a un elemento.|
|[reference](#reference)|Tipo di un riferimento a un elemento.|
|[size_type](#size_type)|Tipo di una distanza Unsigned tra due elementi.|
|[value_type](#value_type)|Tipo di un elemento.|

|Funzione membro|Descrizione|
|-|-|
|[begin](#begin)|Indica l'inizio della sequenza controllata.|
|[bucket](#bucket)|Ottiene il numero di bucket relativo a un valore della chiave.|
|[bucket_count](#bucket_count)|Ottiene il numero di bucket.|
|[bucket_size](#bucket_size)|Ottiene le dimensioni di un bucket.|
|[cbegin](#cbegin)|Indica l'inizio della sequenza controllata.|
|[cend](#cend)|Designa la fine della sequenza controllata.|
|[clear](#clear)|Rimuove tutti gli elementi.|
|[count](#count)|Trova il numero di elementi corrispondenti a una chiave specificata.|
|[emplace](#emplace)|Aggiunge un elemento costruito sul posto.|
|[emplace_hint](#emplace_hint)|Aggiunge un elemento costruito sul posto, con il suggerimento.|
|[empty](#empty)|Verifica se sono presenti o meno degli elementi.|
|[end](#end)|Designa la fine della sequenza controllata.|
|[equal_range](#equal_range)|Trova un intervallo che corrisponde a una chiave specificata.|
|[erase](#erase)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|
|[find](#find)|Trova un elemento che corrisponde a una chiave specificata.|
|[get_allocator](#get_allocator)|Ottiene l'oggetto allocatore archiviato.|
|[hash_function](#hash)|Ottiene l'oggetto della funzione hash archiviato.|
|[insert](#insert)|Aggiunge elementi.|
|[key_eq](#key_eq)|Ottiene l'oggetto archiviato della funzione di confronto.|
|[load_factor](#load_factor)|Conta il numero medio di elementi per bucket.|
|[max_bucket_count](#max_bucket_count)|Ottiene il numero massimo di bucket.|
|[max_load_factor](#max_load_factor)|Ottiene o imposta il numero massimo di elementi per bucket.|
|[max_size](#max_size)|Ottiene la dimensione massima della sequenza controllata.|
|[rehash](#rehash)|Ricompila la tabella hash.|
|[size](#size)|Conta il numero di elementi.|
|[swap](#swap)|Scambia il contenuto di due contenitori.|
|[unordered_multiset](#unordered_multiset)|Costruisce un oggetto contenitore.|

|Operatore|Descrizione|
|-|-|
|[unordered_multiset::operator=](#op_eq)|Copia una tabella hash.|

## <a name="remarks"></a>Note

L'oggetto ordina la sequenza da esso controllata chiamando due oggetti archiviati, un oggetto della funzione di confronto di tipo [unordered_multiset::key_equal](#key_equal) e un oggetto della funzione hash di tipo [unordered_multiset::hasher](#hasher). È possibile accedere al primo oggetto archiviato chiamando la funzione membro [unordered_multiset::key_eq](#key_eq)`()` ed è possibile accedere al secondo oggetto archiviato chiamando la funzione membro [unordered_multiset::hash_function](#hash)`()`. In particolare, per tutti i valori `X` e `Y` di tipo `Key`, la chiamata a `key_eq()(X, Y)` restituisce true solo se i valori dei due argomenti hanno un ordinamento equivalente; la chiamata a `hash_function()(keyval)` produce una distribuzione di valori di tipo `size_t`. A differenza della classe modello [unordered_set](../standard-library/unordered-set-class.md), un oggetto della classe modello `unordered_multiset` non garantisce che `key_eq()(X, Y)` sia sempre false per due elementi qualsiasi della sequenza controllata. Le chiavi non devono essere necessariamente univoche.

L'oggetto consente inoltre di archiviare un fattore di carico massimo che specifica il numero medio massimo di elementi per bucket desiderato. Se l'inserimento di un elemento comporta il superamento del fattore di carico massimo da parte di [unordered_multiset::load_factor](#load_factor)`()`, il contenitore aumenta il numero dei bucket e ricompila la tabella hash in base alle necessità.

L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di confronto, dall'ordine di inserimento, dal fattore di carico massimo e dal numero corrente di bucket. Non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata. Si può tuttavia avere sempre la certezza dell'adiacenza dei subset di elementi con un ordinamento equivalente nella sequenza controllata.

L'oggetto alloca e libera la memoria per la sequenza da esso controllata tramite un oggetto allocatore archiviato di tipo [unordered_multiset::allocator_type](#allocator_type). Tale oggetto allocatore deve avere la stessa interfaccia esterna di un oggetto della classe modello `allocator`. Si noti che l'oggetto allocatore archiviato non viene copiato dopo l'assegnazione dell'oggetto contenitore.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<unordered_set>

**Spazio dei nomi:** std

## <a name="allocator_type"></a>  unordered_multiset::allocator_type

Tipo di un allocatore per gestire l'archiviazione.

```cpp
typedef Alloc allocator_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Alloc`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_allocator_type.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
typedef std::allocator<std::pair<const char, int> > Myalloc;
int main()
{
    Myset c1;

    Myset::allocator_type al = c1.get_allocator();
    std::cout << "al == std::allocator() is "
        << std::boolalpha << (al == Myalloc()) << std::endl;

    return (0);
}
```

```Output
al == std::allocator() is true
```

## <a name="begin"></a>  unordered_multiset::begin

Designa l'inizio della sequenza controllata o di un bucket.

```cpp
iterator begin();

const_iterator begin() const;


local_iterator begin(size_type nbucket);

const_local_iterator begin(size_type nbucket) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*nbucket*|Numero di bucket.|

### <a name="remarks"></a>Note

Le prime due funzioni membro restituiscono un iteratore in avanti che punta al primo elemento della sequenza (o appena oltre la fine di una sequenza vuota). Le ultime due funzioni membro restituiscono un iteratore in avanti che punta al primo elemento del bucket *nbucket* (o appena oltre la fine di un bucket vuoto).

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_begin.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // inspect first two items "[c] [b]"
    Myset::iterator it2 = c1.begin();
    std::cout << "[" << *it2 << "] ";
    ++it2;
    std::cout << "[" << *it2 << "] ";
    std::cout << std::endl;

    // inspect bucket containing 'a'
    Myset::const_local_iterator lit = c1.begin(c1.bucket('a'));
    std::cout << "[" << *lit << "] ";

    return (0);
}
```

```Output
[c] [b] [a]
[c] [b]
[a]
```

## <a name="bucket"></a>  unordered_multiset::bucket

Ottiene il numero di bucket relativo a un valore della chiave.

```cpp
size_type bucket(const Key& keyval) const;
```

### <a name="parameters"></a>Parametri

*Keyval*<br/>
Valore della chiave da mappare.

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di bucket che corrisponde attualmente al valore della chiave `keyval`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_bucket.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // display buckets for keys
    Myset::size_type bs = c1.bucket('a');
    std::cout << "bucket('a') == " << bs << std::endl;
    std::cout << "bucket_size(" << bs << ") == " << c1.bucket_size(bs)
        << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
bucket('a') == 7
bucket_size(7) == 1
```

## <a name="bucket_count"></a>  unordered_multiset::bucket_count

Ottiene il numero di bucket.

```cpp
size_type bucket_count() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce il numero corrente di bucket.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_bucket_count.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // inspect current parameters
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    // change max_load_factor and redisplay
    c1.max_load_factor(0.10f);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    // rehash and redisplay
    c1.rehash(100);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
bucket_count() == 8
load_factor() == 0.375
max_bucket_count() == 8
max_load_factor() == 4

bucket_count() == 8
load_factor() == 0.375
max_bucket_count() == 8
max_load_factor() == 0.1

bucket_count() == 128
load_factor() == 0.0234375
max_bucket_count() == 128
max_load_factor() == 0.1
```

## <a name="bucket_size"></a>  unordered_multiset::bucket_size

Ottiene le dimensioni di un bucket.

```cpp
size_type bucket_size(size_type nbucket) const;
```

### <a name="parameters"></a>Parametri

*nbucket*<br/>
Numero di bucket.

### <a name="remarks"></a>Note

La funzione membro restituisce le dimensioni del numero di bucket *nbucket*.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_bucket_size.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // display buckets for keys
    Myset::size_type bs = c1.bucket('a');
    std::cout << "bucket('a') == " << bs << std::endl;
    std::cout << "bucket_size(" << bs << ") == " << c1.bucket_size(bs)
        << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
bucket('a') == 7
bucket_size(7) == 1
```

## <a name="cbegin"></a>  unordered_multiset::cbegin

Restituisce un **const** iteratore che punta al primo elemento nell'intervallo.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto **const** iteratore di accesso in avanti che punta al primo elemento dell'intervallo o alla posizione appena oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()`).

### <a name="remarks"></a>Note

Con il valore restituito di `cbegin`, gli elementi dell'intervallo non possono essere modificati.

È possibile usare questa funzione membro anziché la funzione membro `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, prendere in considerazione `Container` sia un modificabili (non - **const**) contenitore di qualsiasi tipo che supporta `begin()` e `cbegin()`.

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator

auto i2 = Container.cbegin();
// i2 is Container<T>::const_iterator
```

## <a name="cend"></a>  unordered_multiset::cend

Restituisce un **const** iteratore che punta alla posizione oltre l'ultimo elemento in un intervallo.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto **const** iteratore di accesso in avanti che punta appena oltre la fine dell'intervallo.

### <a name="remarks"></a>Note

`cend` viene utilizzato per verificare se un iteratore ha superato la fine del relativo intervallo.

È possibile usare questa funzione membro anziché la funzione membro `end()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, prendere in considerazione `Container` sia un modificabili (non - **const**) contenitore di qualsiasi tipo che supporta `end()` e `cend()`.

```cpp
auto i1 = Container.end();
// i1 is Container<T>::iterator

auto i2 = Container.cend();
// i2 is Container<T>::const_iterator
```

Non è consigliabile dereferenziare il valore restituito da `cend`.

## <a name="clear"></a>  unordered_multiset::clear

Rimuove tutti gli elementi.

```cpp
void clear();
```

### <a name="remarks"></a>Note

La funzione membro chiama [unordered_multiset::erase](#erase)`(` [unordered_multiset::begin](#begin)`(),` [unordered_multiset::end](#end)`())`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_clear.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // clear the container and reinspect
    c1.clear();
    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;
    std::cout << std::endl;

    c1.insert('d');
    c1.insert('e');

    // display contents "[e] [d] "
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
size == 0
empty() == true

[e] [d]
size == 2
empty() == false
```

## <a name="const_iterator"></a>  unordered_multiset::const_iterator

Tipo di un iteratore costante per la sequenza controllata.

```cpp
typedef T1 const_iterator;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come iteratore costante in avanti per la sequenza controllata. Qui è descritto come sinonimo del tipo definito dall'implementazione `T1`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_const_iterator.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
```

## <a name="const_local_iterator"></a>  unordered_multiset::const_local_iterator

Tipo di un iteratore di bucket costante per la sequenza controllata.

```cpp
typedef T5 const_local_iterator;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come iteratore in avanti costante per un bucket. Qui è descritto come sinonimo del tipo definito dall'implementazione `T5`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_const_local_iterator.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // inspect bucket containing 'a'
    Myset::const_local_iterator lit = c1.begin(c1.bucket('a'));
    std::cout << "[" << *lit << "] ";

    return (0);
}
```

```Output
[c] [b] [a]
[a]
```

## <a name="const_pointer"></a>  unordered_multiset::const_pointer

Tipo di un puntatore costante a un elemento.

```cpp
typedef Alloc::const_pointer const_pointer;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come puntatore costante a un elemento della sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_const_pointer.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::iterator it = c1.begin();
        it != c1.end(); ++it)
        {
        Myset::const_pointer p = &*it;
        std::cout << "[" << *p << "] ";
        }
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
```

## <a name="const_reference"></a>  unordered_multiset::const_reference

Tipo di un riferimento costante a un elemento.

```cpp
typedef Alloc::const_reference const_reference;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come riferimento costante a un elemento della sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_const_reference.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::iterator it = c1.begin();
        it != c1.end(); ++it)
        {
        Myset::const_reference ref = *it;
        std::cout << "[" << ref << "] ";
        }
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
```

## <a name="count"></a>  unordered_multiset::count

Trova il numero di elementi corrispondenti a una chiave specificata.

```cpp
size_type count(const Key& keyval) const;
```

### <a name="parameters"></a>Parametri

*Keyval*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di elementi nell'intervallo delimitato da [unordered_multiset::equal_range](#equal_range)`(keyval)`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_count.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    std::cout << "count('A') == " << c1.count('A') << std::endl;
    std::cout << "count('b') == " << c1.count('b') << std::endl;
    std::cout << "count('C') == " << c1.count('C') << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
count('A') == 0
count('b') == 1
count('C') == 0
```

## <a name="difference_type"></a>  unordered_multiset::difference_type

Tipo di una distanza Signed tra due elementi.

```cpp
typedef T3 difference_type;
```

### <a name="remarks"></a>Note

Il tipo di valore integer con segno descrive un oggetto che può rappresentare la differenza tra gli indirizzi di due elementi qualsiasi della sequenza controllata. Qui è descritto come sinonimo del tipo definito dall'implementazione `T3`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_difference_type.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // compute positive difference
    Myset::difference_type diff = 0;
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        ++diff;
    std::cout << "end()-begin() == " << diff << std::endl;

    // compute negative difference
    diff = 0;
    for (Myset::const_iterator it = c1.end();
        it != c1.begin(); --it)
        --diff;
    std::cout << "begin()-end() == " << diff << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
end()-begin() == 3
begin()-end() == -3
```

## <a name="emplace"></a>  unordered_multiset::emplace

Inserisce un elemento costruito sul posto, senza operazioni di copia o spostamento.

```cpp
template <class... Args>
iterator emplace(Args&&... args);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*args*|Argomenti inoltrati per costruire un elemento da inserire nell'oggetto unordered_multiset.|

### <a name="return-value"></a>Valore restituito

Iteratore all'elemento appena inserito.

### <a name="remarks"></a>Note

Questa funzione non invalida alcun riferimento a elementi del contenitore, ma potrebbe invalidare tutti gli iteratori per il contenitore.

Durante l'inserimento, se viene generata un'eccezione che non si trova nella funzione hash del contenitore, quest'ultimo non viene modificato. Se l'eccezione viene generata nella funzione hash, il risultato non sarà definito.

Per un esempio di codice, vedere [multiset::emplace](../standard-library/multiset-class.md#emplace).

## <a name="emplace_hint"></a>  unordered_multiset::emplace_hint

Inserisce un elemento costruito in locale (senza che vengano eseguite operazioni di copia o di spostamento), con un suggerimento sulla posizione.

```cpp
template <class... Args>
iterator emplace_hint(
    const_iterator where,
    Args&&... args);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*args*|Argomenti inoltrati per costruire un elemento da inserire nell'oggetto unordered_multiset.|
|*where*|Suggerimento sulla posizione per avviare la ricerca del punto di inserimento corretto.|

### <a name="return-value"></a>Valore restituito

Iteratore all'elemento appena inserito.

### <a name="remarks"></a>Note

Questa funzione non invalida alcun riferimento a elementi del contenitore, ma potrebbe invalidare tutti gli iteratori per il contenitore.

Durante l'inserimento, se viene generata un'eccezione che non si trova nella funzione hash del contenitore, quest'ultimo non viene modificato. Se l'eccezione viene generata nella funzione hash, il risultato non sarà definito.

Per un esempio di codice, vedere [set::emplace_hint](../standard-library/set-class.md#emplace_hint).

## <a name="empty"></a>  unordered_multiset::empty

Verifica se sono presenti o meno degli elementi.

```cpp
bool empty() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce true per una sequenza controllata vuota.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_empty.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // clear the container and reinspect
    c1.clear();
    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;
    std::cout << std::endl;

    c1.insert('d');
    c1.insert('e');

    // display contents "[e] [d]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
size == 0
empty() == true

[e] [d]
size == 2
empty() == false
```

## <a name="end"></a>  unordered_multiset::end

Designa la fine della sequenza controllata.

```cpp
iterator end();
const_iterator end() const;
local_iterator end(size_type nbucket);
const_local_iterator end(size_type nbucket) const;
```

### <a name="parameters"></a>Parametri

*nbucket*<br/>
Numero di bucket.

### <a name="remarks"></a>Note

Le prime due funzioni membro restituiscono un iteratore in avanti che punta poco oltre la fine della sequenza. Le ultime due funzioni membro restituiscono un iteratore in avanti che punta poco oltre la fine del bucket *nbucket*.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_end.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // inspect last two items "[a] [b]"
    Myset::iterator it2 = c1.end();
    --it2;
    std::cout << "[" << *it2 << "] ";
    --it2;
    std::cout << "[" << *it2 << "] ";
    std::cout << std::endl;

    // inspect bucket containing 'a'
    Myset::const_local_iterator lit = c1.end(c1.bucket('a'));
    --lit;
    std::cout << "[" << *lit << "] ";

    return (0);
}
```

```Output
[c] [b] [a]
[a] [b]
[a]
```

## <a name="equal_range"></a>  unordered_multiset::equal_range

Trova un intervallo che corrisponde a una chiave specificata.

```cpp
std::pair<iterator, iterator>
    equal_range(const Key& keyval);

std::pair<const_iterator, const_iterator>
    equal_range(const Key& keyval) const;
```

### <a name="parameters"></a>Parametri

*Keyval*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Note

La funzione membro restituisce una coppia di iteratori `X` tale che `[X.first, X.second)` delimiti solo gli elementi della sequenza controllata che hanno un ordinamento equivalente con *keyval*. Se tali elementi non esistono, entrambi gli iteratori sono `end()`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_equal_range.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // display results of failed search
    std::pair<Myset::iterator, Myset::iterator> pair1 =
        c1.equal_range('x');
    std::cout << "equal_range('x'):";
    for (; pair1.first != pair1.second; ++pair1.first)
        std::cout << "[" << *pair1.first << "] ";
    std::cout << std::endl;

    // display results of successful search
    pair1 = c1.equal_range('b');
    std::cout << "equal_range('b'):";
    for (; pair1.first != pair1.second; ++pair1.first)
        std::cout << "[" << *pair1.first << "] ";
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
equal_range('x'):
equal_range('b'): [b]
```

## <a name="erase"></a>  unordered_multiset::erase

Rimuove un elemento o un intervallo di elementi in un multiset non ordinato dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.

```cpp
iterator erase(
    const_iterator Where);

iterator erase(
    const_iterator First,
    const_iterator Last);

size_type erase(
    const key_type& Key);
```

### <a name="parameters"></a>Parametri

*Where*<br/>
Posizione dell'elemento che deve essere rimosso.

*Primo*<br/>
Posizione del primo elemento che deve essere rimosso.

*ultimo*<br/>
Posizione immediatamente successiva all'ultimo elemento che deve essere rimosso.

*Key*<br/>
Valore della chiave dell'elemento che deve essere rimosso.

### <a name="return-value"></a>Valore restituito

Per le prime due funzioni, iteratore bidirezionale che definisce il primo elemento rimanente successivo a tutti gli elementi eliminati o un elemento che rappresenta la fine del multiset non ordinato se non tali elementi non sono presenti.

Per la terza funzione membro, restituisce il numero di elementi rimossi dal multiset non ordinato.

### <a name="remarks"></a>Note

Per un esempio di codice, vedere [set::erase](../standard-library/set-class.md#erase).

## <a name="find"></a>  unordered_multiset::find

Trova un elemento che corrisponde a una chiave specificata.

```cpp
const_iterator find(const Key& keyval) const;
```

### <a name="parameters"></a>Parametri

*Keyval*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Note

La funzione membro restituisce [unordered_multiset::equal_range](#equal_range)`(keyval).first`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_find.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // try to find and fail
    std::cout << "find('A') == "
        << std::boolalpha << (c1.find('A') != c1.end()) << std::endl;

    // try to find and succeed
    Myset::iterator it = c1.find('b');
    std::cout << "find('b') == "
        << std::boolalpha << (it != c1.end())
        << ": [" << *it << "] " << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
find('A') == false
find('b') == true: [b]
```

## <a name="get_allocator"></a>  unordered_multiset::get_allocator

Ottiene l'oggetto allocatore archiviato.

```cpp
Alloc get_allocator() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce l'oggetto allocatore archiviato.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_get_allocator.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
typedef std::allocator<std::pair<const char, int> > Myalloc;
int main()
{
    Myset c1;

    Myset::allocator_type al = c1.get_allocator();
    std::cout << "al == std::allocator() is "
        << std::boolalpha << (al == Myalloc()) << std::endl;

    return (0);
}
```

```Output
al == std::allocator() is true
```

## <a name="hash"></a>  unordered_multiset::hash_function

Ottiene l'oggetto della funzione hash archiviato.

```cpp
Hash hash_function() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce l'oggetto archiviato della funzione hash.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_hash_function.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    Myset::hasher hfn = c1.hash_function();
    std::cout << "hfn('a') == " << hfn('a') << std::endl;
    std::cout << "hfn('b') == " << hfn('b') << std::endl;

    return (0);
}
```

```Output
hfn('a') == 1630279
hfn('b') == 1647086
```

## <a name="hasher"></a>  unordered_multiset::hasher

Tipo della funzione hash.

```cpp
typedef Hash hasher;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Hash`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_hasher.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    Myset::hasher hfn = c1.hash_function();
    std::cout << "hfn('a') == " << hfn('a') << std::endl;
    std::cout << "hfn('b') == " << hfn('b') << std::endl;

    return (0);
}
```

```Output
hfn('a') == 1630279
hfn('b') == 1647086
```

## <a name="insert"></a>  unordered_multiset::insert

Inserisce un elemento o un intervallo di elementi in un oggetto unordered_multiset.

```cpp
// (1) single element
pair<iterator, bool> insert(
    const value_type& Val);

// (2) single element, perfect forwarded
template <class ValTy>
pair<iterator, bool>
insert(
    ValTy&& Val);

// (3) single element with hint
iterator insert(
    const_iterator Where,
    const value_type& Val);

// (4) single element, perfect forwarded, with hint
template <class ValTy>
iterator insert(
    const_iterator Where,
    ValTy&& Val);

// (5) range
template <class InputIterator>
void insert(
    InputIterator First,
    InputIterator Last);

// (6) initializer list
void insert(
    initializer_list<value_type>
IList);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*Val*|Valore di un elemento da inserire in unordered_multiset.|
|*Where*|Posizione in cui iniziare a cercare il punto di inserimento corretto.|
|*ValTy*|Parametro di modello che specifica il tipo di argomento utilizzabili unordered_multiset per costruire un elemento di [value_type](../standard-library/map-class.md#value_type)e perfetto *Val* come argomento.|
|*Primo*|Posizione del primo elemento da copiare.|
|*ultimo*|Posizione immediatamente dopo l'ultimo elemento da copiare.|
|*InputIterator*|Argomento della funzione modello che soddisfa i requisiti di un [iteratore di input](../standard-library/input-iterator-tag-struct.md) che punta agli elementi di un tipo utilizzabili per costruire oggetti [value_type](../standard-library/map-class.md#value_type).|
|*IList*|Oggetto [initializer_list](../standard-library/initializer-list.md) da cui copiare gli elementi.|

### <a name="return-value"></a>Valore restituito

Le funzioni membro di inserimento a elemento singolo, (1) e (2), restituiscono un iteratore alla posizione in cui il nuovo elemento è stato inserito in unordered_multiset.

Le funzioni membro a elemento singolo con suggerimento, (3) e (4), restituiscono un iteratore che fa riferimento alla posizione in cui il nuovo elemento è stato inserito in unordered_multiset.

### <a name="remarks"></a>Note

Questa funzione non invalida alcun puntatore o riferimento, ma potrebbe invalidare tutti gli iteratori per il contenitore.

Se viene generata un'eccezione durante l'inserimento di un solo elemento, ma l'eccezione non si manifesta nella funzione hash del contenitore, lo stato del contenitore non verrà modificato. Se l'eccezione viene generata nella funzione hash, il risultato non sarà definito. Se viene generata un'eccezione durante l'inserimento di più elementi, il contenitore viene lasciato in uno stato non specificato ma comunque valido.

L'oggetto [value_type](../standard-library/map-class.md#value_type) di un contenitore è un typedef appartenente al contenitore e, per set, `unordered_multiset<V>::value_type` è di tipo `const V`.

La funzione membro di intervallo (5) inserisce la sequenza di valori degli elementi in un unordered_multiset che corrisponde a ogni elemento interessato da un iteratore nell'intervallo `[First, Last)`; pertanto *ultimo* non inserito. La funzione membro di contenitore `end()` fa riferimento alla posizione immediatamente dopo l'ultimo elemento nel contenitore. L'istruzione `m.insert(v.begin(), v.end());`, ad esempio, cerca di inserire tutti gli elementi di `v` in `m`.

La funzione membro di elenco di inizializzatori (6) usa un oggetto [initializer_list](../standard-library/initializer-list.md) per copiare gli elementi nell'oggetto unordered_multiset.

Per l'inserimento di un elemento costruito sul posto, ovvero senza operazioni di copia o spostamento, vedere [unordered_multiset::emplace](#emplace) e [unordered_multiset::emplace_hint](#emplace_hint).

Per un esempio di codice, vedere [multiset::insert](../standard-library/multiset-class.md#insert).

## <a name="iterator"></a>  unordered_multiset::iterator

Tipo che fornisce un [iteratore in avanti](../standard-library/forward-iterator-tag-struct.md) costante in grado di leggere gli elementi in un oggetto unordered_multset.

```cpp
typedef implementation-defined iterator;
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [begin](../standard-library/multiset-class.md#begin) per indicazioni su come dichiarare e usare un **iteratore**.

## <a name="key_eq"></a>  unordered_multiset::key_eq

Ottiene l'oggetto archiviato della funzione di confronto.

```cpp
Pred key_eq() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce l'oggetto archiviato della funzione di confronto.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_key_eq.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    Myset::key_equal cmpfn = c1.key_eq();
    std::cout << "cmpfn('a', 'a') == "
        << std::boolalpha << cmpfn('a', 'a') << std::endl;
    std::cout << "cmpfn('a', 'b') == "
        << std::boolalpha << cmpfn('a', 'b') << std::endl;

    return (0);
}
```

```Output
cmpfn('a', 'a') == true
cmpfn('a', 'b') == false
```

## <a name="key_equal"></a>  unordered_multiset::key_equal

Tipo della funzione di confronto.

```cpp
typedef Pred key_equal;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Pred`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_key_equal.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    Myset::key_equal cmpfn = c1.key_eq();
    std::cout << "cmpfn('a', 'a') == "
        << std::boolalpha << cmpfn('a', 'a') << std::endl;
    std::cout << "cmpfn('a', 'b') == "
        << std::boolalpha << cmpfn('a', 'b') << std::endl;

    return (0);
}
```

```Output
cmpfn('a', 'a') == true
cmpfn('a', 'b') == false
```

## <a name="key_type"></a>  unordered_multiset::key_type

Tipo di una chiave di ordinamento.

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Key`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_key_type.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // add a value and reinspect
    Myset::key_type key = 'd';
    Myset::value_type val = key;
    c1.insert(val);

    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
[d] [c] [b] [a]
```

## <a name="load_factor"></a>  unordered_multiset::load_factor

Conta il numero medio di elementi per bucket.

```cpp
float load_factor() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce `(float)`[unordered_multiset::size](#size)`() / (float)`[unordered_multiset::bucket_count](#bucket_count)`()`, il numero medio di elementi per bucket.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_load_factor.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // inspect current parameters
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    // change max_load_factor and redisplay
    c1.max_load_factor(0.10f);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    // rehash and redisplay
    c1.rehash(100);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    return (0);
}
```

## <a name="local_iterator"></a>  unordered_multiset::local_iterator

Tipo di iteratore di bucket.

```cpp
typedef T4 local_iterator;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come iteratore in avanti per un bucket. Qui è descritto come sinonimo del tipo definito dall'implementazione `T4`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_local_iterator.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // inspect bucket containing 'a'
    Myset::local_iterator lit = c1.begin(c1.bucket('a'));
    std::cout << "[" << *lit << "] ";

    return (0);
}
```

```Output
[c] [b] [a]
[a]
```

## <a name="max_bucket_count"></a>  unordered_multiset::max_bucket_count

Ottiene il numero massimo di bucket.

```cpp
size_type max_bucket_count() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce il numero massimo di bucket attualmente consentiti.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_max_bucket_count.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // inspect current parameters
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    // change max_load_factor and redisplay
    c1.max_load_factor(0.10f);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    // rehash and redisplay
    c1.rehash(100);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
bucket_count() == 8
load_factor() == 0.375
max_bucket_count() == 8
max_load_factor() == 4

bucket_count() == 8
load_factor() == 0.375
max_bucket_count() == 8
max_load_factor() == 0.1

bucket_count() == 128
load_factor() == 0.0234375
max_bucket_count() == 128
max_load_factor() == 0.1

```

## <a name="max_load_factor"></a>  unordered_multiset::max_load_factor

Ottiene o imposta il numero massimo di elementi per bucket.

```cpp
float max_load_factor() const;


void max_load_factor(float factor);
```

### <a name="parameters"></a>Parametri

*factor*<br/>
Nuovo fattore di carico massimo.

### <a name="remarks"></a>Note

La prima funzione membro restituisce il fattore di carico massimo archiviato. La seconda funzione membro sostituisce il fattore di carico massimo archiviato con *factor*.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_max_load_factor.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // inspect current parameters
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    // change max_load_factor and redisplay
    c1.max_load_factor(0.10f);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    // rehash and redisplay
    c1.rehash(100);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
bucket_count() == 8
load_factor() == 0.375
max_bucket_count() == 8
max_load_factor() == 4

bucket_count() == 8
load_factor() == 0.375
max_bucket_count() == 8
max_load_factor() == 0.1

bucket_count() == 128
load_factor() == 0.0234375
max_bucket_count() == 128
max_load_factor() == 0.1

```

## <a name="max_size"></a>  unordered_multiset::max_size

Ottiene la dimensione massima della sequenza controllata.

```cpp
size_type max_size() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce la lunghezza della sequenza più lunga che l'oggetto può controllare.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_max_size.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    std::cout << "max_size() == " << c1.max_size() << std::endl;

    return (0);
}
```

```Output
max_size() == 4294967295
```

## <a name="op_eq"></a>  unordered_multiset::operator=

Copia una tabella hash.

```cpp
unordered_multiset& operator=(const unordered_multiset& right);

unordered_multiset& operator=(unordered_multiset&& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*right*|Oggetto [unordered_multiset](../standard-library/unordered-multiset-class.md) copiato nell'oggetto `unordered_multiset`.|

### <a name="remarks"></a>Note

Dopo la cancellazione di tutti gli elementi esistenti in un `unordered_multiset`, `operator=` copia o Sposta il contenuto del *destro* nel `unordered_multiset`.

### <a name="example"></a>Esempio

```cpp
// unordered_multiset_operator_as.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

int main( )
{
    using namespace std;
    unordered_multiset<int> v1, v2, v3;
    unordered_multiset<int>::iterator iter;

    v1.insert(10);

    cout << "v1 = " ;
    for (iter = v1.begin(); iter != v1.end(); iter++)
        cout << *iter << " ";
    cout << endl;

    v2 = v1;
    cout << "v2 = ";
    for (iter = v2.begin(); iter != v2.end(); iter++)
        cout << *iter << " ";
    cout << endl;

    // move v1 into v2
    v2.clear();
    v2 = move(v1);
    cout << "v2 = ";
    for (iter = v2.begin(); iter != v2.end(); iter++)
        cout << *iter << " ";
    cout << endl;
}
```

## <a name="pointer"></a>  unordered_multiset::pointer

Tipo di un puntatore a un elemento.

```cpp
typedef Alloc::pointer pointer;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come puntatore a un elemento della sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_pointer.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::iterator it = c1.begin();
        it != c1.end(); ++it)
        {
        Myset::key_type key = *it;
        Myset::pointer p = &key;
        std::cout << "[" << *p << "] ";
        }
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
```

## <a name="reference"></a>  unordered_multiset::reference

Tipo di un riferimento a un elemento.

```cpp
typedef Alloc::reference reference;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come riferimento a un elemento della sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_reference.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::iterator it = c1.begin();
        it != c1.end(); ++it)
        {
        Myset::key_type key = *it;
        Myset::reference ref = key;
        std::cout << "[" << ref << "] ";
        }
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
```

## <a name="rehash"></a>  unordered_multiset::rehash

Ricompila la tabella hash.

```cpp
void rehash(size_type nbuckets);
```

### <a name="parameters"></a>Parametri

*nbuckets*<br/>
Numero di bucket richiesto.

### <a name="remarks"></a>Note

La funzione membro modifica il numero di bucket in modo da essere almeno *nbuckets* e ricompila la tabella hash in base alle esigenze.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_rehash.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // inspect current parameters
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_load_factor() == " << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    // change max_load_factor and redisplay
    c1.max_load_factor(0.10f);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_load_factor() == " << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    // rehash and redisplay
    c1.rehash(100);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_load_factor() == " << c1.max_load_factor() << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
bucket_count() == 8
load_factor() == 0.375
max_load_factor() == 4

bucket_count() == 8
load_factor() == 0.375
max_load_factor() == 0.1

bucket_count() == 128
load_factor() == 0.0234375
max_load_factor() == 0.1
```

## <a name="size"></a>  unordered_multiset::size

Conta il numero di elementi.

```cpp
size_type size() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce la lunghezza della sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_size.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // clear the container and reinspect
    c1.clear();
    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;
    std::cout << std::endl;

    c1.insert('d');
    c1.insert('e');

    // display contents "[e] [d]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
size == 0
empty() == true

[e] [d]
size == 2
empty() == false
```

## <a name="size_type"></a>  unordered_multiset::size_type

Tipo di una distanza Unsigned tra due elementi.

```cpp
typedef T2 size_type;
```

### <a name="remarks"></a>Note

Il tipo Unsigned Integer descrive un oggetto che può rappresentare la lunghezza di una sequenza controllata. Qui è descritto come sinonimo del tipo definito dall'implementazione `T2`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_size_type.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;
    Myset::size_type sz = c1.size();

    std::cout << "size == " << sz << std::endl;

    return (0);
}
```

```Output
size == 0
```

## <a name="swap"></a>  unordered_multiset::swap

Scambia il contenuto di due contenitori.

```cpp
void swap(unordered_multiset& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Contenitore con cui eseguire lo scambio.

### <a name="remarks"></a>Note

La funzione membro Scambia le sequenze controllate tra `*this` e *destro*. Se [unordered_multiset::get_allocator](#get_allocator)`() == right.get_allocator()`, esegue l'operazione in un tempo costante, genera un'eccezione solo in seguito alla copia dell'oggetto traits archiviato di tipo `Tr` e non invalida alcun riferimento, puntatore o iteratore che definisce gli elementi nelle due sequenze controllate. In caso contrario, esegue un numero di assegnazioni di elementi e chiamate al costruttore proporzionale al numero di elementi nelle due sequenze controllate.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_swap.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    Myset c2;

    c2.insert('d');
    c2.insert('e');
    c2.insert('f');

    c1.swap(c2);

    // display contents "[f] [e] [d]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    swap(c1, c2);

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
[f] [e] [d]
[c] [b] [a]
```

## <a name="unordered_multiset"></a>  unordered_multiset::unordered_multiset

Costruisce un oggetto contenitore.

```cpp
unordered_multiset(
    const unordered_multiset& Right);

explicit unordered_multiset(
    size_type Bucket_count = N0,
    const Hash& Hash = Hash(),
    const Comp& Comp = Comp(),
    const Allocator& Al = Alloc());

unordered_multiset(
    unordered_multiset&& Right);

unordered_set(
    initializer_list<Type> IList);

unordered_set(
    initializer_list<Typ> IList,
    size_type Bucket_count);

unordered_set(
    initializer_list<Type> IList,
    size_type Bucket_count,
    const Hash& Hash);

unordered_set(
    initializer_list<Type> IList,
    size_type Bucket_count,
    const Hash& Hash,
    const Key& Key);

unordered_set(
    initializer_list<Type> IList,
    size_type Bucket_count,
    const Hash& Hash,
    const Key& Key,
    const Allocator& Al);

template <class InputIterator>
unordered_multiset(
    InputIterator First,
    InputIterator Last,
    size_type Bucket_count = N0,
    const Hash& Hash = Hash(),
    const Comp& Comp = Comp(),
    const Allocator& Al = Alloc());
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*InputIterator*|Tipo di iteratore.|
|*Al*|Oggetto allocatore da archiviare.|
|*Comp*|Oggetto della funzione di confronto da archiviare.|
|*hash*|Oggetto della funzione hash da archiviare.|
|*Valore di Bucket_count*|Numero minimo di bucket.|
|*A destra*|Contenitore da copiare.|
|*IList*|Oggetto initializer_list da cui copiare gli elementi.|

### <a name="remarks"></a>Note

Il primo costruttore specifica una copia della sequenza controllata da *destra*. Il secondo costruttore specifica una sequenza controllata vuota. In terzo costruttore inserisce la sequenza di valori degli elementi `[First, Last)`. Il quarto costruttore specifica una copia della sequenza spostando *destra*.

Tutti i costruttori inizializzano inoltre diversi valori archiviati. Per il costruttore di copia, i valori vengono ottenuti dal *destra*. In caso contrario:

Il numero minimo di bucket è l'argomento *Bucket_count*, se presente; in caso contrario è un valore predefinito descritto qui come il valore definito dall'implementazione `N0`.

L'oggetto della funzione hash è l'argomento *Hash*, se presente; in caso contrario, è `Hash()`.

L'oggetto funzione di confronto è l'argomento *Comp*, se presente; in caso contrario, è `Comp()`.

L'oggetto allocatore è l'argomento *Al*, se presente; in caso contrario, è `Alloc()`.

## <a name="value_type"></a>  unordered_multiset::value_type

Tipo di un elemento.

```cpp
typedef Key value_type;
```

### <a name="remarks"></a>Note

Il tipo descrive un elemento nella sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// std__unordered_set__unordered_multiset_value_type.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a]"
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // add a value and reinspect
    Myset::key_type key = 'd';
    Myset::value_type val = key;
    c1.insert(val);

    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
[d] [c] [b] [a]
```

## <a name="see-also"></a>Vedere anche

[<unordered_set>](../standard-library/unordered-set.md)<br/>
[Contenitori](../cpp/containers-modern-cpp.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
