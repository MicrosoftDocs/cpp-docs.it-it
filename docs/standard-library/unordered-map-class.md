---
title: Classe unordered_map | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- unordered_map/std::unordered_map
- unordered_map/std::unordered_map::allocator_type
- unordered_map/std::unordered_map::const_iterator
- unordered_map/std::unordered_map::const_local_iterator
- unordered_map/std::unordered_map::const_pointer
- unordered_map/std::unordered_map::const_reference
- unordered_map/std::unordered_map::difference_type
- unordered_map/std::unordered_map::hasher
- unordered_map/std::unordered_map::iterator
- unordered_map/std::unordered_map::key_equal
- unordered_map/std::unordered_map::key_type
- unordered_map/std::unordered_map::local_iterator
- unordered_map/std::unordered_map::mapped_type
- unordered_map/std::unordered_map::pointer
- unordered_map/std::unordered_map::reference
- unordered_map/std::unordered_map::size_type
- unordered_map/std::unordered_map::value_type
- unordered_map/std::unordered_map::at
- unordered_map/std::unordered_map::begin
- unordered_map/std::unordered_map::bucket
- unordered_map/std::unordered_map::bucket_count
- unordered_map/std::unordered_map::bucket_size
- unordered_map/std::unordered_map::cbegin
- unordered_map/std::unordered_map::cend
- unordered_map/std::unordered_map::clear
- unordered_map/std::unordered_map::count
- unordered_map/std::unordered_map::emplace
- unordered_map/std::unordered_map::emplace_hint
- unordered_map/std::unordered_map::empty
- unordered_map/std::unordered_map::end
- unordered_map/std::unordered_map::equal_range
- unordered_map/std::unordered_map::erase
- unordered_map/std::unordered_map::find
- unordered_map/std::unordered_map::get_allocator
- unordered_map/std::unordered_map::hash
- unordered_map/std::unordered_map::insert
- unordered_map/std::unordered_map::key_eq
- unordered_map/std::unordered_map::load_factor
- unordered_map/std::unordered_map::max_bucket_count
- unordered_map/std::unordered_map::max_load_factor
- unordered_map/std::unordered_map::max_size
- unordered_map/std::unordered_map::rehash
- unordered_map/std::unordered_map::size
- unordered_map/std::unordered_map::swap
- unordered_map/std::unordered_map::unordered_map
- unordered_map/std::unordered_map::hash_function
dev_langs:
- C++
helpviewer_keywords:
- std::unordered_map
- std::unordered_map::allocator_type
- std::unordered_map::const_iterator
- std::unordered_map::const_local_iterator
- std::unordered_map::const_pointer
- std::unordered_map::const_reference
- std::unordered_map::difference_type
- std::unordered_map::hasher
- std::unordered_map::iterator
- std::unordered_map::key_equal
- std::unordered_map::key_type
- std::unordered_map::local_iterator
- std::unordered_map::mapped_type
- std::unordered_map::pointer
- std::unordered_map::reference
- std::unordered_map::size_type
- std::unordered_map::value_type
- std::unordered_map::at
- std::unordered_map::begin
- std::unordered_map::bucket
- std::unordered_map::bucket_count
- std::unordered_map::bucket_size
- std::unordered_map::cbegin
- std::unordered_map::cend
- std::unordered_map::clear
- std::unordered_map::count
- std::unordered_map::emplace
- std::unordered_map::emplace_hint
- std::unordered_map::empty
- std::unordered_map::end
- std::unordered_map::equal_range
- std::unordered_map::erase
- std::unordered_map::find
- std::unordered_map::get_allocator
- std::unordered_map::hash
- std::unordered_map::insert
- std::unordered_map::key_eq
- std::unordered_map::load_factor
- std::unordered_map::max_bucket_count
- std::unordered_map::max_load_factor
- std::unordered_map::max_size
- std::unordered_map::rehash
- std::unordered_map::size
- std::unordered_map::swap
- std::unordered_map::unordered_map
- std::unordered_map::allocator_type
- std::unordered_map::const_iterator
- std::unordered_map::const_local_iterator
- std::unordered_map::const_pointer
- std::unordered_map::const_reference
- std::unordered_map::difference_type
- std::unordered_map::hasher
- std::unordered_map::iterator
- std::unordered_map::key_equal
- std::unordered_map::key_type
- std::unordered_map::local_iterator
- std::unordered_map::mapped_type
- std::unordered_map::pointer
- std::unordered_map::reference
- std::unordered_map::size_type
- std::unordered_map::value_type
- std::unordered_map::at
- std::unordered_map::begin
- std::unordered_map::bucket
- std::unordered_map::bucket_count
- std::unordered_map::bucket_size
- std::unordered_map::cbegin
- std::unordered_map::cend
- std::unordered_map::clear
- std::unordered_map::count
- std::unordered_map::emplace
- std::unordered_map::emplace_hint
- std::unordered_map::empty
- std::unordered_map::end
- std::unordered_map::equal_range
- std::unordered_map::erase
- std::unordered_map::find
- std::unordered_map::get_allocator
- std::unordered_map::hash_function
- std::unordered_map::insert
- std::unordered_map::key_eq
- std::unordered_map::load_factor
- std::unordered_map::max_bucket_count
- std::unordered_map::max_load_factor
- std::unordered_map::max_size
- std::unordered_map::rehash
- std::unordered_map::size
- std::unordered_map::swap
ms.assetid: 7cf7cfa1-16e7-461c-a9b2-3b8d8ec24e0d
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f93e0db2515f7d0ce6d15536aae898cbebf27167
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="unorderedmap-class"></a>Classe unordered_map

La classe modello descrive un oggetto che controlla una sequenza di elementi di lunghezza diversa di tipo `std::pair<const Key, Ty>`. La sequenza viene ordinata in modo debole da una funzione hash, che esegue il partizionamento della sequenza in un set ordinato di sottosequenze denominate bucket. In ogni bucket una funzione di confronto determina se una coppia di elementi ha un ordinamento equivalente. In ogni elemento sono archiviati due oggetti, una chiave di ordinamento e un valore. La sequenza viene rappresentata in modo da consentire la ricerca, l'inserimento e la rimozione di un elemento arbitrario mediante una serie di operazioni che possono essere indipendenti dal numero di elementi della sequenza (tempo costante), almeno quando tutti i bucket sono più o meno lunghi uguali. Nella peggiore delle ipotesi, quando tutti gli elementi si trovano in un unico bucket, il numero di operazioni è proporzionale al numero di elementi della sequenza (tempo lineare). Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.

## <a name="syntax"></a>Sintassi

```cpp
template <class Key,
    class Ty,
    class Hash = std::hash<Key>,
    class Pred = std::equal_to<Key>,
    class Alloc = std::allocator<std::pair<const Key, Ty>>>
class unordered_map;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`Key`|Tipo di chiave.|
|`Ty`|Tipo mappato.|
|`Hash`|Tipo di oggetto della funzione hash.|
|`Pred`|Tipo di oggetto della funzione di confronto di uguaglianza.|
|`Alloc`|Classe Allocator.|

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
|[mapped_type](#mapped_type)|Tipo di un valore mappato associato a ogni chiave.|
|[pointer](#pointer)|Tipo di un puntatore a un elemento.|
|[reference](#reference)|Tipo di un riferimento a un elemento.|
|[size_type](#size_type)|Tipo di una distanza Unsigned tra due elementi.|
|[value_type](#value_type)|Tipo di un elemento.|

|Funzione membro|Descrizione|
|-|-|
|[at](#at)|Trova un elemento con la chiave specificata.|
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
|[unordered_map](#unordered_map)|Costruisce un oggetto contenitore.|

|Operatore|Descrizione|
|-|-|
|[unordered_map::operator[]](#op_at)|Trova o inserisce un elemento con la chiave specificata.|
|[unordered_map::operator=](#op_eq)|Copia una tabella hash.|

## <a name="remarks"></a>Note

L'oggetto ordina la sequenza da esso controllata chiamando due oggetti archiviati, un oggetto della funzione di confronto di tipo [unordered_map::key_equal](#key_equal) e un oggetto della funzione hash di tipo [unordered_map::hasher](#hasher). È possibile accedere al primo oggetto archiviato chiamando la funzione membro [unordered_map::key_eq](#key_eq)`()` ed è possibile accedere al secondo oggetto archiviato chiamando la funzione membro [unordered_map::hash_function](#hash)`()`. In particolare, per tutti i valori `X` e `Y` di tipo `Key`, la chiamata a `key_eq()(X, Y)` restituisce true solo se i valori dei due argomenti hanno un ordinamento equivalente; la chiamata a `hash_function()(keyval)` produce una distribuzione di valori di tipo `size_t`. A differenza della classe modello [unordered_multimap](../standard-library/unordered-multimap-class.md), un oggetto della classe modello `unordered_map` garantisce che `key_eq()(X, Y)` sia sempre false per due elementi qualsiasi della sequenza controllata. Le chiavi sono univoche.

L'oggetto consente inoltre di archiviare un fattore di carico massimo che specifica il numero medio massimo di elementi per bucket desiderato. Se l'inserimento di un elemento comporta il superamento del fattore di carico massimo da parte di [unordered_map::load_factor](#load_factor)`()`, il contenitore aumenta il numero dei bucket e ricompila la tabella hash in base alle necessità.

L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di confronto, dall'ordine di inserimento, dal fattore di carico massimo e dal numero corrente di bucket. Non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata. Si può tuttavia avere sempre la certezza dell'adiacenza dei subset di elementi con un ordinamento equivalente nella sequenza controllata.

L'oggetto alloca e libera la memoria per la sequenza da esso controllata tramite un oggetto allocatore archiviato di tipo [unordered_map::allocator_type](#allocator_type). Tale oggetto allocatore deve avere la stessa interfaccia esterna di un oggetto della classe modello `allocator`. Si noti che l'oggetto allocatore archiviato non viene copiato dopo l'assegnazione dell'oggetto contenitore.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<unordered_map>

**Spazio dei nomi:** std

## <a name="allocator_type"></a>  unordered_map::allocator_type

Tipo di un allocatore per gestire l'archiviazione.

```cpp
typedef Alloc allocator_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Alloc`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_allocator_type.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
typedef std::allocator<std::pair<const char, int> > Myalloc;
int main()
{
    Mymap c1;

    Mymap::allocator_type al = c1.get_allocator();
    std::cout << "al == std::allocator() is "
        << std::boolalpha << (al == Myalloc()) << std::endl;

    return (0);
}

```

```Output
al == std::allocator() is true
```

## <a name="at"></a>  unordered_map::at

Trova un elemento in una classe unordered_map con un valore di chiave specificato.

```cpp
Ty& at(const Key& key);
const Ty& at(const Key& key) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`key`|Valore di chiave da trovare.|

### <a name="return-value"></a>Valore restituito

Riferimento al valore dei dati dell'elemento trovato.

### <a name="remarks"></a>Note

Se il valore della chiave dell'argomento non è presente, con la funzione viene generato un oggetto di classe `out_of_range`.

### <a name="example"></a>Esempio

```cpp
// unordered_map_at.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // find and show elements
    std::cout << "c1.at('a') == " << c1.at('a') << std::endl;
    std::cout << "c1.at('b') == " << c1.at('b') << std::endl;
    std::cout << "c1.at('c') == " << c1.at('c') << std::endl;

    return (0);
}
```

## <a name="begin"></a>  unordered_map::begin

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
|`nbucket`|Numero di bucket.|

### <a name="remarks"></a>Note

Le prime due funzioni membro restituiscono un iteratore in avanti che punta al primo elemento della sequenza (o appena oltre la fine di una sequenza vuota). Le ultime due funzioni membro restituiscono un iteratore in avanti che punta al primo elemento del bucket `nbucket` (o appena oltre la fine di un bucket vuoto).

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_begin.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

#typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    // inspect first two items " [c 3] [b 2]"
    Mymap::iterator it2 = c1.begin();
    std::cout << " [" << it2->first << ", " << it2->second << "]";
    ++it2;
    std::cout << " [" << it2->first << ", " << it2->second << "]";
    std::cout << std::endl;

    // inspect bucket containing 'a'
    Mymap::const_local_iterator lit = c1.begin(c1.bucket('a'));
    std::cout << " [" << lit->first << ", " << lit->second << "]";

    return (0);
}
```

```Output
[c, 3] [b, 2] [a, 1]
[c, 3] [b, 2]
[a, 1]
```

## <a name="bucket"></a>  unordered_map::bucket

Ottiene il numero di bucket relativo a un valore della chiave.

```cpp
size_type bucket(const Key& keyval) const;
```

### <a name="parameters"></a>Parametri

`keyval` Il valore della chiave per eseguire il mapping.

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di bucket che corrisponde attualmente al valore della chiave `keyval`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_bucket.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    // display buckets for keys
    Mymap::size_type bs = c1.bucket('a');
    std::cout << "bucket('a') == " << bs << std::endl;
    std::cout << "bucket_size(" << bs << ") == " << c1.bucket_size(bs)
        << std::endl;

    return (0);
}
```

```Output
 [c, 3] [b, 2] [a, 1]
bucket('a') == 7
bucket_size(7) == 1
```

## <a name="bucket_count"></a>  unordered_map::bucket_count

Ottiene il numero di bucket.

```cpp
size_type bucket_count() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce il numero corrente di bucket.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_bucket_count.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
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
[c, 3][b, 2][a, 1]
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

## <a name="bucket_size"></a>  unordered_map::bucket_size

Ottiene le dimensioni di un bucket.

```cpp
size_type bucket_size(size_type nbucket) const;
```

### <a name="parameters"></a>Parametri

`nbucket` Numero di bucket.

### <a name="remarks"></a>Note

La funzione membro restituisce la dimensione del numero di bucket `nbucket`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_bucket_size.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    // display buckets for keys
    Mymap::size_type bs = c1.bucket('a');
    std::cout << "bucket('a') == " << bs << std::endl;
    std::cout << "bucket_size(" << bs << ") == " << c1.bucket_size(bs)
        << std::endl;

    return (0);
}
```

```Output
 [c, 3] [b, 2] [a, 1]
bucket('a') == 7
bucket_size(7) == 1
```

## <a name="cbegin"></a>  unordered_map::cbegin

Restituisce un iteratore `const` che punta al primo elemento dell'intervallo.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di accesso in avanti `const` che punta al primo elemento dell'intervallo o alla posizione oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()`).

### <a name="remarks"></a>Note

Con il valore restituito di `cbegin`, gli elementi dell'intervallo non possono essere modificati.

È possibile usare questa funzione membro anziché la funzione membro `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, si consideri `Container` come un contenitore (non `const`) modificabile di qualsiasi tipo che supporta `begin()` e `cbegin()`.

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator
```

## <a name="cend"></a>  unordered_map::cend

Restituisce un iteratore `const` che punta alla posizione oltre l'ultimo elemento di un intervallo.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore di accesso in avanti `const` che punta oltre la fine dell'intervallo.

### <a name="remarks"></a>Note

`cend` viene utilizzato per verificare se un iteratore ha superato la fine del relativo intervallo.

È possibile usare questa funzione membro anziché la funzione membro `end()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, si consideri `Container` come un contenitore (non `const`) modificabile di qualsiasi tipo che supporta `end()` e `cend()`.

```cpp
auto i1 = Container.end();
// i1 is Container<T>::iterator
auto i2 = Container.cend();
// i2 is Container<T>::const_iterator
```

Non è consigliabile dereferenziare il valore restituito da `cend`.

## <a name="clear"></a>  unordered_map::clear

Rimuove tutti gli elementi.

```cpp
void clear();
```

### <a name="remarks"></a>Note

La funzione membro chiama [unordered_map::erase](#erase)`(` [unordered_map::begin](#begin)`(),` [unordered_map::end](#end)`())`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_clear.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    // clear the container and reinspect
    c1.clear();
    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;
    std::cout << std::endl;

    c1.insert(Mymap::value_type('d', 4));
    c1.insert(Mymap::value_type('e', 5));

    // display contents " [e 5] [d 4]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;

    return (0);
}

```

```Output
 [c, 3] [b, 2] [a, 1]
size == 0
empty() == true

[e, 5] [d, 4]
size == 2
empty() == false
```

## <a name="const_iterator"></a>  unordered_map::const_iterator

Tipo di un iteratore costante per la sequenza controllata.

```cpp
typedef T1 const_iterator;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come iteratore costante in avanti per la sequenza controllata. Qui è descritto come sinonimo del tipo definito dall'implementazione `T1`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_const_iterator.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
}

```

```Output
[c, 3] [b, 2] [a, 1]
```

## <a name="const_local_iterator"></a>  unordered_map::const_local_iterator

Tipo di un iteratore di bucket costante per la sequenza controllata.

```cpp
typedef T5 const_local_iterator;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come iteratore in avanti costante per un bucket. Qui è descritto come sinonimo del tipo definito dall'implementazione `T5`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_const_local_iterator.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    // inspect bucket containing 'a'
    Mymap::const_local_iterator lit = c1.begin(c1.bucket('a'));
    std::cout << " [" << lit->first << ", " << lit->second << "]";

    return (0);
}

```

```Output
[c, 3] [b, 2] [a, 1]
[a, 1]
```

## <a name="const_pointer"></a>  unordered_map::const_pointer

Tipo di un puntatore costante a un elemento.

```cpp
typedef Alloc::const_pointer const_pointer;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come puntatore costante a un elemento della sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_const_pointer.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::iterator it = c1.begin();
        it != c1.end(); ++it)
    {
        Mymap::const_pointer p = &*it;
        std::cout << " [" << p->first << ", " << p->second << "]";
    }
    std::cout << std::endl;

    return (0);
}

```

```Output
[c, 3] [b, 2] [a, 1]
```

## <a name="const_reference"></a>  unordered_map::const_reference

Tipo di un riferimento costante a un elemento.

```cpp
typedef Alloc::const_reference const_reference;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come riferimento costante a un elemento della sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_const_reference.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::iterator it = c1.begin();
        it != c1.end(); ++it)
    {
        Mymap::const_reference ref = *it;
        std::cout << " [" << ref.first << ", " << ref.second << "]";
    }
    std::cout << std::endl;

    return (0);
}

```

```Output
[c, 3] [b, 2] [a, 1]
```

## <a name="count"></a>  unordered_map::count

Trova il numero di elementi corrispondenti a una chiave specificata.

```cpp
size_type count(const Key& keyval) const;
```

### <a name="parameters"></a>Parametri

`keyval` Valore della chiave da cercare.

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di elementi nell'intervallo delimitato da [unordered_map::equal_range](#equal_range)`(keyval)`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_count.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    std::cout << "count('A') == " << c1.count('A') << std::endl;
    std::cout << "count('b') == " << c1.count('b') << std::endl;
    std::cout << "count('C') == " << c1.count('C') << std::endl;

    return (0);
}

```

```Output
 [c, 3] [b, 2] [a, 1]
count('A') == 0
count('b') == 1
count('C') == 0
```

## <a name="difference_type"></a>  unordered_map::difference_type

Tipo di una distanza Signed tra due elementi.

```cpp
typedef T3 difference_type;
```

### <a name="remarks"></a>Note

Il tipo di valore integer con segno descrive un oggetto che può rappresentare la differenza tra gli indirizzi di due elementi qualsiasi della sequenza controllata. Qui è descritto come sinonimo del tipo definito dall'implementazione `T3`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_difference_type.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    // compute positive difference
    Mymap::difference_type diff = 0;
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        ++diff;
    std::cout << "end()-begin() == " << diff << std::endl;

    // compute negative difference
    diff = 0;
    for (Mymap::const_iterator it = c1.end();
        it != c1.begin(); --it)
        --diff;
    std::cout << "begin()-end() == " << diff << std::endl;

    return (0);
}
```

```Output
 [c, 3] [b, 2] [a, 1]
end()-begin() == 3
begin()-end() == -3
```

## <a name="emplace"></a>  unordered_map::emplace

Inserisce un elemento costruito sul posto (senza operazioni di copia o spostamento), in un oggetto unordered_map.

```cpp
template <class... Args>
pair<iterator, bool>  emplace( Args&&... args);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`args`|Argomenti inoltrati per costruire un elemento da inserire nell'oggetto unordered_map a meno che non vi sia già contenuto un elemento il cui valore è ordinato in modo equivalente.|

### <a name="return-value"></a>Valore restituito

Oggetto `pair` il cui componente `bool` restituisce true se è stato effettuato un inserimento e false se in `unordered_map` è già contenuto un elemento la cui chiave ha un valore equivalente nell'ordinamento e il cui componente iteratore restituisce l'indirizzo in cui è stato inserito un nuovo elemento o in cui si trovava già l'elemento.

Per accedere al componente iteratore di una coppia `pr` restituita da questa funzione membro, usare `pr.first` e per deferenziarlo, usare `*(pr.first)`. Per accedere al componente `bool` di una coppia `pr` restituita da questa funzione membro, usare `pr.second`.

### <a name="remarks"></a>Note

Questa funzione non invalida alcun iteratore né riferimento.

Durante l'inserimento, se viene generata un'eccezione che non si trova nella funzione hash del contenitore, quest'ultimo non viene modificato. Se l'eccezione viene generata nella funzione hash, il risultato non sarà definito.

Per un esempio di codice, vedere [map::emplace](../standard-library/map-class.md#emplace).

## <a name="emplace_hint"></a>  unordered_map::emplace_hint

Inserisce un elemento costruito in locale (senza che vengano eseguite operazioni di copia o di spostamento), con un suggerimento sulla posizione.

```cpp
template <class... Args>
iterator emplace_hint(const_iterator where, Args&&... args);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`args`|Argomenti inoltrati per costruire un elemento da inserire nell'oggetto unordered_map a meno che quest'ultimo non contenga già tale elemento o, più in generale, a meno che non contenga già un elemento la cui la chiave sia equivalentemente ordinata.|
|`where`|Suggerimento sulla posizione per avviare la ricerca del punto di inserimento corretto.|

### <a name="return-value"></a>Valore restituito

Iteratore all'elemento appena inserito.

Se l'inserimento ha avuto esito negativo perché l'elemento esiste già, restituisce un iteratore all'elemento esistente.

### <a name="remarks"></a>Note

Questa funzione non invalida alcun riferimento.

Durante l'inserimento, se viene generata un'eccezione che non si trova nella funzione hash del contenitore, quest'ultimo non viene modificato. Se l'eccezione viene generata nella funzione hash, il risultato non sarà definito.

L'oggetto [value_type](../standard-library/map-class.md#value_type) di un elemento è una coppia, pertanto il valore di un elemento sarà una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dei dati dell'elemento.

Per un esempio di codice, vedere [map::emplace_hint](../standard-library/map-class.md#emplace_hint).

## <a name="empty"></a>  unordered_map::empty

Verifica se sono presenti o meno degli elementi.

```cpp
bool empty() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce true per una sequenza controllata vuota.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_empty.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    // clear the container and reinspect
    c1.clear();
    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;
    std::cout << std::endl;

    c1.insert(Mymap::value_type('d', 4));
    c1.insert(Mymap::value_type('e', 5));

    // display contents " [e 5] [d 4]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;

    return (0);
}
```

```Output
 [c, 3] [b, 2] [a, 1]
size == 0
empty() == true

[e, 5] [d, 4]
size == 2
empty() == false
```

## <a name="end"></a>  unordered_map::end

Designa la fine della sequenza controllata.

```cpp
iterator end();
const_iterator end() const;
local_iterator end(size_type nbucket);
const_local_iterator end(size_type nbucket) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`nbucket`|Numero di bucket.|

### <a name="remarks"></a>Note

Le prime due funzioni membro restituiscono un iteratore in avanti che punta poco oltre la fine della sequenza. Le ultime due funzioni membro restituiscono un iteratore in avanti che punta poco oltre la fine del bucket `nbucket`.

## <a name="equal_range"></a>  unordered_map::equal_range

Trova un intervallo che corrisponde a una chiave specificata.

```cpp
std::pair<iterator, iterator>  equal_range(const Key& keyval);
std::pair<const_iterator, const_iterator>  equal_range(const Key& keyval) const;
```

### <a name="parameters"></a>Parametri

`keyval` Valore della chiave da cercare.

### <a name="remarks"></a>Note

La funzione membro restituisce una coppia di iteratori `X` , in modo tale che `[X.first, X.second)` delimiti solo gli elementi della sequenza controllata associati a un ordinamento equivalente a `keyval`. Se tali elementi non esistono, entrambi gli iteratori sono `end()`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_equal_range.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    // display results of failed search
    std::pair<Mymap::iterator, Mymap::iterator> pair1 =
        c1.equal_range('x');
    std::cout << "equal_range('x'):";
    for (; pair1.first != pair1.second; ++pair1.first)
        std::cout << " [" << pair1.first->first
        << ", " << pair1.first->second << "]";
    std::cout << std::endl;

    // display results of successful search
    pair1 = c1.equal_range('b');
    std::cout << "equal_range('b'):";
    for (; pair1.first != pair1.second; ++pair1.first)
        std::cout << " [" << pair1.first->first
        << ", " << pair1.first->second << "]";
    std::cout << std::endl;

    return (0);
}

```

```Output
 [c, 3] [b, 2] [a, 1]
equal_range('x'):
equal_range('b'): [b, 2]
```

## <a name="erase"></a>  unordered_map::erase

Rimuove un elemento o un intervallo di elementi in un oggetto unordered_map dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.

```cpp
iterator erase(const_iterator Where);
iterator erase(const_iterator First, const_iterator Last);
size_type erase(const key_type& Key);
```

### <a name="parameters"></a>Parametri

`Where` Posizione dell'elemento da rimuovere.

`First` Posizione del primo elemento da rimuovere.

`Last` Posizione immediatamente successiva all'ultimo elemento da rimuovere.

`Key` Il valore della chiave degli elementi da rimuovere.

### <a name="return-value"></a>Valore restituito

Per le prime due funzioni membro, iteratore bidirezionale che definisce il primo elemento rimanente oltre gli eventuali elementi rimossi o elemento che rappresenta la fine dell'oggetto map se tali elementi non sono presenti.

Per la terza funzione membro, restituisce il numero di elementi rimossi dall'oggetto unordered_map.

### <a name="remarks"></a>Note

Per un esempio di codice, vedere [map::erase](../standard-library/map-class.md#erase).

## <a name="find"></a>  unordered_map::find

Trova un elemento che corrisponde a una chiave specificata.

```cpp
const_iterator find(const Key& keyval) const;
```

### <a name="parameters"></a>Parametri

`keyval` Valore della chiave da cercare.

### <a name="remarks"></a>Note

La funzione membro restituisce [unordered_map::equal_range](#equal_range)`(keyval).first`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_find.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    // try to find and fail
    std::cout << "find('A') == "
        << std::boolalpha << (c1.find('A') != c1.end()) << std::endl;

    // try to find and succeed
    Mymap::iterator it = c1.find('b');
    std::cout << "find('b') == "
        << std::boolalpha << (it != c1.end())
        << ": [" << it->first << ", " << it->second << "]" << std::endl;

    return (0);
}

```

```Output
 [c, 3] [b, 2] [a, 1]
find('A') == false
find('b') == true: [b, 2]
```

## <a name="get_allocator"></a>  unordered_map::get_allocator

Ottiene l'oggetto allocatore archiviato.

```cpp
Alloc get_allocator() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce l'oggetto allocatore archiviato.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_get_allocator.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
typedef std::allocator<std::pair<const char, int> > Myalloc;
int main()
{
    Mymap c1;

    Mymap::allocator_type al = c1.get_allocator();
    std::cout << "al == std::allocator() is "
        << std::boolalpha << (al == Myalloc()) << std::endl;

    return (0);
}

```

```Output
al == std::allocator() is true
```

## <a name="hash"></a>  unordered_map::hash_function

Ottiene l'oggetto della funzione hash archiviato.

```cpp
Hash hash_function() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce l'oggetto archiviato della funzione hash.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_hash_function.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    Mymap::hasher hfn = c1.hash_function();
    std::cout << "hfn('a') == " << hfn('a') << std::endl;
    std::cout << "hfn('b') == " << hfn('b') << std::endl;

    return (0);
}

```

```Output
hfn('a') == 1630279
hfn('b') == 1647086
```

## <a name="hasher"></a>  unordered_map::hasher

Tipo della funzione hash.

```cpp
typedef Hash hasher;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Hash`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_hasher.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    Mymap::hasher hfn = c1.hash_function();
    std::cout << "hfn('a') == " << hfn('a') << std::endl;
    std::cout << "hfn('b') == " << hfn('b') << std::endl;

    return (0);
}

```

```Output
hfn('a') == 1630279
hfn('b') == 1647086
```

## <a name="insert"></a>  unordered_map::insert

Inserisce un elemento o un intervallo di elementi in un oggetto unordered_map.

```cpp
// (1) single element
pair<iterator, bool> insert(    const value_type& Val);


// (2) single element, perfect forwarded
template <class ValTy>
pair<iterator, bool>
insert(    ValTy&& Val);


// (3) single element with hint
iterator insert(    const_iterator Where,
    const value_type& Val);


// (4) single element, perfect forwarded, with hint
template <class ValTy>
iterator insert(    const_iterator Where,
    ValTy&& Val);


// (5) range
template <class InputIterator>
void insert(InputIterator First,
    InputIterator Last);


// (6) initializer list
void insert(initializer_list<value_type>
IList);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`Val`|Valore di un elemento da inserire in unordered_map a meno che non vi sia già contenuto un elemento la cui chiave è ordinata in modo equivalente.|
|`Where`|Posizione in cui iniziare a cercare il punto di inserimento corretto.|
|`ValTy`|Parametro di modello che specifica il tipo di argomento che può essere usato da unordered_map per costruire un elemento di [value_type](../standard-library/map-class.md#value_type) e che esegue l'inoltro perfetto di `Val` come argomento.|
|`First`|Posizione del primo elemento da copiare.|
|`Last`|Posizione immediatamente dopo l'ultimo elemento da copiare.|
|`InputIterator`|Argomento della funzione modello che soddisfa i requisiti di un [iteratore di input](../standard-library/input-iterator-tag-struct.md) che punta agli elementi di un tipo utilizzabili per costruire oggetti [value_type](../standard-library/map-class.md#value_type).|
|`IList`|Oggetto [initializer_list](../standard-library/initializer-list.md) da cui copiare gli elementi.|

### <a name="return-value"></a>Valore restituito

Le funzioni membro a elemento singolo (1) e (2) restituiscono un oggetto [pair](../standard-library/pair-structure.md) il cui componente `bool` è true se è stato eseguito un inserimento e false se l'oggetto unordered_map contiene già un elemento la cui chiave ha un valore equivalente nell'ordinamento. Il componente dell'iteratore della coppia di valori restituita punta all'elemento appena inserito se il componente `bool` è true oppure all'elemento esistente se il componente `bool` è false.

Le funzioni membro a elemento singolo con suggerimento, (3) e (4), restituiscono un iteratore che punta alla posizione in cui il nuovo elemento è stato inserito in unordered_map o all'elemento già esistente se esiste un elemento con una chiave equivalente.

### <a name="remarks"></a>Note

Non ci sono iteratori, puntatori o riferimenti invalidati da questa funzione.

Se viene generata un'eccezione durante l'inserimento di un solo elemento, ma l'eccezione non si manifesta nella funzione hash del contenitore, lo stato del contenitore non verrà modificato. Se l'eccezione viene generata nella funzione hash, il risultato non sarà definito. Se viene generata un'eccezione durante l'inserimento di più elementi, il contenitore viene lasciato in uno stato non specificato ma comunque valido.

Per accedere al componente dell'iteratore di una `pair` `pr` restituita dalle funzioni membro a elemento singolo, usare `pr.first`; per dereferenziare l'iteratore all'interno della coppia restituita, usare `*pr.first` fornendo un elemento. Per accedere al componente `bool`, usare `pr.second`. Per un esempio, vedere il codice di esempio più avanti in questo articolo.

L'oggetto [value_type](../standard-library/map-class.md#value_type) di un contenitore è un typedef appartenente al contenitore e, per map, `map<K, V>::value_type` è `pair<const K, V>`. Il valore di un elemento è una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dati dell'elemento.

La funzione membro di intervallo (5) inserisce la sequenza di valori di elemento in un unordered_map che corrisponde a ogni elemento interessato da un iteratore nell'intervallo `[First, Last)`. Non viene quindi inserito `Last`. La funzione membro di contenitore `end()` fa riferimento alla posizione immediatamente dopo l'ultimo elemento nel contenitore. L'istruzione `m.insert(v.begin(), v.end());`, ad esempio, cerca di inserire tutti gli elementi di `v` in `m`. Solo gli elementi che hanno valori univoci nell'intervallo vengono inseriti; i duplicati vengono ignorati. Per osservare quali elementi vengono rifiutati, usare le versioni con un singolo elemento di `insert`.

La funzione membro di elenco di inizializzatori (6) usa un oggetto [initializer_list](../standard-library/initializer-list.md) per copiare gli elementi nell'oggetto unordered_map.

Per l'inserimento di un elemento costruito sul posto, ovvero senza operazioni di copia o spostamento, vedere [unordered_map::emplace](#emplace) e [unordered_map::emplace_hint](#emplace_hint).

Per un esempio di codice, vedere [map::insert](../standard-library/map-class.md#insert).

## <a name="iterator"></a>  unordered_map::iterator

Tipo di un iteratore per la sequenza controllata.

```cpp
typedef T0 iterator;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come iteratore in avanti per la sequenza controllata. Qui è descritto come sinonimo del tipo definito dall'implementazione `T0`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_iterator.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
    }

```

```Output
[c, 3] [b, 2] [a, 1]
```

## <a name="key_eq"></a>  unordered_map::key_eq

Ottiene l'oggetto archiviato della funzione di confronto.

```cpp
Pred key_eq() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce l'oggetto archiviato della funzione di confronto.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_key_eq.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    Mymap::key_equal cmpfn = c1.key_eq();
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

## <a name="key_equal"></a>  unordered_map::key_equal

Tipo della funzione di confronto.

```cpp
typedef Pred key_equal;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Pred`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_key_equal.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    Mymap::key_equal cmpfn = c1.key_eq();
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

## <a name="key_type"></a>  unordered_map::key_type

Tipo di una chiave di ordinamento.

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Key`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_key_type.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// add a value and reinspect
    Mymap::key_type key = 'd';
    Mymap::mapped_type mapped = 4;
    Mymap::value_type val = Mymap::value_type(key, mapped);
    c1.insert(val);

    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
    }

```

```Output
[c, 3] [b, 2] [a, 1]
[d, 4] [c, 3] [b, 2] [a, 1]
```

## <a name="load_factor"></a>  unordered_map::load_factor

Conta il numero medio di elementi per bucket.

```cpp
float load_factor() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce `(float)`[unordered_map::size](#size)`() / (float)`[unordered_map::bucket_count](#bucket_count)`()`, il numero medio di elementi per bucket.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_load_factor.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
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
 [c, 3] [b, 2] [a, 1]
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

## <a name="local_iterator"></a>  unordered_map::local_iterator

Tipo di iteratore di bucket.

```cpp
typedef T4 local_iterator;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come iteratore in avanti per un bucket. Qui è descritto come sinonimo del tipo definito dall'implementazione `T4`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_local_iterator.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// inspect bucket containing 'a'
    Mymap::local_iterator lit = c1.begin(c1.bucket('a'));
    std::cout << " [" << lit->first << ", " << lit->second << "]";

    return (0);
    }

```

```Output
[c, 3] [b, 2] [a, 1]
[a, 1]
```

## <a name="mapped_type"></a>  unordered_map::mapped_type

Tipo di un valore mappato associato a ogni chiave.

```cpp
typedef Ty mapped_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Ty`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_mapped_type.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// add a value and reinspect
    Mymap::key_type key = 'd';
    Mymap::mapped_type mapped = 4;
    Mymap::value_type val = Mymap::value_type(key, mapped);
    c1.insert(val);

    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
    }

```

```Output
[c, 3] [b, 2] [a, 1]
[d, 4] [c, 3] [b, 2] [a, 1]
```

## <a name="max_bucket_count"></a>  unordered_map::max_bucket_count

Ottiene il numero massimo di bucket.

```cpp
size_type max_bucket_count() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce il numero massimo di bucket attualmente consentiti.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_max_bucket_count.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
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
 [c, 3] [b, 2] [a, 1]
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

## <a name="max_load_factor"></a>  unordered_map::max_load_factor

Ottiene o imposta il numero massimo di elementi per bucket.

```cpp
float max_load_factor() const;


void max_load_factor(float factor);
```

### <a name="parameters"></a>Parametri

`factor` Nuovo fattore di carico massimo.

### <a name="remarks"></a>Note

La prima funzione membro restituisce il fattore di carico massimo archiviato. La seconda funzione membro sostituisce il fattore di carico massimo archiviato con `factor`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_max_load_factor.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
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
 [c, 3] [b, 2] [a, 1]
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

## <a name="max_size"></a>  unordered_map::max_size

Ottiene la dimensione massima della sequenza controllata.

```cpp
size_type max_size() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce la lunghezza della sequenza più lunga che l'oggetto può controllare.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_max_size.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    std::cout << "max_size() == " << c1.max_size() << std::endl;

    return (0);
    }

```

```Output
max_size() == 536870911
```

## <a name="op_at"></a>  unordered_map::operator[]

Trova o inserisce un elemento con la chiave specificata.

```cpp
Ty& operator[](const Key& keyval);

Ty& operator[](Key&& keyval);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`Keyval`|Valore della chiave da trovare o inserire.|

### <a name="return-value"></a>Valore restituito

Riferimento al valore dei dati dell'elemento inserito.

### <a name="remarks"></a>Note

Se non viene trovato il valore della chiave dell'argomento, viene inserito insieme al valore predefinito del tipo di dati.

È possibile usare `operator[]` per inserire elementi in un oggetto map *m* con *m*[_ *Key*] = `DataValue`; in cui `DataValue` è il valore dell'oggetto `mapped_type` dell'elemento con valore di chiave \_ *Key*.

Quando si utilizza `operator[]` per inserire gli elementi, il riferimento restituito non indica se un inserimento modifica un elemento già esistente o ne crea uno nuovo. Le funzioni membro [find](../standard-library/map-class.md#find) e [insert](../standard-library/map-class.md#insert) possono essere usate per determinare se un elemento con una chiave specificata è già presente prima di un inserimento.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_operator_sub.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>
#include <string>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// try to find and fail
    std::cout << "c1['A'] == " << c1['A'] << std::endl;

// try to find and succeed
    std::cout << "c1['a'] == " << c1['a'] << std::endl;

// redisplay contents
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// insert by moving key
    std::unordered_map<string, int> c2;
    std::string str("abc");
    std::cout << "c2[std::move(str)] == " << c2[std::move(str)] << std::endl;
    std::cout << "c2["abc"] == " << c2["abc"] << std::endl;

    return (0);
    }

```

```Output
 [c, 3] [b, 2] [a, 1]
c1['A'] == 0
c1['a'] == 1
 [c, 3] [b, 2] [A, 0] [a, 1]
c2[move(str)] == 0
c2["abc"] == 1
```

### <a name="remarks"></a>Note

La funzione membro determina che l'iteratore `where` è il valore restituito di [unordered_map::insert](#insert)`(` [unordered_map::value_type](#value_type)`(keyval, Ty())`. Se non esiste un elemento di questo tipo, inserisce un elemento con la chiave specificata. Restituisce quindi un riferimento a `(*where).second`.

## <a name="op_eq"></a>  unordered_map::operator=

Sostituisce gli elementi di questo oggetto unordered_map usando gli elementi di un altro oggetto unordered_map.

```cpp
unordered_map& operator=(const unordered_map& right);

unordered_map& operator=(unordered_map&& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`right`|Oggetto unordered_map da cui la funzione operatore assegna il contenuto.|

### <a name="remarks"></a>Note

La prima versione copia tutti gli elementi da `right` a questo oggetto unordered_map.

La seconda versione sposta tutti gli elementi da `right` a questo oggetto unordered_map.

Tutti gli elementi presenti in questo oggetto unordered_map prima dell'esecuzione di `operator`= vengono eliminati.

### <a name="example"></a>Esempio

```cpp
// unordered_map_operator_as.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

int main( )
   {
   using namespace std;
   unordered_map<int, int> v1, v2, v3;
   unordered_map<int, int>::iterator iter;

   v1.insert(pair<int, int>(1, 10));

   cout << "v1 = " ;
   for (iter = v1.begin(); iter != v1.end(); iter++)
      cout << iter->second << " ";
   cout << endl;

   v2 = v1;
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << iter->second << " ";
   cout << endl;

// move v1 into v2
   v2.clear();
   v2 = move(v1);
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << iter->second << " ";
   cout << endl;
   }
```

## <a name="pointer"></a>  unordered_map::pointer

Tipo di un puntatore a un elemento.

```cpp
typedef Alloc::pointer pointer;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come puntatore a un elemento della sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_pointer.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::iterator it = c1.begin();
        it != c1.end(); ++it)
        {
        Mymap::pointer p = &*it;
        std::cout << " [" << p->first << ", " << p->second << "]";
        }
    std::cout << std::endl;

    return (0);
    }

```

```Output
[c, 3] [b, 2] [a, 1]
```

## <a name="reference"></a>  unordered_map::reference

Tipo di un riferimento a un elemento.

```cpp
typedef Alloc::reference reference;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può essere usato come riferimento a un elemento della sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_reference.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::iterator it = c1.begin();
        it != c1.end(); ++it)
        {
        Mymap::reference ref = *it;
        std::cout << " [" << ref.first << ", " << ref.second << "]";
        }
    std::cout << std::endl;

    return (0);
    }

```

```Output
[c, 3] [b, 2] [a, 1]
```

## <a name="rehash"></a>  unordered_map::rehash

Ricompila la tabella hash.

```cpp
void rehash(size_type nbuckets);
```

### <a name="parameters"></a>Parametri

`nbuckets` Numero di bucket richiesto.

### <a name="remarks"></a>Note

La funzione membro modifica il numero di bucket in modo da essere almeno pari a `nbuckets` e ricompila la tabella hash in base alle esigenze.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_rehash.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
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
 [c, 3] [b, 2] [a, 1]
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

## <a name="size"></a>  unordered_map::size

Conta il numero di elementi.

```cpp
size_type size() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce la lunghezza della sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_size.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// clear the container and reinspect
    c1.clear();
    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;
    std::cout << std::endl;

    c1.insert(Mymap::value_type('d', 4));
    c1.insert(Mymap::value_type('e', 5));

// display contents " [e 5] [d 4]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;

    return (0);
    }

```

```Output
 [c, 3] [b, 2] [a, 1]
size == 0
empty() == true

[e, 5] [d, 4]
size == 2
empty() == false
```

## <a name="size_type"></a>  unordered_map::size_type

Tipo di una distanza Unsigned tra due elementi.

```cpp
typedef T2 size_type;
```

### <a name="remarks"></a>Note

Il tipo Unsigned Integer descrive un oggetto che può rappresentare la lunghezza di una sequenza controllata. Qui è descritto come sinonimo del tipo definito dall'implementazione `T2`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_size_type.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;
    Mymap::size_type sz = c1.size();

    std::cout << "size == " << sz << std::endl;

    return (0);
    }

```

```Output
size == 0
```

## <a name="swap"></a>  unordered_map::swap

Scambia il contenuto di due contenitori.

```cpp
void swap(unordered_map& right);
```

### <a name="parameters"></a>Parametri

`right` Contenitore da scambiare con.

### <a name="remarks"></a>Note

La funzione membro scambia le sequenze controllate tra `*this` e `right`. Se [unordered_map::get_allocator](#get_allocator)`() == right.get_allocator()`, esegue l'operazione in un tempo costante, genera un'eccezione solo in seguito alla copia dell'oggetto traits archiviato di tipo `Tr` e non invalida alcun riferimento, puntatore o iteratore che definisce gli elementi nelle due sequenze controllate. In caso contrario, esegue un numero di assegnazioni di elementi e chiamate al costruttore proporzionale al numero di elementi nelle due sequenze controllate.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_swap.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    Mymap c2;

    c2.insert(Mymap::value_type('d', 4));
    c2.insert(Mymap::value_type('e', 5));
    c2.insert(Mymap::value_type('f', 6));

    c1.swap(c2);

// display contents " [f 6] [e 5] [d 4]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    swap(c1, c2);

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
    }

```

```Output
[c, 3] [b, 2] [a, 1]
[f, 6] [e, 5] [d, 4]
[c, 3] [b, 2] [a, 1]
```

## <a name="unordered_map"></a>  unordered_map::unordered_map

Costruisce un oggetto contenitore.

```cpp
unordered_map(const unordered_map& Right);

explicit unordered_map(
    size_type Bucket_count = N0,
    const Hash& Hash = Hash(),
    const Comp& Comp = Comp(),
    const Allocator& Al = Allocator());

unordered_map(unordered_map&& Right);
unordered_map(initializer_list<Type> IList);
unordered_map(initializer_list<Type> IList, size_type Bucket_count);

unordered_map(
    initializer_list<Type> IList,
    size_type Bucket_count,
    const Hash& Hash);

unordered_map(
    initializer_list<Type> IList,
    size_type Bucket_count,
    const Hash& Hash,
    KeyEqual& equal);

unordered_map(
    initializer_list<Type> IList,
    size_type Bucket_count,
    const Hash& Hash,
    KeyEqual& Equal
    const Allocator& Al);

template <class InIt>
unordered_map(
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
|`Al`|Oggetto allocatore da archiviare.|
|`Comp`|Oggetto della funzione di confronto da archiviare.|
|`Hash`|Oggetto della funzione hash da archiviare.|
|`Bucket_count`|Numero minimo di bucket.|
|`Right`|Contenitore da copiare.|
|`First`||
|`Last`||
|`IList`|initializer_list che contiene gli elementi da copiare.|

### <a name="remarks"></a>Note

Il primo costruttore specifica una copia della sequenza controllata da `right`. Il secondo costruttore specifica una sequenza controllata vuota. In terzo costruttore inserisce la sequenza di valori degli elementi `[first, last)`. In quarto costruttore specifica una copia della sequenza spostando `right`.

Tutti i costruttori inizializzano inoltre diversi valori archiviati. Per il costruttore di copia, i valori vengono ottenuti da `Right`. In caso contrario:

Il numero minimo di bucket è costituito dall'argomento `Bucket_count`, se disponibile. In caso contrario è costituito da un valore predefinito descritto qui come il valore `N0` definito a livello di implementazione.

L'oggetto della funzione hash è costituito dall'argomento `Hash`, se disponibile. In caso contrario, è `Hash()`.

L'oggetto della funzione di confronto è costituito dall'argomento `Comp`, se disponibile; in caso contrario, è `Pred()`.

L'oggetto allocatore è costituito dall'argomento `Al`, se disponibile; in caso contrario, è `Alloc()`.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_construct.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>
#include <initializer_list>

using namespace std;

using Mymap = unordered_map<char, int>;

int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (const auto& c : c1) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    Mymap c2(8,
        hash<char>(),
        equal_to<char>(),
        allocator<pair<const char, int> >());

    c2.insert(Mymap::value_type('d', 4));
    c2.insert(Mymap::value_type('e', 5));
    c2.insert(Mymap::value_type('f', 6));

    // display contents " [f 6] [e 5] [d 4]"
    for (const auto& c : c2) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    Mymap c3(c1.begin(),
        c1.end(),
        8,
        hash<char>(),
        equal_to<char>(),
        allocator<pair<const char, int> >());

    // display contents " [c 3] [b 2] [a 1]"
    for (const auto& c : c3) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    Mymap c4(move(c3));

    // display contents " [c 3] [b 2] [a 1]"
    for (const auto& c : c4) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;
    cout << endl;

    // Construct with an initializer_list
    unordered_map<int, char> c5({ { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } });
    for (const auto& c : c5) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    // Initializer_list plus size
    unordered_map<int, char> c6({ { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } }, 4);
    for (const auto& c : c1) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;
    cout << endl;

    // Initializer_list plus size and hash
    unordered_map<int, char, hash<char>> c7(
        { { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } },
        4,
        hash<char>()
    );

    for (const auto& c : c1) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    // Initializer_list plus size, hash, and key_equal
    unordered_map<int, char, hash<char>, equal_to<char>> c8(
        { { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } },
        4,
        hash<char>(),
        equal_to<char>()
    );

    for (const auto& c : c1) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    // Initializer_list plus size, hash, key_equal, and allocator
    unordered_map<int, char, hash<char>, equal_to<char>> c9(
        { { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } },
        4,
        hash<char>(),
        equal_to<char>(),
        allocator<pair<const char, int> >()
    );

    for (const auto& c : c1) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;
}
```

```Output
 [a, 1] [b, 2] [c, 3]
 [d, 4] [e, 5] [f, 6]
 [a, 1] [b, 2] [c, 3]
 [a, 1] [b, 2] [c, 3]

[5, g] [6, h] [7, i] [8, j]
 [a, 1] [b, 2] [c, 3]

[a, 1] [b, 2] [c, 3]
 [a, 1] [b, 2] [c, 3]
 [a, 1] [b, 2] [c, 3]
 ```

## <a name="value_type"></a>  unordered_map::value_type

Tipo di un elemento.

```cpp
typedef std::pair<const Key, Ty> value_type;
```

### <a name="remarks"></a>Note

Il tipo descrive un elemento nella sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// std__unordered_map__unordered_map_value_type.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    // add a value and reinspect
    Mymap::key_type key = 'd';
    Mymap::mapped_type mapped = 4;
    Mymap::value_type val = Mymap::value_type(key, mapped);
    c1.insert(val);

    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
}

```

```Output
[c, 3] [b, 2] [a, 1]
[d, 4] [c, 3] [b, 2] [a, 1]
```

## <a name="see-also"></a>Vedere anche

[<unordered_map>](../standard-library/unordered-map.md)<br/>
[Contenitori](../cpp/containers-modern-cpp.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
