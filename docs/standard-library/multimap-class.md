---
title: Classe multimap
ms.date: 10/18/2018
f1_keywords:
- map/std::multimap
- map/std::multimap::allocator_type
- map/std::multimap::const_iterator
- map/std::multimap::const_pointer
- map/std::multimap::const_reference
- map/std::multimap::const_reverse_iterator
- map/std::multimap::difference_type
- map/std::multimap::iterator
- map/std::multimap::key_compare
- map/std::multimap::key_type
- map/std::multimap::mapped_type
- map/std::multimap::pointer
- map/std::multimap::reference
- map/std::multimap::reverse_iterator
- map/std::multimap::size_type
- map/std::multimap::value_type
- map/std::multimap::begin
- map/std::multimap::cbegin
- map/std::multimap::cend
- map/std::multimap::clear
- map/std::multimap::count
- map/std::multimap::crbegin
- map/std::multimap::crend
- map/std::multimap::emplace
- map/std::multimap::emplace_hint
- map/std::multimap::empty
- map/std::multimap::end
- map/std::multimap::equal_range
- map/std::multimap::erase
- map/std::multimap::find
- map/std::multimap::get_allocator
- map/std::multimap::insert
- map/std::multimap::key_comp
- map/std::multimap::lower_bound
- map/std::multimap::max_size
- map/std::multimap::rbegin
- map/std::multimap::rend
- map/std::multimap::size
- map/std::multimap::swap
- map/std::multimap::upper_bound
- map/std::multimap::value_comp
helpviewer_keywords:
- std::multimap [C++]
- std::multimap [C++], allocator_type
- std::multimap [C++], const_iterator
- std::multimap [C++], const_pointer
- std::multimap [C++], const_reference
- std::multimap [C++], const_reverse_iterator
- std::multimap [C++], difference_type
- std::multimap [C++], iterator
- std::multimap [C++], key_compare
- std::multimap [C++], key_type
- std::multimap [C++], mapped_type
- std::multimap [C++], pointer
- std::multimap [C++], reference
- std::multimap [C++], reverse_iterator
- std::multimap [C++], size_type
- std::multimap [C++], value_type
- std::multimap [C++], begin
- std::multimap [C++], cbegin
- std::multimap [C++], cend
- std::multimap [C++], clear
- std::multimap [C++], count
- std::multimap [C++], crbegin
- std::multimap [C++], crend
- std::multimap [C++], emplace
- std::multimap [C++], emplace_hint
- std::multimap [C++], empty
- std::multimap [C++], end
- std::multimap [C++], equal_range
- std::multimap [C++], erase
- std::multimap [C++], find
- std::multimap [C++], get_allocator
- std::multimap [C++], insert
- std::multimap [C++], key_comp
- std::multimap [C++], lower_bound
- std::multimap [C++], max_size
- std::multimap [C++], rbegin
- std::multimap [C++], rend
- std::multimap [C++], size
- std::multimap [C++], swap
- std::multimap [C++], upper_bound
- std::multimap [C++], value_comp
ms.assetid: 8796ae05-37c4-475a-9e61-75fde9d4a463
ms.openlocfilehash: 90da4e575d70fc3f551d75681d2563896a6647d7
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88560517"
---
# <a name="multimap-class"></a>Classe multimap

La classe multimap della libreria standard C++ viene usata per l'archiviazione e il recupero dei dati da una raccolta in cui ogni elemento è costituito da una coppia con un valore di dati e una chiave di ordinamento. Il valore della chiave non deve essere necessariamente univoco e viene utilizzato per l'ordinamento automatico dei dati. Il valore di un elemento di un multimap, a differenza del valore della chiave associata, può essere direttamente modificato. I valori invece delle chiavi associati a elementi precedenti devono essere eliminati e i valori delle nuove chiavi devono essere associati ai nuovi elementi inseriti.

## <a name="syntax"></a>Sintassi

```cpp
template <class Key,
    class Type,
    class Traits=less <Key>,
    class Allocator=allocator <pair  <const Key, Type>>>
class multimap;
```

### <a name="parameters"></a>Parametri

*Chiave*\
Tipo di dati della chiave da archiviare nel multimap.

*Tipo*\
Tipo di dati degli elementi da archiviare nel multimap.

*Tratti*\
Tipo che fornisce un oggetto funzione in grado di confrontare i valori di due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel multimap. Il predicato binario `less<Key>` rappresenta il valore predefinito.

In C++ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo. Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#heterogeneous-lookup-in-associative-containers-c14).

*Allocatore*\
Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione della mappa e alla deallocazione della memoria. Questo argomento è facoltativo e il valore predefinito è `allocator<pair <const Key, Type> >`.

## <a name="remarks"></a>Osservazioni

La classe multimap della libreria standard C++ è:

- Un contenitore associativo, che è un contenitore di dimensioni variabili che supporta il recupero efficiente dei valori degli elementi in base al valore di una chiave associata.

- Reversibile, in quanto fornisce iteratori bidirezionali per accedere ai relativi elementi.

- Ordinato, poiché i relativi elementi sono ordinati in base ai valori delle chiavi all'interno del contenitore conformemente a una funzione di confronto specificata.

- Multipla, in quanto i relativi elementi non richiedono necessariamente chiavi univoche, in modo tale che al valore di una singola chiave possano essere associati i valori dei dati di più elementi.

- Un contenitore associativo di coppie, in quanto i valori dei dati degli elementi sono diversi dai valori delle relative chiavi.

- Un modello di classe, poiché la funzionalità che fornisce è generica e indipendente dal tipo specifico di dati contenuti come elementi o chiavi. I tipi di dati da utilizzare per gli elementi e le chiavi vengono invece specificati come parametri nel modello di classe i insieme alla funzione di confronto e all'allocatore.

L'iteratore fornito dalla classe map è un iteratore bidirezionale, ma le funzioni membro [insert](#insert) e [multimap](#multimap) della classe hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali. I diversi concetti di iteratore formano una famiglia correlata dai perfezionamenti delle relative funzionalità. Ogni concetto di iteratore dispone di un set di requisiti e gli algoritmi utilizzati con tali concetti devono limitare le proprie ipotesi ai requisiti forniti da tale tipo di iteratore. Si può presupporre che un iteratore di input possa essere dereferenziato per fare riferimento a un determinato oggetto e possa essere incrementato all'iteratore successivo nella sequenza. Si tratta di un set di funzionalità minimo, ma è sufficiente per poter descrivere chiaramente un intervallo di iteratori `[First, Last)` nel contesto delle funzioni membro della classe.

La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione. I contenitori associativi sono ottimizzati per le operazioni di ricerca, inserimento e rimozione. Le funzioni membro che supportano in modo esplicito queste operazioni sono efficienti, eseguendo tali operazioni in un lasso di tempo mediamente proporzionale al logaritmo del numero di elementi presenti nel contenitore. L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.

Il multimap deve essere il contenitore associativo da preferire quando le condizioni che consentono di associare i valori alle relative chiavi vengono soddisfatte dall'applicazione. Un modello di questo tipo di struttura è rappresentato da un elenco ordinato di parole chiave a cui sono associati valori di stringa che forniscono, ad esempio, definizioni, in cui le parole non erano sempre state definite in modo univoco. Nel caso invece in cui le parole chiave siano state definite in modo univoco, il contenitore da preferire è una mappa. Se invece è stato archiviato solo l'elenco di parole, il contenitore appropriato è rappresentato da un set. Se sono state consentite più occorrenze delle parole, la struttura di contenitore appropriata è il multiset.

L'oggetto multimap ordina la sequenza che controlla chiamando un oggetto funzione archiviato di tipo [key_compare](#key_compare). Questo oggetto archiviato è una funzione di confronto a cui è possibile accedere chiamando la funzione membro [key_comp](#key_comp). In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti (ovvero che uno non è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard. Un predicato binario `f(x,y)` è un oggetto funzione che dispone di due oggetti argomento, `x` e `y`, e di un valore restituito true o false. Un ordinamento imposto a un set è di tipo "strict weak" se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti `x` e `y` vengono definiti equivalenti quando sia `f(x,y)` che `f(y,x)` sono false. Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale, in quanto tutti gli elementi vengono ordinati l'uno rispetto all'altro e le chiavi accoppiate saranno indistinguibili l'una dall'altra.

In C++ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo. Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers).

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[multimap](#multimap)|Costruisce un `multimap` vuoto o che rappresenta una copia totale o parziale di un altro `multimap`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Tipo che rappresenta la classe `allocator` per l'oggetto `multimap`.|
|[const_iterator](#const_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un **`const`** elemento in `multimap` .|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore a un **`const`** elemento in un oggetto `multimap` .|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento a un **`const`** elemento archiviato in un `multimap` per la lettura e l'esecuzione di **`const`** operazioni.|
|[const_reverse_iterator](#const_reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi **`const`** elemento in `multimap` .|
|[difference_type](#difference_type)|Tipo Signed Integer che può essere utilizzato per rappresentare il numero di elementi di un `multimap` in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|
|[iteratore](#iterator)|Tipo che fornisce la differenza tra due iteratori che fanno riferimento agli elementi all'interno dello stesso `multimap`.|
|[key_compare](#key_compare)|Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel `multimap`.|
|[key_type](#key_type)|Tipo che descrive l'oggetto chiave di ordinamento di cui è costituito ogni elemento del `multimap`.|
|[mapped_type](#mapped_type)|Tipo che rappresenta il tipo di dati archiviati in un `multimap`.|
|[puntatore](#pointer)|Tipo che fornisce un puntatore a un **`const`** elemento in un oggetto `multimap` .|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento archiviato in un `multimap`.|
|[reverse_iterator](#reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un `multimap` invertito.|
|[size_type](#size_type)|Tipo di Unsigned Integer che fornisce un puntatore a un **`const`** elemento in un oggetto `multimap` .|
|[value_type](#value_type)|Tipo che fornisce un oggetto funzione in grado di confrontare due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel `multimap`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[iniziare](#begin)|Restituisce un iteratore che punta al primo elemento del `multimap`.|
|[cbegin](#cbegin)|Restituisce un iteratore const che punta al primo elemento del `multimap`.|
|[cend](#cend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un `multimap`.|
|[deselezionare](#clear)|Cancella tutti gli elementi di un `multimap`.|
|[count](#count)|Restituisce il numero di elementi di un `multimap` la cui chiave corrisponde a una chiave specificata dal parametro.|
|[crbegin](#crbegin)|Restituisce un iteratore const che punta al primo elemento di un `multimap` invertito.|
|[crend](#crend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set `multimap` invertito.|
|[emplace](#emplace)|Inserisce un elemento costruito sul posto in un `multimap`.|
|[emplace_hint](#emplace_hint)|Inserisce un elemento costruito sul posto in un `multimap`, con un suggerimento sulla posizione.|
|[empty](#empty)|Verifica se un `multimap` è vuoto.|
|[fine](#end)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `multimap`.|
|[equal_range](#equal_range)|Trova l'intervallo di elementi in cui la chiave dell'elemento corrisponde a un valore specificato.|
|[erase](#erase)|Rimuove un elemento o un intervallo di elementi di un `multimap` dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.|
|[find](#find)|Restituisce un iteratore che punta alla prima posizione di un elemento di un `multimap` che dispone di una chiave equivalente a una chiave specificata.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il `multimap`.|
|[insert](#insert)|Inserisce un elemento o un intervallo di elementi in un `multimap`.|
|[key_comp](#key_comp)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare le chiavi di un `multimap`.|
|[lower_bound](#lower_bound)|Restituisce un iteratore al primo elemento di un `multimap` con una chiave uguale o maggiore di una chiave specificata.|
|[max_size](#max_size)|Restituisce la lunghezza massima del `multimap`.|
|[rbegin](#rbegin)|Restituisce un iteratore che punta al primo elemento di un `multimap` invertito.|
|[rend](#rend)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `multimap` invertito.|
|[size](#size)|Restituisce il numero di elementi nel `multimap`.|
|[scambio](#swap)|Scambia gli elementi di due `multimap`.|
|[upper_bound](#upper_bound)|Restituisce un iteratore al primo elemento di un `multimap` con una chiave maggiore di una chiave specificata.|
|[value_comp](#value_comp)|La funzione membro restituisce un oggetto funzione che determina l'ordine degli elementi in un `multimap` confrontando i valori delle relative chiavi.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore =](#op_eq)|Sostituisce gli elementi di un `multimap` con una copia di un altro `multimap`.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<map>

**Spazio dei nomi:** std

Le coppie ( **key**, **value**) vengono archiviate in un oggetto multimap come oggetti di tipo `pair`. La classe Pair richiede l'intestazione \<utility> , che viene automaticamente inclusa da \<map> .

## <a name="multimapallocator_type"></a><a name="allocator_type"></a> multimap:: allocator_type

Tipo che rappresenta la classe allocator per l'oggetto multimap.

```cpp
typedef Allocator allocator_type;
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get_allocator](#get_allocator) per indicazioni su come usare `allocator_type`.

## <a name="multimapbegin"></a><a name="begin"></a> multimap:: Begin

Restituisce un iteratore che punta al primo elemento dell'oggetto multimap.

```cpp
const_iterator begin() const;

iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta al primo elemento dell'oggetto multimap o alla posizione successiva a un oggetto multimap vuoto.

### <a name="example"></a>Esempio

```cpp
// multimap_begin.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int> m1;

   multimap <int, int> :: iterator m1_Iter;
   multimap <int, int> :: const_iterator m1_cIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 0, 0 ) );
   m1.insert ( Int_Pair ( 1, 1 ) );
   m1.insert ( Int_Pair ( 2, 4 ) );

   m1_cIter = m1.begin ( );
   cout << "The first element of m1 is " << m1_cIter -> first << endl;

   m1_Iter = m1.begin ( );
   m1.erase ( m1_Iter );

   // The following 2 lines would err as the iterator is const
   // m1_cIter = m1.begin ( );
   // m1.erase ( m1_cIter );

   m1_cIter = m1.begin( );
   cout << "First element of m1 is now " << m1_cIter -> first << endl;
}
```

```Output
The first element of m1 is 0
First element of m1 is now 1
```

## <a name="multimapcbegin"></a><a name="cbegin"></a> multimap:: cbegin

Restituisce un **`const`** iteratore che punta al primo elemento nell'intervallo.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

**`const`** Iteratore di accesso bidirezionale che punta al primo elemento dell'intervallo o alla posizione oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()` ).

### <a name="remarks"></a>Osservazioni

Con il valore restituito di `cbegin`, gli elementi dell'intervallo non possono essere modificati.

È possibile usare questa funzione membro anziché la funzione membro `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, si consideri come `Container` un contenitore (non **`const`** ) modificabile di qualsiasi tipo che supporta `begin()` e `cbegin()` .

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator
```

## <a name="multimapcend"></a><a name="cend"></a> multimap:: cend

Restituisce un **`const`** iteratore che punta alla posizione immediatamente successiva all'ultimo elemento di un intervallo.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

**`const`** Iteratore di accesso bidirezionale che punta appena oltre la fine dell'intervallo.

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

## <a name="multimapclear"></a><a name="clear"></a> multimap:: Clear

Cancella tutti gli elementi di una classe multimap.

```cpp
void clear();
```

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro multimap::clear.

```cpp
// multimap_clear.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap<int, int> m1;
   multimap<int, int>::size_type i;
   typedef pair<int, int> Int_Pair;

   m1.insert(Int_Pair(1, 1));
   m1.insert(Int_Pair(2, 4));

   i = m1.size();
   cout << "The size of the multimap is initially "
        << i << "." << endl;

   m1.clear();
   i = m1.size();
   cout << "The size of the multimap after clearing is "
        << i << "." << endl;
}
```

```Output
The size of the multimap is initially 2.
The size of the multimap after clearing is 0.
```

## <a name="multimapconst_iterator"></a><a name="const_iterator"></a> multimap:: const_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere un **`const`** elemento nell'oggetto multimap.

```cpp
typedef implementation-defined const_iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo `const_iterator` non può essere usato per modificare il valore di un elemento.

L'oggetto `const_iterator` definito da multimap punta a oggetti di [value_type](#value_type), che sono di tipo `pair<const Key, Type>` . Il valore della chiave è disponibile tramite il primo membro della coppia e il valore dell'elemento mappato è disponibile tramite il secondo membro della coppia.

Per dereferenziare un oggetto `const_iterator` *Citer* che punta a un elemento in un oggetto multimap, usare l' **->** operatore.

Per accedere al valore della chiave per l'elemento, usare `cIter->first` , che equivale a `(*cIter).first` . Per accedere al valore del punto di riferimento mappato per l'elemento, usare `cIter->second` , che equivale a `(*cIter).second` .

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [begin](#begin) per indicazioni su come usare `const_iterator`.

## <a name="multimapconst_pointer"></a><a name="const_pointer"></a> multimap:: const_pointer

Tipo che fornisce un puntatore a un **`const`** elemento in un oggetto multimap.

```cpp
typedef typename allocator_type::const_pointer const_pointer;
```

### <a name="remarks"></a>Osservazioni

Un tipo `const_pointer` non può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto multimap.

## <a name="multimapconst_reference"></a><a name="const_reference"></a> multimap:: const_reference

Tipo che fornisce un riferimento a un **`const`** elemento archiviato in un oggetto multimap per la lettura e l'esecuzione di **`const`** operazioni.

```cpp
typedef typename allocator_type::const_reference const_reference;
```

### <a name="example"></a>Esempio

```cpp
// multimap_const_ref.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int> m1;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );

   // Declare and initialize a const_reference &Ref1
   // to the key of the first element
   const int &Ref1 = ( m1.begin( ) -> first );

   // The following line would cause an error because the
   // non-const_reference cannot be used to access the key
   // int &Ref1 = ( m1.begin( ) -> first );

   cout << "The key of the first element in the multimap is "
        << Ref1 << "." << endl;

   // Declare and initialize a reference &Ref2
   // to the data value of the first element
   int &Ref2 = ( m1.begin( ) -> second );

   cout << "The data value of the first element in the multimap is "
        << Ref2 << "." << endl;
}
```

```Output
The key of the first element in the multimap is 1.
The data value of the first element in the multimap is 10.
```

## <a name="multimapconst_reverse_iterator"></a><a name="const_reverse_iterator"></a> multimap:: const_reverse_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi **`const`** elemento nell'oggetto multimap.

```cpp
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene usato per eseguire l'iterazione sull'oggetto multimap in ordine inverso.

L'oggetto `const_reverse_iterator` definito da multimap punta a oggetti di [value_type](#value_type), che sono di tipo `pair<const Key, Type>` . Il valore della chiave è disponibile tramite il primo membro della coppia e il valore dell'elemento mappato è disponibile tramite il secondo membro della coppia.

Per dereferenziare un `const_reverse_iterator` *criter* che punta a un elemento in un oggetto multimap, usare l' **->** operatore.

Per accedere al valore della chiave per l'elemento, usare `crIter->first` , che equivale a `(*crIter).first` . Per accedere al valore del punto di riferimento mappato per l'elemento, usare `crIter->second` , che equivale a `(*crIter).first` .

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rend](#rend) per indicazioni su come dichiarare e usare `const_reverse_iterator`.

## <a name="multimapcount"></a><a name="count"></a> multimap:: count

Restituisce il numero di elementi di un multimap la cui chiave corrisponde a una chiave specificata dal parametro.

```cpp
size_type count(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*chiave*\
La chiave degli elementi per cui trovare un corrispondenza nel multimap.

### <a name="return-value"></a>Valore restituito

Il numero di elementi le cui chiavi di ordinamento corrispondono alla chiave del parametro; 0 se multimap non contiene un elemento con una chiave corrispondente.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il numero di elementi nell'intervallo

\[ lower_bound (*chiave*), upper_bound (*chiave*)

con una *chiave*del valore della chiave.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro multimap::count.

```cpp
// multimap_count.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
    using namespace std;
    multimap<int, int> m1;
    multimap<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    m1.insert(Int_Pair(1, 1));
    m1.insert(Int_Pair(2, 1));
    m1.insert(Int_Pair(1, 4));
    m1.insert(Int_Pair(2, 1));

    // Elements do not need to have unique keys in multimap,
    // so duplicates are allowed and counted
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
The number of elements in m1 with a sort key of 1 is: 2.
The number of elements in m1 with a sort key of 2 is: 2.
The number of elements in m1 with a sort key of 3 is: 0.
```

## <a name="multimapcrbegin"></a><a name="crbegin"></a> multimap:: crbegin

Restituisce un iteratore const che punta al primo elemento di un oggetto multimap invertito.

```cpp
const_reverse_iterator crbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta al primo elemento di un oggetto [multimap](../standard-library/multimap-class.md) invertito o a quello che è stato l'ultimo elemento dell'oggetto `multimap` non invertito.

### <a name="remarks"></a>Osservazioni

`crbegin` viene usato con un oggetto `multimap` invertito proprio come [begin](#begin) viene usato con un oggetto `multimap`.

Con il valore restituito di `crbegin`, l'oggetto `multimap` non può essere modificato.

`crbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto `multimap`.

### <a name="example"></a>Esempio

```cpp
// multimap_crbegin.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int> m1;

   multimap <int, int> :: const_reverse_iterator m1_crIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   m1_crIter = m1.crbegin( );
   cout << "The first element of the reversed multimap m1 is "
        << m1_crIter -> first << "." << endl;
}
```

```Output
The first element of the reversed multimap m1 is 3.
```

## <a name="multimapcrend"></a><a name="crend"></a> multimap:: crend

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un oggetto multimap invertito.

```cpp
const_reverse_iterator crend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta alla posizione successiva all'ultimo elemento di un oggetto [multimap](../standard-library/multimap-class.md) invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto `multimap` non invertito.

### <a name="remarks"></a>Osservazioni

`crend` viene usato con un oggetto `multimap` invertito proprio come [multimap::end](#end) viene usato con un oggetto `multimap`.

Con il valore restituito di `crend`, l'oggetto `multimap` non può essere modificato.

`crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine dell'oggetto `multimap`.

Non è consigliabile dereferenziare il valore restituito da `crend`.

### <a name="example"></a>Esempio

```cpp
// multimap_crend.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int> m1;

   multimap <int, int> :: const_reverse_iterator m1_crIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   m1_crIter = m1.crend( );
   m1_crIter--;
   cout << "The last element of the reversed multimap m1 is "
        << m1_crIter -> first << "." << endl;
}
```

```Output
The last element of the reversed multimap m1 is 1.
```

## <a name="multimapdifference_type"></a><a name="difference_type"></a> multimap::d ifference_type

Tipo Signed Integer che può essere usato per rappresentare il numero di elementi di un oggetto multimap in un intervallo compreso tra gli elementi a cui puntano gli iteratori.

```cpp
typedef typename allocator_type::difference_type difference_type;
```

### <a name="remarks"></a>Osservazioni

`difference_type` è il tipo restituito quando si sottrae o si incrementa tramite gli iteratori del contenitore. `difference_type`Viene in genere usato per rappresentare il numero di elementi nell'intervallo [*First*, *Last*) tra gli iteratori `first` e `last` , include l'elemento a cui punta `first` e l'intervallo di elementi fino a, ma non include, l'elemento a cui punta `last` .

Si noti che, sebbene `difference_type` sia disponibile per tutti gli iteratori che soddisfano i requisiti di un iteratore di input, inclusa la classe degli iteratori bidirezionali supportati da contenitori reversibili come set, la sottrazione tra gli iteratori è supportata solo da iteratori ad accesso casuale forniti da un contenitore ad accesso casuale, ad esempio vector.

### <a name="example"></a>Esempio

```cpp
// multimap_diff_type.cpp
// compile with: /EHsc
#include <iostream>
#include <map>
#include <algorithm>

int main( )
{
   using namespace std;
   multimap <int, int> m1;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 3, 20 ) );

   // The following will insert as multimap keys are not unique
   m1.insert ( Int_Pair ( 2, 30 ) );

   multimap <int, int>::iterator m1_Iter, m1_bIter, m1_eIter;
   m1_bIter = m1.begin( );
   m1_eIter = m1.end( );

   // Count the number of elements in a multimap
   multimap <int, int>::difference_type  df_count = 0;
   m1_Iter = m1.begin( );
   while ( m1_Iter != m1_eIter )
   {
      df_count++;
      m1_Iter++;
   }

   cout << "The number of elements in the multimap m1 is: "
        << df_count << "." << endl;
}
```

```Output
The number of elements in the multimap m1 is: 4.
```

## <a name="multimapemplace"></a><a name="emplace"></a> multimap:: emplace

Inserisce un elemento costruito sul posto, senza che vengano eseguite operazioni di copia o spostamento.

```cpp
template <class... Args>
iterator emplace(Args&&... args);
```

### <a name="parameters"></a>Parametri

*args*\
Argomenti inoltrati per costruire un elemento da inserire nell'oggetto multimap.

### <a name="return-value"></a>Valore restituito

Iteratore all'elemento appena inserito.

### <a name="remarks"></a>Osservazioni

Questa funzione non invalida alcun riferimento a elementi del contenitore, ma potrebbe invalidare tutti gli iteratori per il contenitore.

Se viene generata un'eccezione durante l'inserimento, il contenitore rimane invariato e viene nuovamente generata l'eccezione.

L'oggetto [value_type](../standard-library/map-class.md#value_type) di un elemento è una coppia, pertanto il valore di un elemento sarà una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dei dati dell'elemento.

### <a name="example"></a>Esempio

```cpp
// multimap_emplace.cpp
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
    multimap<string, string> m1;

    m1.emplace("Anna", "Accounting");
    m1.emplace("Bob", "Accounting");
    m1.emplace("Carmine", "Engineering");

    cout << "multimap modified, now contains ";
    print(m1);
    cout << endl;

    m1.emplace("Bob", "Engineering");

    cout << "multimap modified, now contains ";
    print(m1);
    cout << endl;
}
```

## <a name="multimapemplace_hint"></a><a name="emplace_hint"></a> multimap:: emplace_hint

Inserisce un elemento costruito in locale (senza che vengano eseguite operazioni di copia o di spostamento), con un suggerimento sulla posizione.

```cpp
template <class... Args>
iterator emplace_hint(
    const_iterator where,
    Args&&... args);
```

### <a name="parameters"></a>Parametri

*args*\
Argomenti inoltrati per costruire un elemento da inserire nell'oggetto multimap.

*in cui*\
Posizione in cui iniziare a cercare il punto di inserimento corretto. Se il punto precede immediatamente la *posizione*, l'inserimento può essere eseguito in tempo costante ammortizzato anziché in tempo logaritmico.

### <a name="return-value"></a>Valore restituito

Iteratore all'elemento appena inserito.

### <a name="remarks"></a>Osservazioni

Questa funzione non invalida alcun riferimento a elementi del contenitore, ma potrebbe invalidare tutti gli iteratori per il contenitore.

Se viene generata un'eccezione durante l'inserimento, lo stato del contenitore non viene modificato.

L'oggetto [value_type](../standard-library/map-class.md#value_type) di un elemento è una coppia, pertanto il valore di un elemento sarà una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dei dati dell'elemento.

Per un esempio di codice, vedere [map::emplace_hint](../standard-library/map-class.md#emplace_hint).

## <a name="multimapempty"></a><a name="empty"></a> multimap:: Empty

Verifica se un oggetto multimap è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se multimap è vuoto; **`false`** Se multimap non è vuoto.

### <a name="example"></a>Esempio

```cpp
// multimap_empty.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int> m1, m2;

   typedef pair <int, int> Int_Pair;
   m1.insert ( Int_Pair ( 1, 1 ) );

   if ( m1.empty( ) )
      cout << "The multimap m1 is empty." << endl;
   else
      cout << "The multimap m1 is not empty." << endl;

   if ( m2.empty( ) )
      cout << "The multimap m2 is empty." << endl;
   else
      cout << "The multimap m2 is not empty." << endl;
}
```

```Output
The multimap m1 is not empty.
The multimap m2 is empty.
```

## <a name="multimapend"></a><a name="end"></a> multimap:: end

Restituisce l'iteratore successivo all'ultimo valore.

```cpp
const_iterator end() const;

iterator end();
```

### <a name="return-value"></a>Valore restituito

Iteratore successivo all'ultimo valore. Se il multimap è vuoto, verrà restituito `multimap::end() == multimap::begin()`.

### <a name="remarks"></a>Osservazioni

**end** viene usato per verificare se un iteratore ha superato la fine del relativo oggetto multimap.

Non è consigliabile dereferenziare il valore restituito da **end**.

Per un esempio di codice, vedere [multimap::find](#find).

## <a name="multimapequal_range"></a><a name="equal_range"></a> multimap:: equal_range

Trova l'intervallo di elementi in cui la chiave dell'elemento corrisponde a un valore specificato.

```cpp
pair <const_iterator, const_iterator> equal_range (const Key& key) const;

pair <iterator, iterator> equal_range (const Key& key);
```

### <a name="parameters"></a>Parametri

*chiave*\
Chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto multimap in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Coppia di iteratori in cui il primo è l'elemento [lower_bound](#lower_bound) e il secondo è l'elemento [upper_bound](#upper_bound) della chiave.

Per accedere al primo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **First** e per dereferenziare l'iteratore del limite inferiore, usare \* ( `pr` . **primo**). Per accedere al secondo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **secondo** e per dereferenziare l'iteratore del limite superiore, usare \* ( `pr` . **secondo**).

### <a name="example"></a>Esempio

```cpp
// multimap_equal_range.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   typedef multimap <int, int, less<int> > IntMMap;
   IntMMap m1;
   multimap <int, int> :: const_iterator m1_RcIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   pair <IntMMap::const_iterator, IntMMap::const_iterator> p1, p2;
   p1 = m1.equal_range( 2 );

   cout << "The lower bound of the element with "
        << "a key of 2 in the multimap m1 is: "
        << p1.first -> second << "." << endl;

   cout << "The upper bound of the element with "
        << "a key of 2 in the multimap m1 is: "
        << p1.second -> second << "." << endl;

   // Compare the upper_bound called directly
   m1_RcIter = m1.upper_bound( 2 );

   cout << "A direct call of upper_bound( 2 ) gives "
        << m1_RcIter -> second << "," << endl
        << "matching the 2nd element of the pair "
        << "returned by equal_range( 2 )." << endl;

   p2 = m1.equal_range( 4 );

   // If no match is found for the key,
   // both elements of the pair return end( )
   if ( ( p2.first == m1.end( ) ) && ( p2.second == m1.end( ) ) )
      cout << "The multimap m1 doesn't have an element "
           << "with a key less than 4." << endl;
   else
      cout << "The element of multimap m1 with a key >= 40 is: "
           << p1.first -> first << "." << endl;
}
```

```Output
The lower bound of the element with a key of 2 in the multimap m1 is: 20.
The upper bound of the element with a key of 2 in the multimap m1 is: 30.
A direct call of upper_bound( 2 ) gives 30,
matching the 2nd element of the pair returned by equal_range( 2 ).
The multimap m1 doesn't have an element with a key less than 4.
```

## <a name="multimaperase"></a><a name="erase"></a> multimap:: erase

Rimuove un elemento o un intervallo di elementi di un oggetto multimap dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.

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

*In cui*\
Posizione dell'elemento che deve essere rimosso.

*Prima*\
Posizione del primo elemento che deve essere rimosso.

*Ultima*\
Posizione immediatamente successiva all'ultimo elemento che deve essere rimosso.

*Chiave*\
Chiave degli elementi da rimuovere.

### <a name="return-value"></a>Valore restituito

Per le prime due funzioni membro, iteratore bidirezionale che definisce il primo elemento rimanente oltre gli eventuali elementi rimossi o elemento che rappresenta la fine dell'oggetto map se tali elementi non sono presenti.

Per la terza funzione membro, restituisce il numero di elementi rimossi dall'oggetto multimap.

### <a name="remarks"></a>Osservazioni

Per un esempio di codice, vedere [map::erase](../standard-library/map-class.md#erase).

## <a name="multimapfind"></a><a name="find"></a> multimap:: Find

Restituisce un iteratore che fa riferimento alla prima posizione di un elemento in un multimap che contiene una chiave equivalente a una chiave specificata.

```cpp
iterator find(const Key& key);

const_iterator find(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*chiave*\
Valore chiave per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nel multimap in cui eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Iteratore che fa riferimento alla posizione di un elemento con una chiave specificata o alla posizione successiva all'ultimo elemento del multimap (`multimap::end()`) se non viene trovata alcuna corrispondenza per la chiave.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore che fa riferimento a un elemento del multimap la cui chiave di ordinamento è equivalente alla chiave dell'argomento in un predicato binario che causa un ordinamento basato su una relazione di comparabilità minore di.

Se il valore restituito di `find` viene assegnato a un `const_iterator`, l'oggetto multimap non può essere modificato. Se il valore restituito di `find` viene assegnato a un `iterator` , l'oggetto multimap può essere modificato.

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
    multimap<int, string> m1({ { 40, "Zr" }, { 45, "Rh" } });
    cout << "The starting multimap m1 is (key, value):" << endl;
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

    cout << "The modified multimap m1 is (key, value):" << endl;
    print_collection(m1);
    cout << endl;
    findit(m1, 45);
    findit(m1, 6);
}
```

## <a name="multimapget_allocator"></a><a name="get_allocator"></a> multimap:: get_allocator

Restituisce una copia dell'oggetto allocatore usato per costruire l'oggetto multimap.

```cpp
allocator_type get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Allocatore usato dall'oggetto multimap.

### <a name="remarks"></a>Osservazioni

Gli allocatori per la classe multimap specificano il modo in cui la classe gestisce l'archiviazione. Gli allocatori predefiniti forniti con le classi dei contenitori della libreria standard C++ sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.

### <a name="example"></a>Esempio

```cpp
// multimap_get_allocator.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int>::allocator_type m1_Alloc;
   multimap <int, int>::allocator_type m2_Alloc;
   multimap <int, double>::allocator_type m3_Alloc;
   multimap <int, int>::allocator_type m4_Alloc;

   // The following lines declare objects
   // that use the default allocator.
   multimap <int, int> m1;
   multimap <int, int, allocator<int> > m2;
   multimap <int, double, allocator<double> > m3;

   m1_Alloc = m1.get_allocator( );
   m2_Alloc = m2.get_allocator( );
   m3_Alloc = m3.get_allocator( );

   cout << "The number of integers that can be allocated"
        << endl << "before free memory is exhausted: "
        << m2.max_size( ) << ".\n" << endl;

   cout << "The number of doubles that can be allocated"
        << endl << "before free memory is exhausted: "
        << m3.max_size( ) <<  ".\n" << endl;

   // The following line creates a multimap m4
   // with the allocator of multimap m1.
   map <int, int> m4( less<int>( ), m1_Alloc );

   m4_Alloc = m4.get_allocator( );

   // Two allocators are interchangeable if
   // storage allocated from each can be
   // deallocated via the other
   if( m1_Alloc == m4_Alloc )
   {
      cout << "The allocators are interchangeable."
           << endl;
   }
   else
   {
      cout << "The allocators are not interchangeable."
           << endl;
   }
}
```

## <a name="multimapinsert"></a><a name="insert"></a> multimap:: Insert

Inserisce un elemento o un intervallo di elementi in un multimap.

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

*Val*\
Valore di un elemento da inserire nel multimap.

*In cui*\
Posizione in cui iniziare a cercare il punto di inserimento corretto. Se il punto precede immediatamente la *posizione*, l'inserimento può essere eseguito in tempo costante ammortizzato anziché in tempo logaritmico.

*ValTy*\
Parametro di modello che specifica il tipo di argomento che può essere usato dalla mappa per costruire un elemento di [value_type](../standard-library/map-class.md#value_type)e che consente di eseguire l'avanzamento perfetto di *Val* come argomento.

*Prima*\
Posizione del primo elemento da copiare.

*Ultima*\
Posizione immediatamente dopo l'ultimo elemento da copiare.

*InputIterator*\
Argomento della funzione modello che soddisfa i requisiti di un [iteratore di input](../standard-library/input-iterator-tag-struct.md) che punta agli elementi di un tipo utilizzabili per costruire oggetti [value_type](../standard-library/map-class.md#value_type).

*IList*\
[Initializer_list](../standard-library/initializer-list.md) da cui copiare gli elementi.

### <a name="return-value"></a>Valore restituito

Le funzioni membro di inserimento a elemento singolo, (1) e (2), restituiscono un iteratore alla posizione in cui il nuovo elemento è stato inserito nel multimap.

Le funzioni membro a elemento singolo con suggerimento, (3) e (4), restituiscono un iteratore che fa riferimento alla posizione in cui il nuovo elemento è stato inserito nel multimap.

### <a name="remarks"></a>Osservazioni

Questa funzione non invalida alcun puntatore o riferimento, ma potrebbe invalidare tutti gli iteratori per il contenitore.

Se viene generata un'eccezione durante l'inserimento di un solo elemento, ma l'eccezione non si manifesta nella funzione hash del contenitore, lo stato del contenitore non verrà modificato. Se viene generata un'eccezione durante l'inserimento di più elementi, il contenitore viene lasciato in uno stato non specificato ma comunque valido.

L'oggetto [value_type](../standard-library/map-class.md#value_type) di un contenitore è un typedef appartenente al contenitore e, per map, `multimap<K, V>::value_type` è `pair<const K, V>`. Il valore di un elemento è una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dati dell'elemento.

La funzione membro di intervallo (5) inserisce la sequenza di valori di elemento in un oggetto multimap che corrisponde a ogni elemento a cui punta un iteratore nell'intervallo. non viene `[First, Last)` quindi inserito l' *ultimo* . La funzione membro di contenitore `end()` fa riferimento alla posizione immediatamente dopo l'ultimo elemento nel contenitore. L'istruzione `m.insert(v.begin(), v.end());`, ad esempio, cerca di inserire tutti gli elementi di `v` in `m`.

La funzione membro dell'elenco di inizializzatori (6) usa un oggetto [initializer_list](../standard-library/initializer-list.md) per copiare gli elementi nell'oggetto map.

Per l'inserimento di un elemento costruito sul posto, ovvero senza operazioni di copia o spostamento, vedere [multimap::emplace](#emplace) e [multimap::emplace_hint](#emplace_hint).

### <a name="example"></a>Esempio

```cpp
// multimap_insert.cpp
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
    multimap<int, int> m1;
    // call insert(const value_type&) version
    m1.insert({ 1, 10 });
    // call insert(ValTy&&) version
    m1.insert(make_pair(2, 20));

    cout << "The original key and mapped values of m1 are:" << endl;
    print(m1);

    // intentionally attempt a duplicate, single element
    m1.insert(make_pair(1, 111));

    cout << "The modified key and mapped values of m1 are:" << endl;
    print(m1);

    // single element, with hint
    m1.insert(m1.end(), make_pair(3, 30));
    cout << "The modified key and mapped values of m1 are:" << endl;
    print(m1);
    cout << endl;

    // The templatized version inserting a jumbled range
    multimap<int, int> m2;
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
    multimap<int, string>  m3;
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

    multimap<int, int> m4;
    // Insert the elements from an initializer_list
    m4.insert({ { 4, 44 }, { 2, 22 }, { 3, 33 }, { 1, 11 }, { 5, 55 } });
    cout << "After initializer_list insertion, m4 contains:" << endl;
    print(m4);
    cout << endl;
}
```

## <a name="multimapiterator"></a><a name="iterator"></a> multimap:: iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un oggetto multimap.

```cpp
typedef implementation-defined iterator;
```

### <a name="remarks"></a>Osservazioni

L'oggetto `iterator` definito da multimap punta a oggetti di [value_type](#value_type), che sono di tipo `pair<const Key, Type>` . Il valore della chiave è disponibile tramite il primo membro della coppia e il valore dell'elemento mappato è disponibile tramite il secondo membro della coppia.

Per dereferenziare un `iterator` *iter* che punta a un elemento in un oggetto multimap, usare l' **->** operatore.

Per accedere al valore della chiave per l'elemento, usare `Iter->first` , che equivale a `(*Iter).first` . Per accedere al valore del punto di riferimento mappato per l'elemento, usare `Iter->second` , che equivale a `(*Iter).second` .

Un tipo `iterator` può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio per [begin](#begin) per un esempio di dichiarazione e utilizzo di `iterator`.

## <a name="multimapkey_comp"></a><a name="key_comp"></a> multimap:: key_comp

Recupera una copia dell'oggetto di confronto usato per ordinare le chiavi di un oggetto multimap.

```cpp
key_compare key_comp() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto funzione che viene usato da un oggetto multimap per ordinare gli elementi.

### <a name="remarks"></a>Osservazioni

L'oggetto archiviato definisce la funzione membro

`bool operator( const Key& x, const Key& y);`

che restituisce true se *x* precede rigorosamente *y* nell'ordinamento.

### <a name="example"></a>Esempio

```cpp
// multimap_key_comp.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;

   multimap <int, int, less<int> > m1;
   multimap <int, int, less<int> >::key_compare kc1 = m1.key_comp( ) ;
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

   multimap <int, int, greater<int> > m2;
   multimap <int, int, greater<int> >::key_compare kc2 = m2.key_comp( );
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

## <a name="multimapkey_compare"></a><a name="key_compare"></a> multimap:: key_compare

Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nell'oggetto multimap.

```cpp
typedef Traits key_compare;
```

### <a name="remarks"></a>Osservazioni

`key_compare` è un sinonimo per il parametro di modello `Traits`.

Per altre informazioni su `Traits`, vedere l'argomento [Classe multimap](../standard-library/multimap-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [key_comp](#key_comp) per indicazioni su come dichiarare e usare `key_compare`.

## <a name="multimapkey_type"></a><a name="key_type"></a> multimap:: key_type

Tipo che descrive l'oggetto chiave di ordinamento di cui è costituito ogni elemento dell'oggetto multimap.

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Osservazioni

`key_type` è un sinonimo per il parametro di modello `Key`.

Per altre informazioni su `Key`, vedere la sezione Note dell'argomento [Classe multimap](../standard-library/multimap-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_type](#value_type) per indicazioni su come dichiarare e usare `key_type`.

## <a name="multimaplower_bound"></a><a name="lower_bound"></a> multimap:: lower_bound

Restituisce un iteratore al primo elemento di un oggetto multimap con una chiave uguale o maggiore di una chiave specificata.

```cpp
iterator lower_bound(const Key& key);

const_iterator lower_bound(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*chiave*\
Chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto multimap in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Tipo iterator o `const_iterator` che punta alla posizione di un elemento di un oggetto multimap con una chiave uguale o maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento dell'oggetto multimap se non viene trovata alcuna corrispondenza per la chiave.

Se il valore restituito di `lower_bound` viene assegnato a un `const_iterator`, l'oggetto multimap non può essere modificato. Se il valore restituito di `lower_bound` viene assegnato a un **iterator**, l'oggetto multimap può essere modificato.

### <a name="example"></a>Esempio

```cpp
// multimap_lower_bound.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int> m1;
   multimap <int, int> :: const_iterator m1_AcIter, m1_RcIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   m1_RcIter = m1.lower_bound( 2 );
   cout << "The element of multimap m1 with a key of 2 is: "
        << m1_RcIter -> second << "." << endl;

   m1_RcIter = m1.lower_bound( 3 );
   cout << "The first element of multimap m1 with a key of 3 is: "
        << m1_RcIter -> second << "." << endl;

   // If no match is found for the key, end( ) is returned
   m1_RcIter = m1.lower_bound( 4 );

   if ( m1_RcIter == m1.end( ) )
      cout << "The multimap m1 doesn't have an element "
              << "with a key of 4." << endl;
   else
      cout << "The element of multimap m1 with a key of 4 is: "
                << m1_RcIter -> second << "." << endl;

   // The element at a specific location in the multimap can be
   // found using a dereferenced iterator addressing the location
   m1_AcIter = m1.end( );
   m1_AcIter--;
   m1_RcIter = m1.lower_bound( m1_AcIter -> first );
   cout << "The first element of m1 with a key matching\n"
        << "that of the last element is: "
        << m1_RcIter -> second << "." << endl;

   // Note that the first element with a key equal to
   // the key of the last element is not the last element
   if ( m1_RcIter == --m1.end( ) )
      cout << "This is the last element of multimap m1."
           << endl;
   else
      cout << "This is not the last element of multimap m1."
           << endl;
}
```

```Output
The element of multimap m1 with a key of 2 is: 20.
The first element of multimap m1 with a key of 3 is: 20.
The multimap m1 doesn't have an element with a key of 4.
The first element of m1 with a key matching
that of the last element is: 20.
This is not the last element of multimap m1.
```

## <a name="multimapmapped_type"></a><a name="mapped_type"></a> multimap:: mapped_type

Tipo che rappresenta il tipo di dati archiviato in un oggetto multimap.

```cpp
typedef Type mapped_type;
```

### <a name="remarks"></a>Osservazioni

`mapped_type` è un sinonimo per il parametro di modello `Type`.

Per altre informazioni su `Type`, vedere l'argomento [Classe multimap](../standard-library/multimap-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_type](#value_type) per indicazioni su come dichiarare e usare `key_type`.

## <a name="multimapmax_size"></a><a name="max_size"></a> multimap:: max_size

Restituisce la lunghezza massima dell'oggetto multimap.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Massima lunghezza possibile dell'oggetto multimap.

### <a name="example"></a>Esempio

```cpp
// multimap_max_size.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int> m1;
   multimap <int, int> :: size_type i;

   i = m1.max_size( );
   cout << "The maximum possible length "
        << "of the multimap is " << i << "." << endl;
}
```

## <a name="multimapmultimap"></a><a name="multimap"></a> multimap:: multimap

Costruisce un oggetto multimap vuoto o che rappresenta una copia totale o parziale di un altro oggetto multimap.

```cpp
multimap();

explicit multimap(
    const Traits& Comp);

multimap(
    const Traits& Comp,
    const Allocator& Al);

map(
    const multimap& Right);

multimap(
    multimap&& Right);

multimap(
    initializer_list<value_type> IList);

multimap(
    initializer_list<value_type> IList,
    const Compare& Comp);

multimap(
    initializer_list<value_type> IList,
    const Compare& Comp,
    const Allocator& Al);

template <class InputIterator>
multimap(
    InputIterator First,
    InputIterator Last);

template <class InputIterator>
multimap(
    InputIterator First,
    InputIterator Last,
    const Traits& Comp);

template <class InputIterator>
multimap(
    InputIterator First,
    InputIterator Last,
    const Traits& Comp,
    const Allocator& Al);
```

### <a name="parameters"></a>Parametri

*Al*\
Classe dell'allocatore di archiviazione da usare per l'oggetto multimap. Per impostazione predefinita è Allocator.

*Comp*\
Funzione di confronto di tipo `constTraits` usata per ordinare gli elementi nell'oggetto map. Per impostazione predefinita è `Traits`.

*Ok*\
Oggetto map di cui il set costruito deve essere una copia.

*Prima*\
Posizione del primo elemento nell'intervallo di elementi da copiare.

*Ultima*\
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

*IList*\
initializer_list da cui copiare gli elementi.

### <a name="remarks"></a>Osservazioni

Tutti i costruttori archiviano un tipo di oggetto allocatore che gestisce l'archiviazione per l'oggetto multimap e che può essere restituito in un secondo momento chiamando [get_allocator](#get_allocator). Il parametro allocator viene spesso omesso nelle dichiarazioni di classe e vengono usate macro di pre-elaborazione per introdurre allocatori alternativi.

Tutti i costruttori inizializzano il relativo oggetto multimap.

Tutti i costruttori archiviano un oggetto funzione di tipo `Traits` che viene usato per stabilire un ordine tra le chiavi dell'oggetto multimap e che può essere restituito in un secondo momento chiamando [key_comp](#key_comp).

I primi tre costruttori specificano un multimap iniziale vuoto, il secondo specifica il tipo di funzione di confronto (*comp*) da usare per stabilire l'ordine degli elementi e il terzo specifica in modo esplicito il tipo di allocatore (*al*) da usare. Con la parola chiave vengono **`explicit`** eliminati determinati tipi di conversione automatica dei tipi.

Il quarto costruttore specifica una copia del *diritto*multimap.

Il quinto costruttore specifica una copia del multimap spostando a *destra*.

Il sesto, il settimo e l'ottavo costruttore copiano i membri di un oggetto initializer_list.

I tre costruttori successivi copiano l'intervallo `[First, Last)` di un oggetto map con un grado di esplicitazione crescente nello specificare il tipo di funzione di confronto della classe `Traits` e il tipo di allocatore.

### <a name="example"></a>Esempio

```cpp
// multimap_ctor.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main()
{
    using namespace std;
    typedef pair <int, int> Int_Pair;

    // Create an empty multimap m0 of key type integer
    multimap <int, int> m0;

    // Create an empty multimap m1 with the key comparison
    // function of less than, then insert 4 elements
    multimap <int, int, less<int> > m1;
    m1.insert(Int_Pair(1, 10));
    m1.insert(Int_Pair(2, 20));
    m1.insert(Int_Pair(3, 30));
    m1.insert(Int_Pair(4, 40));

    // Create an empty multimap m2 with the key comparison
    // function of greater than, then insert 2 elements
    multimap <int, int, less<int> > m2;
    m2.insert(Int_Pair(1, 10));
    m2.insert(Int_Pair(2, 20));

    // Create a multimap m3 with the
    // allocator of multimap m1
    multimap <int, int>::allocator_type m1_Alloc;
    m1_Alloc = m1.get_allocator();
    multimap <int, int> m3(less<int>(), m1_Alloc);
    m3.insert(Int_Pair(3, 30));

    // Create a copy, multimap m4, of multimap m1
    multimap <int, int> m4(m1);

    // Create a multimap m5 by copying the range m1[ first,  last)
    multimap <int, int>::const_iterator m1_bcIter, m1_ecIter;
    m1_bcIter = m1.begin();
    m1_ecIter = m1.begin();
    m1_ecIter++;
    m1_ecIter++;
    multimap <int, int> m5(m1_bcIter, m1_ecIter);

    // Create a multimap m6 by copying the range m4[ first,  last)
    // and with the allocator of multimap m2
    multimap <int, int>::allocator_type m2_Alloc;
    m2_Alloc = m2.get_allocator();
    multimap <int, int> m6(m4.begin(), ++m4.begin(), less<int>(), m2_Alloc);

    cout << "m1 =";
    for (auto i : m1)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

    cout << "m2 =";
    for (auto i : m2)
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

    // Create a multimap m8 by copying in an initializer_list
    multimap<int, int> m8{ { { 1, 1 }, { 2, 2 }, { 3, 3 }, { 4, 4 } } };
    cout << "m8: = ";
    for (auto i : m8)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

    // Create a multimap m9 with an initializer_list and a comparator
    multimap<int, int> m9({ { 5, 5 }, { 6, 6 }, { 7, 7 }, { 8, 8 } }, less<int>());
    cout << "m9: = ";
    for (auto i : m9)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

    // Create a multimap m10 with an initializer_list, a comparator, and an allocator
    multimap<int, int> m10({ { 9, 9 }, { 10, 10 }, { 11, 11 }, { 12, 12 } }, less<int>(), m9.get_allocator());
    cout << "m10: = ";
    for (auto i : m10)
        cout << i.first << " " << i.second << ", ";
    cout << endl;

}
```

## <a name="multimapoperator"></a><a name="op_eq"></a> multimap:: operator =

Sostituisce gli elementi di un oggetto multimap con una copia di un altro oggetto multimap.

```cpp
multimap& operator=(const multimap& right);

multimap& operator=(multimap&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Oggetto [multimap](../standard-library/multimap-class.md) da copiare nell'oggetto `multimap`.

### <a name="remarks"></a>Osservazioni

Dopo la cancellazione di tutti gli elementi esistenti in un oggetto `multimap` , `operator=` copia o sposta il contenuto di *direttamente* in `multimap` .

### <a name="example"></a>Esempio

```cpp
// multimap_operator_as.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
   {
   using namespace std;
   multimap<int, int> v1, v2, v3;
   multimap<int, int>::iterator iter;

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

## <a name="multimappointer"></a><a name="pointer"></a> multimap::p ointer

Tipo che fornisce un puntatore a un elemento di un oggetto multimap.

```cpp
typedef typename allocator_type::pointer pointer;
```

### <a name="remarks"></a>Osservazioni

Un tipo `pointer` può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto multimap.

## <a name="multimaprbegin"></a><a name="rbegin"></a> multimap:: rbegin

Restituisce un iteratore che punta al primo elemento di un oggetto multimap invertito.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta al primo elemento in un oggetto multimap invertito o a quello che è stato l'ultimo elemento dell'oggetto multimap non invertito.

### <a name="remarks"></a>Osservazioni

`rbegin` viene usato con un oggetto multimap invertito proprio come [begin](#begin) viene usato con un oggetto multimap.

Se il valore restituito di `rbegin` viene assegnato a un `const_reverse_iterator`, l'oggetto multimap non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a un `reverse_iterator`, l'oggetto multimap può essere modificato.

`rbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto multimap.

### <a name="example"></a>Esempio

```cpp
// multimap_rbegin.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int> m1;

   multimap <int, int> :: iterator m1_Iter;
   multimap <int, int> :: reverse_iterator m1_rIter;
   multimap <int, int> :: const_reverse_iterator m1_crIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   m1_rIter = m1.rbegin( );
   cout << "The first element of the reversed multimap m1 is "
        << m1_rIter -> first << "." << endl;

   // begin can be used to start an iteration
   // through a multimap in a forward order
   cout << "The multimap is: ";
   for ( m1_Iter = m1.begin( ) ; m1_Iter != m1.end( ); m1_Iter++)
      cout << m1_Iter -> first << " ";
      cout << "." << endl;

   // rbegin can be used to start an iteration
   // through a multimap in a reverse order
   cout << "The reversed multimap is: ";
   for ( m1_rIter = m1.rbegin( ) ; m1_rIter != m1.rend( ); m1_rIter++)
      cout << m1_rIter -> first << " ";
      cout << "." << endl;

   // A multimap element can be erased by dereferencing its key
   m1_rIter = m1.rbegin( );
   m1.erase ( m1_rIter -> first );

   m1_rIter = m1.rbegin( );
   cout << "After the erasure, the first element "
        << "in the reversed multimap is "
        << m1_rIter -> first << "." << endl;
}
```

```Output
The first element of the reversed multimap m1 is 3.
The multimap is: 1 2 3 .
The reversed multimap is: 3 2 1 .
After the erasure, the first element in the reversed multimap is 2.
```

## <a name="multimapreference"></a><a name="reference"></a> multimap:: Reference

Tipo che fornisce un riferimento a un elemento archiviato in un oggetto multimap.

```cpp
typedef typename allocator_type::reference reference;
```

### <a name="example"></a>Esempio

```cpp
// multimap_ref.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int> m1;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );

   // Declare and initialize a const_reference &Ref1
   // to the key of the first element
   const int &Ref1 = ( m1.begin( ) -> first );

   // The following line would cause an error because the
   // non-const_reference cannot be used to access the key
   // int &Ref1 = ( m1.begin( ) -> first );

   cout << "The key of first element in the multimap is "
        << Ref1 << "." << endl;

   // Declare and initialize a reference &Ref2
   // to the data value of the first element
   int &Ref2 = ( m1.begin( ) -> second );

   cout << "The data value of first element in the multimap is "
        << Ref2 << "." << endl;

   // The non-const_reference can be used to modify the
   // data value of the first element
   Ref2 = Ref2 + 5;
   cout << "The modified data value of first element is "
        << Ref2 << "." << endl;
}
```

```Output
The key of first element in the multimap is 1.
The data value of first element in the multimap is 10.
The modified data value of first element is 15.
```

## <a name="multimaprend"></a><a name="rend"></a> multimap:: rend

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un oggetto multimap invertito.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta alla posizione successiva all'ultimo elemento di un oggetto multimap invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto multimap non invertito.

### <a name="remarks"></a>Osservazioni

`rend` viene usato con un oggetto multimap invertito proprio come [end](../standard-library/map-class.md#end) viene usato con un oggetto multimap.

Se il valore restituito di `rend` viene assegnato a un `const_reverse_iterator`, l'oggetto multimap non può essere modificato. Se il valore restituito di `rend` viene assegnato a un `reverse_iterator`, l'oggetto multimap può essere modificato.

`rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo oggetto multimap.

Non è consigliabile dereferenziare il valore restituito da `rend`.

### <a name="example"></a>Esempio

```cpp
// multimap_rend.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int> m1;

   multimap <int, int> :: iterator m1_Iter;
   multimap <int, int> :: reverse_iterator m1_rIter;
   multimap <int, int> :: const_reverse_iterator m1_crIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );

   m1_rIter = m1.rend( );
   m1_rIter--;
   cout << "The last element of the reversed multimap m1 is "
        << m1_rIter -> first << "." << endl;

   // begin can be used to start an iteration
   // through a multimap in a forward order
   cout << "The multimap is: ";
   for ( m1_Iter = m1.begin( ) ; m1_Iter != m1.end( ); m1_Iter++)
      cout << m1_Iter -> first << " ";
      cout << "." << endl;

   // rbegin can be used to start an iteration
   // through a multimap in a reverse order
   cout << "The reversed multimap is: ";
   for ( m1_rIter = m1.rbegin( ) ; m1_rIter != m1.rend( ); m1_rIter++)
      cout << m1_rIter -> first << " ";
      cout << "." << endl;

   // A multimap element can be erased by dereferencing to its key
   m1_rIter = --m1.rend( );
   m1.erase ( m1_rIter -> first );

   m1_rIter = m1.rend( );
   m1_rIter--;
   cout << "After the erasure, the last element "
        << "in the reversed multimap is "
        << m1_rIter -> first << "." << endl;
}
```

```Output
The last element of the reversed multimap m1 is 1.
The multimap is: 1 2 3 .
The reversed multimap is: 3 2 1 .
After the erasure, the last element in the reversed multimap is 2.
```

## <a name="multimapreverse_iterator"></a><a name="reverse_iterator"></a> multimap:: reverse_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un oggetto multimap invertito.

```cpp
typedef std::reverse_iterator<iterator> reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo `reverse_iterator` viene usato per eseguire l'iterazione sull'oggetto multimap in ordine inverso.

L'oggetto `reverse_iterator` definito da multimap punta a oggetti di [value_type](#value_type), che sono di tipo `pair<const Key, Type>` . Il valore della chiave è disponibile tramite il primo membro della coppia e il valore dell'elemento mappato è disponibile tramite il secondo membro della coppia.

Per dereferenziare un `reverse_iterator` *Riter* che punta a un elemento in un oggetto multimap, usare l' **->** operatore.

Per accedere al valore della chiave per l'elemento, usare `rIter->first` , che equivale a `(*rIter).first` . Per accedere al valore del punto di riferimento mappato per l'elemento, usare `rIter->second` , che equivale a `(*rIter).second` .

### <a name="example"></a>Esempio

Vedere l'esempio per [rbegin](#rbegin) per un esempio di dichiarazione e utilizzo di `reverse_iterator`.

## <a name="multimapsize"></a><a name="size"></a> multimap:: size

Restituisce il numero di elementi nel multimap.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza corrente del multimap.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro multimap::size.

```cpp
// multimap_size.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main()
{
    using namespace std;
    multimap<int, int> m1, m2;
    multimap<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    m1.insert(Int_Pair(1, 1));
    i = m1.size();
    cout << "The multimap length is " << i << "." << endl;

    m1.insert(Int_Pair(2, 4));
    i = m1.size();
    cout << "The multimap length is now " << i << "." << endl;
}
```

```Output
The multimap length is 1.
The multimap length is now 2.
```

## <a name="multimapsize_type"></a><a name="size_type"></a> multimap:: size_type

Tipo Unsigned Integer in grado di contare il numero di elementi di un oggetto multimap.

```cpp
typedef typename allocator_type::size_type size_type;
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [size](#size) per indicazioni su come dichiarare e usare `size_type`.

## <a name="multimapswap"></a><a name="swap"></a> multimap:: swap

Scambia gli elementi di due oggetti multimap.

```cpp
void swap(
    multimap<Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Oggetto multimap che fornisce gli elementi da scambiare o i cui elementi devono essere scambiati con quelli dell'oggetto multimap `left`.

### <a name="remarks"></a>Osservazioni

La funzione membro non invalida riferimenti, puntatori o iteratori che designano gli elementi dei due oggetti multimap di cui vengono scambiati gli elementi.

### <a name="example"></a>Esempio

```cpp
// multimap_swap.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int> m1, m2, m3;
   multimap <int, int>::iterator m1_Iter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );
   m2.insert ( Int_Pair ( 10, 100 ) );
   m2.insert ( Int_Pair ( 20, 200 ) );
   m3.insert ( Int_Pair ( 30, 300 ) );

   cout << "The original multimap m1 is:";
   for ( m1_Iter = m1.begin( ); m1_Iter != m1.end( ); m1_Iter++ )
      cout << " " << m1_Iter -> second;
   cout   << "." << endl;

   // This is the member function version of swap
   m1.swap( m2 );

   cout << "After swapping with m2, multimap m1 is:";
   for ( m1_Iter = m1.begin( ); m1_Iter != m1.end( ); m1_Iter++ )
      cout << " " << m1_Iter -> second;
   cout  << "." << endl;

   // This is the specialized template version of swap
   swap( m1, m3 );

   cout << "After swapping with m3, multimap m1 is:";
   for ( m1_Iter = m1.begin( ); m1_Iter != m1.end( ); m1_Iter++ )
      cout << " " << m1_Iter -> second;
   cout   << "." << endl;
}
```

```Output
The original multimap m1 is: 10 20 30.
After swapping with m2, multimap m1 is: 100 200.
After swapping with m3, multimap m1 is: 300.
```

## <a name="multimapupper_bound"></a><a name="upper_bound"></a> multimap:: upper_bound

Restituisce un iteratore al primo elemento di un oggetto multimap con una chiave maggiore di una chiave specificata.

```cpp
iterator upper_bound(const Key& key);

const_iterator upper_bound(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*chiave*\
Chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto multimap in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Tipo iterator o `const_iterator` che punta alla posizione di un elemento di un oggetto multimap con una chiave maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento dell'oggetto multimap se non viene trovata alcuna corrispondenza per la chiave.

Se il valore restituito viene assegnato a un `const_iterator`, l'oggetto multimap non può essere modificato. Se il valore restituito viene assegnato a un `iterator` , l'oggetto multimap può essere modificato.

### <a name="example"></a>Esempio

```cpp
// multimap_upper_bound.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   multimap <int, int> m1;
   multimap <int, int> :: const_iterator m1_AcIter, m1_RcIter;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );
   m1.insert ( Int_Pair ( 3, 40 ) );

   m1_RcIter = m1.upper_bound( 1 );
   cout << "The 1st element of multimap m1 with "
        << "a key greater than 1 is: "
        << m1_RcIter -> second << "." << endl;

   m1_RcIter = m1.upper_bound( 2 );
   cout << "The first element of multimap m1 with a key "
        << " greater than 2 is: "
        << m1_RcIter -> second << "." << endl;

   // If no match is found for the key, end( ) is returned
   m1_RcIter = m1.lower_bound( 4 );

   if ( m1_RcIter == m1.end( ) )
      cout << "The multimap m1 doesn't have an element "
           << "with a key of 4." << endl;
   else
      cout << "The element of multimap m1 with a key of 4 is: "
           << m1_RcIter -> second << "." << endl;

   // The element at a specific location in the multimap can be
   // found using a dereferenced iterator addressing the location
   m1_AcIter = m1.begin( );
   m1_RcIter = m1.upper_bound( m1_AcIter -> first );
   cout << "The first element of m1 with a key greater than\n"
        << "that of the initial element of m1 is: "
        << m1_RcIter -> second << "." << endl;
}
```

```Output
The 1st element of multimap m1 with a key greater than 1 is: 20.
The first element of multimap m1 with a key  greater than 2 is: 30.
The multimap m1 doesn't have an element with a key of 4.
The first element of m1 with a key greater than
that of the initial element of m1 is: 20.
```

## <a name="multimapvalue_comp"></a><a name="value_comp"></a> multimap:: value_comp

La funzione membro restituisce un oggetto funzione che determina l'ordine degli elementi in un oggetto multimap confrontando i valori delle relative chiavi.

```cpp
value_compare value_comp() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto funzione di confronto che viene usato da un oggetto multimap per ordinare gli elementi.

### <a name="remarks"></a>Osservazioni

Per un oggetto multimap *m*, se due elementi *E1*(*K1*, *D1*) ed *E2*(*K2*, *D2*) sono oggetti di tipo `value_type` , dove *K1* e *K2* sono le chiavi di tipo `key_type` e *D1* e *D2* sono i dati di tipo `mapped_type` , `m.value_comp(e1, e2)` è equivalente a `m.key_comp(k1, k2)` .

### <a name="example"></a>Esempio

```cpp
// multimap_value_comp.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;

   multimap <int, int, less<int> > m1;
   multimap <int, int, less<int> >::value_compare vc1 = m1.value_comp( );
   multimap<int,int>::iterator Iter1, Iter2;

   Iter1= m1.insert ( multimap <int, int> :: value_type ( 1, 10 ) );
   Iter2= m1.insert ( multimap <int, int> :: value_type ( 2, 5 ) );

   if( vc1( *Iter1, *Iter2 ) == true )
   {
      cout << "The element ( 1,10 ) precedes the element ( 2,5 )."
           << endl;
   }
   else
   {
      cout << "The element ( 1,10 ) does "
           << "not precede the element ( 2,5 )."
           << endl;
   }

   if( vc1( *Iter2, *Iter1 ) == true )
   {
      cout << "The element ( 2,5 ) precedes the element ( 1,10 )."
           << endl;
   }
   else
   {
      cout << "The element ( 2,5 ) does "
           << "not precede the element ( 1,10 )."
           << endl;
   }
}
```

```Output
The element ( 1,10 ) precedes the element ( 2,5 ).
The element ( 2,5 ) does not precede the element ( 1,10 ).
```

## <a name="multimapvalue_type"></a><a name="value_type"></a> multimap:: value_type

Tipo che rappresenta il tipo di oggetto archiviato come elemento di un oggetto map.

```cpp
typedef pair<const Key, Type> value_type;
```

### <a name="example"></a>Esempio

```cpp
// multimap_value_type.cpp
// compile with: /EHsc
#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   typedef pair <const int, int> cInt2Int;
   multimap <int, int> m1;
   multimap <int, int> :: key_type key1;
   multimap <int, int> :: mapped_type mapped1;
   multimap <int, int> :: value_type value1;
   multimap <int, int> :: iterator pIter;

   // value_type can be used to pass the correct type
   // explicitly to avoid implicit type conversion
   m1.insert ( multimap <int, int> :: value_type ( 1, 10 ) );

   // Compare another way to insert objects into a hash_multimap
   m1.insert ( cInt2Int ( 2, 20 ) );

   // Initializing key1 and mapped1
   key1 = ( m1.begin( ) -> first );
   mapped1 = ( m1.begin( ) -> second );

   cout << "The key of first element in the multimap is "
        << key1 << "." << endl;

   cout << "The data value of first element in the multimap is "
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

```Output
The key of first element in the multimap is 1.
The data value of first element in the multimap is 10.
The keys of the mapped elements are: 1 2.
The values of the mapped elements are: 10 20.
```

## <a name="see-also"></a>Vedere anche

[Contenitori](../cpp/containers-modern-cpp.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
