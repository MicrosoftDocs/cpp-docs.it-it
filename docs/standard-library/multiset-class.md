---
title: Classe multiset
ms.date: 11/04/2016
f1_keywords:
- set/std::multiset
- set/std::multiset::allocator_type
- set/std::multiset::const_iterator
- set/std::multiset::const_pointer
- set/std::multiset::const_reference
- set/std::multiset::const_reverse_iterator
- set/std::multiset::difference_type
- set/std::multiset::iterator
- set/std::multiset::key_compare
- set/std::multiset::key_type
- set/std::multiset::pointer
- set/std::multiset::reference
- set/std::multiset::reverse_iterator
- set/std::multiset::size_type
- set/std::multiset::value_compare
- set/std::multiset::value_type
- set/std::multiset::begin
- set/std::multiset::cbegin
- set/std::multiset::cend
- set/std::multiset::clear
- set/std::multiset::count
- set/std::multiset::crbegin
- set/std::multiset::crend
- set/std::multiset::emplace
- set/std::multiset::emplace_hint
- set/std::multiset::empty
- set/std::multiset::end
- set/std::multiset::equal_range
- set/std::multiset::erase
- set/std::multiset::find
- set/std::multiset::get_allocator
- set/std::multiset::insert
- set/std::multiset::key_comp
- set/std::multiset::lower_bound
- set/std::multiset::max_size
- set/std::multiset::rbegin
- set/std::multiset::rend
- set/std::multiset::size
- set/std::multiset::swap
- set/std::multiset::upper_bound
- set/std::multiset::value_comp
helpviewer_keywords:
- std::multiset [C++]
- std::multiset [C++], allocator_type
- std::multiset [C++], const_iterator
- std::multiset [C++], const_pointer
- std::multiset [C++], const_reference
- std::multiset [C++], const_reverse_iterator
- std::multiset [C++], difference_type
- std::multiset [C++], iterator
- std::multiset [C++], key_compare
- std::multiset [C++], key_type
- std::multiset [C++], pointer
- std::multiset [C++], reference
- std::multiset [C++], reverse_iterator
- std::multiset [C++], size_type
- std::multiset [C++], value_compare
- std::multiset [C++], value_type
- std::multiset [C++], begin
- std::multiset [C++], cbegin
- std::multiset [C++], cend
- std::multiset [C++], clear
- std::multiset [C++], count
- std::multiset [C++], crbegin
- std::multiset [C++], crend
- std::multiset [C++], emplace
- std::multiset [C++], emplace_hint
- std::multiset [C++], empty
- std::multiset [C++], end
- std::multiset [C++], equal_range
- std::multiset [C++], erase
- std::multiset [C++], find
- std::multiset [C++], get_allocator
- std::multiset [C++], insert
- std::multiset [C++], key_comp
- std::multiset [C++], lower_bound
- std::multiset [C++], max_size
- std::multiset [C++], rbegin
- std::multiset [C++], rend
- std::multiset [C++], size
- std::multiset [C++], swap
- std::multiset [C++], upper_bound
- std::multiset [C++], value_comp
ms.assetid: 630e8c10-0ce9-4ad9-8d79-9e91a600713f
ms.openlocfilehash: f33dd9343cc2acbaa7f43c060267c6d206da2fc3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50466872"
---
# <a name="multiset-class"></a>Classe multiset

La classe multiset della libreria standard C++ viene usata per l'archiviazione e il recupero dei dati da una raccolta in cui i valori degli elementi contenuti non devono essere univoci e vengono usati come valori delle chiavi in base ai quali i dati sono ordinati automaticamente. Non è possibile modificare direttamente il valore della chiave di un elemento di un multiset. È invece necessario eliminare i valori precedenti e inserire gli elementi che presentano nuovi valori.

## <a name="syntax"></a>Sintassi

```cpp
template <class Key, class Compare =less <Key>, class Allocator =allocator <Key>>
class multiset
```

### <a name="parameters"></a>Parametri

*Key*<br/>
Tipo di dati degli elementi da archiviare nel multiset.

*Compare*<br/>
Tipo che fornisce un oggetto funzione in grado di confrontare i valori di due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel multiset. Il predicato binario **less**\<Key> rappresenta il valore predefinito.

In C++ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo. Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers).

*Allocatore*<br/>
Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione del multiset e alla deallocazione della memoria. Il valore predefinito è `allocator<Key>`.

## <a name="remarks"></a>Note

La classe multiset della libreria standard C++ è:

- Un contenitore associativo, che è un contenitore di dimensioni variabili che supporta il recupero efficiente dei valori degli elementi in base a un valore della chiave associata.

- Reversibile, in quanto fornisce iteratori bidirezionali per accedere ai relativi elementi.

- Ordinato, poiché i relativi elementi sono ordinati in base ai valori delle chiavi all'interno del contenitore conformemente a una funzione di confronto specificata.

- Multiplo, in quanto i relativi elementi non devono necessariamente avere chiavi univoche, in modo tale che a un valore di una chiave possano essere associati i valori di più elementi.

- Un contenitore associativo semplice, in quanto i valori dei relativi elementi corrispondono ai valori delle chiavi.

- Una classe modello, poiché la funzionalità che fornisce è generica e completamente indipendente dal tipo specifico di dati contenuti come elementi. I tipi di dati da utilizzare sono invece specificati come parametro nel modello di classe insieme alla funzione di confronto e all'allocatore.

Un iteratore fornito dalla classe multiset è un iteratore bidirezionale, ma le funzioni membro [insert](#insert) e [multiset](#multiset) della classe hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali. I diversi concetti di iteratore formano una famiglia correlata dai perfezionamenti delle relative funzionalità. Ogni concetto di iteratore dispone di un set di requisiti e gli algoritmi utilizzati con tali concetti devono limitare le proprie ipotesi ai requisiti forniti da tale tipo di iteratore. Si può presupporre che un iteratore di input possa essere dereferenziato per fare riferimento a un determinato oggetto e possa essere incrementato all'iteratore successivo nella sequenza. Si tratta di un set di funzionalità minimo, ma è sufficiente per poter descrivere chiaramente un intervallo di iteratori [ `First`, `Last`) nel contesto delle funzioni membro della classe.

La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione. I contenitori associativi sono ottimizzati per le operazioni di ricerca, inserimento e rimozione. Le funzioni membro che supportano in modo esplicito queste operazioni sono efficienti, eseguendo tali operazioni in un lasso di tempo mediamente proporzionale al logaritmo del numero di elementi presenti nel contenitore. L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.

Il multiset deve essere il contenitore associativo da preferire quando le condizioni che consentono di associare i valori alle relative chiavi vengono soddisfatte dall'applicazione. Un multiset può contenere più elementi che possono essere utilizzati come chiavi di ordinamento, pertanto le chiavi non sono univoche. Un modello relativo a questo tipo di struttura è ad esempio un elenco ordinato di parole in cui tali parole possono essere presenti più volte. Se non sono consentite più occorrenze delle parole, la struttura di contenitore appropriata è rappresentata da un set. Se le definizioni univoche sono state allegate come valori all'elenco di parole chiave univoche, una mappa rappresenta una struttura appropriata per contenere questi dati. Se invece le definizioni non sono univoche, è opportuno scegliere come contenitore un multimap.

Il multiset Ordina la sequenza da esso controllata chiamando un oggetto funzione archiviato di tipo *confrontare*. Questo oggetto archiviato è una funzione di confronto a cui è possibile accedere chiamando la funzione membro [key_comp](#key_comp). In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti (ovvero che uno non è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard. Un predicato binario *f*( *x*, *y*) è un oggetto funzione che dispone di due oggetti argomento *x* e *y* e di un valore restituito **true** o **false**. Un ordinamento imposto a un set è un ordinamento di tipo "strict weak" se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti x e y vengono definiti equivalenti quando sia *f*( *x,y*) che *f*( *y,x*) sono false. Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale, in quanto tutti gli elementi vengono ordinati l'uno rispetto all'altro e le chiavi accoppiate saranno indistinguibili l'una dall'altra.

In C++ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo. Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers).

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[multiset](#multiset)|Costruisce un `multiset` vuoto o che rappresenta una copia totale o parziale di un `multiset` specificato.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|typedef per la classe `allocator` dell'oggetto `multiset`.|
|[const_iterator](#const_iterator)|Typedef per un iteratore bidirezionale in grado di leggere un **const** elemento il `multiset`.|
|[const_pointer](#const_pointer)|Typedef per un puntatore a un **const** elemento in un `multiset`.|
|[const_reference](#const_reference)|Typedef per un riferimento a un **const** elemento archiviato in un `multiset` per la lettura e l'esecuzione **const** operazioni.|
|[const_reverse_iterator](#const_reverse_iterator)|Typedef per un iteratore bidirezionale in grado di leggere qualsiasi **const** elemento il `multiset`.|
|[difference_type](#difference_type)|typedef Signed Integer per il numero di elementi di un `multiset` in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|
|[iterator](#iterator)|typedef per un iteratore bidirezionale in grado di leggere o di modificare qualsiasi elemento di un `multiset`.|
|[key_compare](#key_compare)|typedef per un oggetto funzione in grado di confrontare due chiavi per determinare l'ordine relativo di due elementi nel `multiset`.|
|[key_type](#key_type)|typedef per un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel `multiset`.|
|[pointer](#pointer)|typedef per un puntatore a un elemento di un `multiset`.|
|[reference](#reference)|typedef per un riferimento a un elemento archiviato in un `multiset`.|
|[reverse_iterator](#reverse_iterator)|typedef per un iteratore bidirezionale in grado di leggere o di modificare un elemento di un `multiset` invertito.|
|[size_type](#size_type)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `multiset`.|
|[value_compare](#value_compare)|typedef per un oggetto funzione in grado di confrontare due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel `multiset`.|
|[value_type](#value_type)|typedef che descrive un oggetto archiviato come elemento di un `multiset` in virtù della sua funzione di valore.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[begin](#begin)|Restituisce un iteratore che punta al primo elemento del `multiset`.|
|[cbegin](#cbegin)|Restituisce un iteratore const che punta al primo elemento del `multiset`.|
|[cend](#cend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un `multiset`.|
|[clear](#clear)|Cancella tutti gli elementi di un `multiset`.|
|[count](#count)|Restituisce il numero di elementi di un `multiset` la cui chiave corrisponde alla chiave specificata come parametro.|
|[crbegin](#crbegin)|Restituisce un iteratore const che punta al primo elemento di un set invertito.|
|[crend](#crend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set invertito.|
|[emplace](#emplace)|Inserisce un elemento costruito sul posto in un `multiset`.|
|[emplace_hint](#emplace_hint)|Inserisce un elemento costruito sul posto in un `multiset`, con un suggerimento sulla posizione.|
|[empty](#empty)|Verifica se un `multiset` è vuoto.|
|[end](#end)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `multiset`.|
|[equal_range](#equal_range)|Restituisce una coppia di iteratori. Il primo iteratore della coppia fa riferimento al primo elemento di un `multiset` con una chiave maggiore di una chiave specificata. Il secondo iteratore della coppia fa riferimento al primo elemento del `multiset` con una chiave uguale o maggiore della chiave specificata.|
|[erase](#erase)|Rimuove un elemento o un intervallo di elementi di un `multiset` dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.|
|[find](#find)|Restituisce un iteratore che punta alla prima posizione di un elemento di un `multiset` con una chiave uguale a una chiave specificata.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il `multiset`.|
|[insert](#insert)|Inserisce un elemento o un intervallo di elementi in un `multiset`.|
|[key_comp](#key_comp)|Fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel `multiset`.|
|[lower_bound](#lower_bound)|Restituisce un iteratore al primo elemento di un `multiset` con una chiave uguale o maggiore di una chiave specificata.|
|[max_size](#max_size)|Restituisce la lunghezza massima del `multiset`.|
|[rbegin](#rbegin)|Restituisce un iteratore che punta al primo elemento di un `multiset` invertito.|
|[rend](#rend)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `multiset` invertito.|
|[size](#size)|Restituisce il numero di elementi di un `multiset`.|
|[swap](#swap)|Scambia gli elementi di due `multiset`.|
|[upper_bound](#upper_bound)|Restituisce un iteratore al primo elemento di un `multiset` con una chiave maggiore di una chiave specificata.|
|[value_comp](#value_comp)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare i valori degli elementi di un `multiset`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator=](#op_eq)|Sostituisce gli elementi di un `multiset` con una copia di un altro `multiset`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<set>

**Spazio dei nomi:** std

## <a name="allocator_type"></a>  multiset::allocator_type

Tipo che rappresenta la classe allocator per l'oggetto multiset.

```cpp
typedef Allocator allocator_type;
```

### <a name="remarks"></a>Note

`allocator_type` è un sinonimo per il parametro di modello `Allocator`.

Per altre informazioni su `Allocator`, vedere la sezione Note dell'argomento [Classe multiset](../standard-library/multiset-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get_allocator](#get_allocator) per indicazioni su come usare `allocator_type`.

## <a name="begin"></a>  multiset::begin

Restituisce un iteratore che punta al primo elemento dell'oggetto multiset.

```cpp
const_iterator begin() const;

iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta al primo elemento dell'oggetto multiset o alla posizione successiva a un oggetto multiset vuoto.

### <a name="example"></a>Esempio

```cpp
// multiset_begin.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1;
   multiset <int>::iterator ms1_Iter;
   multiset <int>::const_iterator ms1_cIter;

   ms1.insert( 1 );
   ms1.insert( 2 );
   ms1.insert( 3 );

   ms1_Iter = ms1.begin( );
   cout << "The first element of ms1 is " << *ms1_Iter << endl;

   ms1_Iter = ms1.begin( );
   ms1.erase( ms1_Iter );

   // The following 2 lines would err as the iterator is const
   // ms1_cIter = ms1.begin( );
   // ms1.erase( ms1_cIter );

   ms1_cIter = ms1.begin( );
   cout << "The first element of ms1 is now " << *ms1_cIter << endl;
}
```

```Output
The first element of ms1 is 1
The first element of ms1 is now 2
```

## <a name="cbegin"></a>  multiset::cbegin

Restituisce un **const** iteratore che punta al primo elemento nell'intervallo.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto **const** iteratore di accesso bidirezionale che punta al primo elemento dell'intervallo o alla posizione appena oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()`).

### <a name="remarks"></a>Note

Con il valore restituito di `cbegin`, gli elementi dell'intervallo non possono essere modificati.

È possibile usare questa funzione membro anziché la funzione membro `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, prendere in considerazione `Container` sia un modificabili (non - **const**) contenitore di qualsiasi tipo che supporta `begin()` e `cbegin()`.

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator
```

## <a name="cend"></a>  multiset::cend

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

## <a name="clear"></a>  multiset::clear

Cancella tutti gli elementi di un oggetto multiset.

```cpp
void clear();
```

### <a name="example"></a>Esempio

```cpp
// multiset_clear.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1;

   ms1.insert( 1 );
   ms1.insert( 2 );

   cout << "The size of the multiset is initially "
        << ms1.size( ) << "." << endl;

   ms1.clear( );
   cout << "The size of the multiset after clearing is "
        << ms1.size( ) << "." << endl;
}
```

```Output
The size of the multiset is initially 2.
The size of the multiset after clearing is 0.
```

## <a name="const_iterator"></a>  multiset::const_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento **const** dell'oggetto multiset.

```cpp
typedef implementation-defined const_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_iterator` non può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [begin](#begin) per indicazioni su come usare `const_iterator`.

## <a name="const_pointer"></a>  multiset::const_pointer

Tipo che fornisce un puntatore a un elemento **const** di un oggetto multiset.

```cpp
typedef typename allocator_type::const_pointer const_pointer;
```

### <a name="remarks"></a>Note

Un tipo `const_pointer` non può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto multiset.

## <a name="const_reference"></a>  multiset::const_reference

Tipo che fornisce un riferimento a un elemento **const** archiviato in un oggetto multiset per la lettura e l'esecuzione di operazioni **const**.

```cpp
typedef typename allocator_type::const_reference const_reference;
```

### <a name="example"></a>Esempio

```cpp
// multiset_const_ref.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1;

   ms1.insert( 10 );
   ms1.insert( 20 );

   // Declare and initialize a const_reference &Ref1
   // to the 1st element
   const int &Ref1 = *ms1.begin( );

   cout << "The first element in the multiset is "
        << Ref1 << "." << endl;

   // The following line would cause an error because the
   // const_reference cannot be used to modify the multiset
   // Ref1 = Ref1 + 5;
}
```

```Output
The first element in the multiset is 10.
```

## <a name="const_reverse_iterator"></a>  multiset::const_reverse_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi elemento **const** dell'oggetto multiset.

```cpp
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene usato per eseguire l'iterazione sull'oggetto multiset in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rend](#rend) per indicazioni su come dichiarare e usare `const_reverse_iterator`.

## <a name="count"></a>  multiset::count

Restituisce il numero di elementi di un multiset la cui chiave corrisponde a una chiave specificata dal parametro.

```cpp
size_type count(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
La chiave degli elementi per cui trovare un corrispondenza nel multiset.

### <a name="return-value"></a>Valore restituito

Il numero di elementi nel multiset la cui chiave di ordinamento corrisponde alla chiave del parametro.

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di elementi *x* nell'intervallo

[ `lower_bound` (_ *Key* ), `upper_bound` (\_ *Key* ) ).

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro multiset::count.

```cpp
// multiset_count.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main()
{
    using namespace std;
    multiset<int> ms1;
    multiset<int>::size_type i;

    ms1.insert(1);
    ms1.insert(1);
    ms1.insert(2);

    // Elements do not need to be unique in multiset,
    // so duplicates are allowed and counted.
    i = ms1.count(1);
    cout << "The number of elements in ms1 with a sort key of 1 is: "
         << i << "." << endl;

    i = ms1.count(2);
    cout << "The number of elements in ms1 with a sort key of 2 is: "
         << i << "." << endl;

    i = ms1.count(3);
    cout << "The number of elements in ms1 with a sort key of 3 is: "
         << i << "." << endl;
}
```

```Output
The number of elements in ms1 with a sort key of 1 is: 2.
The number of elements in ms1 with a sort key of 2 is: 1.
The number of elements in ms1 with a sort key of 3 is: 0.
```

## <a name="crbegin"></a>  multiset::crbegin

Restituisce un iteratore const che punta al primo elemento di un multiset invertito.

```cpp
const_reverse_iterator crbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta al primo elemento in un multiset invertito o che punta a quello che era stato l'ultimo elemento nel multiset non invertito.

### <a name="remarks"></a>Note

`crbegin` viene usato con un oggetto multiset invertito proprio come begin viene usato con un oggetto multiset.

Con il valore restituito di `crbegin`, l'oggetto multiset non può essere modificato.

`crbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto multiset.

### <a name="example"></a>Esempio

```cpp
// multiset_crbegin.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1;
   multiset <int>::const_reverse_iterator ms1_crIter;

   ms1.insert( 10 );
   ms1.insert( 20 );
   ms1.insert( 30 );

   ms1_crIter = ms1.crbegin( );
   cout << "The first element in the reversed multiset is "
        << *ms1_crIter << "." << endl;
}
```

```Output
The first element in the reversed multiset is 30.
```

## <a name="crend"></a>  multiset::crend

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un oggetto multiset invertito.

```cpp
const_reverse_iterator crend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta alla posizione successiva all'ultimo elemento di un oggetto multiset invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto multiset non invertito.

### <a name="remarks"></a>Note

`crend` viene usato con un oggetto multiset invertito proprio come [end](#end) viene usato con un oggetto multiset.

Con il valore restituito di `crend`, l'oggetto multiset non può essere modificato.

`crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo oggetto multiset.

Non è consigliabile dereferenziare il valore restituito da `crend`.

### <a name="example"></a>Esempio

```cpp
// multiset_crend.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main() {
   using namespace std;
   multiset <int> ms1;
   multiset <int>::const_reverse_iterator ms1_crIter;

   ms1.insert( 10 );
   ms1.insert( 20 );
   ms1.insert( 30 );

   ms1_crIter = ms1.crend( ) ;
   ms1_crIter--;
   cout << "The last element in the reversed multiset is "
        << *ms1_crIter << "." << endl;
}
```

## <a name="difference_type"></a>  multiset::difference_type

Tipo Signed Integer che può essere usato per rappresentare il numero di elementi di un oggetto multiset in un intervallo compreso tra gli elementi a cui puntano gli iteratori.

```cpp
typedef typename allocator_type::difference_type difference_type;
```

### <a name="remarks"></a>Note

`difference_type` è il tipo restituito quando si sottrae o si incrementa tramite gli iteratori del contenitore. `difference_type` viene in genere usato per rappresentare il numero di elementi nell'intervallo [ `first`, `last`) tra gli iteratori `first` e `last`, includendo l'elemento a cui punta `first` e l'intervallo di elementi fino all'elemento a cui punta `last`, escluso tale elemento.

Si noti che, sebbene `difference_type` sia disponibile per tutti gli iteratori che soddisfano i requisiti di un iteratore di input, inclusa la classe degli iteratori bidirezionali supportati da contenitori reversibili come set, la sottrazione tra gli iteratori è supportata solo da iteratori ad accesso casuale forniti da un contenitore ad accesso casuale, ad esempio vector.

### <a name="example"></a>Esempio

```cpp
// multiset_diff_type.cpp
// compile with: /EHsc
#include <iostream>
#include <set>
#include <algorithm>

int main( )
{
   using namespace std;

   multiset <int> ms1;
   multiset <int>::iterator ms1_Iter, ms1_bIter, ms1_eIter;

   ms1.insert( 20 );
   ms1.insert( 10 );
   ms1.insert( 20 );

   ms1_bIter = ms1.begin( );
   ms1_eIter = ms1.end( );

   multiset <int>::difference_type   df_typ5, df_typ10, df_typ20;

   df_typ5 = count( ms1_bIter, ms1_eIter, 5 );
   df_typ10 = count( ms1_bIter, ms1_eIter, 10 );
   df_typ20 = count( ms1_bIter, ms1_eIter, 20 );

   // The keys, and hence the elements, of a multiset are not unique
   cout << "The number '5' occurs " << df_typ5
        << " times in multiset ms1.\n";
   cout << "The number '10' occurs " << df_typ10
        << " times in multiset ms1.\n";
   cout << "The number '20' occurs " << df_typ20
        << " times in multiset ms1.\n";

   // Count the number of elements in a multiset
   multiset <int>::difference_type  df_count = 0;
   ms1_Iter = ms1.begin( );
   while ( ms1_Iter != ms1_eIter)
   {
      df_count++;
      ms1_Iter++;
   }

   cout << "The number of elements in the multiset ms1 is: "
        << df_count << "." << endl;
}
```

```Output
The number '5' occurs 0 times in multiset ms1.
The number '10' occurs 1 times in multiset ms1.
The number '20' occurs 2 times in multiset ms1.
The number of elements in the multiset ms1 is: 3.
```

## <a name="emplace"></a>  multiset::emplace

Inserisce un elemento costruito in locale (senza che vengano eseguite operazioni di copia o di spostamento), con un suggerimento sulla posizione.

```cpp
template <class... Args>
iterator emplace(Args&&... args);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*args*|Argomenti inoltrati per costruire un elemento da inserire nell'oggetto multiset.|

### <a name="return-value"></a>Valore restituito

Iteratore all'elemento appena inserito.

### <a name="remarks"></a>Note

Questa funzione non invalida alcun riferimento a elementi del contenitore, ma potrebbe invalidare tutti gli iteratori per il contenitore.

Se viene generata un'eccezione durante l'inserimento, lo stato del contenitore non viene modificato.

### <a name="example"></a>Esempio

```cpp
// multiset_emplace.cpp
// compile with: /EHsc
#include <set>
#include <string>
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
    multiset<string> s1;

    s1.emplace("Anna");
    s1.emplace("Bob");
    s1.emplace("Carmine");

    cout << "multiset modified, now contains ";
    print(s1);
    cout << endl;

    s1.emplace("Bob");

    cout << "multiset modified, now contains ";
    print(s1);
    cout << endl;
}

```

## <a name="emplace_hint"></a>  multiset::emplace_hint

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
|*args*|Argomenti inoltrati per costruire un elemento da inserire nell'oggetto multiset.|
|*where*|Posizione in cui iniziare a cercare il punto di inserimento corretto. (Se tale punto è immediatamente seguito *in cui*, inserimento può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.)|

### <a name="return-value"></a>Valore restituito

Iteratore all'elemento appena inserito.

### <a name="remarks"></a>Note

Questa funzione non invalida alcun riferimento a elementi del contenitore, ma potrebbe invalidare tutti gli iteratori per il contenitore.

Se viene generata un'eccezione durante l'inserimento, lo stato del contenitore non viene modificato.

Per un esempio di codice, vedere [set::emplace_hint](../standard-library/set-class.md#emplace_hint).

## <a name="empty"></a>  multiset::empty

Verifica se un oggetto multiset è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto multiset è vuoto; in caso contrario, **false**.

### <a name="example"></a>Esempio

```cpp
// multiset_empty.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1, ms2;
   ms1.insert ( 1 );

   if ( ms1.empty( ) )
      cout << "The multiset ms1 is empty." << endl;
   else
      cout << "The multiset ms1 is not empty." << endl;

   if ( ms2.empty( ) )
      cout << "The multiset ms2 is empty." << endl;
   else
      cout << "The multiset ms2 is not empty." << endl;
}
```

```Output
The multiset ms1 is not empty.
The multiset ms2 is empty.
```

## <a name="end"></a>  multiset::end

Restituisce l'iteratore successivo all'ultimo valore.

```cpp
const_iterator end() const;

iterator end();
```

### <a name="return-value"></a>Valore restituito

Iteratore successivo all'ultimo valore. Se il multiset è vuoto, verrà restituito `multiset::end() == multiset::begin()`.

### <a name="remarks"></a>Note

**end** viene usato per verificare se un iteratore ha superato la fine del relativo oggetto multiset.

Non è consigliabile dereferenziare il valore restituito da **end**.

Per un esempio di codice, vedere [multiset::find](#find).

## <a name="equal_range"></a>  multiset::equal_range

Restituisce una coppia di iteratori rispettivamente al primo elemento di un oggetto multiset con una chiave maggiore di una chiave specificata e al primo elemento dell'oggetto multiset con una chiave uguale o maggiore di tale chiave.

```cpp
pair <const_iterator, const_iterator> equal_range (const Key& key) const;

pair <iterator, iterator> equal_range (const Key& key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto multiset in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Coppia di iteratori in cui il primo è l'elemento [lower_bound](#lower_bound) e il secondo è l'elemento [upper_bound](#upper_bound) della chiave.

Per accedere al primo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **first** e per dereferenziare l'iteratore del limite inferiore, usare \*( `pr`. **first**). Per accedere al secondo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **second** e per dereferenziare l'iteratore del limite superiore, usare \*( `pr`. **second**).

### <a name="example"></a>Esempio

```cpp
// multiset_equal_range.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   typedef multiset<int, less<int> > IntSet;
   IntSet ms1;
   multiset <int> :: const_iterator ms1_RcIter;

   ms1.insert( 10 );
   ms1.insert( 20 );
   ms1.insert( 30 );

   pair <IntSet::const_iterator, IntSet::const_iterator> p1, p2;
   p1 = ms1.equal_range( 20 );

   cout << "The upper bound of the element with "
        << "a key of 20 in the multiset ms1 is: "
        << *( p1.second ) << "." << endl;

   cout << "The lower bound of the element with "
        << "a key of 20 in the multiset ms1 is: "
        << *( p1.first ) << "." << endl;

   // Compare the upper_bound called directly
   ms1_RcIter = ms1.upper_bound( 20 );
   cout << "A direct call of upper_bound( 20 ) gives "
        << *ms1_RcIter << "," << endl
        << "matching the 2nd element of the pair"
        << " returned by equal_range( 20 )." << endl;

   p2 = ms1.equal_range( 40 );

   // If no match is found for the key,
   // both elements of the pair return end( )
   if ( ( p2.first == ms1.end( ) ) && ( p2.second == ms1.end( ) ) )
      cout << "The multiset ms1 doesn't have an element "
              << "with a key less than 40." << endl;
   else
      cout << "The element of multiset ms1 with a key >= 40 is: "
                << *( p1.first ) << "." << endl;
}
```

```Output
The upper bound of the element with a key of 20 in the multiset ms1 is: 30.
The lower bound of the element with a key of 20 in the multiset ms1 is: 20.
A direct call of upper_bound( 20 ) gives 30,
matching the 2nd element of the pair returned by equal_range( 20 ).
The multiset ms1 doesn't have an element with a key less than 40.
```

## <a name="erase"></a>  multiset::erase

Rimuove un elemento o un intervallo di elementi di un oggetto multiset dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.

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

Per le prime due funzioni membro, iteratore bidirezionale che definisce il primo elemento rimanente oltre gli eventuali elementi rimossi o elemento che rappresenta la fine dell'oggetto multiset se tali elementi non sono presenti.

Per la terza funzione membro, restituisce il numero di elementi rimossi dall'oggetto multiset.

### <a name="remarks"></a>Note

Per un esempio di codice, vedere [set::erase](../standard-library/set-class.md#erase).

## <a name="find"></a>  multiset::find

Restituisce un iteratore che fa riferimento alla posizione di un elemento in un multiset che contiene una chiave equivalente a una chiave specificata.

```cpp
iterator find(const Key& key);

const_iterator find(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore chiave per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nel multiset in cui eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Iteratore che fa riferimento alla posizione di un elemento con una chiave specificata o alla posizione successiva all'ultimo elemento dell'oggetto multiset (`multiset::end()`) se non viene trovata alcuna corrispondenza per la chiave.

### <a name="remarks"></a>Note

La funzione membro restituisce un iteratore che fa riferimento a un elemento del multiset la cui chiave è equivalente all'argomento *chiave* in un predicato binario che causa un ordinamento basato su una relazione di comparabilità minore di.

Se il valore restituito di `find` viene assegnato a un `const_iterator`, l'oggetto multiset non può essere modificato. Se il valore restituito di `find` viene assegnato a un `iterator`, l'oggetto multiset può essere modificato.

### <a name="example"></a>Esempio

```cpp
// compile with: /EHsc /W4 /MTd
#include <set>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T> void print_elem(const T& t) {
    cout << "(" << t << ") ";
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
    multiset<int> s1({ 40, 45 });
    cout << "The starting multiset s1 is: " << endl;
    print_collection(s1);

    vector<int> v;
    v.push_back(43);
    v.push_back(41);
    v.push_back(46);
    v.push_back(42);
    v.push_back(44);
    v.push_back(44); // attempt a duplicate

    cout << "Inserting the following vector data into s1: " << endl;
    print_collection(v);

    s1.insert(v.begin(), v.end());

    cout << "The modified multiset s1 is: " << endl;
    print_collection(s1);
    cout << endl;
    findit(s1, 45);
    findit(s1, 6);
}
```

## <a name="get_allocator"></a>  multiset::get_allocator

Restituisce una copia dell'oggetto allocatore usato per costruire l'oggetto multiset.

```cpp
allocator_type get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Allocatore usato dall'oggetto multiset.

### <a name="remarks"></a>Note

Gli allocatori per la classe multiset specificano il modo in cui la classe gestisce la memoria. Gli allocatori predefiniti acclusi alle classi contenitore della libreria standard C++ sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.

### <a name="example"></a>Esempio

```cpp
// multiset_get_allocator.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int>::allocator_type ms1_Alloc;
   multiset <int>::allocator_type ms2_Alloc;
   multiset <double>::allocator_type ms3_Alloc;
   multiset <int>::allocator_type ms4_Alloc;

   // The following lines declare objects
   // that use the default allocator.
   multiset <int> ms1;
   multiset <int, allocator<int> > ms2;
   multiset <double, allocator<double> > ms3;

   cout << "The number of integers that can be allocated"
        << endl << "before free memory is exhausted: "
        << ms2.max_size( ) << "." << endl;

   cout << "The number of doubles that can be allocated"
        << endl << "before free memory is exhausted: "
        << ms3.max_size( ) <<  "." << endl;

   // The following lines create a multiset ms4
   // with the allocator of multiset ms1
   ms1_Alloc = ms1.get_allocator( );
   multiset <int> ms4( less<int>( ), ms1_Alloc );
   ms4_Alloc = ms4.get_allocator( );

   // Two allocators are interchangeable if
   // storage allocated from each can be
   // deallocated with the other
   if( ms1_Alloc == ms4_Alloc )
   {
      cout << "Allocators are interchangeable."
           << endl;
   }
   else
   {
      cout << "Allocators are not interchangeable."
           << endl;
   }
}
```

## <a name="insert"></a>  multiset::insert

Inserisce un elemento o un intervallo di elementi in un multiset.

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
|*Val*|Valore di un elemento da inserire nel multiset.|
|*Where*|Posizione in cui iniziare a cercare il punto di inserimento corretto. (Se tale punto è immediatamente seguito *in cui*, inserimento può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.)|
|*ValTy*|Parametro di modello che specifica il tipo di argomento che è possibile usare l'oggetto multiset per costruire un elemento di [value_type](../standard-library/map-class.md#value_type)e perfetto *Val* come argomento.|
|*Primo*|Posizione del primo elemento da copiare.|
|*ultimo*|Posizione immediatamente dopo l'ultimo elemento da copiare.|
|*InputIterator*|Argomento della funzione modello che soddisfa i requisiti di un [iteratore di input](../standard-library/input-iterator-tag-struct.md) che punta agli elementi di un tipo utilizzabili per costruire oggetti [value_type](../standard-library/map-class.md#value_type).|
|*IList*|Oggetto [initializer_list](../standard-library/initializer-list.md) da cui copiare gli elementi.|

### <a name="return-value"></a>Valore restituito

Le funzioni membro di inserimento a elemento singolo, (1) e (2), restituiscono un iteratore alla posizione in cui il nuovo elemento è stato inserito nel multiset.

Le funzioni membro a elemento singolo con suggerimento, (3) e (4), restituiscono un iteratore che punta alla posizione in cui il nuovo elemento è stato inserito nel multiset.

### <a name="remarks"></a>Note

Questa funzione non invalida alcun puntatore o riferimento, ma potrebbe invalidare tutti gli iteratori per il contenitore.

Se viene generata un'eccezione durante l'inserimento di un solo elemento, ma l'eccezione non si manifesta nella funzione hash del contenitore, lo stato del contenitore non verrà modificato. Se viene generata un'eccezione durante l'inserimento di più elementi, il contenitore viene lasciato in uno stato non specificato ma comunque valido.

L'oggetto [value_type](../standard-library/map-class.md#value_type) di un contenitore è un typedef appartenente al contenitore e, per set, `multiset<V>::value_type` è di tipo `const V`.

La funzione membro di intervallo (5) inserisce la sequenza di valori di elemento in un multiset che corrisponde a ogni elemento interessato da un iteratore nell'intervallo `[First, Last)`. Non viene quindi inserito `Last`. La funzione membro di contenitore `end()` fa riferimento alla posizione immediatamente dopo l'ultimo elemento nel contenitore. L'istruzione `s.insert(v.begin(), v.end());`, ad esempio, cerca di inserire tutti gli elementi di `v` in `s`.

La funzione membro dell'elenco di inizializzatori (6) usa un oggetto [initializer_list](../standard-library/initializer-list.md) per copiare gli elementi nell'oggetto multiset.

Per l'inserimento di un elemento costruito sul posto, ovvero senza operazioni di copia o spostamento, vedere [multiset::emplace](#emplace) e [multiset::emplace_hint](#emplace_hint).

### <a name="example"></a>Esempio

```cpp
// multiset_insert.cpp
// compile with: /EHsc
#include <set>
#include <iostream>
#include <string>
#include <vector>

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

    // insert single values
    multiset<int> s1;
    // call insert(const value_type&) version
    s1.insert({ 1, 10 });
    // call insert(ValTy&&) version
    s1.insert(20);

    cout << "The original multiset values of s1 are:" << endl;
    print(s1);

    // intentionally attempt a duplicate, single element
    s1.insert(1);
    cout << "The modified multiset values of s1 are:" << endl;
    print(s1);
    cout << endl;

    // single element, with hint
    s1.insert(s1.end(), 30);
    cout << "The modified multiset values of s1 are:" << endl;
    print(s1);
    cout << endl;

    // The templatized version inserting a jumbled range
    multiset<int> s2;
    vector<int> v;
    v.push_back(43);
    v.push_back(294);
    v.push_back(41);
    v.push_back(330);
    v.push_back(42);
    v.push_back(45);

    cout << "Inserting the following vector data into s2:" << endl;
    print(v);

    s2.insert(v.begin(), v.end());

    cout << "The modified multiset values of s2 are:" << endl;
    print(s2);
    cout << endl;

    // The templatized versions move-constructing elements
    multiset<string>  s3;
    string str1("blue"), str2("green");

    // single element
    s3.insert(move(str1));
    cout << "After the first move insertion, s3 contains:" << endl;
    print(s3);

    // single element with hint
    s3.insert(s3.end(), move(str2));
    cout << "After the second move insertion, s3 contains:" << endl;
    print(s3);
    cout << endl;

    multiset<int> s4;
    // Insert the elements from an initializer_list
    s4.insert({ 4, 44, 2, 22, 3, 33, 1, 11, 5, 55 });
    cout << "After initializer_list insertion, s4 contains:" << endl;
    print(s4);
    cout << endl;
}

```

## <a name="iterator"></a>  multiset::iterator

Tipo che fornisce un [iteratore bidirezionale](../standard-library/bidirectional-iterator-tag-struct.md) costante in grado di leggere qualsiasi elemento in un oggetto multiset.

```cpp
typedef implementation-defined iterator;
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo [begin](#begin) per un esempio di come dichiarare e usare un `iterator`.

## <a name="key_comp"></a>  multiset::key_comp

Recupera una copia dell'oggetto di confronto usato per ordinare le chiavi di un oggetto multiset.

```cpp
key_compare key_comp() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto funzione che viene usato da un oggetto multiset per ordinare gli elementi, corrispondente al parametro di modello `Compare`.

Per altre informazioni su `Compare`, vedere la sezione Note dell'argomento [Classe multiset](../standard-library/multiset-class.md).

### <a name="remarks"></a>Note

L'oggetto archiviato definisce la funzione membro:

**bool operator**( **const Key&** *x*, **const Key&** *y*);

che restituisce true se *x* precede rigorosamente *y* nell'ordinamento.

Si noti che [key_compare](#key_compare) e [value_compare](#value_compare) sono sinonimi per il parametro di modello `Compare`. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

### <a name="example"></a>Esempio

```cpp
// multiset_key_comp.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;

   multiset <int, less<int> > ms1;
   multiset <int, less<int> >::key_compare kc1 = ms1.key_comp( ) ;
   bool result1 = kc1( 2, 3 ) ;
   if( result1 == true )
   {
      cout << "kc1( 2,3 ) returns value of true, "
           << "where kc1 is the function object of s1."
           << endl;
   }
   else
   {
      cout << "kc1( 2,3 ) returns value of false "
           << "where kc1 is the function object of ms1."
           << endl;
   }

   multiset <int, greater<int> > ms2;
   multiset <int, greater<int> >::key_compare kc2 = ms2.key_comp( ) ;
   bool result2 = kc2( 2, 3 ) ;
   if( result2 == true )
   {
      cout << "kc2( 2,3 ) returns value of true, "
           << "where kc2 is the function object of ms2."
           << endl;
   }
   else
   {
      cout << "kc2( 2,3 ) returns value of false, "
           << "where kc2 is the function object of ms2."
           << endl;
   }
}
```

```Output
kc1( 2,3 ) returns value of true, where kc1 is the function object of s1.
kc2( 2,3 ) returns value of false, where kc2 is the function object of ms2.
```

## <a name="key_compare"></a>  multiset::key_compare

Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nell'oggetto multiset.

```cpp
typedef Compare key_compare;
```

### <a name="remarks"></a>Note

`key_compare` è un sinonimo per il parametro di modello `Compare`.

Per altre informazioni su `Compare`, vedere la sezione Note dell'argomento [Classe multiset](../standard-library/multiset-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [key_comp](#key_comp) per indicazioni su come dichiarare e usare `key_compare`.

## <a name="key_type"></a>  multiset::key_type

Tipo che fornisce un oggetto funzione in grado di confrontare le chiavi di ordinamento per determinare l'ordine relativo di due elementi nell'oggetto multiset.

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Note

`key_type` è un sinonimo per il parametro di modello `Key`.

Per altre informazioni su `Key`, vedere la sezione Note dell'argomento [Classe multiset](../standard-library/multiset-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_type](#value_type) per indicazioni su come dichiarare e usare `key_type`.

## <a name="lower_bound"></a>  multiset::lower_bound

Restituisce un iteratore al primo elemento di un oggetto multiset con una chiave uguale o maggiore di una chiave specificata.

```cpp
const_iterator lower_bound(const Key& key) const;

iterator lower_bound(const Key& key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto multiset in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Un' `iterator` o `const_iterator` che punta alla posizione di un elemento in un multiset che con una chiave uguale o maggiore della chiave dell'argomento, o che punta alla posizione successiva all'ultimo elemento dell'oggetto multiset se non corrispondano viene trovata per la chiave.

### <a name="example"></a>Esempio

```cpp
// multiset_lower_bound.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1;
   multiset <int> :: const_iterator ms1_AcIter, ms1_RcIter;

   ms1.insert( 10 );
   ms1.insert( 20 );
   ms1.insert( 30 );

   ms1_RcIter = ms1.lower_bound( 20 );
   cout << "The element of multiset ms1 with a key of 20 is: "
        << *ms1_RcIter << "." << endl;

   ms1_RcIter = ms1.lower_bound( 40 );

   // If no match is found for the key, end( ) is returned
   if ( ms1_RcIter == ms1.end( ) )
      cout << "The multiset ms1 doesn't have an element "
           << "with a key of 40." << endl;
   else
      cout << "The element of multiset ms1 with a key of 40 is: "
           << *ms1_RcIter << "." << endl;

   // The element at a specific location in the multiset can be
   // found using a derefenced iterator addressing the location
   ms1_AcIter = ms1.end( );
   ms1_AcIter--;
   ms1_RcIter = ms1.lower_bound( *ms1_AcIter );
   cout << "The element of ms1 with a key matching "
        << "that of the last element is: "
        << *ms1_RcIter << "." << endl;
}
```

```Output
The element of multiset ms1 with a key of 20 is: 20.
The multiset ms1 doesn't have an element with a key of 40.
The element of ms1 with a key matching that of the last element is: 30.
```

## <a name="max_size"></a>  multiset::max_size

Restituisce la lunghezza massima dell'oggetto multiset.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Massima lunghezza possibile dell'oggetto multiset.

### <a name="example"></a>Esempio

```cpp
// multiset_max_size.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1;
   multiset <int>::size_type i;

   i = ms1.max_size( );
   cout << "The maximum possible length "
        << "of the multiset is " << i << "." << endl;
}
```

## <a name="multiset"></a>  multiset::multiset

Costruisce un oggetto multiset vuoto o che rappresenta una copia totale o parziale di un altro oggetto multiset.

```cpp
multiset();

explicit multiset (
    const Compare& Comp);

multiset (
    const Compare& Comp,
    const Allocator& Al);

multiset(
    const multiset& Right);

multiset(
    multiset&& Right);

multiset(
    initializer_list<Type> IList);

multiset(
    initializer_list<Type> IList,
    const Compare& Comp);

multiset(
    initializer_list<Type> IList,
    const Compare& Comp,
    const Allocator& Al);

template <class InputIterator>
multiset (
    InputIterator First,
    InputIterator Last);

template <class InputIterator>
multiset (
    InputIterator First,
    InputIterator Last,
    const Compare& Comp);

template <class InputIterator>
multiset (
    InputIterator First,
    InputIterator Last,
    const Compare& Comp,
    const Allocator& Al);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*Al*|Classe dell'allocatore di memoria da usare per l'oggetto multiset. Per impostazione predefinita è `Allocator`.|
|*Comp*|Funzione di confronto di tipo `const Compare` usata per ordinare gli elementi nell'oggetto multiset. Per impostazione predefinita è `Compare`.|
|*A destra*|Oggetto multiset di cui il multiset costruito deve essere una copia.|
|*Primo*|Posizione del primo elemento nell'intervallo di elementi da copiare.|
|*ultimo*|Posizione del primo elemento oltre l'intervallo di elementi da copiare.|
|*IList*|initializer_list da cui copiare gli elementi.|

### <a name="remarks"></a>Note

Tutti i costruttori archiviano un tipo di oggetto allocatore che gestisce la memoria per l'oggetto multiset e che può essere restituito in un secondo momento chiamando [get_allocator](#get_allocator). Il parametro allocator viene spesso omesso nelle dichiarazioni di classe e vengono usate macro di pre-elaborazione per introdurre allocatori alternativi.

Tutti i costruttori inizializzano il relativo oggetto multiset.

Tutti i costruttori archiviano un oggetto funzione di tipo Compare che viene usato per stabilire un ordine tra le chiavi dell'oggetto multiset e che può essere restituito in un secondo momento chiamando [key_comp](#key_comp).

I primi tre costruttori specificano un multiset iniziale vuoto, il secondo specifica il tipo di funzione di confronto (*Comp*) per essere usato per stabilire in modo esplicito l'ordine degli elementi e il terzo specifica il tipo di allocatore (*Al*) da utilizzare. La parola chiave **explicit** elimina alcuni tipi di conversione automatica del tipo.

Il quarto costruttore specifica una copia dell'oggetto multiset *destra*.

Il quinto costruttore specifica una copia dell'oggetto multiset spostando *destra*.

Il sesto, il settimo e l'ottavo costruttore specificano un oggetto initializer_list da cui copiare gli elementi.

I tre costruttori successivi copiano l'intervallo `[First, Last)` di un oggetto multiset con un grado di esplicitazione crescente nello specificare il tipo di funzione di confronto e il tipo di allocatore.

### <a name="example"></a>Esempio

```cpp
// multiset_ctor.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main()
{
    using namespace std;
    //multiset <int>::iterator ms1_Iter, ms2_Iter, ms3_Iter;
    multiset <int>::iterator ms4_Iter, ms5_Iter, ms6_Iter, ms7_Iter;

    // Create an empty multiset ms0 of key type integer
    multiset <int> ms0;

    // Create an empty multiset ms1 with the key comparison
    // function of less than, then insert 4 elements
    multiset <int, less<int> > ms1;
    ms1.insert(10);
    ms1.insert(20);
    ms1.insert(20);
    ms1.insert(40);

    // Create an empty multiset ms2 with the key comparison
    // function of geater than, then insert 2 elements
    multiset <int, less<int> > ms2;
    ms2.insert(10);
    ms2.insert(20);

    // Create a multiset ms3 with the
    // allocator of multiset ms1
    multiset <int>::allocator_type ms1_Alloc;
    ms1_Alloc = ms1.get_allocator();
    multiset <int> ms3(less<int>(), ms1_Alloc);
    ms3.insert(30);

    // Create a copy, multiset ms4, of multiset ms1
    multiset <int> ms4(ms1);

    // Create a multiset ms5 by copying the range ms1[ first,  last)
    multiset <int>::const_iterator ms1_bcIter, ms1_ecIter;
    ms1_bcIter = ms1.begin();
    ms1_ecIter = ms1.begin();
    ms1_ecIter++;
    ms1_ecIter++;
    multiset <int> ms5(ms1_bcIter, ms1_ecIter);

    // Create a multiset ms6 by copying the range ms4[ first,  last)
    // and with the allocator of multiset ms2
    multiset <int>::allocator_type ms2_Alloc;
    ms2_Alloc = ms2.get_allocator();
    multiset <int> ms6(ms4.begin(), ++ms4.begin(), less<int>(), ms2_Alloc);

    cout << "ms1 =";
    for (auto i : ms1)
        cout << " " << i;
    cout << endl;

    cout << "ms2 =";
    for (auto i : ms2)
        cout << " " << i;
   cout << endl;

   cout << "ms3 =";
   for (auto i : ms3)
       cout << " " << i;
    cout << endl;

    cout << "ms4 =";
    for (auto i : ms4)
        cout << " " << i;
    cout << endl;

    cout << "ms5 =";
    for (auto i : ms5)
        cout << " " << i;
    cout << endl;

    cout << "ms6 =";
    for (auto i : ms6)
        cout << " " << i;
    cout << endl;

    // Create a multiset by moving ms5
    multiset<int> ms7(move(ms5));
    cout << "ms7 =";
    for (auto i : ms7)
        cout << " " << i;
    cout << endl;

    // Create a multiset with an initializer_list
    multiset<int> ms8({1, 2, 3, 4});
    cout << "ms8=";
    for (auto i : ms8)
        cout << " " << i;
    cout << endl;
}
```

## <a name="op_eq"></a>  multiset::operator=

Sostituisce gli elementi di questo oggetto `multiset` usando gli elementi di un altro oggetto `multiset`.

```cpp
multiset& operator=(const multiset& right);

multiset& operator=(multiset&& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*right*|Oggetto `multiset` da cui gli elementi vengono copiati o spostati.|

### <a name="remarks"></a>Note

`operator=` copia o Sposta gli elementi *a destra* in questo `multiset`, a seconda del tipo di riferimento (lvalue o rvalue) usato. Gli elementi presenti in questo oggetto `multiset` prima dell'esecuzione di `operator=` vengono eliminati.

### <a name="example"></a>Esempio

```cpp
// multiset_operator_as.cpp
// compile with: /EHsc
#include <multiset>
#include <iostream>

int main( )
   {
   using namespace std;
   multiset<int> v1, v2, v3;
   multiset<int>::iterator iter;

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

## <a name="pointer"></a>  multiset::pointer

Tipo che fornisce un puntatore a un elemento di un oggetto multiset.

```cpp
typedef typename allocator_type::pointer pointer;
```

### <a name="remarks"></a>Note

Un tipo **pointer** può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto multiset.

## <a name="rbegin"></a>  multiset::rbegin

Restituisce un iteratore che punta al primo elemento di un multiset invertito.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta al primo elemento in un multiset invertito o che punta a quello che era stato l'ultimo elemento nel multiset non invertito.

### <a name="remarks"></a>Note

`rbegin` viene usato con un oggetto multiset invertito proprio come rbegin viene usato con un oggetto multiset.

Se il valore restituito di `rbegin` viene assegnato a un `const_reverse_iterator`, l'oggetto multiset non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a un `reverse_iterator`, l'oggetto multiset può essere modificato.

`rbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto multiset.

### <a name="example"></a>Esempio

```cpp
// multiset_rbegin.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1;
   multiset <int>::iterator ms1_Iter;
   multiset <int>::reverse_iterator ms1_rIter;

   ms1.insert( 10 );
   ms1.insert( 20 );
   ms1.insert( 30 );

   ms1_rIter = ms1.rbegin( );
   cout << "The first element in the reversed multiset is "
        << *ms1_rIter << "." << endl;

   // begin can be used to start an interation
   // throught a multiset in a forward order
   cout << "The multiset is:";
   for ( ms1_Iter = ms1.begin( ) ; ms1_Iter != ms1.end( ); ms1_Iter++ )
      cout << " " << *ms1_Iter;
   cout << endl;

   // rbegin can be used to start an interation
   // throught a multiset in a reverse order
   cout << "The reversed multiset is:";
   for ( ms1_rIter = ms1.rbegin( ) ; ms1_rIter != ms1.rend( ); ms1_rIter++ )
      cout << " " << *ms1_rIter;
   cout << endl;

   // A multiset element can be erased by dereferencing to its key
   ms1_rIter = ms1.rbegin( );
   ms1.erase ( *ms1_rIter );

   ms1_rIter = ms1.rbegin( );
   cout << "After the erasure, the first element "
        << "in the reversed multiset is "<< *ms1_rIter << "."
        << endl;
}
```

```Output
The first element in the reversed multiset is 30.
The multiset is: 10 20 30
The reversed multiset is: 30 20 10
After the erasure, the first element in the reversed multiset is 20.
```

## <a name="reference"></a>  multiset::reference

Tipo che fornisce un riferimento a un elemento archiviato in un oggetto multiset.

```cpp
typedef typename allocator_type::reference reference;
```

### <a name="example"></a>Esempio

```cpp
// multiset_ref.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1;

   ms1.insert( 10 );
   ms1.insert( 20 );

   // Declare and initialize a reference &Ref1 to the 1st element
   const int &Ref1 = *ms1.begin( );

   cout << "The first element in the multiset is "
        << Ref1 << "." << endl;
}
```

```Output
The first element in the multiset is 10.
```

## <a name="rend"></a>  multiset::rend

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un oggetto multiset invertito.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta alla posizione successiva all'ultimo elemento di un oggetto multiset invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto multiset non invertito.

### <a name="remarks"></a>Note

`rend` viene usato con un oggetto multiset invertito proprio come [end](#end) viene usato con un oggetto multiset.

Se il valore restituito di `rend` viene assegnato a un `const_reverse_iterator`, l'oggetto multiset non può essere modificato. Se il valore restituito di `rend` viene assegnato a un `reverse_iterator`, l'oggetto multiset può essere modificato.

`rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo oggetto multiset.

Non è consigliabile dereferenziare il valore restituito da `rend`.

### <a name="example"></a>Esempio

```cpp
// multiset_rend.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main() {
   using namespace std;
   multiset <int> ms1;
   multiset <int>::iterator ms1_Iter;
   multiset <int>::reverse_iterator ms1_rIter;
   multiset <int>::const_reverse_iterator ms1_crIter;

   ms1.insert( 10 );
   ms1.insert( 20 );
   ms1.insert( 30 );

   ms1_rIter = ms1.rend( ) ;
   ms1_rIter--;
   cout << "The last element in the reversed multiset is "
        << *ms1_rIter << "." << endl;

   // end can be used to terminate an interation
   // throught a multiset in a forward order
   cout << "The multiset is: ";
   for ( ms1_Iter = ms1.begin( ) ; ms1_Iter != ms1.end( ); ms1_Iter++ )
      cout << *ms1_Iter << " ";
   cout << "." << endl;

   // rend can be used to terminate an interation
   // throught a multiset in a reverse order
   cout << "The reversed multiset is: ";
   for ( ms1_rIter = ms1.rbegin( ) ; ms1_rIter != ms1.rend( ); ms1_rIter++ )
      cout << *ms1_rIter << " ";
   cout << "." << endl;

   ms1_rIter = ms1.rend( );
   ms1_rIter--;
   ms1.erase ( *ms1_rIter );

   ms1_rIter = ms1.rend( );
   --ms1_rIter;
   cout << "After the erasure, the last element in the "
        << "reversed multiset is " << *ms1_rIter << "." << endl;
}
```

## <a name="reverse_iterator"></a>  multiset::reverse_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un oggetto multiset invertito.

```cpp
typedef std::reverse_iterator<iterator> reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `reverse_iterator` viene usato per eseguire l'iterazione sull'oggetto multiset in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rbegin](#rbegin) per indicazioni su come dichiarare e usare `reverse_iterator`.

## <a name="size"></a>  multiset::size

Restituisce il numero di elementi nell'oggetto multiset.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza corrente dell'oggetto multiset.

### <a name="example"></a>Esempio

```cpp
// multiset_size.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1;
   multiset <int> :: size_type i;

   ms1.insert( 1 );
   i = ms1.size( );
   cout << "The multiset length is " << i << "." << endl;

   ms1.insert( 2 );
   i = ms1.size( );
   cout << "The multiset length is now " << i << "." << endl;
}
```

```Output
The multiset length is 1.
The multiset length is now 2.
```

## <a name="size_type"></a>  multiset::size_type

Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un oggetto multiset.

```cpp
typedef typename allocator_type::size_type size_type;
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [size](#size) per indicazioni su come dichiarare e usare `size_type`.

## <a name="swap"></a>  multiset::swap

Scambia gli elementi di due oggetti multiset.

```cpp
void swap(
    multiset<Key, Compare, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Argomento di tipo multiset che fornisce gli elementi da scambiare con l'oggetto multiset di destinazione.

### <a name="remarks"></a>Note

La funzione membro non invalida riferimenti, puntatori o iteratori che designano gli elementi dei due oggetti multiset di cui vengono scambiati gli elementi.

### <a name="example"></a>Esempio

```cpp
// multiset_swap.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1, ms2, ms3;
   multiset <int>::iterator ms1_Iter;

   ms1.insert( 10 );
   ms1.insert( 20 );
   ms1.insert( 30 );
   ms2.insert( 100 );
   ms2.insert( 200 );
   ms3.insert( 300 );

   cout << "The original multiset ms1 is:";
   for ( ms1_Iter = ms1.begin( ); ms1_Iter != ms1.end( ); ms1_Iter++ )
      cout << " " << *ms1_Iter;
   cout << "." << endl;

   // This is the member function version of swap
   ms1.swap( ms2 );

   cout << "After swapping with ms2, list ms1 is:";
   for ( ms1_Iter = ms1.begin( ); ms1_Iter != ms1.end( ); ms1_Iter++ )
      cout << " " << *ms1_Iter;
   cout << "." << endl;

   // This is the specialized template version of swap
   swap( ms1, ms3 );

   cout << "After swapping with ms3, list ms1 is:";
   for ( ms1_Iter = ms1.begin( ); ms1_Iter != ms1.end( ); ms1_Iter++ )
      cout << " " << *ms1_Iter;
   cout   << "." << endl;
}
```

```Output
The original multiset ms1 is: 10 20 30.
After swapping with ms2, list ms1 is: 100 200.
After swapping with ms3, list ms1 is: 300.
```

## <a name="upper_bound"></a>  multiset::upper_bound

Restituisce un iteratore al primo elemento di un oggetto multiset con una chiave maggiore di una chiave specificata.

```cpp
const_iterator upper_bound(const Key& key) const;

iterator upper_bound(const Key& key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto multiset in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Tipo **iterator** o `const_iterator` che punta alla posizione di un elemento di un oggetto multiset con una chiave maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento dell'oggetto multiset se non viene trovata alcuna corrispondenza per la chiave.

### <a name="example"></a>Esempio

```cpp
// multiset_upper_bound.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1;
   multiset <int> :: const_iterator ms1_AcIter, ms1_RcIter;

   ms1.insert( 10 );
   ms1.insert( 20 );
   ms1.insert( 30 );

   ms1_RcIter = ms1.upper_bound( 20 );
   cout << "The first element of multiset ms1 with a key greater "
           << "than 20 is: " << *ms1_RcIter << "." << endl;

   ms1_RcIter = ms1.upper_bound( 30 );

   // If no match is found for the key, end( ) is returned
   if ( ms1_RcIter == ms1.end( ) )
      cout << "The multiset ms1 doesn't have an element "
              << "with a key greater than 30." << endl;
   else
      cout << "The element of multiset ms1 with a key > 40 is: "
           << *ms1_RcIter << "." << endl;

   // The element at a specific location in the multiset can be
   // found using a dereferenced iterator addressing the location
   ms1_AcIter = ms1.begin( );
   ms1_RcIter = ms1.upper_bound( *ms1_AcIter );
   cout << "The first element of ms1 with a key greater than"
        << endl << "that of the initial element of ms1 is: "
        << *ms1_RcIter << "." << endl;
}
```

```Output
The first element of multiset ms1 with a key greater than 20 is: 30.
The multiset ms1 doesn't have an element with a key greater than 30.
The first element of ms1 with a key greater than
that of the initial element of ms1 is: 20.
```

## <a name="value_comp"></a>  multiset::value_comp

Recupera una copia dell'oggetto di confronto usato per ordinare i valori degli elementi di un oggetto multiset.

```cpp
value_compare value_comp() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto funzione che viene usato da un oggetto multiset per ordinare gli elementi, corrispondente al parametro di modello `Compare`.

Per altre informazioni su `Compare`, vedere la sezione Note dell'argomento [Classe multiset](../standard-library/multiset-class.md).

### <a name="remarks"></a>Note

L'oggetto archiviato definisce la funzione membro:

**bool operator**( **const Key&**`_xVal`, **const Key&**`_yVal`);

che restituisce true se `_xVal` precede e non è uguale a `_yVal` nell'ordinamento.

Si noti che [key_compare](#key_compare) e [value_compare](#value_compare) sono sinonimi per il parametro di modello `Compare`. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

### <a name="example"></a>Esempio

```cpp
// multiset_value_comp.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;

   multiset <int, less<int> > ms1;
   multiset <int, less<int> >::value_compare vc1 = ms1.value_comp( );
   bool result1 = vc1( 2, 3 );
   if( result1 == true )
   {
      cout << "vc1( 2,3 ) returns value of true, "
           << "where vc1 is the function object of ms1."
           << endl;
   }
   else
   {
      cout << "vc1( 2,3 ) returns value of false, "
           << "where vc1 is the function object of ms1."
           << endl;
   }

   set <int, greater<int> > ms2;
   set<int, greater<int> >::value_compare vc2 = ms2.value_comp( );
   bool result2 = vc2( 2, 3 );
   if( result2 == true )
   {
      cout << "vc2( 2,3 ) returns value of true, "
           << "where vc2 is the function object of ms2."
           << endl;
   }
   else
   {
      cout << "vc2( 2,3 ) returns value of false, "
           << "where vc2 is the function object of ms2."
           << endl;
   }
}
```

```Output
vc1( 2,3 ) returns value of true, where vc1 is the function object of ms1.
vc2( 2,3 ) returns value of false, where vc2 is the function object of ms2.
```

## <a name="value_compare"></a>  multiset::value_compare

Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinarne l'ordine relativo nell'oggetto multiset.

```cpp
typedef key_compare value_compare;
```

### <a name="remarks"></a>Note

`value_compare` è un sinonimo per il parametro di modello `Compare`.

Si noti che entrambe [key_compare](#key_compare) e `value_compare` sono sinonimi per il parametro di modello `Compare`. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

Per altre informazioni su `Compare`, vedere la sezione Note dell'argomento [Classe multiset](../standard-library/multiset-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_comp](#value_comp) per indicazioni su come dichiarare e usare `value_compare`.

## <a name="value_type"></a>  multiset::value_type

Tipo che descrive un oggetto archiviato come elemento di un oggetto multiset in qualità di valore.

```cpp
typedef Key value_type;
```

### <a name="remarks"></a>Note

`value_type` è un sinonimo per il parametro di modello `Key`.

Si noti che entrambe [key_type](#key_type) e `value_type` sono sinonimi per il parametro di modello `Key`. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

Per altre informazioni su `Key`, vedere la sezione Note dell'argomento.

### <a name="example"></a>Esempio

```cpp
// multiset_value_type.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   multiset <int> ms1;
   multiset <int>::iterator ms1_Iter;

   multiset <int> :: value_type svt_Int;   // Declare value_type
   svt_Int = 10;             // Initialize value_type

   multiset <int> :: key_type skt_Int;   // Declare key_type
   skt_Int = 20;             // Initialize key_type

   ms1.insert( svt_Int );         // Insert value into s1
   ms1.insert( skt_Int );         // Insert key into s1

   // A multiset accepts key_types or value_types as elements
   cout << "The multiset has elements:";
   for ( ms1_Iter = ms1.begin( ) ; ms1_Iter != ms1.end( ); ms1_Iter++ )
      cout << " " << *ms1_Iter;
   cout << "." << endl;
}
```

```Output
The multiset has elements: 10 20.
```

## <a name="see-also"></a>Vedere anche

[Contenitori](../cpp/containers-modern-cpp.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
