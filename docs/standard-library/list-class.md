---
description: 'Altre informazioni su: classe List'
title: Classe list
ms.date: 11/04/2016
f1_keywords:
- list/std::list
- list/std::list::allocator_type
- list/std::list::const_iterator
- list/std::list::const_pointer
- list/std::list::const_reference
- list/std::list::const_reverse_iterator
- list/std::list::difference_type
- list/std::list::iterator
- list/std::list::pointer
- list/std::list::reference
- list/std::list::reverse_iterator
- list/std::list::size_type
- list/std::list::value_type
- list/std::list::assign
- list/std::list::back
- list/std::list::begin
- list/std::list::cbegin
- list/std::list::cend
- list/std::list::clear
- list/std::list::crbegin
- list/std::list::crend
- list/std::list::emplace
- list/std::list::emplace_back
- list/std::list::emplace_front
- list/std::list::empty
- list/std::list::end
- list/std::list::erase
- list/std::list::front
- list/std::list::get_allocator
- list/std::list::insert
- list/std::list::max_size
- list/std::list::merge
- list/std::list::pop_back
- list/std::list::pop_front
- list/std::list::push_back
- list/std::list::push_front
- list/std::list::rbegin
- list/std::list::remove
- list/std::list::remove_if
- list/std::list::rend
- list/std::list::resize
- list/std::list::reverse
- list/std::list::size
- list/std::list::sort
- list/std::list::splice
- list/std::list::swap
- list/std::list::unique
helpviewer_keywords:
- std::list [C++]
- std::list [C++], allocator_type
- std::list [C++], const_iterator
- std::list [C++], const_pointer
- std::list [C++], const_reference
- std::list [C++], const_reverse_iterator
- std::list [C++], difference_type
- std::list [C++], iterator
- std::list [C++], pointer
- std::list [C++], reference
- std::list [C++], reverse_iterator
- std::list [C++], size_type
- std::list [C++], value_type
- std::list [C++], assign
- std::list [C++], back
- std::list [C++], begin
- std::list [C++], cbegin
- std::list [C++], cend
- std::list [C++], clear
- std::list [C++], crbegin
- std::list [C++], crend
- std::list [C++], emplace
- std::list [C++], emplace_back
- std::list [C++], emplace_front
- std::list [C++], empty
- std::list [C++], end
- std::list [C++], erase
- std::list [C++], front
- std::list [C++], get_allocator
- std::list [C++], insert
- std::list [C++], max_size
- std::list [C++], merge
- std::list [C++], pop_back
- std::list [C++], pop_front
- std::list [C++], push_back
- std::list [C++], push_front
- std::list [C++], rbegin
- std::list [C++], remove
- std::list [C++], remove_if
- std::list [C++], rend
- std::list [C++], resize
- std::list [C++], reverse
- std::list [C++], size
- std::list [C++], sort
- std::list [C++], splice
- std::list [C++], swap
- std::list [C++], unique
ms.assetid: d3707f4a-10fd-444f-b856-f9ca2077c1cd
ms.openlocfilehash: 9d73c1c61cb7e630ea936685aeaab20f778340ed
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97284837"
---
# <a name="list-class"></a>Classe list

La classe List della libreria standard C++ è un modello di classe di contenitori sequenza che conservano gli elementi in una disposizione lineare e consentono inserimenti ed eliminazioni efficienti in qualsiasi posizione all'interno della sequenza. La sequenza viene archiviata come elenco collegato bidirezionale di elementi, ognuno dei quali contiene un membro dello stesso tipo *Type*.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type, class Allocator= allocator<Type>>
class list
```

### <a name="parameters"></a>Parametri

*Tipo*\
Tipo di dati degli elementi da archiviare nell'elenco.

*Allocatore*\
Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione e alla deallocazione di memoria dell'elenco. Questo argomento è facoltativo e il valore predefinito è `allocator<Type>`.

## <a name="remarks"></a>Commenti

La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione. I vettori devono essere il contenitore preferito per la gestione di una sequenza quando l'accesso casuale a un elemento è importante e gli inserimenti o le eliminazioni degli elementi sono necessari solo alla fine di una sequenza. Le prestazioni del contenitore della classe deque sono superiori quando è necessario l'accesso casuale e gli inserimenti e le eliminazioni sono importanti sia all'inizio che alla fine di una sequenza.

Le funzioni membro della classe list, [merge](#merge), [reverse](#reverse), [unique](#unique), [remove](#remove) e [remove_if](#remove_if), sono state ottimizzate per le operazioni sugli oggetti list e offrono un'alternativa ad alte prestazioni alle loro controparti generiche.

La riallocazione dell'elenco si verifica quando una funzione membro deve inserire o cancellare elementi dell'elenco. In questi casi, solo gli iteratori o i riferimenti che puntano alle parti cancellate della sequenza controllata diventeranno non validi.

Includere l'intestazione standard della libreria standard C++ \<list> per definire l'elenco di modelli di classe del [contenitore](../standard-library/stl-containers.md) e diversi modelli di supporto.

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Nome|Descrizione|
|-|-|
|[list](#list)|Costruisce un elenco di dimensioni specifiche, con elementi di un valore specifico, con un oggetto `allocator` specifico o come copia di un altro elenco.|

### <a name="typedefs"></a>Typedef

|Nome|Description|
|-|-|
|[allocator_type](#allocator_type)|Tipo che rappresenta la classe `allocator` per un oggetto elenco.|
|[const_iterator](#const_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un **`const`** elemento in un elenco.|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore a un **`const`** elemento in un elenco.|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento a un **`const`** elemento archiviato in un elenco per la lettura e l'esecuzione di **`const`** operazioni.|
|[const_reverse_iterator](#const_reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi **`const`** elemento di un elenco.|
|[difference_type](#difference_type)|Tipo che fornisce la differenza tra due iteratori che fanno riferimento agli elementi all'interno dello stesso elenco.|
|[iteratore](#iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un elenco.|
|[puntatore](#pointer)|Tipo che fornisce un puntatore a un elemento di un elenco.|
|[reference](#reference)|Tipo che fornisce un riferimento a un **`const`** elemento archiviato in un elenco per la lettura e l'esecuzione di **`const`** operazioni.|
|[reverse_iterator](#reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un elenco invertito.|
|[size_type](#size_type)|Tipo che conta il numero di elementi in un elenco.|
|[value_type](#value_type)|Tipo che rappresenta il tipo di dati archiviati in un elenco.|

### <a name="functions"></a>Funzioni

|Nome|Description|
|-|-|
|[assign](#assign)|Elimina elementi da un elenco e copia un nuovo set di elementi nell'elenco di destinazione.|
|[Indietro](#back)|Restituisce un riferimento all'ultimo elemento di un elenco.|
|[iniziare](#begin)|Restituisce un iteratore che punta al primo elemento di un elenco.|
|[cbegin](#cbegin)|Restituisce un iteratore const che punta al primo elemento di un elenco.|
|[cend](#cend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un elenco.|
|[deselezionare](#clear)|Cancella tutti gli elementi di un elenco.|
|[crbegin](#crbegin)|Restituisce un iteratore const che punta al primo elemento di un elenco invertito.|
|[crend](#crend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un elenco invertito.|
|[emplace](#emplace)|Inserisce un elemento costruito sul posto in un elenco in una posizione specificata.|
|[emplace_back](#emplace_back)|Aggiunge un elemento costruito sul posto alla fine di un elenco.|
|[emplace_front](#emplace_front)|Aggiunge un elemento costruito sul posto all'inizio di un elenco.|
|[empty](#empty)|Verifica se un elenco è vuoto.|
|[end](#end)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un elenco.|
|[erase](#erase)|Rimuove un elemento o un intervallo di elementi di un elenco dalle posizioni specificate.|
|[fronte](#front)|Restituisce un riferimento al primo elemento di un elenco.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'oggetto `allocator` usato per costruire un elenco.|
|[insert](#insert)|Inserisce un elemento, un numero di elementi o un intervallo di elementi in un elenco in una posizione specificata.|
|[max_size](#max_size)|Restituisce la lunghezza massima di un elenco.|
|[merge](#merge)|Rimuove gli elementi dall'elenco di argomenti, li inserisce nell'elenco di destinazione e ordina il nuovo set combinato di elementi in ordine crescente o in un altro ordine specificato.|
|[pop_back](#pop_back)|Rimuove l'elemento alla fine di un elenco.|
|[pop_front](#pop_front)|Elimina l'elemento all'inizio di un elenco.|
|[push_back](#push_back)|Aggiunge un elemento alla fine di un elenco.|
|[push_front](#push_front)|Aggiunge un elemento all'inizio di un elenco.|
|[rbegin](#rbegin)|Restituisce un iteratore che punta al primo elemento di un elenco invertito.|
|[remove](#remove)|Cancella gli elementi in un elenco che corrispondono a un valore specificato.|
|[remove_if](#remove_if)|Cancella gli elementi dall'elenco per il quale viene soddisfatto un predicato specificato.|
|[rend](#rend)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un elenco invertito.|
|[ridimensionare](#resize)|Specifica una nuova dimensione per un elenco.|
|[inverso](#reverse)|Inverte l'ordine in cui gli elementi sono disposti in un elenco.|
|[size](#size)|Restituisce il numero di elementi in un elenco|
|[sort](#sort)|Dispone gli elementi di un elenco in ordine crescente o in relazione a un altro ordine.|
|[splice](#splice)|Rimuove gli elementi dall'elenco di argomenti e li inserisce nell'elenco di destinazione.|
|[scambio](#swap)|Scambia gli elementi di due elenchi.|
|[unique](#unique)|Rimuove gli elementi duplicati adiacenti o gli elementi adiacenti che soddisfano un altro predicato binario dall'elenco.|

### <a name="operators"></a>Operatori

|Nome|Description|
|-|-|
|[operatore =](#op_eq)|Sostituisce gli elementi dell'elenco con una copia di un altro elenco.|

## <a name="requirements"></a>Requisiti

**Intestazione**: \<list>

## <a name="allocator_type"></a><a name="allocator_type"></a> allocator_type

Tipo che rappresenta la classe allocator per un oggetto elenco.

```cpp
typedef Allocator allocator_type;
```

### <a name="remarks"></a>Commenti

`allocator_type` è un sinonimo del parametro di modello *allocator*.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get_allocator](#get_allocator).

## <a name="assign"></a><a name="assign"></a> assegnare

Elimina elementi da un elenco e copia un nuovo set di elementi in un elenco specificato.

```cpp
void assign(
    size_type Count,
    const Type& Val);

void assign
    initializer_list<Type> IList);

template <class InputIterator>
void assign(
    InputIterator First,
    InputIterator Last);
```

### <a name="parameters"></a>Parametri

*Prima*\
Posizione del primo elemento nell'intervallo di elementi da copiare dall'elenco degli argomenti.

*Ultima*\
Posizione del primo elemento immediatamente successivo all'intervallo di elementi da copiare dall'elenco degli argomenti.

*Conteggio*\
Numero di copie di un elemento inserito nell'elenco.

*Val*\
Valore dell'elemento inserito nell'elenco.

*IList*\
Oggetto initializer_list che contiene gli elementi da inserire.

### <a name="remarks"></a>Commenti

Dopo aver eliminato ogni elemento esistente nell'elenco di destinazione, inserire un intervallo specificato di elementi dall'elenco originale o da un altro elenco nell'elenco destinazione o inserire copie di un nuovo elemento con un valore specifico.

### <a name="example"></a>Esempio

```cpp
// list_assign.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main()
{
    using namespace std;
    list<int> c1, c2;
    list<int>::const_iterator cIter;

    c1.push_back(10);
    c1.push_back(20);
    c1.push_back(30);
    c2.push_back(40);
    c2.push_back(50);
    c2.push_back(60);

    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    c1.assign(++c2.begin(), c2.end());
    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    c1.assign(7, 4);
    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    c1.assign({ 10, 20, 30, 40 });
    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;
}
```

```Output
c1 = 10 20 30c1 = 50 60c1 = 4 4 4 4 4 4 4c1 = 10 20 30 40
```

## <a name="back"></a><a name="back"></a> Indietro

Restituisce un riferimento all'ultimo elemento di un elenco.

```cpp
reference back();

const_reference back() const;
```

### <a name="return-value"></a>Valore restituito

Ultimo elemento dell'elenco. Se l'elenco è vuoto, il valore restituito è indefinito.

### <a name="remarks"></a>Commenti

Se il valore restituito di `back` viene assegnato a `const_reference`, l'oggetto elenco non può essere modificato. Se il valore restituito da `back` viene assegnato a `reference`, l'oggetto elenco può essere modificato.

Durante la compilazione tramite [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) definito come 1 o 2, se si prova ad accedere a un elemento in un elenco vuoto si verifica un errore di runtime.  Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// list_back.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;

   c1.push_back( 10 );
   c1.push_back( 11 );

   int& i = c1.back( );
   const int& ii = c1.front( );

   cout << "The last integer of c1 is " << i << endl;
   i--;
   cout << "The next-to-last integer of c1 is " << ii << endl;
}
```

```Output
The last integer of c1 is 11
The next-to-last integer of c1 is 10
```

## <a name="begin"></a><a name="begin"></a> iniziare

Restituisce un iteratore che punta al primo elemento di un elenco.

```cpp
const_iterator begin() const;

iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta al primo elemento dell'elenco o alla posizione successiva a un elenco vuoto.

### <a name="remarks"></a>Commenti

Se il valore restituito di `begin` viene assegnato a un `const_iterator` , gli elementi dell'oggetto elenco non possono essere modificati. Se il valore restituito di `begin` viene assegnato a un `iterator` , gli elementi dell'oggetto elenco possono essere modificati.

### <a name="example"></a>Esempio

```cpp
// list_begin.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::iterator c1_Iter;
   list <int>::const_iterator c1_cIter;

   c1.push_back( 1 );
   c1.push_back( 2 );

   c1_Iter = c1.begin( );
   cout << "The first element of c1 is " << *c1_Iter << endl;

*c1_Iter = 20;
   c1_Iter = c1.begin( );
   cout << "The first element of c1 is now " << *c1_Iter << endl;

   // The following line would be an error because iterator is const
   // *c1_cIter = 200;
}
```

```Output
The first element of c1 is 1
The first element of c1 is now 20
```

## <a name="cbegin"></a><a name="cbegin"></a> cbegin

Restituisce un **`const`** iteratore che punta al primo elemento nell'intervallo.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

**`const`** Iteratore di accesso bidirezionale che punta al primo elemento dell'intervallo o alla posizione oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()` ).

### <a name="remarks"></a>Commenti

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

**`const`** Iteratore di accesso bidirezionale che punta appena oltre la fine dell'intervallo.

### <a name="remarks"></a>Commenti

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

Cancella tutti gli elementi di un elenco.

```cpp
void clear();
```

### <a name="example"></a>Esempio

```cpp
// list_clear.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main() {
   using namespace std;
   list <int> c1;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   cout << "The size of the list is initially " << c1.size( ) << endl;
   c1.clear( );
   cout << "The size of list after clearing is " << c1.size( ) << endl;
}
```

```Output
The size of the list is initially 3
The size of list after clearing is 0
```

## <a name="const_iterator"></a><a name="const_iterator"></a> const_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere un **`const`** elemento in un elenco.

```cpp
typedef implementation-defined const_iterator;
```

### <a name="remarks"></a>Commenti

Un tipo `const_iterator` non può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio per [back](#back).

## <a name="const_pointer"></a><a name="const_pointer"></a> const_pointer

Fornisce un puntatore a un **`const`** elemento in un elenco.

```cpp
typedef typename Allocator::const_pointer const_pointer;
```

### <a name="remarks"></a>Commenti

Un tipo `const_pointer` non può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto list.

## <a name="const_reference"></a><a name="const_reference"></a> const_reference

Tipo che fornisce un riferimento a un **`const`** elemento archiviato in un elenco per la lettura e l'esecuzione di **`const`** operazioni.

```cpp
typedef typename Allocator::const_reference const_reference;
```

### <a name="remarks"></a>Commenti

Un tipo `const_reference` non può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

```cpp
// list_const_ref.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;

   c1.push_back( 10 );
   c1.push_back( 20 );

   const list <int> c2 = c1;
   const int &i = c2.front( );
   const int &j = c2.back( );
   cout << "The first element is " << i << endl;
   cout << "The second element is " << j << endl;

   // The following line would cause an error because c2 is const
   // c2.push_back( 30 );
}
```

```Output
The first element is 10
The second element is 20
```

## <a name="const_reverse_iterator"></a><a name="const_reverse_iterator"></a> const_reverse_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi **`const`** elemento di un elenco.

```cpp
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
```

### <a name="remarks"></a>Commenti

Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene usato per scorrere l'elenco in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio per [rbegin](#rbegin).

## <a name="crbegin"></a><a name="crbegin"></a> crbegin

Restituisce un iteratore const che punta al primo elemento di un elenco invertito.

```cpp
const_reverse_iterator rbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta al primo elemento di un oggetto list invertito (o che punta a quello che era stato l'ultimo elemento nell'oggetto `list` non invertito).

### <a name="remarks"></a>Commenti

`crbegin` viene usato con un oggetto list invertito proprio come [list::begin](#begin) viene usato con un oggetto `list`.

Con il valore restituito di `crbegin`, l'oggetto elenco non può essere modificato. [list::rbegin](#rbegin) può essere usato per eseguire l'iterazione all'indietro su un elenco.

### <a name="example"></a>Esempio

```cpp
// list_crbegin.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::const_reverse_iterator c1_crIter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1_crIter = c1.crbegin( );
   cout << "The last element in the list is " << *c1_crIter << "." << endl;
}
```

```Output
The last element in the list is 30.
```

## <a name="crend"></a><a name="crend"></a> crend

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un elenco invertito.

```cpp
const_reverse_iterator rend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta alla posizione successiva all'ultimo elemento di un oggetto [list](../standard-library/list-class.md) invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto `list` non invertito.

### <a name="remarks"></a>Commenti

`crend` viene usato con un oggetto list invertito proprio come [list::end](#end) viene usato con un oggetto `list`.

Con il valore restituito di `crend`, l'oggetto `list` non può essere modificato.

`crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine dell'oggetto `list`.

Non è consigliabile dereferenziare il valore restituito da `crend`.

### <a name="example"></a>Esempio

```cpp
// list_crend.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::const_reverse_iterator c1_crIter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1_crIter = c1.crend( );
   c1_crIter --;  // Decrementing a reverse iterator moves it forward in
                 // the list (to point to the first element here)
   cout << "The first element in the list is: " << *c1_crIter << endl;
}
```

```Output
The first element in the list is: 10
```

## <a name="difference_type"></a><a name="difference_type"></a> difference_type

Tipo Signed Integer che può essere usato per rappresentare il numero di elementi di un elenco in un intervallo compreso tra gli elementi a cui puntano gli iteratori.

```cpp
typedef typename Allocator::difference_type difference_type;
```

### <a name="remarks"></a>Commenti

`difference_type` è il tipo restituito quando si sottrae o si incrementa tramite gli iteratori del contenitore. `difference_type` viene in genere usato per rappresentare il numero di elementi nell'intervallo [ `first`, `last`) tra gli iteratori `first` e `last`, includendo l'elemento a cui punta `first` e l'intervallo di elementi fino all'elemento a cui punta `last`, escluso tale elemento.

Si noti che, sebbene `difference_type` sia disponibile per tutti gli iteratori che soddisfano i requisiti di un iteratore di input, inclusa la classe degli iteratori bidirezionali supportati da contenitori reversibili come set, la sottrazione tra gli iteratori è supportata solo da iteratori ad accesso casuale forniti da un contenitore ad accesso casuale, ad esempio la [classe vector](../standard-library/vector-class.md).

### <a name="example"></a>Esempio

```cpp
// list_diff_type.cpp
// compile with: /EHsc
#include <iostream>
#include <list>
#include <algorithm>

int main( )
{
   using namespace std;

   list <int> c1;
   list <int>::iterator   c1_Iter, c2_Iter;

   c1.push_back( 30 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1.push_back( 10 );
   c1.push_back( 30 );
   c1.push_back( 20 );

   c1_Iter = c1.begin( );
   c2_Iter = c1.end( );

    list <int>::difference_type df_typ1, df_typ2, df_typ3;

   df_typ1 = count( c1_Iter, c2_Iter, 10 );
   df_typ2 = count( c1_Iter, c2_Iter, 20 );
   df_typ3 = count( c1_Iter, c2_Iter, 30 );
   cout << "The number '10' is in c1 collection " << df_typ1 << " times.\n";
   cout << "The number '20' is in c1 collection " << df_typ2 << " times.\n";
   cout << "The number '30' is in c1 collection " << df_typ3 << " times.\n";
}
```

```Output
The number '10' is in c1 collection 1 times.
The number '20' is in c1 collection 2 times.
The number '30' is in c1 collection 3 times.
```

## <a name="emplace"></a><a name="emplace"></a> emplace

Inserisce un elemento costruito sul posto in un elenco in una posizione specificata.

```cpp
void emplace(iterator Where, Type&& val);
```

### <a name="parameters"></a>Parametri

*In cui*\
Posizione nell' [elenco](../standard-library/list-class.md) di destinazione in cui viene inserito il primo elemento.

*Val*\
Elemento aggiunto alla fine dell'oggetto `list`.

### <a name="remarks"></a>Commenti

Se viene generata un'eccezione, l'oggetto `list` viene lasciato inalterato e viene nuovamente generata l'eccezione.

### <a name="example"></a>Esempio

```cpp
// list_emplace.cpp
// compile with: /EHsc
#include <list>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   list <string> c2;
   string str("a");

   c2.emplace(c2.begin(), move( str ) );
   cout << "Moved first element: " << c2.back( ) << endl;
}
```

```Output
Moved first element: a
```

## <a name="emplace_back"></a><a name="emplace_back"></a> emplace_back

Aggiunge un elemento costruito sul posto alla fine di un elenco.

```cpp
void emplace_back(Type&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Elemento aggiunto alla fine dell' [elenco](../standard-library/list-class.md).

### <a name="remarks"></a>Commenti

Se viene generata un'eccezione, l'oggetto `list` viene lasciato inalterato e viene nuovamente generata l'eccezione.

### <a name="example"></a>Esempio

```cpp
// list_emplace_back.cpp
// compile with: /EHsc
#include <list>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   list <string> c2;
   string str("a");

   c2.emplace_back( move( str ) );
   cout << "Moved first element: " << c2.back( ) << endl;
}
```

```Output
Moved first element: a
```

## <a name="emplace_front"></a><a name="emplace_front"></a> emplace_front

Aggiunge un elemento costruito sul posto all'inizio di un elenco.

```cpp
void emplace_front(Type&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Elemento aggiunto all'inizio dell'oggetto [list](../standard-library/list-class.md).

### <a name="remarks"></a>Commenti

Se viene generata un'eccezione, l'oggetto `list` viene lasciato inalterato e viene nuovamente generata l'eccezione.

### <a name="example"></a>Esempio

```cpp
// list_emplace_front.cpp
// compile with: /EHsc
#include <list>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   list <string> c2;
   string str("a");

   c2.emplace_front( move( str ) );
   cout << "Moved first element: " << c2.front( ) << endl;
}
```

```Output
Moved first element: a
```

## <a name="empty"></a><a name="empty"></a> vuoto

Verifica se un elenco è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'elenco è vuoto; **`false`** se l'elenco non è vuoto.

### <a name="example"></a>Esempio

```cpp
// list_empty.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;

   c1.push_back( 10 );
   if ( c1.empty( ) )
      cout << "The list is empty." << endl;
   else
      cout << "The list is not empty." << endl;
}
```

```Output
The list is not empty.
```

## <a name="end"></a><a name="end"></a> fine

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un elenco.

```cpp
const_iterator end() const;
iterator end();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta alla posizione successiva all'ultimo elemento di un elenco. Se l'elenco è vuoto, verrà restituito `list::end == list::begin`.

### <a name="remarks"></a>Commenti

`end` viene usato per verificare se un iteratore ha raggiunto la fine del relativo elenco.

### <a name="example"></a>Esempio

```cpp
// list_end.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::iterator c1_Iter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1_Iter = c1.end( );
   c1_Iter--;
   cout << "The last integer of c1 is " << *c1_Iter << endl;

   c1_Iter--;
*c1_Iter = 400;
   cout << "The new next-to-last integer of c1 is "
        << *c1_Iter << endl;

   // If a const iterator had been declared instead with the line:
   // list <int>::const_iterator c1_Iter;
   // an error would have resulted when inserting the 400

   cout << "The list is now:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
}
```

```Output
The last integer of c1 is 30
The new next-to-last integer of c1 is 400
The list is now: 10 400 30
```

## <a name="erase"></a><a name="erase"></a> cancellare

Rimuove un elemento o un intervallo di elementi di un elenco dalle posizioni specificate.

```cpp
iterator erase(iterator Where);
iterator erase(iterator first, iterator last);
```

### <a name="parameters"></a>Parametri

*In cui*\
Posizione dell'elemento da rimuovere dall'elenco.

*prima*\
Posizione del primo elemento rimosso dall'elenco.

*Ultima*\
Posizione immediatamente successiva all'ultimo elemento rimosso dall'elenco.

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che definisce il primo elemento rimanente successivo a tutti gli elementi rimossi o puntatore alla fine dell'elenco se tale elemento non esiste.

### <a name="remarks"></a>Commenti

Poiché non si verificano riallocazioni, gli iteratori e i riferimenti diventano non validi solo per gli elementi cancellati.

`erase` non genera mai un'eccezione.

### <a name="example"></a>Esempio

```cpp
// list_erase.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::iterator Iter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1.push_back( 40 );
   c1.push_back( 50 );
   cout << "The initial list is:";
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout << " " << *Iter;
   cout << endl;

   c1.erase( c1.begin( ) );
   cout << "After erasing the first element, the list becomes:";
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout << " " << *Iter;
   cout << endl;
   Iter = c1.begin( );
   Iter++;
   c1.erase( Iter, c1.end( ) );
   cout << "After erasing all elements but the first, the list becomes: ";
   for (Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout << " " << *Iter;
   cout << endl;
}
```

```Output
The initial list is: 10 20 30 40 50
After erasing the first element, the list becomes: 20 30 40 50
After erasing all elements but the first, the list becomes:  20
```

## <a name="front"></a><a name="front"></a> fronte

Restituisce un riferimento al primo elemento di un elenco.

```cpp
reference front();
const_reference front() const;
```

### <a name="return-value"></a>Valore restituito

Se l'elenco è vuoto, viene restituito un valore non definito.

### <a name="remarks"></a>Commenti

Se il valore restituito di `front` viene assegnato a `const_reference`, l'oggetto elenco non può essere modificato. Se il valore restituito da `front` viene assegnato a `reference`, l'oggetto elenco può essere modificato.

Durante la compilazione tramite [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) definito come 1 o 2, se si prova ad accedere a un elemento in un elenco vuoto si verifica un errore di runtime.  Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// list_front.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main() {
   using namespace std;
   list <int> c1;

   c1.push_back( 10 );

   int& i = c1.front();
   const int& ii = c1.front();

   cout << "The first integer of c1 is " << i << endl;
   i++;
   cout << "The first integer of c1 is " << ii << endl;
}
```

```Output
The first integer of c1 is 10
The first integer of c1 is 11
```

## <a name="get_allocator"></a><a name="get_allocator"></a> get_allocator

Restituisce una copia dell'oggetto allocator usato per costruire un elenco.

```cpp
Allocator get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Allocatore usato dall'elenco.

### <a name="remarks"></a>Commenti

Gli allocatori per la classe di elenco specificano il modo in cui la classe gestisce l'archiviazione. Gli allocatori predefiniti forniti con le classi dei contenitori della libreria standard C++ sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.

### <a name="example"></a>Esempio

```cpp
// list_get_allocator.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   // The following lines declare objects
   // that use the default allocator.
   list <int> c1;
   list <int, allocator<int> > c2 = list <int, allocator<int> >( allocator<int>( ) );

   // c3 will use the same allocator class as c1
   list <int> c3( c1.get_allocator( ) );

   list<int>::allocator_type xlst = c1.get_allocator( );
   // You can now call functions on the allocator class used by c1
}
```

## <a name="insert"></a><a name="insert"></a> inserire

Inserisce un elemento, un numero di elementi o un intervallo di elementi in un elenco in una posizione specificata.

```cpp
iterator insert(iterator Where, const Type& Val);
iterator insert(iterator Where, Type&& Val);

void insert(iterator Where, size_type Count, const Type& Val);
iterator insert(iterator Where, initializer_list<Type> IList);

template <class InputIterator>
void insert(iterator Where, InputIterator First, InputIterator Last);
```

### <a name="parameters"></a>Parametri

*In cui*\
Posizione nell'oggetto list di destinazione dove viene inserito il primo elemento.

*Val*\
Valore dell'elemento inserito nell'elenco.

*Conteggio*\
Numero di elementi da inserire nell'elenco.

*Prima*\
Posizione del primo elemento nell'intervallo di elementi nell'elenco di argomenti da copiare.

*Ultima*\
Posizione del primo elemento oltre l'intervallo di elementi nell'elenco di argomenti da copiare.

### <a name="return-value"></a>Valore restituito

Le prime due funzioni di inserimento restituiscono un iteratore che punta alla posizione in cui è stato inserito il nuovo elemento nell'elenco.

### <a name="example"></a>Esempio

```cpp
// list_class_insert.cpp
// compile with: /EHsc
#include <list>
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    list <int> c1, c2;
    list <int>::iterator Iter;

    c1.push_back(10);
    c1.push_back(20);
    c1.push_back(30);
    c2.push_back(40);
    c2.push_back(50);
    c2.push_back(60);

    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    Iter = c1.begin();
    Iter++;
    c1.insert(Iter, 100);
    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    Iter = c1.begin();
    Iter++;
    Iter++;
    c1.insert(Iter, 2, 200);

    cout << "c1 =";
    for(auto c : c1)
        cout << " " << c;
    cout << endl;

    c1.insert(++c1.begin(), c2.begin(), --c2.end());

    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    // initialize a list of strings by moving
    list < string > c3;
    string str("a");

    c3.insert(c3.begin(), move(str));
    cout << "Moved first element: " << c3.front() << endl;

    // Assign with an initializer_list
    list <int> c4{ {1, 2, 3, 4} };
    c4.insert(c4.begin(), { 5, 6, 7, 8 });

    cout << "c4 =";
    for (auto c : c4)
        cout << " " << c;
    cout << endl;
}
```

## <a name="iterator"></a><a name="iterator"></a> iteratore

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un elenco.

```cpp
typedef implementation-defined iterator;
```

### <a name="remarks"></a>Commenti

Un tipo `iterator` può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio per [begin](#begin).

## <a name="list"></a><a name="list"></a> elenco

Costruisce un elenco di dimensioni specifiche, con elementi di un valore specifico, con un allocatore specifico oppure come copia di tutto o parte di un altro elenco.

```cpp
list();
explicit list(const Allocator& Al);
explicit list(size_type Count);
list(size_type Count, const Type& Val);
list(size_type Count, const Type& Val, const Allocator& Al);

list(const list& Right);
list(list&& Right);
list(initializer_list<Type> IList, const Allocator& Al);

template <class InputIterator>
list(InputIterator First, InputIterator Last);

template <class InputIterator>
list(InputIterator First, InputIterator Last, const Allocator& Al);
```

### <a name="parameters"></a>Parametri

*Al*\
Classe Allocator da usare con questo oggetto.

*Conteggio*\
Numero di elementi dell'elenco costruito.

*Val*\
Valore degli elementi dell'elenco.

*Ok*\
Elenco di cui l'elenco costruito deve essere una copia.

*Prima*\
Posizione del primo elemento nell'intervallo di elementi da copiare.

*Ultima*\
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

*IList*\
initializer_list che contiene gli elementi da copiare.

### <a name="remarks"></a>Commenti

Tutti i costruttori archiviano un oggetto allocatore (*al*) e inizializzano l'elenco.

[get_allocator](#get_allocator) restituisce una copia dell'oggetto allocatore usato per costruire un elenco.

I primi due costruttori specificano un elenco iniziale vuoto, il secondo specifica il tipo di allocatore (*al*) da usare.

Il terzo costruttore specifica una ripetizione di un numero specificato di elementi delvalore predefinito per la classe `Type` .

Il quarto e il quinto costruttore specificano una ripetizione di elementi (*count*) del valore *Val*.

Il sesto costruttore specifica una copia dell'elenco a *destra*.

Il settimo costruttore sposta l'elenco a *destra*.

L'ottavo costruttore usa un oggetto initializer_list per specificare gli elementi.

I due costruttori successivi copiano l'intervallo `[First, Last)` di un elenco.

Nessuno dei costruttori esegue riallocazioni provvisorie.

### <a name="example"></a>Esempio

```cpp
// list_class_list.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main()
{
    using namespace std;
    // Create an empty list c0
    list <int> c0;

    // Create a list c1 with 3 elements of default value 0
    list <int> c1(3);

    // Create a list c2 with 5 elements of value 2
    list <int> c2(5, 2);

    // Create a list c3 with 3 elements of value 1 and with the
    // allocator of list c2
    list <int> c3(3, 1, c2.get_allocator());

    // Create a copy, list c4, of list c2
    list <int> c4(c2);

    // Create a list c5 by copying the range c4[ first,  last)
    list <int>::iterator c4_Iter = c4.begin();
    c4_Iter++;
    c4_Iter++;
    list <int> c5(c4.begin(), c4_Iter);

    // Create a list c6 by copying the range c4[ first,  last) and with
    // the allocator of list c2
    c4_Iter = c4.begin();
    c4_Iter++;
    c4_Iter++;
    c4_Iter++;
    list <int> c6(c4.begin(), c4_Iter, c2.get_allocator());

    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    cout << "c2 =";
    for (auto c : c2)
        cout << " " << c;
    cout << endl;

    cout << "c3 =";
    for (auto c : c3)
        cout << " " << c;
    cout << endl;

    cout << "c4 =";
    for (auto c : c4)
        cout << " " << c;
    cout << endl;

    cout << "c5 =";
    for (auto c : c5)
        cout << " " << c;
    cout << endl;

    cout << "c6 =";
    for (auto c : c6)
        cout << " " << c;
    cout << endl;

    // Move list c6 to list c7
    list <int> c7(move(c6));
    cout << "c7 =";
    for (auto c : c7)
        cout << " " << c;
    cout << endl;

    // Construct with initializer_list
    list<int> c8({ 1, 2, 3, 4 });
    cout << "c8 =";
    for (auto c : c8)
        cout << " " << c;
    cout << endl;
}
```

```Output
c1 = 0 0 0c2 = 2 2 2 2 2c3 = 1 1 1c4 = 2 2 2 2 2c5 = 2 2c6 = 2 2 2c7 = 2 2 2c8 = 1 2 3 4
```

## <a name="max_size"></a><a name="max_size"></a> max_size

Restituisce la lunghezza massima di un elenco.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza massima possibile dell'elenco.

### <a name="example"></a>Esempio

```cpp
// list_max_size.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::size_type i;

   i = c1.max_size( );
   cout << "Maximum possible length of the list is " << i << "." << endl;
}
```

## <a name="merge"></a><a name="merge"></a> merge

Rimuove gli elementi dall'elenco di argomenti, li inserisce nell'elenco di destinazione e ordina il nuovo set combinato di elementi in ordine crescente o in un altro ordine specificato.

```cpp
void merge(list<Type, Allocator>& right);

template <class Traits>
void merge(list<Type, Allocator>& right, Traits comp);
```

### <a name="parameters"></a>Parametri

*Ok*\
Elenco di argomenti da unire all'elenco di destinazione.

*comp*\
Operatore di confronto usato per ordinare gli elementi dell'elenco di destinazione.

### <a name="remarks"></a>Commenti

Il *diritto* elenco di argomenti viene unito all'elenco di destinazione.

Gli elenchi di argomenti e di destinazione devono essere ordinati con la stessa relazione di confronto con cui verrà ordinata la sequenza risultante. L'ordine predefinito per la prima funzione membro è l'ordine crescente. La seconda funzione membro impone l'operazione di confronto specificata dall'utente *comp* della classe `Traits` .

### <a name="example"></a>Esempio

```cpp
// list_merge.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1, c2, c3;
   list <int>::iterator c1_Iter, c2_Iter, c3_Iter;

   c1.push_back( 3 );
   c1.push_back( 6 );
   c2.push_back( 2 );
   c2.push_back( 4 );
   c3.push_back( 5 );
   c3.push_back( 1 );

   cout << "c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   cout << "c2 =";
   for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
      cout << " " << *c2_Iter;
   cout << endl;

   c2.merge( c1 );  // Merge c1 into c2 in (default) ascending order
   c2.sort( greater<int>( ) );
   cout << "After merging c1 with c2 and sorting with >: c2 =";
   for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
      cout << " " << *c2_Iter;
   cout << endl;

   cout << "c3 =";
   for ( c3_Iter = c3.begin( ); c3_Iter != c3.end( ); c3_Iter++ )
      cout << " " << *c3_Iter;
   cout << endl;

   c2.merge( c3, greater<int>( ) );
   cout << "After merging c3 with c2 according to the '>' comparison relation: c2 =";
   for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
      cout << " " << *c2_Iter;
   cout << endl;
}
```

```Output
c1 = 3 6
c2 = 2 4
After merging c1 with c2 and sorting with >: c2 = 6 4 3 2
c3 = 5 1
After merging c3 with c2 according to the '>' comparison relation: c2 = 6 5 4 3 2 1
```

## <a name="operator"></a><a name="op_eq"></a> operatore =

Sostituisce gli elementi dell'elenco con una copia di un altro elenco.

```cpp
list& operator=(const list& right);
list& operator=(list&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Oggetto [list](../standard-library/list-class.md) da copiare nell'oggetto `list`.

### <a name="remarks"></a>Commenti

Dopo la cancellazione di tutti gli elementi esistenti in un oggetto `list` , l'operatore copia o sposta il contenuto di *direttamente* in `list` .

### <a name="example"></a>Esempio

```cpp
// list_operator_as.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list<int> v1, v2, v3;
   list<int>::iterator iter;

   v1.push_back(10);
   v1.push_back(20);
   v1.push_back(30);
   v1.push_back(40);
   v1.push_back(50);

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
   v2 = forward< list<int> >(v1);
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << *iter << " ";
   cout << endl;
}
```

## <a name="pointer"></a>Puntatore <a name="pointer"></a>

Fornisce un puntatore a un elemento in un elenco.

```cpp
typedef typename Allocator::pointer pointer;
```

### <a name="remarks"></a>Commenti

Un tipo `pointer` può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto list.

## <a name="pop_back"></a><a name="pop_back"></a> pop_back

Rimuove l'elemento alla fine di un elenco.

```cpp
void pop_back();
```

### <a name="remarks"></a>Commenti

L'ultimo elemento non deve essere vuoto. `pop_back` non genera mai un'eccezione.

### <a name="example"></a>Esempio

```cpp
// list_pop_back.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;

   c1.push_back( 1 );
   c1.push_back( 2 );
   cout << "The first element is: " << c1.front( ) << endl;
   cout << "The last element is: " << c1.back( ) << endl;

   c1.pop_back( );
   cout << "After deleting the element at the end of the list, "
           "the last element is: " << c1.back( ) << endl;
}
```

```Output
The first element is: 1
The last element is: 2
After deleting the element at the end of the list, the last element is: 1
```

## <a name="pop_front"></a><a name="pop_front"></a> pop_front

Elimina l'elemento all'inizio di un elenco.

```cpp
void pop_front();
```

### <a name="remarks"></a>Commenti

Il primo elemento non deve essere vuoto. `pop_front` non genera mai un'eccezione.

### <a name="example"></a>Esempio

```cpp
// list_pop_front.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;

   c1.push_back( 1 );
   c1.push_back( 2 );
   cout << "The first element is: " << c1.front( ) << endl;
   cout << "The second element is: " << c1.back( ) << endl;

   c1.pop_front( );
   cout << "After deleting the element at the beginning of the list, "
         "the first element is: " << c1.front( ) << endl;
}
```

```Output
The first element is: 1
The second element is: 2
After deleting the element at the beginning of the list, the first element is: 2
```

## <a name="push_back"></a><a name="push_back"></a> push_back

Aggiunge un elemento alla fine di un elenco.

```cpp
void push_back(const Type& val);
void push_back(Type&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Elemento aggiunto alla fine dell'oggetto list.

### <a name="remarks"></a>Commenti

Se viene generata un'eccezione, l'oggetto list viene lasciato inalterato e viene nuovamente generata l'eccezione.

### <a name="example"></a>Esempio

```cpp
// list_push_back.cpp
// compile with: /EHsc
#include <list>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   list <int> c1;

   c1.push_back( 1 );
   if ( c1.size( ) != 0 )
      cout << "Last element: " << c1.back( ) << endl;

   c1.push_back( 2 );
   if ( c1.size( ) != 0 )
      cout << "New last element: " << c1.back( ) << endl;

// move initialize a list of strings
   list <string> c2;
   string str("a");

   c2.push_back( move( str ) );
   cout << "Moved first element: " << c2.back( ) << endl;
}
```

```Output
Last element: 1
New last element: 2
Moved first element: a
```

## <a name="push_front"></a><a name="push_front"></a> push_front

Aggiunge un elemento all'inizio di un elenco.

```cpp
void push_front(const Type& val);
void push_front(Type&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Elemento aggiunto all'inizio dell'oggetto list.

### <a name="remarks"></a>Commenti

Se viene generata un'eccezione, l'oggetto list viene lasciato inalterato e viene nuovamente generata l'eccezione.

### <a name="example"></a>Esempio

```cpp
// list_push_front.cpp
// compile with: /EHsc
#include <list>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   list <int> c1;

   c1.push_front( 1 );
   if ( c1.size( ) != 0 )
      cout << "First element: " << c1.front( ) << endl;

   c1.push_front( 2 );
   if ( c1.size( ) != 0 )
      cout << "New first element: " << c1.front( ) << endl;

// move initialize a list of strings
   list <string> c2;
   string str("a");

   c2.push_front( move( str ) );
   cout << "Moved first element: " << c2.front( ) << endl;
}
```

```Output
First element: 1
New first element: 2
Moved first element: a
```

## <a name="rbegin"></a><a name="rbegin"></a> rbegin

Restituisce un iteratore che indirizza al primo elemento di una lista invertita.

```cpp
const_reverse_iterator rbegin() const;
reverse_iterator rbegin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che indirizza al primo elemento di un elenco invertita (o che indirizza a quello che era stato l'ultimo elemento nell'elenco non invertito).

### <a name="remarks"></a>Commenti

`rbegin` viene usato con un oggetto list invertito proprio come [begin](#begin) viene usato con un oggetto list.

Se il valore restituito di `rbegin` viene assegnato a `const_reverse_iterator`, l'oggetto elenco non può essere modificato. Se il valore restituito da `rbegin` viene assegnato a `reverse_iterator`, l'oggetto elenco può essere modificato.

`rbegin` può essere usato per eseguire l'iterazione indietro su un elenco.

### <a name="example"></a>Esempio

```cpp
// list_rbegin.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::iterator c1_Iter;
   list <int>::reverse_iterator c1_rIter;

   // If the following line replaced the line above, *c1_rIter = 40;
   // (below) would be an error
   //list <int>::const_reverse_iterator c1_rIter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1_rIter = c1.rbegin( );
   cout << "The last element in the list is " << *c1_rIter << "." << endl;

   cout << "The list is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   // rbegin can be used to start an iteration through a list in
   // reverse order
   cout << "The reversed list is:";
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )
      cout << " " << *c1_rIter;
   cout << endl;

   c1_rIter = c1.rbegin( );
*c1_rIter = 40;
   cout << "The last element in the list is now " << *c1_rIter << "." << endl;
}
```

```Output
The last element in the list is 30.
The list is: 10 20 30
The reversed list is: 30 20 10
The last element in the list is now 40.
```

## <a name="reference"></a><a name="reference"></a> riferimento

Tipo che fornisce un riferimento a un elemento archiviato in un elenco.

```cpp
typedef typename Allocator::reference reference;
```

### <a name="example"></a>Esempio

```cpp
// list_ref.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;

   c1.push_back( 10 );
   c1.push_back( 20 );

   int &i = c1.front( );
   int &j = c1.back( );
   cout << "The first element is " << i << endl;
   cout << "The second element is " << j << endl;
}
```

```Output
The first element is 10
The second element is 20
```

## <a name="remove"></a><a name="remove"></a> rimuovere

Cancella gli elementi in un elenco che corrispondono a un valore specificato.

```cpp
void remove(const Type& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Valore che, se contenuto da un elemento, comporterà la rimozione dell'elemento dall'elenco.

### <a name="remarks"></a>Commenti

L'ordine degli elementi rimanenti non verrà modificato.

### <a name="example"></a>Esempio

```cpp
// list_remove.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::iterator c1_Iter, c2_Iter;

   c1.push_back( 5 );
   c1.push_back( 100 );
   c1.push_back( 5 );
   c1.push_back( 200 );
   c1.push_back( 5 );
   c1.push_back( 300 );

   cout << "The initial list is c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   list <int> c2 = c1;
   c2.remove( 5 );
   cout << "After removing elements with value 5, the list becomes c2 =";
   for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
      cout << " " << *c2_Iter;
   cout << endl;
}
```

```Output
The initial list is c1 = 5 100 5 200 5 300
After removing elements with value 5, the list becomes c2 = 100 200 300
```

## <a name="remove_if"></a><a name="remove_if"></a> remove_if

Cancella da un elenco gli elementi per cui è soddisfatto un predicato specificato.

```cpp
template <class Predicate>
void remove_if(Predicate pred)
```

### <a name="parameters"></a>Parametri

*Pred*\
Predicato unario che, se soddisfatto da un elemento, comporta l'eliminazione di tale elemento dall'elenco.

### <a name="example"></a>Esempio

```cpp
// list_remove_if.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

template <class T> class is_odd : public std::unary_function<T, bool>
{
public:
   bool operator( ) ( T& val )
   {
   return ( val % 2 ) == 1;
   }
};

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::iterator c1_Iter, c2_Iter;

   c1.push_back( 3 );
   c1.push_back( 4 );
   c1.push_back( 5 );
   c1.push_back( 6 );
   c1.push_back( 7 );
   c1.push_back( 8 );

   cout << "The initial list is c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   list <int> c2 = c1;
   c2.remove_if( is_odd<int>( ) );

   cout << "After removing the odd elements, "
        << "the list becomes c2 =";
   for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
      cout << " " << *c2_Iter;
   cout << endl;
}
```

```Output
The initial list is c1 = 3 4 5 6 7 8
After removing the odd elements, the list becomes c2 = 4 6 8
```

## <a name="rend"></a><a name="rend"></a> rend

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un oggetto list invertito.

```cpp
const_reverse_iterator rend() const;
reverse_iterator rend();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta alla posizione successiva all'ultimo elemento di un oggetto list invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto list non invertito.

### <a name="remarks"></a>Commenti

`rend` viene usato con un oggetto list invertito proprio come [end](#end) viene usato con un oggetto list.

Se il valore restituito di `rend` viene assegnato a `const_reverse_iterator`, l'oggetto elenco non può essere modificato. Se il valore restituito da `rend` viene assegnato a `reverse_iterator`, l'oggetto elenco può essere modificato.

`rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine dell'oggetto list.

Non è consigliabile dereferenziare il valore restituito da `rend`.

### <a name="example"></a>Esempio

```cpp
// list_rend.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::iterator c1_Iter;
   list <int>::reverse_iterator c1_rIter;

   // If the following line had replaced the line above, an error would
   // have resulted in the line modifying an element (commented below)
   // because the iterator would have been const
   // list <int>::const_reverse_iterator c1_rIter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1_rIter = c1.rend( );
   c1_rIter --;  // Decrementing a reverse iterator moves it forward in
                 // the list (to point to the first element here)
   cout << "The first element in the list is: " << *c1_rIter << endl;

   cout << "The list is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   // rend can be used to test if an iteration is through all of the
   // elements of a reversed list
   cout << "The reversed list is:";
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )
      cout << " " << *c1_rIter;
   cout << endl;

   c1_rIter = c1.rend( );
   c1_rIter--;  // Decrementing the reverse iterator moves it backward
                // in the reversed list (to the last element here)

*c1_rIter = 40;  // This modification of the last element would have
                    // caused an error if a const_reverse iterator had
                    // been declared (as noted above)

   cout << "The modified reversed list is:";
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )
      cout << " " << *c1_rIter;
   cout << endl;
}
```

```Output
The first element in the list is: 10
The list is: 10 20 30
The reversed list is: 30 20 10
The modified reversed list is: 30 20 40
```

## <a name="resize"></a><a name="resize"></a> ridimensionare

Specifica una nuova dimensione per un elenco.

```cpp
void resize(size_type _Newsize);
void resize(size_type _Newsize, Type val);
```

### <a name="parameters"></a>Parametri

*_Newsize*\
Nuova dimensione della stringa.

*Val*\
Valore dei nuovi elementi da aggiungere all'elenco se la nuova dimensione è maggiore di quella originale. Se il valore viene omesso, ai nuovi elementi viene assegnato il valore predefinito per la classe.

### <a name="remarks"></a>Commenti

Se le dimensioni dell'elenco sono inferiori alla dimensione richiesta, *_Newsize*, gli elementi vengono aggiunti all'elenco fino a raggiungere le dimensioni richieste.

Se le dimensioni dell'elenco sono maggiori della dimensione richiesta, gli elementi più vicini alla fine dell'elenco vengono eliminati finché l'elenco non raggiunge la dimensione *_Newsize*.

Se la dimensione attuale dell'elenco corrisponde a quella richiesta, non viene eseguita alcuna azione.

[size](#size) riflette la dimensione corrente dell'elenco.

### <a name="example"></a>Esempio

```cpp
// list_resize.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1.resize( 4,40 );
   cout << "The size of c1 is " << c1.size( ) << endl;
   cout << "The value of the last element is " << c1.back( ) << endl;

   c1.resize( 5 );
   cout << "The size of c1 is now " << c1.size( ) << endl;
   cout << "The value of the last element is now " << c1.back( ) << endl;

   c1.resize( 2 );
   cout << "The reduced size of c1 is: " << c1.size( ) << endl;
   cout << "The value of the last element is now " << c1.back( ) << endl;
}
```

```Output
The size of c1 is 4
The value of the last element is 40
The size of c1 is now 5
The value of the last element is now 0
The reduced size of c1 is: 2
The value of the last element is now 20
```

## <a name="reverse"></a><a name="reverse"></a> inverso

Inverte l'ordine in cui gli elementi sono disposti in un elenco.

```cpp
void reverse();
```

### <a name="example"></a>Esempio

```cpp
// list_reverse.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::iterator c1_Iter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   cout << "c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   c1.reverse( );
   cout << "Reversed c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;
}
```

```Output
c1 = 10 20 30
Reversed c1 = 30 20 10
```

## <a name="reverse_iterator"></a><a name="reverse_iterator"></a> reverse_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un elenco invertito.

```cpp
typedef std::reverse_iterator<iterator> reverse_iterator;
```

### <a name="remarks"></a>Commenti

Un tipo `reverse_iterator` viene usato per scorrere l'elenco in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio per [rbegin](#rbegin).

## <a name="size"></a><a name="size"></a> dimensioni

Restituisce il numero di elementi in un elenco

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza corrente dell'elenco.

### <a name="example"></a>Esempio

```cpp
// list_size.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::size_type i;

   c1.push_back( 5 );
   i = c1.size( );
   cout << "List length is " << i << "." << endl;

   c1.push_back( 7 );
   i = c1.size( );
   cout << "List length is now " << i << "." << endl;
}
```

```Output
List length is 1.
List length is now 2.
```

## <a name="size_type"></a><a name="size_type"></a> size_type

Tipo che conta il numero di elementi in un elenco.

```cpp
typedef typename Allocator::size_type size_type;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [size](#size).

## <a name="sort"></a><a name="sort"></a> ordinamento

Dispone gli elementi di un elenco in ordine crescente o in relazione a un altro ordine definito dall'utente.

```cpp
void sort();

template <class Traits>
    void sort(Traits comp);
```

### <a name="parameters"></a>Parametri

*comp*\
Operatore di confronto utilizzato per ordinare gli elementi successivi.

### <a name="remarks"></a>Commenti

La prima funzione membro inserisce gli elementi in ordine crescente per impostazione predefinita.

La funzione del modello di membro ordina gli elementi in base all'operazione di confronto specificata dall'utente *comp* della classe `Traits` .

### <a name="example"></a>Esempio

```cpp
// list_sort.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::iterator c1_Iter;

   c1.push_back( 20 );
   c1.push_back( 10 );
   c1.push_back( 30 );

   cout << "Before sorting: c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   c1.sort( );
   cout << "After sorting c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   c1.sort( greater<int>( ) );
   cout << "After sorting with 'greater than' operation, c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;
}
```

```Output
Before sorting: c1 = 20 10 30
After sorting c1 = 10 20 30
After sorting with 'greater than' operation, c1 = 30 20 10
```

## <a name="splice"></a><a name="splice"></a> giuntura

Rimuove elementi da un elenco di origine e li inserisce in un elenco di destinazione.

```cpp
// insert the entire source list
void splice(const_iterator Where, list<Type, Allocator>& Source);
void splice(const_iterator Where, list<Type, Allocator>&& Source);

// insert one element of the source list
void splice(const_iterator Where, list<Type, Allocator>& Source, const_iterator Iter);
void splice(const_iterator Where, list<Type, Allocator>&& Source, const_iterator Iter);

// insert a range of elements from the source list
void splice(const_iterator Where, list<Type, Allocator>& Source, const_iterator First, const_iterator Last);
void splice(const_iterator Where, list<Type, Allocator>&& Source, const_iterator First, const_iterator Last);
```

### <a name="parameters"></a>Parametri

*In cui*\
Posizione nell'elenco di destinazione prima della quale occorre effettuare l'inserimento.

*Origine*\
Elenco di origine da inserire nell'elenco di destinazione.

*Iter*\
Elemento da inserire dall'elenco di origine.

*Prima*\
Primo elemento dell'intervallo da inserire dall'elenco di origine.

*Ultima*\
Prima posizione dopo l'ultimo elemento dell'intervallo da inserire dall'elenco di origine.

### <a name="remarks"></a>Commenti

La prima coppia di funzioni membro inserisce tutti gli elementi dell'elenco di origine nell'elenco di destinazione prima della posizione a cui viene fatto riferimento da *where* e rimuove tutti gli elementi dall'elenco di origine. ( `&Source` non deve essere uguale a **`this`** ).

La seconda coppia di funzioni membro inserisce l'elemento a cui fa riferimento *iter* prima della posizione nell'elenco di destinazione a cui fa riferimento *where* e rimuove *iter* dall'elenco di origine. Se `Where == Iter || Where == ++Iter`, non si verifica alcuna modifica.

La terza coppia di funzioni membro inserisce l'intervallo designato da [ `First` , `Last` ) prima dell'elemento nell'elenco di destinazione a cui fa riferimento *where* e rimuove tale intervallo di elementi dall'elenco di origine. Se `&Source == this` , l'intervallo `[First, Last)` non deve includere l'elemento a *cui* punta.

Se l'operazione di splicing nell'intervallo inserisce `N` elementi e `&Source != this`, un oggetto della classe [iterator](../standard-library/forward-list-class.md#iterator) sarà incrementato `N` volte.

In tutti i casi, gli iteratori, i puntatori o i riferimenti che fanno riferimento agli elementi sottoposti a splicing rimangono validi e sono trasferiti al contenitore di destinazione.

### <a name="example"></a>Esempio

```cpp
// list_splice.cpp
// compile with: /EHsc /W4
#include <list>
#include <iostream>

using namespace std;

template <typename S> void print(const S& s) {
    cout << s.size() << " elements: ";

    for (const auto& p : s) {
        cout << "(" << p << ") ";
    }

    cout << endl;
}

int main()
{
    list<int> c1{10,11};
    list<int> c2{20,21,22};
    list<int> c3{30,31};
    list<int> c4{40,41,42,43};

    list<int>::iterator where_iter;
    list<int>::iterator first_iter;
    list<int>::iterator last_iter;

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
    c2.splice(where_iter, c1);
    cout << "After splicing c1 into c2:" << endl;
    cout << "c1 = ";
    print(c1);
    cout << "c2 = ";
    print(c2);

    first_iter = c3.begin();
    c2.splice(where_iter, c3, first_iter);
    cout << "After splicing the first element of c3 into c2:" << endl;
    cout << "c3 = ";
    print(c3);
    cout << "c2 = ";
    print(c2);

    first_iter = c4.begin();
    last_iter = c4.end();
    // set up to get the middle elements
    ++first_iter;
    --last_iter;
    c2.splice(where_iter, c4, first_iter, last_iter);
    cout << "After splicing a range of c4 into c2:" << endl;
    cout << "c4 = ";
    print(c4);
    cout << "c2 = ";
    print(c2);
}
```

```Output
Beginning state of lists:c1 = 2 elements: (10) (11)c2 = 3 elements: (20) (21) (22)c3 = 2 elements: (30) (31)c4 = 4 elements: (40) (41) (42) (43)After splicing c1 into c2:c1 = 0 elements:c2 = 5 elements: (20) (10) (11) (21) (22)After splicing the first element of c3 into c2:c3 = 1 elements: (31)c2 = 6 elements: (20) (10) (11) (30) (21) (22)After splicing a range of c4 into c2:c4 = 2 elements: (40) (43)c2 = 8 elements: (20) (10) (11) (30) (41) (42) (21) (22)
```

## <a name="swap"></a><a name="swap"></a> scambio

Scambia gli elementi di due elenchi.

```cpp
void swap(list<Type, Allocator>& right);
friend void swap(list<Type, Allocator>& left, list<Type, Allocator>& right)
```

### <a name="parameters"></a>Parametri

*Ok*\
Elenco che fornisce gli elementi da scambiare o l'elenco i cui elementi devono essere scambiati con quelli dell'elenco a *sinistra*.

*sinistra*\
Elenco i cui elementi devono essere scambiati con quelli dell'elenco a *destra*.

### <a name="example"></a>Esempio

```cpp
// list_swap.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1, c2, c3;
   list <int>::iterator c1_Iter;

   c1.push_back( 1 );
   c1.push_back( 2 );
   c1.push_back( 3 );
   c2.push_back( 10 );
   c2.push_back( 20 );
   c3.push_back( 100 );

   cout << "The original list c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   c1.swap( c2 );

   cout << "After swapping with c2, list c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   swap( c1,c3 );

   cout << "After swapping with c3, list c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;
}
```

```Output
The original list c1 is: 1 2 3
After swapping with c2, list c1 is: 10 20
After swapping with c3, list c1 is: 100
```

## <a name="unique"></a><a name="unique"></a> unico

Rimuove gli elementi duplicati adiacenti o gli elementi adiacenti che soddisfano un altro predicato binario da un elenco.

```cpp
void unique();

template <class BinaryPredicate>
void unique(BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Pred*\
Predicato binario usato per confrontare gli elementi successivi.

### <a name="remarks"></a>Commenti

Questa funzione presuppone che l'elenco sia ordinato, in modo che tutti gli elementi duplicati siano adiacenti. Gli elementi duplicati non adiacenti non verranno eliminati.

La prima funzione membro rimuove tutti gli elementi che risultano uguali all'elemento precedente.

La seconda funzione membro rimuove tutti gli elementi che soddisfano la funzione predicativa *Predator* rispetto all'elemento precedente. È possibile usare uno degli oggetti funzione binaria dichiarati nell' \<functional> intestazione per l'argomento *predazione* oppure è possibile crearne di personalizzati.

### <a name="example"></a>Esempio

```cpp
// list_unique.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1;
   list <int>::iterator c1_Iter, c2_Iter,c3_Iter;
   not_equal_to<int> mypred;

   c1.push_back( -10 );
   c1.push_back( 10 );
   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 20 );
   c1.push_back( -10 );

   cout << "The initial list is c1 =";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   list <int> c2 = c1;
   c2.unique( );
   cout << "After removing successive duplicate elements, c2 =";
   for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
      cout << " " << *c2_Iter;
   cout << endl;

   list <int> c3 = c2;
   c3.unique( mypred );
   cout << "After removing successive unequal elements, c3 =";
   for ( c3_Iter = c3.begin( ); c3_Iter != c3.end( ); c3_Iter++ )
      cout << " " << *c3_Iter;
   cout << endl;
}
```

```Output
The initial list is c1 = -10 10 10 20 20 -10
After removing successive duplicate elements, c2 = -10 10 20 -10
After removing successive unequal elements, c3 = -10 -10
```

## <a name="value_type"></a><a name="value_type"></a> value_type

Tipo che rappresenta il tipo di dati archiviati in un elenco.

```cpp
typedef typename Allocator::value_type value_type;
```

### <a name="remarks"></a>Commenti

`value_type` è sinonimo del parametro di modello *Type*.

### <a name="example"></a>Esempio

```cpp
// list_value_type.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list<int>::value_type AnInt;
   AnInt = 44;
   cout << AnInt << endl;
}
```

```Output
44
```
