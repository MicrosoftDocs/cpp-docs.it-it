---
title: Classe map | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- map/std::map
- map/std::map::allocator_type
- map/std::map::const_iterator
- map/std::map::const_pointer
- map/std::map::const_reference
- map/std::map::const_reverse_iterator
- map/std::map::difference_type
- map/std::map::iterator
- map/std::map::key_compare
- map/std::map::key_type
- map/std::map::mapped_type
- map/std::map::pointer
- map/std::map::reference
- map/std::map::reverse_iterator
- map/std::map::size_type
- map/std::map::value_type
- map/std::map::at
- map/std::map::begin
- map/std::map::cbegin
- map/std::map::cend
- map/std::map::clear
- map/std::map::count
- map/std::map::crbegin
- map/std::map::crend
- map/std::map::emplace
- map/std::map::emplace_hint
- map/std::map::empty
- map/std::map::end
- map/std::map::equal_range
- map/std::map::erase
- map/std::map::find
- map/std::map::get_allocator
- map/std::map::insert
- map/std::map::key_comp
- map/std::map::lower_bound
- map/std::map::max_size
- map/std::map::rbegin
- map/std::map::rend
- map/std::map::size
- map/std::map::swap
- map/std::map::upper_bound
- map/std::map::value_comp
dev_langs:
- C++
helpviewer_keywords:
- std::map [C++]
- std::map [C++], allocator_type
- std::map [C++], const_iterator
- std::map [C++], const_pointer
- std::map [C++], const_reference
- std::map [C++], const_reverse_iterator
- std::map [C++], difference_type
- std::map [C++], iterator
- std::map [C++], key_compare
- std::map [C++], key_type
- std::map [C++], mapped_type
- std::map [C++], pointer
- std::map [C++], reference
- std::map [C++], reverse_iterator
- std::map [C++], size_type
- std::map [C++], value_type
- std::map [C++], at
- std::map [C++], begin
- std::map [C++], cbegin
- std::map [C++], cend
- std::map [C++], clear
- std::map [C++], count
- std::map [C++], crbegin
- std::map [C++], crend
- std::map [C++], emplace
- std::map [C++], emplace_hint
- std::map [C++], empty
- std::map [C++], end
- std::map [C++], equal_range
- std::map [C++], erase
- std::map [C++], find
- std::map [C++], get_allocator
- std::map [C++], insert
- std::map [C++], key_comp
- std::map [C++], lower_bound
- std::map [C++], max_size
- std::map [C++], rbegin
- std::map [C++], rend
- std::map [C++], size
- std::map [C++], swap
- std::map [C++], upper_bound
- std::map [C++], value_comp
ms.assetid: 7876f4c9-ebb4-4878-af1e-09364c43af0a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ccab97a7ac1fd0ad073a3f507dfa6687f311efc4
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45703924"
---
# <a name="map-class"></a>Classe map

Utilizzato per l'archiviazione e il recupero di dati da una raccolta in cui ogni elemento è costituito da una coppia che contiene sia un valore dati che una chiave di ordinamento. Il valore della chiave è univoco e viene utilizzato per l'ordinamento automatico dei dati.

Il valore di un elemento di una mappa può essere modificato direttamente. Il valore della chiave è una costante e non può essere modificato. Al contrario, i valori delle chiavi associati a elementi precedenti devono essere eliminati e i valori delle nuove chiavi devono essere inseriti per i nuovi elementi.

## <a name="syntax"></a>Sintassi

```cpp
template <class Key,
    class Type,
    class Traits = less<Key>,
    class Allocator=allocator<pair <const Key, Type>>>
class map;
```

### <a name="parameters"></a>Parametri

*Key*<br/>
Tipo di dati relativo alle chiavi da archiviare nella mappa.

*Type*<br/>
Tipo di dati relativo agli elementi da archiviare nella mappa.

*Tratti*<br/>
Tipo che fornisce un oggetto funzione in grado di confrontare i valori di due elementi come chiavi di ordinamento per determinarne l'ordine relativo nella mappa. Questo argomento è facoltativo e il predicato binario `less<Key>` rappresenta il valore predefinito.

In C++ 14 è possibile abilitare la ricerca eterogenea specificando il predicato std::less<> che non ha alcun parametro di tipo. Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers).

*Allocatore*<br/>
Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione della mappa e alla deallocazione della memoria. Questo argomento è facoltativo e il valore predefinito è `allocator<pair<const Key, Type> >`.

## <a name="remarks"></a>Note

La classe map della libreria standard C++ è:

- Un contenitore di dimensioni variabili in grado di recuperare in modo efficiente i valori degli elementi in base ai valori delle chiavi associate.

- Reversibile, in quanto fornisce iteratori bidirezionali per accedere ai relativi elementi.

- Ordinato, perché i relativi elementi vengono ordinati in base ai valori delle chiavi secondo una funzione di confronto specificata.

- Univoco. perché ogni elemento deve disporre di una chiave univoca.

- Un contenitore associativo di coppie, in quanto i valori dei dati degli elementi sono diversi dai valori delle relative chiavi.

- Una classe modello, poiché le funzionalità che fornisce sono generiche e indipendenti dal tipo di elemento o di chiave. I tipi di dati utilizzati per gli elementi e le chiavi vengono specificati come parametri nella classe modello insieme alla funzione di confronto e all'allocatore.

L'iteratore fornito dalla classe map è un iteratore bidirezionale, ma le funzioni membro [insert](#insert) e [map](#map) della classe hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali. I diversi concetti di iteratore sono correlati dai perfezionamenti delle rispettive funzionalità. Ogni concetto di iteratore dispone di un proprio set di requisiti e gli algoritmi utilizzati con tali concetti devono essere limitati da tali requisiti. Un iteratore di input può essere dereferenziato per fare riferimento a un determinato oggetto, nonché incrementato all'iteratore successivo della sequenza.

È consigliabile basare la scelta del tipo di contenitore sul tipo di ricerca e inserimento richiesti dall'applicazione. I contenitori associativi sono ottimizzati per le operazioni di ricerca, inserimento e rimozione. Le funzioni membro che supportano in modo esplicito queste operazioni consentono di eseguirle in un tempo nella più pessimistica delle ipotesi proporzionale al logaritmo del numero di elementi presenti nel contenitore. L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.

È consigliabile scegliere come contenitore associativo la mappa quando le condizioni che consentono di associare i valori alle chiavi vengono soddisfatte dall'applicazione. Un modello relativo a questo tipo di struttura è costituito da un elenco ordinato di parole chiave univoche a cui sono associati valori di stringa contenenti definizioni. Se una parola dispone di più definizioni corrette, tali da rendere una chiave non univoca, è opportuno scegliere come contenitore un multimap. Se viene archiviato solo un elenco di parole, il set sarà il contenitore appropriato. Se sono consentite più occorrenze delle parole, il multiset rappresenterà la scelta appropriata.

L'oggetto map ordina gli elementi che controlla chiamando un oggetto funzione archiviato di tipo [key_compare](#key_compare). Questo oggetto archiviato è una funzione di confronto a cui si accede chiamando il metodo [key_comp](#key_comp). In genere, due elementi qualsiasi vengono confrontati per determinare se uno è minore dell'altro o se sono equivalenti. Una volta che tutti gli elementi sono stati confrontati, viene creata una sequenza ordinata di elementi non equivalenti.

> [!NOTE]
> La funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard. Un f predicato binario è un oggetto funzione che dispone di due oggetti argomento x e y e un valore restituito pari **true** oppure **false**. Un ordinamento imposto a un set è un "strict Weak" ordinamento se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti x e y vengono definiti equivalenti quando sia f f(y,x) sono **false** . Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale (nel senso che tutti gli elementi vengono ordinati l'uno rispetto all'altro) e le chiavi accoppiate saranno indistinguibili l'una dall'altra.
>
> In C++ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo. Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers).

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[map](#map)|Costruisce una lista di dimensioni specifiche con elementi di un valore specifico, con un `allocator` specifico o come copia di un'altra mappa.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|typedef per la classe `allocator` dell'oggetto mappa.|
|[const_iterator](#const_iterator)|Typedef per un iteratore bidirezionale in grado di leggere un **const** elemento della mappa.|
|[const_pointer](#const_pointer)|Typedef per un puntatore a un **const** elemento in una mappa.|
|[const_reference](#const_reference)|Typedef per un riferimento a un **const** elemento archiviato in una mappa per la lettura e l'esecuzione **const** operazioni.|
|[const_reverse_iterator](#const_reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi elemento **const** dell'oggetto map.|
|[difference_type](#difference_type)|typedef Signed Integer per il numero di elementi di una mappa in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|
|[iterator](#iterator)|typedef per un iteratore bidirezionale in grado di leggere o di modificare qualsiasi elemento di una mappa.|
|[key_compare](#key_compare)|typedef per un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi della mappa.|
|[key_type](#key_type)|typedef per la chiave di ordinamento archiviata in ogni elemento della mappa.|
|[mapped_type](#mapped_type)|typedef per i dati archiviati in ogni elemento di una mappa.|
|[pointer](#pointer)|Typedef per un puntatore a un **const** elemento in una mappa.|
|[reference](#reference)|typedef per un riferimento a un elemento archiviato in una mappa.|
|[reverse_iterator](#reverse_iterator)|typedef per un iteratore bidirezionale in grado di leggere o di modificare un elemento di una mappa invertita.|
|[size_type](#size_type)|typedef Unsigned Integer per il numero di elementi di una mappa|
|[value_type](#value_type)|typedef per il tipo di oggetto archiviato come elemento di una mappa.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[at](#at)|Trova un elemento con un valore della chiave specificata.|
|[begin](#begin)|Restituisce un iteratore che punta al primo elemento della mappa.|
|[cbegin](#cbegin)|Restituisce un iteratore const che punta al primo elemento della mappa.|
|[cend](#cend)|Restituisce un iteratore const successivo all'ultimo valore.|
|[clear](#clear)|Cancella tutti gli elementi di una mappa.|
|[count](#count)|Restituisce il numero di elementi di una mappa la cui chiave corrisponde alla chiave specificata in un parametro.|
|[crbegin](#crbegin)|Restituisce un iteratore const che punta al primo elemento di una mappa invertita.|
|[crend](#crend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di una mappa invertita.|
|[emplace](#emplace)|Inserisce un elemento costruito sul posto nella mappa.|
|[emplace_hint](#emplace_hint)|Inserisce un elemento costruito sul posto nella mappa, con un suggerimento sulla posizione.|
|[empty](#empty)|Restituisce **true** se una mappa è vuota.|
|[end](#end)|Restituisce l'iteratore successivo all'ultimo valore.|
|[equal_range](#equal_range)|Restituisce una coppia di iteratori. Il primo iteratore della coppia fa riferimento al primo elemento di un `map` con una chiave maggiore di una chiave specificata. Il secondo iteratore della coppia fa riferimento al primo elemento della `map` con una chiave uguale o maggiore della chiave specificata.|
|[erase](#erase)|Rimuove un elemento o un intervallo di elementi di una mappa dalle posizioni specificate.|
|[find](#find)|Restituisce un iteratore che punta alla posizione di un elemento di una mappa con una chiave uguale a una chiave specificata.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire la mappa.|
|[insert](#insert)|Incolla un elemento o un intervallo di elementi nella mappa in una posizione specificata.|
|[key_comp](#key_comp)|Restituisce una copia dell'oggetto di confronto utilizzato per ordinare le chiavi di una mappa.|
|[lower_bound](#lower_bound)|Restituisce un iteratore al primo elemento di una mappa con un valore della chiave uguale o maggiore di quello di una chiave specificata.|
|[max_size](#max_size)|Restituisce la lunghezza massima della mappa.|
|[rbegin](#rbegin)|Restituisce un iteratore che punta al primo elemento di una mappa invertita.|
|[rend](#rend)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di una mappa invertita.|
|[size](#size)|Restituisce il numero di elementi della mappa.|
|[swap](#swap)|Scambia gli elementi di due oggetti map.|
|[upper_bound](#upper_bound)|Restituisce un iteratore al primo elemento di una mappa con un valore della chiave uguale o maggiore di quello di una chiave specificata.|
|[value_comp](#value_comp)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare i valori di una mappa.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator&#91;&#93;](#op_at)|Inserisce un elemento in una mappa con un valore di chiave specificato.|
|[operator=](#op_eq)|Sostituisce gli elementi di una mappa con una copia di un'altra mappa.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<map>

**Spazio dei nomi:** std

## <a name="allocator_type"></a>  map::allocator_type

Tipo che rappresenta la classe allocator per l'oggetto map.

```cpp
typedef Allocator allocator_type;
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get_allocator](#get_allocator) per indicazioni su come usare `allocator_type`.

## <a name="at"></a>  map::at

Trova un elemento con un valore della chiave specificata.

```cpp
Type& at(const Key& key);

const Type& at(const Key& key) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|Parametro|Descrizione|
|*key*|Valore di chiave da trovare.|

### <a name="return-value"></a>Valore restituito

Riferimento al valore dei dati dell'elemento trovato.

### <a name="remarks"></a>Note

Se non viene trovato il valore della chiave dell'argomento, la funzione genera un oggetto della [classe out_of_range](../standard-library/out-of-range-class.md).

### <a name="example"></a>Esempio

```cpp
// map_at.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

typedef std::map<char, int> Mymap;
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

## <a name="begin"></a>  map::begin

Restituisce un iteratore che punta al primo elemento dell'oggetto map.

```cpp
const_iterator begin() const;

iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta al primo elemento dell'oggetto map o alla posizione successiva a un oggetto map vuoto.

### <a name="example"></a>Esempio

```cpp
// map_begin.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int> m1;

   map <int, int> :: iterator m1_Iter;
   map <int, int> :: const_iterator m1_cIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 0, 0 ) );
   m1.insert ( Int_Pair ( 1, 1 ) );
   m1.insert ( Int_Pair ( 2, 4 ) );

   m1_cIter = m1.begin ( );
   cout << "The first element of m1 is " << m1_cIter -> first << endl;

   m1_Iter = m1.begin ( );
   m1.erase ( m1_Iter );

   // The following 2 lines would err because the iterator is const
   // m1_cIter = m1.begin ( );
   // m1.erase ( m1_cIter );

   m1_cIter = m1.begin( );
   cout << "The first element of m1 is now " << m1_cIter -> first << endl;
}
```

```Output
The first element of m1 is 0
The first element of m1 is now 1
```

## <a name="cbegin"></a>  map::cbegin

Restituisce un **const** iteratore che punta alla posizione oltre l'ultimo elemento in un intervallo.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto **const** iteratore bidirezionale che punta al primo elemento nell'intervallo o alla posizione appena oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()`).

### <a name="remarks"></a>Note

Con il valore restituito di `cbegin`, gli elementi dell'intervallo non possono essere modificati.

È possibile usare questa funzione membro anziché la funzione membro `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, prendere in considerazione `Container` sia un modificabili (non - **const**) contenitore di qualsiasi tipo che supporta `begin()` e `cbegin()`.

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator
```

## <a name="cend"></a>  map::cend

Restituisce un **const** iteratore che punta alla posizione oltre l'ultimo elemento in un intervallo.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto **const** iteratore di accesso bidirezionale che punta appena oltre la fine dell'intervallo.

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

## <a name="clear"></a>  map::clear

Cancella tutti gli elementi di una mappa.

```cpp
void clear();
```

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro map::clear.

```cpp
// map_clear.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main()
{
    using namespace std;
    map<int, int> m1;
    map<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    m1.insert(Int_Pair(1, 1));
    m1.insert(Int_Pair(2, 4));

    i = m1.size();
    cout << "The size of the map is initially "
         << i << "." << endl;

    m1.clear();
    i = m1.size();
    cout << "The size of the map after clearing is "
         << i << "." << endl;
}
```

```Output
The size of the map is initially 2.
The size of the map after clearing is 0.
```

## <a name="const_iterator"></a>  map::const_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento **const** dell'oggetto map.

```cpp
typedef implementation-defined const_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_iterator` non può essere usato per modificare il valore di un elemento.

Il tipo `const_iterator` definito da map punta a elementi che sono oggetti di [value_type](#value_type), ovvero di tipo `pair`\< **constKey**, **Type**>, in cui il primo membro è la chiave dell'elemento e il secondo membro è il punto di riferimento mappato incluso nell'elemento.

Per dereferenziare un `const_iterator` `cIter` che punta a un elemento in una mappa, usare il `->` operatore.

Per accedere al valore della chiave per l'elemento, usare `cIter` -> **first**, che equivale a (\* `cIter`). **first**.

Per accedere al valore del punto di riferimento mappato per l'elemento, usare `cIter` -> **second**, che equivale a (\* `cIter`). **second**.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [begin](#begin) per indicazioni su come usare `const_iterator`.

## <a name="const_pointer"></a>  map::const_pointer

Tipo che fornisce un puntatore a un elemento **const** di un oggetto map.

```cpp
typedef typename allocator_type::const_pointer const_pointer;
```

### <a name="remarks"></a>Note

Un tipo `const_pointer` non può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto map.

## <a name="const_reference"></a>  map::const_reference

Tipo che fornisce un riferimento a un elemento **const** archiviato in un oggetto map per la lettura e l'esecuzione di operazioni **const**.

```cpp
typedef typename allocator_type::const_reference const_reference;
```

### <a name="example"></a>Esempio

```cpp
// map_const_ref.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int> m1;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );

   // Declare and initialize a const_reference &Ref1
   // to the key of the first element
   const int &Ref1 = ( m1.begin( ) -> first );

   // The following line would cause an error as the
   // non-const_reference cannot be used to access the key
   // int &Ref1 = ( m1.begin( ) -> first );

   cout << "The key of first element in the map is "
        << Ref1 << "." << endl;

   // Declare and initialize a reference &Ref2
   // to the data value of the first element
   int &Ref2 = ( m1.begin( ) -> second );

   cout << "The data value of first element in the map is "
        << Ref2 << "." << endl;
}
```

```Output
The key of first element in the map is 1.
The data value of first element in the map is 10.
```

## <a name="const_reverse_iterator"></a>  map::const_reverse_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi elemento **const** dell'oggetto map.

```cpp
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene usato per eseguire l'iterazione sull'oggetto map in ordine inverso.

Il `const_reverse_iterator` definito da map punta a elementi che sono oggetti di [value_type](#value_type), ovvero di tipo `pair<const Key, Type>`, dove il primo membro è la chiave dell'elemento e il secondo membro è il punto di riferimento mappato nell'elemento.

Per dereferenziare un `const_reverse_iterator crIter` che punta a un elemento in una mappa, usare il `->` operatore.

Per accedere al valore della chiave per l'elemento, usare `crIter`  ->  **primo**, che equivale a (\* `crIter`). **primo**.

Per accedere al valore del punto di riferimento mappato per l'elemento, usare `crIter`  ->  **secondo**, che equivale a (\* `crIter`). **primo**.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rend](#rend) per indicazioni su come dichiarare e usare `const_reverse_iterator`.

## <a name="count"></a>  map::count

Restituisce il numero di elementi di una mappa la cui chiave corrisponde a una chiave specificata dal parametro.

```cpp
size_type count(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore chiave degli elementi per cui trovare un corrispondenza nella mappa.

### <a name="return-value"></a>Valore restituito

1 se la mappa contiene un elemento la cui chiave di ordinamento corrisponde alla chiave del parametro. 0 se la mappa non contiene un elemento con una chiave corrispondente.

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di elementi *x* nell'intervallo

[ `lower_bound` (_ *Key* ), `upper_bound` (\_ *Key* ) )

corrispondente a 0 o 1 nel caso della mappa, che è un contenitore associativo univoco.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro map::count.

```cpp
// map_count.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main()
{
    using namespace std;
    map<int, int> m1;
    map<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    m1.insert(Int_Pair(1, 1));
    m1.insert(Int_Pair(2, 1));
    m1.insert(Int_Pair(1, 4));
    m1.insert(Int_Pair(2, 1));

    // Keys must be unique in map, so duplicates are ignored
    i = m1.count(1);
    cout << "The number of elements in m1 with a sort key of 1 is: "
         << i << "." << endl;

    i = m1.count(2);
    cout << "The number of elements in m1 with a sort key of 2 is: "
         << i << "." << endl;

    i = m1.count(3);
    cout << "The number of elements in m1 with a sort key of 3 is: "
         << i << "." << endl;
}
```

```Output
The number of elements in m1 with a sort key of 1 is: 1.
The number of elements in m1 with a sort key of 2 is: 1.
The number of elements in m1 with a sort key of 3 is: 0.
```

## <a name="crbegin"></a>  map::crbegin

Restituisce un iteratore const che punta al primo elemento di un oggetto map invertito.

```cpp
const_reverse_iterator crbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta al primo elemento di un oggetto [map](../standard-library/map-class.md) invertito o a quello che è stato l'ultimo elemento dell'oggetto `map` non invertito.

### <a name="remarks"></a>Note

`crbegin` viene usato con un oggetto `map` invertito proprio come [begin](#begin) viene usato con un oggetto `map`.

Con il valore restituito di `crbegin`, l'oggetto `map` non può essere modificato.

`crbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto `map`.

### <a name="example"></a>Esempio

```cpp
// map_crbegin.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int> m1;

   map <int, int> :: const_reverse_iterator m1_crIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   m1_crIter = m1.crbegin( );
   cout << "The first element of the reversed map m1 is "
        << m1_crIter -> first << "." << endl;
}
```

```Output
The first element of the reversed map m1 is 3.
```

## <a name="crend"></a>  map::crend

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un oggetto map invertito.

```cpp
const_reverse_iterator crend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta alla posizione successiva all'ultimo elemento di un oggetto [map](../standard-library/map-class.md) invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto `map` non invertito.

### <a name="remarks"></a>Note

`crend` viene usato con un oggetto map invertito proprio come [end](#end) viene usato con un oggetto `map`.

Con il valore restituito di `crend`, l'oggetto `map` non può essere modificato.

`crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine dell'oggetto `map`.

Non è consigliabile dereferenziare il valore restituito da `crend`.

### <a name="example"></a>Esempio

```cpp
// map_crend.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int> m1;

   map <int, int> :: const_reverse_iterator m1_crIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   m1_crIter = m1.crend( );
   m1_crIter--;
   cout << "The last element of the reversed map m1 is "
        << m1_crIter -> first << "." << endl;
}
```

```Output
The last element of the reversed map m1 is 1.
```

## <a name="difference_type"></a>  map::difference_type

Tipo Signed Integer che può essere usato per rappresentare il numero di elementi di un oggetto map in un intervallo compreso tra gli elementi a cui puntano gli iteratori.

```cpp
typedef allocator_type::difference_type difference_type;
```

### <a name="remarks"></a>Note

`difference_type` è il tipo restituito quando si sottrae o si incrementa tramite gli iteratori del contenitore. `difference_type` viene in genere usato per rappresentare il numero di elementi nell'intervallo *[ first,  last)* tra gli iteratori `first` e `last`, includendo l'elemento a cui punta `first` e l'intervallo di elementi fino all'elemento a cui punta `last`, escluso tale elemento.

Si noti che, sebbene `difference_type` sia disponibile per tutti gli iteratori che soddisfano i requisiti di un iteratore di input, inclusa la classe degli iteratori bidirezionali supportati da contenitori reversibili come set, la sottrazione tra gli iteratori è supportata solo da iteratori ad accesso casuale forniti da un contenitore ad accesso casuale, ad esempio vector.

### <a name="example"></a>Esempio

```cpp
// map_diff_type.cpp
// compile with: /EHsc
#include <iostream>
#include <map>
#include <algorithm>

int main( )
{
   using namespace std;
   map <int, int> m1;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 3, 20 ) );
   m1.insert ( Int_Pair ( 2, 30 ) );

   map <int, int>::iterator m1_Iter, m1_bIter, m1_eIter;
   m1_bIter = m1.begin( );
   m1_eIter = m1.end( );

   // Count the number of elements in a map
   map <int, int>::difference_type  df_count = 1;
   m1_Iter = m1.begin( );
   while ( m1_Iter != m1_eIter)
   {
      df_count++;
      m1_Iter++;
   }

   cout << "The number of elements in the map m1 is: "
        << df_count << "." << endl;
}
```

```Output
The number of elements in the map m1 is: 4.
```

## <a name="emplace"></a>  map::emplace

Inserisce un elemento costruito sul posto, senza che vengano eseguite operazioni di copia o spostamento.

```cpp
template <class... Args>
pair<iterator, bool>
emplace(
    Args&&... args);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|Parametro|Descrizione|
|*args*|Argomenti inoltrati per costruire un elemento da inserire nell'oggetto map a meno che quest'ultimo non contenga già un elemento il cui valore è ordinato in modo equivalente.|

### <a name="return-value"></a>Valore restituito

Oggetto [coppia](../standard-library/pair-structure.md) cui **bool** componente è true se è stato eseguito un inserimento e false se l'oggetto map contiene già un elemento di valore equivalente nell'ordinamento. Il componente iteratore della coppia di valore restituito punta all'elemento appena inserito se il **bool** componente è true oppure all'elemento esistente se il **bool** componente è false.

Per accedere al componente iterator di una `pair` `pr`, usare `pr.first`; per dereferenziarlo, usare `*pr.first`. Per l'accesso di **bool** componente, usare `pr.second`. Per un esempio, vedere il codice di esempio più avanti in questo articolo.

### <a name="remarks"></a>Note

Questa funzione non invalida alcun iteratore né riferimento.

Se viene generata un'eccezione durante l'inserimento, lo stato del contenitore non viene modificato.

L'oggetto [value_type](#value_type) di un elemento è una coppia, pertanto il valore di un elemento sarà una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dei dati dell'elemento.

### <a name="example"></a>Esempio

```cpp
// map_emplace.cpp
// compile with: /EHsc
#include <map>
#include <string>
#include <iostream>

using namespace std;

template <typename M> void print(const M& m) {
    cout << m.size() << " elements: ";

    for (const auto& p : m) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }

    cout << endl;
}

int main()
{
    map<int, string> m1;

    auto ret = m1.emplace(10, "ten");

    if (!ret.second){
        auto pr = *ret.first;
        cout << "Emplace failed, element with key 10 already exists."
            << endl << "  The existing element is (" << pr.first << ", " << pr.second << ")"
            << endl;
        cout << "map not modified" << endl;
    }
    else{
        cout << "map modified, now contains ";
        print(m1);
    }
    cout << endl;

    ret = m1.emplace(10, "one zero");

    if (!ret.second){
        auto pr = *ret.first;
        cout << "Emplace failed, element with key 10 already exists."
            << endl << "  The existing element is (" << pr.first << ", " << pr.second << ")"
            << endl;
    }
    else{
        cout << "map modified, now contains ";
        print(m1);
    }
    cout << endl;
}

```

## <a name="emplace_hint"></a>  map::emplace_hint

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
|Parametro|Descrizione|
|*args*|Argomenti inoltrati per costruire un elemento da inserire nell'oggetto map a meno che quest'ultimo non contenga già tale elemento o, più in generale, un elemento la cui la chiave è ordinata in modo equivalente.|
|*where*|Posizione in cui iniziare a cercare il punto di inserimento corretto. (Se tale punto è immediatamente seguito *in cui*, inserimento può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.)|

### <a name="return-value"></a>Valore restituito

Iteratore all'elemento appena inserito.

Se l'inserimento ha avuto esito negativo perché l'elemento esiste già, restituisce un iteratore all'elemento esistente con la relativa chiave.

### <a name="remarks"></a>Note

Questa funzione non invalida alcun iteratore né riferimento.

Se viene generata un'eccezione durante l'inserimento, lo stato del contenitore non viene modificato.

L'oggetto [value_type](#value_type) di un elemento è una coppia, pertanto il valore di un elemento sarà una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dei dati dell'elemento.

### <a name="example"></a>Esempio

```cpp
// map_emplace.cpp
// compile with: /EHsc
#include <map>
#include <string>
#include <iostream>

using namespace std;

template <typename M> void print(const M& m) {
    cout << m.size() << " elements: " << endl;

    for (const auto& p : m) {
        cout << "(" << p.first <<  "," << p.second << ") ";
    }

    cout << endl;
}

int main()
{
    map<string, string> m1;

    // Emplace some test data
    m1.emplace("Anna", "Accounting");
    m1.emplace("Bob", "Accounting");
    m1.emplace("Carmine", "Engineering");

    cout << "map starting data: ";
    print(m1);
    cout << endl;

    // Emplace with hint
    // m1.end() should be the "next" element after this emplacement
    m1.emplace_hint(m1.end(), "Doug", "Engineering");

    cout << "map modified, now contains ";
    print(m1);
    cout << endl;
}

```

## <a name="empty"></a>  map::empty

Verifica se un oggetto map è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto map è vuoto; in caso contrario, **false**.

### <a name="example"></a>Esempio

```cpp
// map_empty.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int> m1, m2;

   typedef pair <int, int> Int_Pair;
   m1.insert ( Int_Pair ( 1, 1 ) );

   if ( m1.empty( ) )
      cout << "The map m1 is empty." << endl;
   else
      cout << "The map m1 is not empty." << endl;

   if ( m2.empty( ) )
      cout << "The map m2 is empty." << endl;
   else
      cout << "The map m2 is not empty." << endl;
}
```

```Output
The map m1 is not empty.
The map m2 is empty.
```

## <a name="end"></a>  map::end

Restituisce l'iteratore successivo all'ultimo valore.

```cpp
const_iterator end() const;


iterator end();
```

### <a name="return-value"></a>Valore restituito

Iteratore successivo all'ultimo valore. Se la mappa è vuota, verrà restituito `map::end() == map::begin()`.

### <a name="remarks"></a>Note

`end` viene usato per verificare se un iteratore ha superato la fine del relativo oggetto map.

Non è consigliabile dereferenziare il valore restituito da `end`.

Per un esempio di codice, vedere [map::find](#find).

## <a name="equal_range"></a>  map::equal_range

Restituisce una coppia di iteratori che rappresentano rispettivamente l'elemento [lower_bound](#lower_bound) e l'elemento [upper_bound](#upper_bound) della chiave.

```cpp
pair <const_iterator, const_iterator> equal_range (const Key& key) const;

pair <iterator, iterator> equal_range (const Key& key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto map in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Per accedere al primo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **first** e per dereferenziare l'iteratore del limite inferiore, usare \*( `pr`. **first**). Per accedere al secondo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **second** e per dereferenziare l'iteratore del limite superiore, usare \*( `pr`. **second**).

### <a name="example"></a>Esempio

```cpp
// map_equal_range.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   typedef map <int, int, less<int> > IntMap;
   IntMap m1;
   map <int, int> :: const_iterator m1_RcIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   pair <IntMap::const_iterator, IntMap::const_iterator> p1, p2;
   p1 = m1.equal_range( 2 );

   cout << "The lower bound of the element with "
        << "a key of 2 in the map m1 is: "
        << p1.first -> second << "." << endl;

   cout << "The upper bound of the element with "
        << "a key of 2 in the map m1 is: "
        << p1.second -> second << "." << endl;

   // Compare the upper_bound called directly
   m1_RcIter = m1.upper_bound( 2 );

   cout << "A direct call of upper_bound( 2 ) gives "
        << m1_RcIter -> second << "," << endl
        << " matching the 2nd element of the pair"
        << " returned by equal_range( 2 )." << endl;

   p2 = m1.equal_range( 4 );

   // If no match is found for the key,
   // both elements of the pair return end( )
   if ( ( p2.first == m1.end( ) ) && ( p2.second == m1.end( ) ) )
      cout << "The map m1 doesn't have an element "
           << "with a key less than 40." << endl;
   else
      cout << "The element of map m1 with a key >= 40 is: "
           << p2.first -> first << "." << endl;
}
```

```Output
The lower bound of the element with a key of 2 in the map m1 is: 20.
The upper bound of the element with a key of 2 in the map m1 is: 30.
A direct call of upper_bound( 2 ) gives 30,
 matching the 2nd element of the pair returned by equal_range( 2 ).
The map m1 doesn't have an element with a key less than 40.
```

## <a name="erase"></a>  map::erase

Rimuove un elemento o un intervallo di elementi di un oggetto map dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.

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

Per le prime due funzioni membro, iteratore bidirezionale che definisce il primo elemento rimanente oltre gli eventuali elementi rimossi o elemento che rappresenta la fine dell'oggetto map se tali elementi non sono presenti.

Per la terza funzione membro, restituisce il numero di elementi rimossi dall'oggetto map.

### <a name="example"></a>Esempio

```cpp
// map_erase.cpp
// compile with: /EHsc
#include <map>
#include <string>
#include <iostream>
#include <iterator> // next() and prev() helper functions
#include <utility>  // make_pair()

using namespace std;

using mymap = map<int, string>;

void printmap(const mymap& m) {
    for (const auto& elem : m) {
        cout << " [" << elem.first << ", " << elem.second << "]";
    }
    cout << endl << "size() == " << m.size() << endl << endl;
}

int main()
{
    mymap m1;

    // Fill in some data to test with, one at a time
    m1.insert(make_pair(1, "A"));
    m1.insert(make_pair(2, "B"));
    m1.insert(make_pair(3, "C"));
    m1.insert(make_pair(4, "D"));
    m1.insert(make_pair(5, "E"));

    cout << "Starting data of map m1 is:" << endl;
    printmap(m1);
    // The 1st member function removes an element at a given position
    m1.erase(next(m1.begin()));
    cout << "After the 2nd element is deleted, the map m1 is:" << endl;
    printmap(m1);

    // Fill in some data to test with, one at a time, using an intializer list
    mymap m2
    {
        { 10, "Bob" },
        { 11, "Rob" },
        { 12, "Robert" },
        { 13, "Bert" },
        { 14, "Bobby" }
    };

    cout << "Starting data of map m2 is:" << endl;
    printmap(m2);
    // The 2nd member function removes elements
    // in the range [First, Last)
    m2.erase(next(m2.begin()), prev(m2.end()));
    cout << "After the middle elements are deleted, the map m2 is:" << endl;
    printmap(m2);

    mymap m3;

    // Fill in some data to test with, one at a time, using emplace
    m3.emplace(1, "red");
    m3.emplace(2, "yellow");
    m3.emplace(3, "blue");
    m3.emplace(4, "green");
    m3.emplace(5, "orange");
    m3.emplace(6, "purple");
    m3.emplace(7, "pink");

    cout << "Starting data of map m3 is:" << endl;
    printmap(m3);
    // The 3rd member function removes elements with a given Key
    mymap::size_type count = m3.erase(2);
    // The 3rd member function also returns the number of elements removed
    cout << "The number of elements removed from m3 is: " << count << "." << endl;
    cout << "After the element with a key of 2 is deleted, the map m3 is:" << endl;
    printmap(m3);
}

```

## <a name="find"></a>  map::find

Restituisce un iteratore che fa riferimento alla posizione di un elemento in una mappa che contiene una chiave equivalente a una chiave specificata.

```cpp
iterator find(const Key& key);


const_iterator find(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore chiave per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nella mappa in cui eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Iteratore che fa riferimento alla posizione di un elemento con una chiave specificata o alla posizione successiva all'ultimo elemento della mappa (`map::end()`) se non viene trovata alcuna corrispondenza per la chiave.

### <a name="remarks"></a>Note

La funzione membro restituisce un iteratore che fa riferimento a un elemento della mappa la cui chiave di ordinamento è equivalente alla chiave dell'argomento in un predicato binario che causa un ordinamento basato su una relazione di comparabilità minore di.

Se il valore restituito di `find` viene assegnato a un `const_iterator`, l'oggetto map non può essere modificato. Se il valore restituito di `find` viene assegnato a un `iterator`, l'oggetto map può essere modificato.

### <a name="example"></a>Esempio

```cpp
// compile with: /EHsc /W4 /MTd
#include <map>
#include <iostream>
#include <vector>
#include <string>
#include <utility>  // make_pair()

using namespace std;

template <typename A, typename B> void print_elem(const pair<A, B>& p) {
    cout << "(" << p.first << ", " << p.second << ") ";
}

template <typename T> void print_collection(const T& t) {
    cout << t.size() << " elements: ";

    for (const auto& p : t) {
        print_elem(p);
    }
    cout << endl;
}

template <typename C, class T> void findit(const C& c, T val) {
    cout << "Trying find() on value " << val << endl;
    auto result = c.find(val);
    if (result != c.end()) {
        cout << "Element found: "; print_elem(*result); cout << endl;
    } else {
        cout << "Element not found." << endl;
    }
}

int main()
{
    map<int, string> m1({ { 40, "Zr" }, { 45, "Rh" } });
    cout << "The starting map m1 is (key, value):" << endl;
    print_collection(m1);

    vector<pair<int, string>> v;
    v.push_back(make_pair(43, "Tc"));
    v.push_back(make_pair(41, "Nb"));
    v.push_back(make_pair(46, "Pd"));
    v.push_back(make_pair(42, "Mo"));
    v.push_back(make_pair(44, "Ru"));
    v.push_back(make_pair(44, "Ru")); // attempt a duplicate

    cout << "Inserting the following vector data into m1:" << endl;
    print_collection(v);

    m1.insert(v.begin(), v.end());

    cout << "The modified map m1 is (key, value):" << endl;
    print_collection(m1);
    cout << endl;
    findit(m1, 45);
    findit(m1, 6);
}

```

## <a name="get_allocator"></a>  map::get_allocator

Restituisce una copia dell'oggetto allocatore usato per costruire l'oggetto map.

```cpp
allocator_type get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Allocatore usato dall'oggetto map.

### <a name="remarks"></a>Note

Gli allocatori per la classe map specificano il modo in cui la classe gestisce l'archiviazione. Gli allocatori predefiniti forniti con le classi dei contenitori della libreria standard C++ sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.

### <a name="example"></a>Esempio

```cpp
// map_get_allocator.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int>::allocator_type m1_Alloc;
   map <int, int>::allocator_type m2_Alloc;
   map <int, double>::allocator_type m3_Alloc;
   map <int, int>::allocator_type m4_Alloc;

   // The following lines declare objects
   // that use the default allocator.
   map <int, int> m1;
   map <int, int, allocator<int> > m2;
   map <int, double, allocator<double> > m3;

   m1_Alloc = m1.get_allocator( );
   m2_Alloc = m2.get_allocator( );
   m3_Alloc = m3.get_allocator( );

   cout << "The number of integers that can be allocated\n"
        << "before free memory is exhausted: "
        << m2.max_size( ) << ".\n" << endl;

   cout << "The number of doubles that can be allocated\n"
        << "before free memory is exhausted: "
        << m3.max_size( ) <<  ".\n" << endl;

   // The following line creates a map m4
   // with the allocator of map m1.
   map <int, int> m4( less<int>( ), m1_Alloc );

   m4_Alloc = m4.get_allocator( );

   // Two allocators are interchangeable if
   // storage allocated from each can be
   // deallocated with the other
   if( m1_Alloc == m4_Alloc )
   {
      cout << "The allocators are interchangeable." << endl;
   }
   else
   {
      cout << "The allocators are not interchangeable." << endl;
   }
}
```

## <a name="insert"></a>  map::insert

Inserisce un elemento o un intervallo di elementi in una mappa.

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
|Parametro|Descrizione|
|*Val*|Valore di un elemento da inserire nella mappa a meno che non vi sia già contenuto un elemento la cui chiave è ordinata in modo equivalente.|
|*Where*|Posizione in cui iniziare a cercare il punto di inserimento corretto. (Se tale punto è immediatamente seguito *in cui*, inserimento può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.)|
|*ValTy*|Parametro di modello che specifica il tipo di argomento utilizzabili per costruire un elemento della mappa [value_type](#value_type)e perfetto *Val* come argomento.|
|*Primo*|Posizione del primo elemento da copiare.|
|*ultimo*|Posizione immediatamente dopo l'ultimo elemento da copiare.|
|*InputIterator*|Argomento della funzione modello che soddisfa i requisiti di un [iteratore di input](../standard-library/input-iterator-tag-struct.md) che punta agli elementi di un tipo utilizzabili per costruire oggetti [value_type](#value_type).|
|*IList*|Oggetto [initializer_list](../standard-library/initializer-list.md) da cui copiare gli elementi.|

### <a name="return-value"></a>Valore restituito

Le funzioni membro a elemento singolo, (1) e (2) restituiscono una [coppia](../standard-library/pair-structure.md) cui **bool** componente è true se è stato eseguito un inserimento e false se l'oggetto map contiene già un elemento la cui chiave ha un valore equivalente nell'ordinamento. Il componente iteratore della coppia di valore restituito punta all'elemento appena inserito se il **bool** componente è true oppure all'elemento esistente se il **bool** componente è false.

Le funzioni membro a elemento singolo con suggerimento, (3) e (4), restituiscono un iteratore che punta alla posizione in cui il nuovo elemento è stato inserito nella mappa o all'elemento già esistente, se esiste un elemento con una chiave equivalente.

### <a name="remarks"></a>Note

Non ci sono iteratori, puntatori o riferimenti invalidati da questa funzione.

Se viene generata un'eccezione durante l'inserimento di un solo elemento, ma l'eccezione non si manifesta nella funzione hash del contenitore, lo stato del contenitore non verrà modificato. Se viene generata un'eccezione durante l'inserimento di più elementi, il contenitore viene lasciato in uno stato non specificato ma comunque valido.

Per accedere al componente dell'iteratore di una `pair` `pr` restituita dalle funzioni membro a elemento singolo, usare `pr.first`; per dereferenziare l'iteratore all'interno della coppia restituita, usare `*pr.first` fornendo un elemento. Per l'accesso di **bool** componente, usare `pr.second`. Per un esempio, vedere il codice di esempio più avanti in questo articolo.

L'oggetto [value_type](#value_type) di un contenitore è un typedef appartenente al contenitore e, per map, `map<K, V>::value_type` è `pair<const K, V>`. Il valore di un elemento è una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dati dell'elemento.

La funzione membro di intervallo (5) inserisce la sequenza di valori di elemento in una mappa che corrisponde a ogni elemento interessato da un iteratore nell'intervallo `[First, Last)`. Non viene quindi inserito `Last`. La funzione membro di contenitore `end()` fa riferimento alla posizione immediatamente dopo l'ultimo elemento nel contenitore. L'istruzione `m.insert(v.begin(), v.end());`, ad esempio, cerca di inserire tutti gli elementi di `v` in `m`. Solo gli elementi che hanno valori univoci nell'intervallo vengono inseriti; i duplicati vengono ignorati. Per osservare quali elementi vengono rifiutati, usare le versioni con un singolo elemento di `insert`.

La funzione membro dell'elenco di inizializzatori (6) usa un oggetto [initializer_list](../standard-library/initializer-list.md) per copiare gli elementi nell'oggetto map.

Per l'inserimento di un elemento costruito sul posto, ovvero senza operazioni di copia o spostamento, vedere [map::emplace](#emplace) e [map::emplace_hint](#emplace_hint).

### <a name="example"></a>Esempio

```cpp
// map_insert.cpp
// compile with: /EHsc
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <utility>  // make_pair()

using namespace std;

template <typename M> void print(const M& m) {
    cout << m.size() << " elements: ";

    for (const auto& p : m) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }

    cout << endl;
}

int main()
{

    // insert single values
    map<int, int> m1;
    // call insert(const value_type&) version
    m1.insert({ 1, 10 });
    // call insert(ValTy&&) version
    m1.insert(make_pair(2, 20));

    cout << "The original key and mapped values of m1 are:" << endl;
    print(m1);

    // intentionally attempt a duplicate, single element
    auto ret = m1.insert(make_pair(1, 111));
    if (!ret.second){
        auto pr = *ret.first;
        cout << "Insert failed, element with key value 1 already exists."
            << endl << "  The existing element is (" << pr.first << ", " << pr.second << ")"
            << endl;
    }
    else{
        cout << "The modified key and mapped values of m1 are:" << endl;
        print(m1);
    }
    cout << endl;

    // single element, with hint
    m1.insert(m1.end(), make_pair(3, 30));
    cout << "The modified key and mapped values of m1 are:" << endl;
    print(m1);
    cout << endl;

    // The templatized version inserting a jumbled range
    map<int, int> m2;
    vector<pair<int, int>> v;
    v.push_back(make_pair(43, 294));
    v.push_back(make_pair(41, 262));
    v.push_back(make_pair(45, 330));
    v.push_back(make_pair(42, 277));
    v.push_back(make_pair(44, 311));

    cout << "Inserting the following vector data into m2:" << endl;
    print(v);

    m2.insert(v.begin(), v.end());

    cout << "The modified key and mapped values of m2 are:" << endl;
    print(m2);
    cout << endl;

    // The templatized versions move-constructing elements
    map<int, string>  m3;
    pair<int, string> ip1(475, "blue"), ip2(510, "green");

    // single element
    m3.insert(move(ip1));
    cout << "After the first move insertion, m3 contains:" << endl;
    print(m3);

    // single element with hint
    m3.insert(m3.end(), move(ip2));
    cout << "After the second move insertion, m3 contains:" << endl;
    print(m3);
    cout << endl;

    map<int, int> m4;
    // Insert the elements from an initializer_list
    m4.insert({ { 4, 44 }, { 2, 22 }, { 3, 33 }, { 1, 11 }, { 5, 55 } });
    cout << "After initializer_list insertion, m4 contains:" << endl;
    print(m4);
    cout << endl;
}

```

## <a name="iterator"></a>  map::iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un oggetto map.

```cpp
typedef implementation-defined iterator;
```

### <a name="remarks"></a>Note

L'iteratore definito da map punta a elementi che sono oggetti di [value_type](#value_type), ovvero di tipo `pair<const Key, Type>`, dove il primo membro è la chiave dell'elemento e il secondo membro è il punto di riferimento mappato nell'elemento.

Per dereferenziare l'iteratore *Iter* che punta a un elemento in una mappa, usare il `->` operatore.

Per accedere al valore della chiave per l'elemento, usare `Iter->first`, che equivale a `(*Iter).first`. Per accedere al valore del punto di riferimento mappato per l'elemento, usare `Iter->second`, che equivale a `(*Iter).second`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [begin](#begin) per un esempio di come dichiarare e usare `iterator`.

## <a name="key_comp"></a>  map::key_comp

Recupera una copia dell'oggetto di confronto usato per ordinare le chiavi di un oggetto map.

```cpp
key_compare key_comp() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto funzione che viene usato da un oggetto map per ordinare gli elementi.

### <a name="remarks"></a>Note

L'oggetto archiviato definisce la funzione membro

`bool operator(const Key& left, const Key& right);`

che restituisce **true** se `left` precede e non è uguale a `right` nell'ordinamento.

### <a name="example"></a>Esempio

```cpp
// map_key_comp.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;

   map <int, int, less<int> > m1;
   map <int, int, less<int> >::key_compare kc1 = m1.key_comp( ) ;
   bool result1 = kc1( 2, 3 ) ;
   if( result1 == true )
   {
      cout << "kc1( 2,3 ) returns value of true, "
           << "where kc1 is the function object of m1."
           << endl;
   }
   else
   {
      cout << "kc1( 2,3 ) returns value of false "
           << "where kc1 is the function object of m1."
           << endl;
   }

   map <int, int, greater<int> > m2;
   map <int, int, greater<int> >::key_compare kc2 = m2.key_comp( );
   bool result2 = kc2( 2, 3 ) ;
   if( result2 == true )
   {
      cout << "kc2( 2,3 ) returns value of true, "
           << "where kc2 is the function object of m2."
           << endl;
   }
   else
   {
      cout << "kc2( 2,3 ) returns value of false, "
           << "where kc2 is the function object of m2."
           << endl;
   }
}
```

```Output
kc1( 2,3 ) returns value of true, where kc1 is the function object of m1.
kc2( 2,3 ) returns value of false, where kc2 is the function object of m2.
```

## <a name="key_compare"></a>  map::key_compare

Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nell'oggetto map.

```cpp
typedef Traits key_compare;
```

### <a name="remarks"></a>Note

`key_compare` è un sinonimo del parametro di modello *tratti*.

Per ulteriori informazioni sul *tratti* vedere la [classe map](../standard-library/map-class.md) argomento.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [key_comp](#key_comp) per indicazioni su come dichiarare e usare `key_compare`.

## <a name="key_type"></a>  map::key_type

Tipo che descrive la chiave di ordinamento archiviata in ogni elemento dell'oggetto map.

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Note

`key_type` è un sinonimo del parametro di modello *chiave*.

Per ulteriori informazioni sul *Key*, vedere la sezione osservazioni delle [map (classe)](../standard-library/map-class.md) argomento.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_type](#value_type) per indicazioni su come dichiarare e usare `key_type`.

## <a name="lower_bound"></a>  map::lower_bound

Restituisce un iteratore al primo elemento di un oggetto map con un valore della chiave uguale o maggiore di quello di una chiave specificata.

```cpp
iterator lower_bound(const Key& key);

const_iterator lower_bound(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto map in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Un' `iterator` o `const_iterator` che punta alla posizione di un elemento in una mappa che con una chiave uguale o maggiore della chiave dell'argomento, o che punta alla posizione successiva all'ultimo elemento nella mappa se nessuna corrispondenza è trovata per la chiave.

Se il valore restituito di `lower_bound` viene assegnato a un `const_iterator`, l'oggetto map non può essere modificato. Se il valore restituito di `lower_bound` viene assegnato a un `iterator`, l'oggetto map può essere modificato.

### <a name="example"></a>Esempio

```cpp
// map_lower_bound.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int> m1;
   map <int, int> :: const_iterator m1_AcIter, m1_RcIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   m1_RcIter = m1.lower_bound( 2 );
   cout << "The first element of map m1 with a key of 2 is: "
        << m1_RcIter -> second << "." << endl;

   // If no match is found for this key, end( ) is returned
   m1_RcIter = m1. lower_bound ( 4 );

   if ( m1_RcIter == m1.end( ) )
      cout << "The map m1 doesn't have an element "
           << "with a key of 4." << endl;
   else
      cout << "The element of map m1 with a key of 4 is: "
           << m1_RcIter -> second << "." << endl;

   // The element at a specific location in the map can be found
   // using a dereferenced iterator addressing the location
   m1_AcIter = m1.end( );
   m1_AcIter--;
   m1_RcIter = m1. lower_bound ( m1_AcIter -> first );
   cout << "The element of m1 with a key matching "
        << "that of the last element is: "
        << m1_RcIter -> second << "." << endl;
}
```

```Output
The first element of map m1 with a key of 2 is: 20.
The map m1 doesn't have an element with a key of 4.
The element of m1 with a key matching that of the last element is: 30.
```

## <a name="map"></a>  map::map

Costruisce un oggetto map vuoto o che rappresenta una copia totale o parziale di un altro oggetto map.

```cpp
map();

explicit map(
    const Traits& Comp);

map(
    const Traits& Comp,
    const Allocator& Al);

map(
    const map& Right);

map(
    map&& Right);

map(
    initializer_list<value_type> IList);

map(
    initializer_list<value_type> IList,
    const Traits& Comp);

map(
    initializer_list<value_type> IList,
    const Traits& Comp,
    const Allocator& Allocator);

template <class InputIterator>
map(
 InputIterator First,
    InputIterator Last);

template <class InputIterator>
map(
 InputIterator First,
    InputIterator Last,
    const Traits& Comp);

template <class InputIterator>
map(
 InputIterator First,
    InputIterator Last,
    const Traits& Comp,
    const Allocator& Al);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|Parametro|Descrizione|
|*Al*|Classe dell'allocatore di archiviazione da usare per l'oggetto map. Per impostazione predefinita è `Allocator`.|
|*Comp*|Funzione di confronto di tipo `const Traits` usata per ordinare gli elementi nell'oggetto map. Per impostazione predefinita è `hash_compare`.|
|*A destra*|Oggetto map di cui il set costruito deve essere una copia.|
|*Primo*|Posizione del primo elemento nell'intervallo di elementi da copiare.|
|*ultimo*|Posizione del primo elemento oltre l'intervallo di elementi da copiare.|
|*IList*|Oggetto initializer_list da cui devono essere copiati gli elementi.|

### <a name="remarks"></a>Note

Tutti i costruttori archiviano un tipo di oggetto allocatore che gestisce l'archiviazione per l'oggetto map e che può essere restituito in un secondo momento chiamando [get_allocator](#get_allocator). Il parametro allocator viene spesso omesso nelle dichiarazioni di classe e vengono usate macro di pre-elaborazione per introdurre allocatori alternativi.

Tutti i costruttori inizializzano il relativo oggetto map.

Tutti i costruttori archiviano un oggetto funzione di tipo Traits che viene usato per stabilire un ordine tra le chiavi dell'oggetto map e che può essere restituito in un secondo momento chiamando [key_comp](#key_comp).

I primi tre costruttori specificano un oggetto map iniziale vuoto, il secondo specifica il tipo di funzione di confronto (*Comp*) per essere usato per stabilire in modo esplicito l'ordine degli elementi e il terzo specifica il tipo di allocatore ( *Al*) da utilizzare. La parola chiave **esplicita** Elimina alcuni tipi di conversione automatica del tipo.

Il quarto costruttore specifica una copia dell'oggetto map *destra*.

Il quinto costruttore specifica una copia della mappa spostando *destra*.

Il sesto, il settimo e l'ottavo costruttore usano un oggetto initializer_list da cui copiare i membri.

I tre costruttori successivi copiano l'intervallo `[First, Last)` di un oggetto map con un grado di esplicitazione crescente nello specificare il tipo di funzione di confronto della classe `Traits` e il tipo di allocatore.

### <a name="example"></a>Esempio

```cpp
// map_map.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main()
{
    using namespace std;
    typedef pair <int, int> Int_Pair;
    map <int, int>::iterator m1_Iter, m3_Iter, m4_Iter, m5_Iter, m6_Iter, m7_Iter;
    map <int, int, less<int> >::iterator m2_Iter;

    // Create an empty map m0 of key type integer
    map <int, int> m0;

    // Create an empty map m1 with the key comparison
    // function of less than, then insert 4 elements
    map <int, int, less<int> > m1;
    m1.insert(Int_Pair(1, 10));
    m1.insert(Int_Pair(2, 20));
    m1.insert(Int_Pair(3, 30));
    m1.insert(Int_Pair(4, 40));

    // Create an empty map m2 with the key comparison
    // function of geater than, then insert 2 elements
    map <int, int, less<int> > m2;
    m2.insert(Int_Pair(1, 10));
    m2.insert(Int_Pair(2, 20));

    // Create a map m3 with the
    // allocator of map m1
    map <int, int>::allocator_type m1_Alloc;
    m1_Alloc = m1.get_allocator();
    map <int, int> m3(less<int>(), m1_Alloc);
    m3.insert(Int_Pair(3, 30));

    // Create a copy, map m4, of map m1
    map <int, int> m4(m1);

    // Create a map m5 by copying the range m1[ first,  last)
    map <int, int>::const_iterator m1_bcIter, m1_ecIter;
    m1_bcIter = m1.begin();
    m1_ecIter = m1.begin();
    m1_ecIter++;
    m1_ecIter++;
    map <int, int> m5(m1_bcIter, m1_ecIter);

    // Create a map m6 by copying the range m4[ first,  last)
    // and with the allocator of map m2
    map <int, int>::allocator_type m2_Alloc;
    m2_Alloc = m2.get_allocator();
    map <int, int> m6(m4.begin(), ++m4.begin(), less<int>(), m2_Alloc);

    cout << "m1 =";
    for (auto i : m1)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

    cout << "m2 =";
    for(auto i : m2)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

    cout << "m3 =";
    for (auto i : m3)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

    cout << "m4 =";
    for (auto i : m4)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

    cout << "m5 =";
    for (auto i : m5)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

    cout << "m6 =";
    for (auto i : m6)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

    // Create a map m7 by moving m5
    cout << "m7 =";
    map<int, int> m7(move(m5));
    for (auto i : m7)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

    // Create a map m8 by copying in an initializer_list
    map<int, int> m8{ { { 1, 1 }, { 2, 2 }, { 3, 3 }, { 4, 4 } } };
    cout << "m8: = ";
    for (auto i : m8)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

    // Create a map m9 with an initializer_list and a comparator
    map<int, int> m9({ { 5, 5 }, { 6, 6 }, { 7, 7 }, { 8, 8 } }, less<int>());
    cout << "m9: = ";
    for (auto i : m9)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

    // Create a map m10 with an initializer_list, a comparator, and an allocator
    map<int, int> m10({ { 9, 9 }, { 10, 10 }, { 11, 11 }, { 12, 12 } }, less<int>(), m9.get_allocator());
    cout << "m10: = ";
    for (auto i : m10)
        cout << i.first << " " << i.second << ", ";
    cout << endl;
}

```

## <a name="mapped_type"></a>  map::mapped_type

Tipo che rappresenta il tipo di dati archiviato in un oggetto map.

```cpp
typedef Type mapped_type;
```

### <a name="remarks"></a>Note

Il tipo `mapped_type` è un sinonimo della classe *tipo* parametro di modello.

Per ulteriori informazioni sul *tipo* vedere la [classe map](../standard-library/map-class.md) argomento.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_type](#value_type) per indicazioni su come dichiarare e usare `mapped_type`.

## <a name="max_size"></a>  map::max_size

Restituisce la lunghezza massima della mappa.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Massima lunghezza possibile dell'oggetto map.

### <a name="example"></a>Esempio

```cpp
// map_max_size.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int> m1;
   map <int, int> :: size_type i;

   i = m1.max_size( );
   cout << "The maximum possible length "
        << "of the map is " << i << "."
        << endl << "(Magnitude is machine specific.)";
}
```

## <a name="op_at"></a>  map::operator[]

Inserisce un elemento in una mappa con un valore di chiave specificato.

```cpp
Type& operator[](const Key& key);

Type& operator[](Key&& key);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|Parametro|Descrizione|
|*key*|Valore della chiave dell'elemento da inserire.|

### <a name="return-value"></a>Valore restituito

Riferimento al valore dei dati dell'elemento inserito.

### <a name="remarks"></a>Note

Se non viene trovato il valore della chiave dell'argomento, viene inserito insieme al valore predefinito del tipo di dati.

`operator[]` può essere usato per inserire elementi in una mappa `m` usando `m[ key] = DataValue;` in cui `DataValue` è il valore della `mapped_type` dell'elemento con valore di chiave *chiave*.

Quando si utilizza `operator[]` per inserire gli elementi, il riferimento restituito non indica se un inserimento modifica un elemento già esistente o ne crea uno nuovo. Le funzioni membro [find](#find) e [insert](#insert) possono essere usate per determinare se un elemento con una chiave specificata è già presente prima di un inserimento.

### <a name="example"></a>Esempio

```cpp
// map_op_insert.cpp
// compile with: /EHsc
#include <map>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   typedef pair <const int, int> cInt2Int;
   map <int, int> m1;
   map <int, int> :: iterator pIter;

   // Insert a data value of 10 with a key of 1
   // into a map using the operator[] member function
   m1[ 1 ] = 10;

   // Compare other ways to insert objects into a map
   m1.insert ( map <int, int> :: value_type ( 2, 20 ) );
   m1.insert ( cInt2Int ( 3, 30 ) );

   cout  << "The keys of the mapped elements are:";
   for ( pIter = m1.begin( ) ; pIter != m1.end( ) ; pIter++ )
      cout << " " << pIter -> first;
   cout << "." << endl;

   cout  << "The values of the mapped elements are:";
   for ( pIter = m1.begin( ) ; pIter != m1.end( ) ; pIter++ )
      cout << " " << pIter -> second;
   cout << "." << endl;

   // If the key already exists, operator[]
   // changes the value of the datum in the element
   m1[ 2 ] = 40;

   // operator[] will also insert the value of the data
   // type's default constructor if the value is unspecified
   m1[5];

   cout  << "The keys of the mapped elements are now:";
   for ( pIter = m1.begin( ) ; pIter != m1.end( ) ; pIter++ )
      cout << " " << pIter -> first;
   cout << "." << endl;

   cout  << "The values of the mapped elements are now:";
   for ( pIter = m1.begin( ) ; pIter != m1.end( ) ; pIter++ )
      cout << " " << pIter -> second;
   cout << "." << endl;

// insert by moving key
    map<string, int> c2;
    string str("abc");
    cout << "c2[move(str)] == " << c2[move(str)] << endl;
    cout << "c2["abc"] == " << c2["abc"] << endl;

    return (0);
}
```

```Output
The keys of the mapped elements are: 1 2 3.
The values of the mapped elements are: 10 20 30.
The keys of the mapped elements are now: 1 2 3 5.
The values of the mapped elements are now: 10 40 30 0.
c2[move(str)] == 0
c2["abc"] == 1
```

## <a name="op_eq"></a>  map::operator=

Sostituisce gli elementi di una mappa con una copia di un'altra mappa.

```cpp
map& operator=(const map& right);

map& operator=(map&& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|Parametro|Descrizione|
|*right*|Oggetto [map](../standard-library/map-class.md) da copiare nell'oggetto `map`.|

### <a name="remarks"></a>Note

Dopo la cancellazione di tutti gli elementi esistenti in un `map`, `operator=` copia o Sposta il contenuto del *a destra* nella mappa.

### <a name="example"></a>Esempio

```cpp
// map_operator_as.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
   {
   using namespace std;
   map<int, int> v1, v2, v3;
   map<int, int>::iterator iter;

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

## <a name="pointer"></a>  map::pointer

Tipo che fornisce un puntatore a un elemento di un oggetto map.

```cpp
typedef typename allocator_type::pointer pointer;
```

### <a name="remarks"></a>Note

Un tipo `pointer` può essere utilizzato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto map.

## <a name="rbegin"></a>  map::rbegin

Restituisce un iteratore che punta al primo elemento di un oggetto map invertito.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta al primo elemento di un oggetto map invertito o a quello che è stato l'ultimo elemento dell'oggetto map non invertito.

### <a name="remarks"></a>Note

`rbegin` viene usato con un oggetto map invertito proprio come [begin](#begin) viene usato con un oggetto map.

Se il valore restituito di `rbegin` viene assegnato a un `const_reverse_iterator`, l'oggetto map non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a un `reverse_iterator`, l'oggetto map può essere modificato.

`rbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto map.

### <a name="example"></a>Esempio

```cpp
// map_rbegin.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int> m1;

   map <int, int> :: iterator m1_Iter;
   map <int, int> :: reverse_iterator m1_rIter;
   map <int, int> :: const_reverse_iterator m1_crIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   m1_rIter = m1.rbegin( );
   cout << "The first element of the reversed map m1 is "
        << m1_rIter -> first << "." << endl;

   // begin can be used to start an iteration
   // through a map in a forward order
   cout << "The map is: ";
   for ( m1_Iter = m1.begin( ) ; m1_Iter != m1.end( ); m1_Iter++)
      cout << m1_Iter -> first << " ";
      cout << "." << endl;

   // rbegin can be used to start an iteration
   // through a map in a reverse order
   cout << "The reversed map is: ";
   for ( m1_rIter = m1.rbegin( ) ; m1_rIter != m1.rend( ); m1_rIter++)
      cout << m1_rIter -> first << " ";
      cout << "." << endl;

   // A map element can be erased by dereferencing to its key
   m1_rIter = m1.rbegin( );
   m1.erase ( m1_rIter -> first );

   m1_rIter = m1.rbegin( );
   cout << "After the erasure, the first element "
        << "in the reversed map is "
        << m1_rIter -> first << "." << endl;
}
```

```Output
The first element of the reversed map m1 is 3.
The map is: 1 2 3 .
The reversed map is: 3 2 1 .
After the erasure, the first element in the reversed map is 2.
```

## <a name="reference"></a>  map::reference

Tipo che fornisce un riferimento a un elemento archiviato in un oggetto map.

```cpp
typedef typename allocator_type::reference reference;
```

### <a name="example"></a>Esempio

```cpp
// map_reference.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int> m1;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );

   // Declare and initialize a const_reference &Ref1
   // to the key of the first element
   const int &Ref1 = ( m1.begin( ) -> first );

   // The following line would cause an error because the
   // non-const_reference cannot be used to access the key
   // int &Ref1 = ( m1.begin( ) -> first );

   cout << "The key of first element in the map is "
        << Ref1 << "." << endl;

   // Declare and initialize a reference &Ref2
   // to the data value of the first element
   int &Ref2 = ( m1.begin( ) -> second );

   cout << "The data value of first element in the map is "
        << Ref2 << "." << endl;

   //The non-const_reference can be used to modify the
   //data value of the first element
   Ref2 = Ref2 + 5;
   cout << "The modified data value of first element is "
        << Ref2 << "." << endl;
}
```

```Output
The key of first element in the map is 1.
The data value of first element in the map is 10.
The modified data value of first element is 15.
```

## <a name="rend"></a>  map::rend

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un oggetto map invertito.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta alla posizione successiva all'ultimo elemento di un oggetto map invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto map non invertito.

### <a name="remarks"></a>Note

`rend` viene usato con un oggetto map invertito proprio come [end](#end) viene usato con un oggetto map.

Se il valore restituito di `rend` viene assegnato a un `const_reverse_iterator`, l'oggetto map non può essere modificato. Se il valore restituito di `rend` viene assegnato a un `reverse_iterator`, l'oggetto map può essere modificato.

`rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo oggetto map.

Non è consigliabile dereferenziare il valore restituito da `rend`.

### <a name="example"></a>Esempio

```cpp
// map_rend.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int> m1;

   map <int, int> :: iterator m1_Iter;
   map <int, int> :: reverse_iterator m1_rIter;
   map <int, int> :: const_reverse_iterator m1_crIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   m1_rIter = m1.rend( );
   m1_rIter--;
   cout << "The last element of the reversed map m1 is "
        << m1_rIter -> first << "." << endl;

   // begin can be used to start an iteration
   // through a map in a forward order
   cout << "The map is: ";
   for ( m1_Iter = m1.begin( ) ; m1_Iter != m1.end( ); m1_Iter++)
      cout << m1_Iter -> first << " ";
      cout << "." << endl;

   // rbegin can be used to start an iteration
   // through a map in a reverse order
   cout << "The reversed map is: ";
   for ( m1_rIter = m1.rbegin( ) ; m1_rIter != m1.rend( ); m1_rIter++)
      cout << m1_rIter -> first << " ";
      cout << "." << endl;

   // A map element can be erased by dereferencing to its key
   m1_rIter = --m1.rend( );
   m1.erase ( m1_rIter -> first );

   m1_rIter = m1.rend( );
   m1_rIter--;
   cout << "After the erasure, the last element "
        << "in the reversed map is "
        << m1_rIter -> first << "." << endl;
}
```

```Output
The last element of the reversed map m1 is 1.
The map is: 1 2 3 .
The reversed map is: 3 2 1 .
After the erasure, the last element in the reversed map is 2.
```

## <a name="reverse_iterator"></a>  map::reverse_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un oggetto map invertito.

```cpp
typedef std::reverse_iterator<iterator> reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `reverse_iterator` non può modificare il valore di un elemento e viene usato per eseguire l'iterazione sull'oggetto map in ordine inverso.

Il `reverse_iterator` definito da map punta a elementi che sono oggetti di [value_type](#value_type), ovvero di tipo `pair<const Key, Type>`, dove il primo membro è la chiave dell'elemento e il secondo membro è il punto di riferimento mappato nell'elemento.

Per dereferenziare un `reverse_iterator` *rIter* che punta a un elemento in una mappa, usare il `->` operatore.

Per accedere al valore della chiave per l'elemento, usare `rIter` -> **first**, che equivale a (\* `rIter`). **first**. Per accedere al valore del punto di riferimento mappato per l'elemento, usare `rIter` -> **second**, che equivale a (\* `rIter`). **first**.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rbegin](#rbegin) per indicazioni su come dichiarare e usare `reverse_iterator`.

## <a name="size"></a>  map::size

Restituisce il numero di elementi della mappa.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

La lunghezza corrente dell'oggetto map.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro map::size.

```cpp
// map_size.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main()
{
    using namespace std;
    map<int, int> m1, m2;
    map<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    m1.insert(Int_Pair(1, 1));
    i = m1.size();
    cout << "The map length is " << i << "." << endl;

    m1.insert(Int_Pair(2, 4));
    i = m1.size();
    cout << "The map length is now " << i << "." << endl;
}
```

```Output
The map length is 1.
The map length is now 2.
```

## <a name="size_type"></a>  map::size_type

Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un oggetto map.

```cpp
typedef typename allocator_type::size_type size_type;
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [size](#size) per indicazioni su come dichiarare e usare `size_type`.

## <a name="swap"></a>  map::swap

Scambia gli elementi di due oggetti map.

```cpp
void swap(
    map<Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Argomento di tipo map che fornisce gli elementi da scambiare con l'oggetto map di destinazione.

### <a name="remarks"></a>Note

La funzione membro non invalida riferimenti, puntatori o iteratori che designano gli elementi dei due oggetti map di cui vengono scambiati gli elementi.

### <a name="example"></a>Esempio

```cpp
// map_swap.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int> m1, m2, m3;
   map <int, int>::iterator m1_Iter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );
   m2.insert ( Int_Pair ( 10, 100 ) );
   m2.insert ( Int_Pair ( 20, 200 ) );
   m3.insert ( Int_Pair ( 30, 300 ) );

   cout << "The original map m1 is:";
   for ( m1_Iter = m1.begin( ); m1_Iter != m1.end( ); m1_Iter++ )
      cout << " " << m1_Iter -> second;
   cout   << "." << endl;

   // This is the member function version of swap
   //m2 is said to be the argument map; m1 the target map
   m1.swap( m2 );

   cout << "After swapping with m2, map m1 is:";
   for ( m1_Iter = m1.begin( ); m1_Iter != m1.end( ); m1_Iter++ )
      cout << " " << m1_Iter -> second;
   cout  << "." << endl;

   // This is the specialized template version of swap
   swap( m1, m3 );

   cout << "After swapping with m3, map m1 is:";
   for ( m1_Iter = m1.begin( ); m1_Iter != m1.end( ); m1_Iter++ )
      cout << " " << m1_Iter -> second;
   cout   << "." << endl;
}
```

```Output
The original map m1 is: 10 20 30.
After swapping with m2, map m1 is: 100 200.
After swapping with m3, map m1 is: 300.
```

## <a name="upper_bound"></a>  map::upper_bound

Restituisce un iteratore al primo elemento di un oggetto map con un valore della chiave maggiore di quello di una chiave specificata.

```cpp
iterator upper_bound(const Key& key);

const_iterator upper_bound(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave dell'argomento per cui trovare una corrispondenza con il valore della chiave di ordinamento di un elemento presente nell'oggetto map in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Un' `iterator` o `const_iterator` che punta alla posizione di un elemento in una mappa che con una chiave maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento nella mappa se nessuna corrispondenza è trovata per la chiave.

Se il valore restituito viene assegnato a un `const_iterator`, l'oggetto map non può essere modificato. Se il valore restituito viene assegnato a un `iterator`, l'oggetto map può essere modificato.

### <a name="example"></a>Esempio

```cpp
// map_upper_bound.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, int> m1;
   map <int, int> :: const_iterator m1_AcIter, m1_RcIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   m1_RcIter = m1.upper_bound( 2 );
   cout << "The first element of map m1 with a key "
        << "greater than 2 is: "
        << m1_RcIter -> second << "." << endl;

   // If no match is found for the key, end is returned
   m1_RcIter = m1. upper_bound ( 4 );

   if ( m1_RcIter == m1.end( ) )
      cout << "The map m1 doesn't have an element "
           << "with a key greater than 4." << endl;
   else
      cout << "The element of map m1 with a key > 4 is: "
           << m1_RcIter -> second << "." << endl;

   // The element at a specific location in the map can be found
   // using a dereferenced iterator addressing the location
   m1_AcIter = m1.begin( );
   m1_RcIter = m1. upper_bound ( m1_AcIter -> first );
   cout << "The 1st element of m1 with a key greater than\n"
        << "that of the initial element of m1 is: "
        << m1_RcIter -> second << "." << endl;
}
```

```Output
The first element of map m1 with a key greater than 2 is: 30.
The map m1 doesn't have an element with a key greater than 4.
The 1st element of m1 with a key greater than
that of the initial element of m1 is: 20.
```

## <a name="value_comp"></a>  map::value_comp

La funzione membro restituisce un oggetto funzione che determina l'ordine degli elementi in un oggetto map confrontando i valori delle relative chiavi.

```cpp
value_compare value_comp() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto funzione di confronto che viene usato da un oggetto map per ordinare gli elementi.

### <a name="remarks"></a>Note

Per un oggetto map *m*, se due elementi *e*1( *k*1, *d*1) e *e*2( *k*2, `d`2) sono oggetti di tipo `value_type`, dove *k*1 e *k*2 sono le rispettive chiavi di tipo `key_type` e `d`1 e `d`2 sono i rispettivi dati di tipo `mapped_type`, *m.*`value_comp`( *e*1, *e*2) è equivalente a *m.*`key_comp`*(k*1, *k*2). Un oggetto archiviato definisce la funzione membro

**operator bool**( **value_type &**`left`, **value_type &**`right`);

che restituisce **true** se il valore della chiave `left` precede e non è uguale al valore della chiave `right` nell'ordinamento.

### <a name="example"></a>Esempio

```cpp
// map_value_comp.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;

   map <int, int, less<int> > m1;
   map <int, int, less<int> >::value_compare vc1 = m1.value_comp( );
   pair< map<int,int>::iterator, bool > pr1, pr2;

   pr1= m1.insert ( map <int, int> :: value_type ( 1, 10 ) );
   pr2= m1.insert ( map <int, int> :: value_type ( 2, 5 ) );

   if( vc1( *pr1.first, *pr2.first ) == true )
   {
      cout << "The element ( 1,10 ) precedes the element ( 2,5 )."
           << endl;
   }
   else
   {
      cout << "The element ( 1,10 ) does not precede the element ( 2,5 )."
           << endl;
   }

   if(vc1( *pr2.first, *pr1.first ) == true )
   {
      cout << "The element ( 2,5 ) precedes the element ( 1,10 )."
           << endl;
   }
   else
   {
      cout << "The element ( 2,5 ) does not precede the element ( 1,10 )."
           << endl;
   }
}
```

```Output
The element ( 1,10 ) precedes the element ( 2,5 ).
The element ( 2,5 ) does not precede the element ( 1,10 ).
```

## <a name="value_type"></a>  map::value_type

Tipo di oggetto archiviato come elemento di un oggetto map.

```cpp
typedef pair<const Key, Type> value_type;
```

### <a name="example"></a>Esempio

```cpp
// map_value_type.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   typedef pair <const int, int> cInt2Int;
   map <int, int> m1;
   map <int, int> :: key_type key1;
   map <int, int> :: mapped_type mapped1;
   map <int, int> :: value_type value1;
   map <int, int> :: iterator pIter;

   // value_type can be used to pass the correct type
   // explicitly to avoid implicit type conversion
   m1.insert ( map <int, int> :: value_type ( 1, 10 ) );

   // Compare other ways to insert objects into a map
   m1.insert ( cInt2Int ( 2, 20 ) );
   m1[ 3 ] = 30;

   // Initializing key1 and mapped1
   key1 = ( m1.begin( ) -> first );
   mapped1 = ( m1.begin( ) -> second );

   cout << "The key of first element in the map is "
        << key1 << "." << endl;

   cout << "The data value of first element in the map is "
        << mapped1 << "." << endl;

   // The following line would cause an error because
   // the value_type is not assignable
   // value1 = cInt2Int ( 4, 40 );

   cout  << "The keys of the mapped elements are:";
   for ( pIter = m1.begin( ) ; pIter != m1.end( ) ; pIter++ )
      cout << " " << pIter -> first;
   cout << "." << endl;

   cout  << "The values of the mapped elements are:";
   for ( pIter = m1.begin( ) ; pIter != m1.end( ) ; pIter++ )
      cout << " " << pIter -> second;
   cout << "." << endl;
}
```

## <a name="see-also"></a>Vedere anche

[Contenitori](../cpp/containers-modern-cpp.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
