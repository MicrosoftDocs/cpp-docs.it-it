---
title: Classe set
ms.date: 11/04/2016
f1_keywords:
- set/std::set
- set/std::set::allocator_type
- set/std::set::const_iterator
- set/std::set::const_pointer
- set/std::set::const_reference
- set/std::set::const_reverse_iterator
- set/std::set::difference_type
- set/std::set::iterator
- set/std::set::key_compare
- set/std::set::key_type
- set/std::set::pointer
- set/std::set::reference
- set/std::set::reverse_iterator
- set/std::set::size_type
- set/std::set::value_compare
- set/std::set::value_type
- set/std::set::begin
- set/std::set::cbegin
- set/std::set::cend
- set/std::set::clear
- set/std::set::count
- set/std::set::crbegin
- set/std::set::crend
- set/std::set::emplace
- set/std::set::emplace_hint
- set/std::set::empty
- set/std::set::end
- set/std::set::equal_range
- set/std::set::erase
- set/std::set::find
- set/std::set::get_allocator
- set/std::set::insert
- set/std::set::key_comp
- set/std::set::lower_bound
- set/std::set::max_size
- set/std::set::rbegin
- set/std::set::rend
- set/std::set::size
- set/std::set::swap
- set/std::set::upper_bound
- set/std::set::value_comp
helpviewer_keywords:
- std::set [C++]
- std::set [C++], allocator_type
- std::set [C++], const_iterator
- std::set [C++], const_pointer
- std::set [C++], const_reference
- std::set [C++], const_reverse_iterator
- std::set [C++], difference_type
- std::set [C++], iterator
- std::set [C++], key_compare
- std::set [C++], key_type
- std::set [C++], pointer
- std::set [C++], reference
- std::set [C++], reverse_iterator
- std::set [C++], size_type
- std::set [C++], value_compare
- std::set [C++], value_type
- std::set [C++], begin
- std::set [C++], cbegin
- std::set [C++], cend
- std::set [C++], clear
- std::set [C++], count
- std::set [C++], crbegin
- std::set [C++], crend
- std::set [C++], emplace
- std::set [C++], emplace_hint
- std::set [C++], empty
- std::set [C++], end
- std::set [C++], equal_range
- std::set [C++], erase
- std::set [C++], find
- std::set [C++], get_allocator
- std::set [C++], insert
- std::set [C++], key_comp
- std::set [C++], lower_bound
- std::set [C++], max_size
- std::set [C++], rbegin
- std::set [C++], rend
- std::set [C++], size
- std::set [C++], swap
- std::set [C++], upper_bound
- std::set [C++], value_comp
ms.assetid: 8991f9aa-5509-4440-adc1-371512d32018
ms.openlocfilehash: 8f4ad77c28b4643a979d7c3fb22e44e4aebd43dd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62295487"
---
# <a name="set-class"></a>Classe set

La classe contenitore set della libreria standard C++ viene usata per l'archiviazione e il recupero dei dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi in base ai quali i dati sono ordinati automaticamente. Non è possibile modificare direttamente il valore di un elemento di un set. È invece necessario eliminare i valori precedenti e inserire gli elementi che presentano nuovi valori.

## <a name="syntax"></a>Sintassi

```cpp
template <class Key,
    class Traits=less<Key>,
    class Allocator=allocator<Key>>
class set
```

### <a name="parameters"></a>Parametri

*Key*<br/>
Tipo di dati degli elementi da archiviare nel set.

*Tratti*<br/>
Tipo che fornisce un oggetto funzione in grado di confrontare i valori di due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel set. Questo argomento è facoltativo e il predicato binario **less** *\<Key>* rappresenta il valore predefinito.

In C++ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo. Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers).

*Allocatore*<br/>
Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione del set e alla deallocazione della memoria. Questo argomento è facoltativo e il valore predefinito è `allocator<Key>`.

## <a name="remarks"></a>Note

La classe set della libreria standard C++ è:

- Un contenitore associativo, che è un contenitore di dimensioni variabili che supporta il recupero efficiente dei valori degli elementi in base al valore di una chiave associata. È inoltre un contenitore associativo semplice, in quanto i valori dei relativi elementi corrispondono ai valori delle chiavi.

- Reversibile, in quanto fornisce un iteratore bidirezionale per accedere ai relativi elementi.

- Ordinato, poiché i relativi elementi sono ordinati in base ai valori delle chiavi all'interno del contenitore conformemente a una funzione di confronto specificata.

- Univoco nel senso che ogni elemento deve disporre di una chiave univoca. Poiché il set è anche un contenitore associativo semplice, anche i relativi elementi sono univoci.

Una set viene anche descritto come classe modello, poiché la funzionalità che fornisce è generica e completamente indipendente dal tipo specifico di dati contenuti come elementi. I tipi di dati da utilizzare sono invece specificati come parametro nel modello di classe insieme alla funzione di confronto e all'allocatore.

La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione. I contenitori associativi sono ottimizzati per le operazioni di ricerca, inserimento e rimozione. Le funzioni membro che supportano in modo esplicito queste operazioni sono efficienti, eseguendo tali operazioni in un lasso di tempo mediamente proporzionale al logaritmo del numero di elementi presenti nel contenitore. L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.

Il set deve essere il contenitore associativo da preferire quando le condizioni che consentono di associare i valori alle relative chiavi vengono soddisfatte dall'applicazione. Gli elementi di un set sono univoci e vengono utilizzati come chiavi di ordinamento degli stessi. Un modello relativo a questo tipo di struttura è ad esempio un elenco ordinato di parole in cui ogni parola deve essere presente una sola volta. Se sono state consentite più occorrenze delle parole, la struttura di contenitore appropriata è il multiset. Se i valori devono essere associati a un elenco di parole chiave univoche, una mappa rappresenta la struttura appropriata per contenere questi dati. Se invece le chiavi non sono univoche, è preferibile scegliere come contenitore un multimap.

L'oggetto set ordina la sequenza che controlla chiamando un oggetto funzione archiviato di tipo [key_compare](#key_compare). Questo oggetto archiviato è una funzione di confronto a cui è possibile accedere chiamando la funzione membro [key_comp](#key_comp). In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti (ovvero che uno non è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard. Un predicato binario *f*( *x,y*) è un oggetto funzione che dispone di due oggetti argomento *x* e *y* e di un valore restituito **true** o **false**. Un ordinamento imposto a un set è un ordinamento di tipo "strict weak" se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti *x* e *y* vengono definiti equivalenti quando sia *f*( *x,y*) che *f*( *y,x*) sono false. Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale, in quanto tutti gli elementi vengono ordinati l'uno rispetto all'altro e le chiavi accoppiate saranno indistinguibili l'una dall'altra.

In C++ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo. Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers).

L'iteratore fornito dalla classe set è un iteratore bidirezionale, ma le funzioni membro [insert](#insert) e [set](#set) della classe hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali. I diversi concetti di iteratore formano una famiglia correlata dai perfezionamenti delle relative funzionalità. Ogni concetto di iteratore dispone di un proprio set di requisiti e gli algoritmi utilizzati con tali concetti devono limitare le proprie ipotesi ai requisiti forniti da tale tipo di iteratore. Si può presupporre che un iteratore di input possa essere dereferenziato per fare riferimento a un determinato oggetto e possa essere incrementato all'iteratore successivo nella sequenza. Si tratta di un set di funzionalità minimo, ma è sufficiente per poter descrivere chiaramente un intervallo di iteratori [ `First`, `Last`) nel contesto delle funzioni membro della classe.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[set](#set)|Costruisce un set vuoto o che rappresenta una copia totale o parziale di un altro set.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Tipo che rappresenta la classe `allocator` per l'oggetto del set.|
|[const_iterator](#const_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento **const** dell'oggetto set.|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore a un elemento **const** di un oggetto set.|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento a un elemento **const** archiviato in un oggetto set per la lettura e l'esecuzione di operazioni **const**.|
|[const_reverse_iterator](#const_reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi elemento **const** dell'oggetto set.|
|[difference_type](#difference_type)|Tipo Signed Integer che può essere utilizzato per rappresentare il numero di elementi di un set in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|
|[iterator](#iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un set.|
|[key_compare](#key_compare)|Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel set.|
|[key_type](#key_type)|Tipo che descrive un oggetto archiviato come elemento di un set in virtù della sua funzione di chiave di ordinamento.|
|[pointer](#pointer)|Tipo che fornisce un puntatore a un elemento di un set.|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento archiviato in un set.|
|[reverse_iterator](#reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un set invertito.|
|[size_type](#size_type)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un set.|
|[value_compare](#value_compare)|Tipo che fornisce un oggetto funzione in grado di confrontare due elementi per determinarne l'ordine relativo nel set.|
|[value_type](#value_type)|Tipo che descrive un oggetto archiviato come elemento di un set in virtù della sua funzione di valore.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[begin](#begin)|Restituisce un iteratore che punta al primo elemento del set.|
|[cbegin](#cbegin)|Restituisce un iteratore const che punta al primo elemento del set.|
|[cend](#cend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set.|
|[clear](#clear)|Cancella tutti gli elementi di un set.|
|[count](#count)|Restituisce il numero di elementi di un set la cui chiave corrisponde a una chiave specificata dal parametro.|
|[crbegin](#rbegin)|Restituisce un iteratore const che punta al primo elemento di un set invertito.|
|[crend](#rend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set invertito.|
|[emplace](#emplace)|Inserisce un elemento costruito sul posto in un set.|
|[emplace_hint](#emplace_hint)|Inserisce un elemento costruito sul posto in un set, con un suggerimento sulla posizione.|
|[empty](#empty)|Verifica se un set è vuoto.|
|[end](#end)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un set.|
|[equal_range](#equal_range)|Restituisce una coppia di iteratori rispettivamente al primo elemento di un set con una chiave maggiore di una chiave specificata e al primo elemento del set con una chiave uguale o maggiore di tale chiave.|
|[erase](#erase)|Rimuove un elemento o un intervallo di elementi in un set dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.|
|[find](#find)|Restituisce un iteratore che punta alla posizione di un elemento in un set che dispone di una chiave equivalente a una chiave specificata.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il set.|
|[insert](#insert)|Inserisce un elemento o un intervallo di elementi in un set.|
|[key_comp](#key_comp)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare le chiavi di un set.|
|[lower_bound](#lower_bound)|Restituisce un iteratore al primo elemento di un set con una chiave uguale o maggiore di una chiave specificata.|
|[max_size](#max_size)|Restituisce la lunghezza massima del set.|
|[rbegin](#rbegin)|Restituisce un iteratore che punta al primo elemento di un set invertito.|
|[rend](#rend)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un set invertito.|
|[size](#size)|Restituisce il numero di elementi nel set.|
|[swap](#swap)|Scambia gli elementi di due set.|
|[upper_bound](#upper_bound)|Restituisce un iteratore al primo elemento di un set con una chiave maggiore di una chiave specificata.|
|[value_comp](#value_comp)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare i valori degli elementi di un set.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator=](#op_eq)|Sostituisce gli elementi di un set con una copia di un altro set.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<set>

**Spazio dei nomi:** std

## <a name="allocator_type"></a>  set::allocator_type

Tipo che rappresenta la classe allocator per l'oggetto set.

```cpp
typedef Allocator allocator_type;
```

### <a name="remarks"></a>Note

`allocator_type` è un sinonimo del parametro di modello [allocatore](../standard-library/set-class.md).

Oggetto funzione che viene usato da un oggetto multiset per ordinare gli elementi, corrispondente al parametro di modello `Allocator`.

Per altre informazioni su `Allocator`, vedere la sezione Note dell'argomento [Classe set](../standard-library/set-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get_allocator](#get_allocator) indicazioni su come usare `allocator_type`.

## <a name="begin"></a>  set::begin

Restituisce un iteratore che punta al primo elemento del set.

```cpp
const_iterator begin() const;

iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta al primo elemento dell'oggetto set o alla posizione successiva a un oggetto set vuoto.

### <a name="remarks"></a>Note

Se il valore restituito di `begin` viene assegnato a un `const_iterator`, gli elementi dell'oggetto set non possono essere modificati. Se il valore restituito di `begin` viene assegnato a un `iterator`, gli elementi dell'oggetto set possono essere modificati.

### <a name="example"></a>Esempio

```cpp
// set_begin.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1;
   set <int>::iterator s1_Iter;
   set <int>::const_iterator s1_cIter;

   s1.insert( 1 );
   s1.insert( 2 );
   s1.insert( 3 );

   s1_Iter = s1.begin( );
   cout << "The first element of s1 is " << *s1_Iter << endl;

   s1_Iter = s1.begin( );
   s1.erase( s1_Iter );

   // The following 2 lines would err because the iterator is const
   // s1_cIter = s1.begin( );
   // s1.erase( s1_cIter );

   s1_cIter = s1.begin( );
   cout << "The first element of s1 is now " << *s1_cIter << endl;
}
```

```Output
The first element of s1 is 1
The first element of s1 is now 2
```

## <a name="cbegin"></a>  set::cbegin

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

## <a name="cend"></a>  set::cend

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

## <a name="clear"></a>  set::clear

Cancella tutti gli elementi di un set.

```cpp
void clear();
```

### <a name="example"></a>Esempio

```cpp
// set_clear.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1;

   s1.insert( 1 );
   s1.insert( 2 );

   cout << "The size of the set is initially " << s1.size( )
        << "." << endl;

   s1.clear( );
   cout << "The size of the set after clearing is "
        << s1.size( ) << "." << endl;
}
```

```Output
The size of the set is initially 2.
The size of the set after clearing is 0.
```

## <a name="const_iterator"></a>  set::const_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento **const** dell'oggetto set.

```cpp
typedef implementation-defined const_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_iterator` non può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [begin](#begin) per indicazioni su come usare `const_iterator`.

## <a name="const_pointer"></a>  set::const_pointer

Tipo che fornisce un puntatore a un elemento **const** di un oggetto set.

```cpp
typedef typename allocator_type::const_pointer const_pointer;
```

### <a name="remarks"></a>Note

Un tipo `const_pointer` non può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un [const_iterator](#const_iterator) per accedere agli elementi di un oggetto const set.

## <a name="const_reference"></a>  set::const_reference

Tipo che fornisce un riferimento a un elemento **const** archiviato in un oggetto set per la lettura e l'esecuzione di operazioni **const**.

```cpp
typedef typename allocator_type::const_reference const_reference;
```

### <a name="example"></a>Esempio

```cpp
// set_const_ref.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1;

   s1.insert( 10 );
   s1.insert( 20 );

   // Declare and initialize a const_reference &Ref1
   // to the 1st element
   const int &Ref1 = *s1.begin( );

   cout << "The first element in the set is "
        << Ref1 << "." << endl;

   // The following line would cause an error because the
   // const_reference cannot be used to modify the set
   // Ref1 = Ref1 + 5;
}
```

```Output
The first element in the set is 10.
```

## <a name="const_reverse_iterator"></a>  set::const_reverse_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi elemento **const** dell'oggetto set.

```cpp
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene usato per eseguire l'iterazione sull'oggetto set in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rend](#rend) per indicazioni su come dichiarare e usare `const_reverse_iterator`.

## <a name="count"></a>  set::count

Restituisce il numero di elementi di un set la cui chiave corrisponde a una chiave specificata dal parametro.

```cpp
size_type count(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
La chiave degli elementi per cui trovare un corrispondenza nel set.

### <a name="return-value"></a>Valore restituito

1 se il set contiene un elemento la cui chiave di ordinamento corrisponde alla chiave del parametro. 0 se il set non contiene un elemento con una chiave corrispondente.

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di elementi nell'intervallo seguente:

\[ lower_bound (*key*), upper_bound (*chiave*)).

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro set::count.

```cpp
// set_count.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main()
{
    using namespace std;
    set<int> s1;
    set<int>::size_type i;

    s1.insert(1);
    s1.insert(1);

    // Keys must be unique in set, so duplicates are ignored
    i = s1.count(1);
    cout << "The number of elements in s1 with a sort key of 1 is: "
         << i << "." << endl;

    i = s1.count(2);
    cout << "The number of elements in s1 with a sort key of 2 is: "
         << i << "." << endl;
}
```

```Output
The number of elements in s1 with a sort key of 1 is: 1.
The number of elements in s1 with a sort key of 2 is: 0.
```

## <a name="crbegin"></a>  set::crbegin

Restituisce un iteratore const che punta al primo elemento di un set invertito.

```cpp
const_reverse_iterator crbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta al primo elemento di un oggetto set invertito o a quello che è stato l'ultimo elemento dell'oggetto set non invertito.

### <a name="remarks"></a>Note

`crbegin` viene usato con un oggetto set invertito proprio come [begin](#begin) viene usato con un oggetto set.

Con il valore restituito di `crbegin`, l'oggetto set non può essere modificato.

### <a name="example"></a>Esempio

```cpp
// set_crbegin.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1;
   set <int>::const_reverse_iterator s1_crIter;

   s1.insert( 10 );
   s1.insert( 20 );
   s1.insert( 30 );

   s1_crIter = s1.crbegin( );
   cout << "The first element in the reversed set is "
        << *s1_crIter << "." << endl;
}
```

```Output
The first element in the reversed set is 30.
```

## <a name="crend"></a>  set::crend

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set invertito.

```cpp
const_reverse_iterator crend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta alla posizione successiva all'ultimo elemento di un oggetto set invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto set non invertito.

### <a name="remarks"></a>Note

`crend` viene usato con un oggetto set invertito proprio come [end](#end) viene usato con un oggetto set.

Con il valore restituito di `crend`, l'oggetto set non può essere modificato. Non è consigliabile dereferenziare il valore restituito da `crend`.

`crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo oggetto set.

### <a name="example"></a>Esempio

```cpp
// set_crend.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main() {
   using namespace std;
   set <int> s1;
   set <int>::const_reverse_iterator s1_crIter;

   s1.insert( 10 );
   s1.insert( 20 );
   s1.insert( 30 );

   s1_crIter = s1.crend( );
   s1_crIter--;
   cout << "The last element in the reversed set is "
        << *s1_crIter << "." << endl;
}
```

## <a name="difference_type"></a>  set::difference_type

Tipo Signed Integer che può essere utilizzato per rappresentare il numero di elementi di un set in un intervallo compreso tra gli elementi a cui puntano gli iteratori.

```cpp
typedef typename allocator_type::difference_type difference_type;
```

### <a name="remarks"></a>Note

`difference_type` è il tipo restituito quando si sottrae o si incrementa tramite gli iteratori del contenitore. `difference_type` viene in genere usato per rappresentare il numero di elementi nell'intervallo *[ first,  last)* tra gli iteratori `first` e `last`, includendo l'elemento a cui punta `first` e l'intervallo di elementi fino all'elemento a cui punta `last`, escluso tale elemento.

Si noti che, sebbene `difference_type` sia disponibile per tutti gli iteratori che soddisfano i requisiti di un iteratore di input, inclusa la classe degli iteratori bidirezionali supportati da contenitori reversibili come set, la sottrazione tra gli iteratori è supportata solo da iteratori ad accesso casuale forniti da un contenitore ad accesso casuale, ad esempio vector.

### <a name="example"></a>Esempio

```cpp
// set_diff_type.cpp
// compile with: /EHsc
#include <iostream>
#include <set>
#include <algorithm>

int main( )
{
   using namespace std;

   set <int> s1;
   set <int>::iterator s1_Iter, s1_bIter, s1_eIter;

   s1.insert( 20 );
   s1.insert( 10 );
   s1.insert( 20 );   // won't insert as set elements are unique

   s1_bIter = s1.begin( );
   s1_eIter = s1.end( );

   set <int>::difference_type   df_typ5, df_typ10, df_typ20;

   df_typ5 = count( s1_bIter, s1_eIter, 5 );
   df_typ10 = count( s1_bIter, s1_eIter, 10 );
   df_typ20 = count( s1_bIter, s1_eIter, 20 );

   // the keys, and hence the elements of a set are unique,
   // so there is at most one of a given value
   cout << "The number '5' occurs " << df_typ5
        << " times in set s1.\n";
   cout << "The number '10' occurs " << df_typ10
        << " times in set s1.\n";
   cout << "The number '20' occurs " << df_typ20
        << " times in set s1.\n";

   // count the number of elements in a set
   set <int>::difference_type  df_count = 0;
   s1_Iter = s1.begin( );
   while ( s1_Iter != s1_eIter)
   {
      df_count++;
      s1_Iter++;
   }

   cout << "The number of elements in the set s1 is: "
        << df_count << "." << endl;
}
```

```Output
The number '5' occurs 0 times in set s1.
The number '10' occurs 1 times in set s1.
The number '20' occurs 1 times in set s1.
The number of elements in the set s1 is: 2.
```

## <a name="emplace"></a>  set::emplace

Inserisce un elemento costruito sul posto, senza operazioni di copia o spostamento.

```cpp
template <class... Args>
pair<iterator, bool>
emplace(
    Args&&... args);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*args*|Argomenti inoltrati per costruire un elemento da inserire nell'oggetto set a meno che quest'ultimo non contenga già un elemento il cui valore è ordinato in modo equivalente.|

### <a name="return-value"></a>Valore restituito

Struttura [pair](../standard-library/pair-structure.md) il cui componente bool restituisce true se è stato eseguito un inserimento e false se l'oggetto map contiene già un elemento di valore equivalente nell'ordinamento. Il componente iterator del valore restituito pair restituisce l'indirizzo in cui è stato inserito un nuovo elemento (se il componente bool è true) o in cui l'elemento è già disponibile (se il componente bool è false).

### <a name="remarks"></a>Note

Questa funzione non invalida alcun iteratore né riferimento.

Se viene generata un'eccezione durante l'inserimento, lo stato del contenitore non viene modificato.

### <a name="example"></a>Esempio

```cpp
// set_emplace.cpp
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
    set<string> s1;

    auto ret = s1.emplace("ten");

    if (!ret.second){
        cout << "Emplace failed, element with value \"ten\" already exists."
            << endl << "  The existing element is (" << *ret.first << ")"
            << endl;
        cout << "set not modified" << endl;
    }
    else{
        cout << "set modified, now contains ";
        print(s1);
    }
    cout << endl;

    ret = s1.emplace("ten");

    if (!ret.second){
        cout << "Emplace failed, element with value \"ten\" already exists."
            << endl << "  The existing element is (" << *ret.first << ")"
            << endl;
    }
    else{
        cout << "set modified, now contains ";
        print(s1);
    }
    cout << endl;
}
```

## <a name="emplace_hint"></a>  set::emplace_hint

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
|*args*|Argomenti inoltrati per costruire un elemento da inserire nell'oggetto set a meno che quest'ultimo non contenga già tale elemento o, più in generale, un elemento il cui valore è ordinato in modo equivalente.|
|*where*|Posizione in cui iniziare a cercare il punto di inserimento corretto. (Se tale punto è immediatamente seguito *in cui*, inserimento può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.)|

### <a name="return-value"></a>Valore restituito

Iteratore all'elemento appena inserito.

Se l'inserimento ha avuto esito negativo perché l'elemento esiste già, restituisce un iteratore all'elemento esistente.

### <a name="remarks"></a>Note

Questa funzione non invalida alcun iteratore né riferimento.

Se viene generata un'eccezione durante l'inserimento, lo stato del contenitore non viene modificato.

### <a name="example"></a>Esempio

```cpp
// set_emplace.cpp
// compile with: /EHsc
#include <set>
#include <string>
#include <iostream>

using namespace std;

template <typename S> void print(const S& s) {
    cout << s.size() << " elements: " << endl;

    for (const auto& p : s) {
        cout << "(" << p <<  ") ";
    }

    cout << endl;
}

int main()
{
    set<string> s1;

    // Emplace some test data
    s1.emplace("Anna");
    s1.emplace("Bob");
    s1.emplace("Carmine");

    cout << "set starting data: ";
    print(s1);
    cout << endl;

    // Emplace with hint
    // s1.end() should be the "next" element after this emplacement
    s1.emplace_hint(s1.end(), "Doug");

    cout << "set modified, now contains ";
    print(s1);
    cout << endl;
}
```

## <a name="empty"></a>  set::empty

Verifica se un set è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto set è vuoto; in caso contrario, **false**.

### <a name="example"></a>Esempio

```cpp
// set_empty.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1, s2;
   s1.insert ( 1 );

   if ( s1.empty( ) )
      cout << "The set s1 is empty." << endl;
   else
      cout << "The set s1 is not empty." << endl;

   if ( s2.empty( ) )
      cout << "The set s2 is empty." << endl;
   else
      cout << "The set s2 is not empty." << endl;
}
```

```Output
The set s1 is not empty.
The set s2 is empty.
```

## <a name="end"></a>  set::end

Restituisce l'iteratore successivo all'ultimo valore.

```cpp
const_iterator end() const;

iterator end();
```

### <a name="return-value"></a>Valore restituito

Iteratore successivo all'ultimo valore. Se il set è vuoto, verrà restituito `set::end() == set::begin()`.

### <a name="remarks"></a>Note

**end** viene usato per verificare se un iteratore ha superato la fine del relativo oggetto set.

Non è consigliabile dereferenziare il valore restituito da **end**.

Per un esempio di codice, vedere [set::find](#find).

## <a name="equal_range"></a>  set::equal_range

Restituisce una coppia di iteratori rispettivamente al primo elemento di un oggetto set con una chiave maggiore o uguale a una chiave specificata e al primo elemento dell'oggetto set con una chiave maggiore di tale chiave.

```cpp
pair <const_iterator, const_iterator> equal_range (const Key& key) const;

pair <iterator, iterator> equal_range (const Key& key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto set in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Coppia di iteratori in cui il primo è l'elemento [lower_bound](#lower_bound) e il secondo è l'elemento [upper_bound](#upper_bound) della chiave.

Per accedere al primo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **first** e per dereferenziare l'iteratore del limite inferiore, usare \*( `pr`. **first**). Per accedere al secondo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **second** e per dereferenziare l'iteratore del limite superiore, usare \*( `pr`. **second**).

### <a name="example"></a>Esempio

```cpp
// set_equal_range.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   typedef set<int, less< int > > IntSet;
   IntSet s1;
   set <int, less< int > > :: const_iterator s1_RcIter;

   s1.insert( 10 );
   s1.insert( 20 );
   s1.insert( 30 );

   pair <IntSet::const_iterator, IntSet::const_iterator> p1, p2;
   p1 = s1.equal_range( 20 );

   cout << "The upper bound of the element with "
        << "a key of 20 in the set s1 is: "
        << *(p1.second) << "." << endl;

   cout << "The lower bound of the element with "
        << "a key of 20 in the set s1 is: "
        << *(p1.first) << "." << endl;

   // Compare the upper_bound called directly
   s1_RcIter = s1.upper_bound( 20 );
   cout << "A direct call of upper_bound( 20 ) gives "
        << *s1_RcIter << "," << endl
        << "matching the 2nd element of the pair"
        << " returned by equal_range( 20 )." << endl;

   p2 = s1.equal_range( 40 );

   // If no match is found for the key,
   // both elements of the pair return end( )
   if ( ( p2.first == s1.end( ) ) && ( p2.second == s1.end( ) ) )
      cout << "The set s1 doesn't have an element "
           << "with a key less than 40." << endl;
   else
      cout << "The element of set s1 with a key >= 40 is: "
           << *(p1.first) << "." << endl;
}
```

```Output
The upper bound of the element with a key of 20 in the set s1 is: 30.
The lower bound of the element with a key of 20 in the set s1 is: 20.
A direct call of upper_bound( 20 ) gives 30,
matching the 2nd element of the pair returned by equal_range( 20 ).
The set s1 doesn't have an element with a key less than 40.
```

## <a name="erase"></a>  set::erase

Rimuove un elemento o un intervallo di elementi in un set dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.

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

Per le prime due funzioni membro, iteratore bidirezionale che definisce il primo elemento rimanente oltre gli eventuali elementi rimossi o elemento che rappresenta la fine dell'oggetto set se tali elementi non sono presenti.

Per la terza funzione membro, restituisce il numero di elementi rimossi dall'oggetto set.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// set_erase.cpp
// compile with: /EHsc
#include <set>
#include <string>
#include <iostream>
#include <iterator> // next() and prev() helper functions

using namespace std;

using myset = set<string>;

void printset(const myset& s) {
    for (const auto& iter : s) {
        cout << " [" << iter << "]";
    }
    cout << endl << "size() == " << s.size() << endl << endl;
}

int main()
{
    myset s1;

    // Fill in some data to test with, one at a time
    s1.insert("Bob");
    s1.insert("Robert");
    s1.insert("Bert");
    s1.insert("Rob");
    s1.insert("Bobby");

    cout << "Starting data of set s1 is:" << endl;
    printset(s1);
    // The 1st member function removes an element at a given position
    s1.erase(next(s1.begin()));
    cout << "After the 2nd element is deleted, the set s1 is:" << endl;
    printset(s1);

    // Fill in some data to test with, one at a time, using an initializer list
    myset s2{ "meow", "hiss", "purr", "growl", "yowl" };

    cout << "Starting data of set s2 is:" << endl;
    printset(s2);
    // The 2nd member function removes elements
    // in the range [First, Last)
    s2.erase(next(s2.begin()), prev(s2.end()));
    cout << "After the middle elements are deleted, the set s2 is:" << endl;
    printset(s2);

    myset s3;

    // Fill in some data to test with, one at a time, using emplace
    s3.emplace("C");
    s3.emplace("C#");
    s3.emplace("D");
    s3.emplace("D#");
    s3.emplace("E");
    s3.emplace("E#");
    s3.emplace("F");
    s3.emplace("F#");
    s3.emplace("G");
    s3.emplace("G#");
    s3.emplace("A");
    s3.emplace("A#");
    s3.emplace("B");

    cout << "Starting data of set s3 is:" << endl;
    printset(s3);
    // The 3rd member function removes elements with a given Key
    myset::size_type count = s3.erase("E#");
    // The 3rd member function also returns the number of elements removed
    cout << "The number of elements removed from s3 is: " << count << "." << endl;
    cout << "After the element with a key of \"E#\" is deleted, the set s3 is:" << endl;
    printset(s3);
}
```

## <a name="find"></a>  set::find

Restituisce un iteratore che fa riferimento alla posizione di un elemento in un set che contiene una chiave equivalente a una chiave specificata.

```cpp
iterator find(const Key& key);

const_iterator find(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore chiave per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nel set in cui eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Iteratore che fa riferimento alla posizione di un elemento con una chiave specificata o alla posizione successiva all'ultimo elemento del set (`set::end()`) se non viene trovata alcuna corrispondenza per la chiave.

### <a name="remarks"></a>Note

La funzione membro restituisce un iteratore che fa riferimento a un elemento nel set la cui chiave è equivalente all'argomento *chiave* in un predicato binario che causa un ordinamento basato su una relazione di comparabilità minore di.

Se il valore restituito di `find` viene assegnato a un `const_iterator`, l'oggetto set non può essere modificato. Se il valore restituito di `find` viene assegnato a un `iterator`, l'oggetto set può essere modificato

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
    set<int> s1({ 40, 45 });
    cout << "The starting set s1 is: " << endl;
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

    cout << "The modified set s1 is: " << endl;
    print_collection(s1);
    cout << endl;
    findit(s1, 45);
    findit(s1, 6);
}
```

## <a name="get_allocator"></a>  set::get_allocator

Restituisce una copia dell'oggetto allocatore usato per costruire l'oggetto set.

```cpp
allocator_type get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Allocatore usato dall'oggetto set per gestire la memoria, che corrisponde al parametro di modello `Allocator`.

Per altre informazioni su `Allocator`, vedere la sezione Note dell'argomento [Classe set](../standard-library/set-class.md).

### <a name="remarks"></a>Note

Gli allocatori per la classe set specificano il modo in cui la classe gestisce l'archiviazione. Gli allocatori predefiniti forniti con le classi contenitore della libreria standard C++ sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.

### <a name="example"></a>Esempio

```cpp
// set_get_allocator.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int>::allocator_type s1_Alloc;
   set <int>::allocator_type s2_Alloc;
   set <double>::allocator_type s3_Alloc;
   set <int>::allocator_type s4_Alloc;

   // The following lines declare objects
   // that use the default allocator.
   set <int> s1;
   set <int, allocator<int> > s2;
   set <double, allocator<double> > s3;

   s1_Alloc = s1.get_allocator( );
   s2_Alloc = s2.get_allocator( );
   s3_Alloc = s3.get_allocator( );

   cout << "The number of integers that can be allocated"
        << endl << "before free memory is exhausted: "
        << s2.max_size( ) << "." << endl;

   cout << "\nThe number of doubles that can be allocated"
        << endl << "before free memory is exhausted: "
        << s3.max_size( ) <<  "." << endl;

   // The following line creates a set s4
   // with the allocator of multiset s1.
   set <int> s4( less<int>( ), s1_Alloc );

   s4_Alloc = s4.get_allocator( );

   // Two allocators are interchangeable if
   // storage allocated from each can be
   // deallocated by the other
   if( s1_Alloc == s4_Alloc )
   {
      cout << "\nThe allocators are interchangeable."
           << endl;
   }
   else
   {
      cout << "\nThe allocators are not interchangeable."
           << endl;
   }
}
```

## <a name="insert"></a>  set::insert

Inserisce un elemento o un intervallo di elementi in un set.

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
|*Val*|Valore di un elemento da inserire nel set a meno che non vi sia già contenuto un elemento il cui valore è ordinato in modo equivalente.|
|*Where*|Posizione in cui iniziare a cercare il punto di inserimento corretto. (Se tale punto è immediatamente seguito *in cui*, inserimento può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.)|
|*ValTy*|Parametro di modello che specifica il tipo di argomento che il gruppo può utilizzare per costruire un elemento di [value_type](../standard-library/map-class.md#value_type)e perfetto *Val* come argomento.|
|*Primo*|Posizione del primo elemento da copiare.|
|*ultimo*|Posizione immediatamente dopo l'ultimo elemento da copiare.|
|*InputIterator*|Argomento della funzione modello che soddisfa i requisiti di un [iteratore di input](../standard-library/input-iterator-tag-struct.md) che punta agli elementi di un tipo utilizzabili per costruire oggetti [value_type](../standard-library/map-class.md#value_type).|
|*IList*|Oggetto [initializer_list](../standard-library/initializer-list.md) da cui copiare gli elementi.|

### <a name="return-value"></a>Valore restituito

Le funzioni membro a elemento singolo, (1) e (2) restituiscono una [coppia](../standard-library/pair-structure.md) cui **bool** componente è true se è stato eseguito un inserimento e false se il set contiene già un elemento di valore equivalente nel ordinamento. Il componente iteratore della coppia di valore restituito punta all'elemento appena inserito se il **bool** componente è true oppure all'elemento esistente se il **bool** componente è false.

Le funzioni membro a elemento singolo con suggerimento, (3) e (4), restituiscono un iteratore che punta alla posizione in cui il nuovo elemento è stato inserito nel set o all'elemento già esistente, se esiste un elemento con una chiave equivalente.

### <a name="remarks"></a>Note

Non ci sono iteratori, puntatori o riferimenti invalidati da questa funzione.

Se viene generata un'eccezione durante l'inserimento di un solo elemento, ma l'eccezione non si manifesta nella funzione hash del contenitore, lo stato del contenitore non verrà modificato. Se viene generata un'eccezione durante l'inserimento di più elementi, il contenitore viene lasciato in uno stato non specificato ma comunque valido.

Per accedere al componente dell'iteratore di una `pair` `pr` restituita dalle funzioni membro a elemento singolo, usare `pr.first`; per dereferenziare l'iteratore all'interno della coppia restituita, usare `*pr.first` fornendo un elemento. Per l'accesso di **bool** componente, usare `pr.second`. Per un esempio, vedere il codice di esempio più avanti in questo articolo.

L'oggetto [value_type](../standard-library/map-class.md#value_type) di un contenitore è un typedef appartenente al contenitore e, per set, `set<V>::value_type` è di tipo `const V`.

La funzione membro di intervallo (5) inserisce la sequenza di valori di elemento in un set che corrisponde a ogni elemento interessato da un iteratore nell'intervallo `[First, Last)`. Non viene quindi inserito `Last`. La funzione membro di contenitore `end()` fa riferimento alla posizione immediatamente dopo l'ultimo elemento nel contenitore. L'istruzione `s.insert(v.begin(), v.end());`, ad esempio, cerca di inserire tutti gli elementi di `v` in `s`. Solo gli elementi che hanno valori univoci nell'intervallo vengono inseriti; i duplicati vengono ignorati. Per osservare quali elementi vengono rifiutati, usare le versioni con un singolo elemento di `insert`.

La funzione membro dell'elenco di inizializzatori (6) usa un oggetto [initializer_list](../standard-library/initializer-list.md) per copiare gli elementi nell'oggetto set.

Per l'inserimento di un elemento costruito sul posto, ovvero senza operazioni di copia o spostamento, vedere [set::emplace](#emplace) e [set::emplace_hint](#emplace_hint).

### <a name="example"></a>Esempio

```cpp
// set_insert.cpp
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
    set<int> s1;
    // call insert(const value_type&) version
    s1.insert({ 1, 10 });
    // call insert(ValTy&&) version
    s1.insert(20);

    cout << "The original set values of s1 are:" << endl;
    print(s1);

    // intentionally attempt a duplicate, single element
    auto ret = s1.insert(1);
    if (!ret.second){
        auto elem = *ret.first;
        cout << "Insert failed, element with value 1 already exists."
            << endl << "  The existing element is (" << elem << ")"
            << endl;
    }
    else{
        cout << "The modified set values of s1 are:" << endl;
        print(s1);
    }
    cout << endl;

    // single element, with hint
    s1.insert(s1.end(), 30);
    cout << "The modified set values of s1 are:" << endl;
    print(s1);
    cout << endl;

    // The templatized version inserting a jumbled range
    set<int> s2;
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

    cout << "The modified set values of s2 are:" << endl;
    print(s2);
    cout << endl;

    // The templatized versions move-constructing elements
    set<string>  s3;
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

    set<int> s4;
    // Insert the elements from an initializer_list
    s4.insert({ 4, 44, 2, 22, 3, 33, 1, 11, 5, 55 });
    cout << "After initializer_list insertion, s4 contains:" << endl;
    print(s4);
    cout << endl;
}
```

## <a name="iterator"></a>  set::iterator

Tipo che fornisce un [iteratore bidirezionale](../standard-library/bidirectional-iterator-tag-struct.md) costante in grado di leggere qualsiasi elemento in un oggetto set.

```cpp
typedef implementation-defined iterator;
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo [begin](#begin) per un esempio di come dichiarare e usare un `iterator`.

## <a name="key_comp"></a>  set::key_comp

Recupera una copia dell'oggetto di confronto utilizzato per ordinare le chiavi di un set.

```cpp
key_compare key_comp() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto funzione che viene usato da un oggetto set per ordinare gli elementi, corrispondente al parametro di modello `Traits`.

Per altre informazioni su `Traits`, vedere l'argomento [Classe set](../standard-library/set-class.md).

### <a name="remarks"></a>Note

L'oggetto archiviato definisce la funzione membro:

**bool operator()**( **const Key&**`_xVal`, **const Key&**`_yVal`);

che restituisce **true** se `_xVal` precede e non è uguale a `_yVal` nell'ordinamento.

Si noti che [key_compare](#key_compare) e [value_compare](#value_compare) sono sinonimi per il parametro di modello `Traits`. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

### <a name="example"></a>Esempio

```cpp
// set_key_comp.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;

   set <int, less<int> > s1;
   set<int, less<int> >::key_compare kc1 = s1.key_comp( ) ;
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
           << "where kc1 is the function object of s1."
           << endl;
   }

   set <int, greater<int> > s2;
   set<int, greater<int> >::key_compare kc2 = s2.key_comp( ) ;
   bool result2 = kc2( 2, 3 ) ;
   if(result2 == true)
   {
      cout << "kc2( 2,3 ) returns value of true, "
           << "where kc2 is the function object of s2."
           << endl;
   }
   else
   {
      cout << "kc2( 2,3 ) returns value of false, "
           << "where kc2 is the function object of s2."
           << endl;
   }
}
```

```Output
kc1( 2,3 ) returns value of true, where kc1 is the function object of s1.
kc2( 2,3 ) returns value of false, where kc2 is the function object of s2.
```

## <a name="key_compare"></a>  set::key_compare

Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel set.

```cpp
typedef Traits key_compare;
```

### <a name="remarks"></a>Note

`key_compare` è un sinonimo per il parametro di modello `Traits`.

Per altre informazioni su `Traits`, vedere l'argomento [Classe set](../standard-library/set-class.md).

Si noti che entrambe `key_compare` e [value_compare](#value_compare) sono sinonimi per il parametro di modello `Traits`. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [key_comp](#key_comp) per indicazioni su come dichiarare e usare `key_compare`.

## <a name="key_type"></a>  set::key_type

Tipo che descrive un oggetto archiviato come elemento di un oggetto set in qualità di chiave di ordinamento.

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Note

`key_type` è un sinonimo per il parametro di modello `Key`.

Per altre informazioni su `Key`, vedere la sezione Note dell'argomento [Classe set](../standard-library/set-class.md).

Si noti che entrambe `key_type` e [value_type](#value_type) sono sinonimi per il parametro di modello `Key`. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_type](#value_type) per indicazioni su come dichiarare e usare `key_type`.

## <a name="lower_bound"></a>  set::lower_bound

Restituisce un iteratore al primo elemento di un set con una chiave uguale o maggiore di una chiave specificata.

```cpp
const_iterator lower_bound(const Key& key) const;

iterator lower_bound(const Key& key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto set in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Tipo iterator o `const_iterator` che punta alla posizione di un elemento di un oggetto set con una chiave uguale o maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento dell'oggetto set se non viene trovata alcuna corrispondenza per la chiave.

### <a name="example"></a>Esempio

```cpp
// set_lower_bound.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1;
   set <int> :: const_iterator s1_AcIter, s1_RcIter;

   s1.insert( 10 );
   s1.insert( 20 );
   s1.insert( 30 );

   s1_RcIter = s1.lower_bound( 20 );
   cout << "The element of set s1 with a key of 20 is: "
        << *s1_RcIter << "." << endl;

   s1_RcIter = s1.lower_bound( 40 );

   // If no match is found for the key, end( ) is returned
   if ( s1_RcIter == s1.end( ) )
      cout << "The set s1 doesn't have an element "
           << "with a key of 40." << endl;
   else
      cout << "The element of set s1 with a key of 40 is: "
           << *s1_RcIter << "." << endl;

   // The element at a specific location in the set can be found
   // by using a dereferenced iterator that addresses the location
   s1_AcIter = s1.end( );
   s1_AcIter--;
   s1_RcIter = s1.lower_bound( *s1_AcIter );
   cout << "The element of s1 with a key matching "
        << "that of the last element is: "
        << *s1_RcIter << "." << endl;
}
```

```Output
The element of set s1 with a key of 20 is: 20.
The set s1 doesn't have an element with a key of 40.
The element of s1 with a key matching that of the last element is: 30.
```

## <a name="max_size"></a>  set::max_size

Restituisce la lunghezza massima del set.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Massima lunghezza possibile dell'oggetto set.

### <a name="example"></a>Esempio

```cpp
// set_max_size.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1;
   set <int>::size_type i;

   i = s1.max_size( );
   cout << "The maximum possible length "
        << "of the set is " << i << "." << endl;
}
```

## <a name="op_eq"></a>  set::operator=

Sostituisce gli elementi di questo oggetto `set` usando gli elementi di un altro oggetto `set`.

```cpp
set& operator=(const set& right);

set& operator=(set&& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*right*|Oggetto `set` che fornisce nuovi elementi da assegnare a questo oggetto `set`.|

### <a name="remarks"></a>Note

La prima versione di `operator=` Usa un' [riferimento lvalue](../cpp/lvalue-reference-declarator-amp.md) per *a destra*, per copiare gli elementi *destro* a questo `set`.

La seconda versione usa un [riferimento rvalue](../cpp/rvalue-reference-declarator-amp-amp.md) per right. Sposta gli elementi da *a destra* a questo `set`.

Gli elementi di questo oggetto `set` vengono eliminati prima che venga eseguita la funzione dell'operatore.

### <a name="example"></a>Esempio

```cpp
// set_operator_as.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
   {
   using namespace std;
   set<int> v1, v2, v3;
   set<int>::iterator iter;

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

## <a name="pointer"></a>  set::pointer

Tipo che fornisce un puntatore a un elemento di un set.

```cpp
typedef typename allocator_type::pointer pointer;
```

### <a name="remarks"></a>Note

Un tipo **pointer** può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto set.

## <a name="rbegin"></a>  set::rbegin

Restituisce un iteratore che punta al primo elemento di un set invertito.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta al primo elemento di un oggetto set invertito o a quello che è stato l'ultimo elemento dell'oggetto set non invertito.

### <a name="remarks"></a>Note

`rbegin` viene usato con un oggetto set invertito proprio come [begin](#begin) viene usato con un oggetto set.

Se il valore restituito di `rbegin` viene assegnato a un `const_reverse_iterator`, l'oggetto set non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a un `reverse_iterator`, l'oggetto set può essere modificato.

`rbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto set.

### <a name="example"></a>Esempio

```cpp
// set_rbegin.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1;
   set <int>::iterator s1_Iter;
   set <int>::reverse_iterator s1_rIter;

   s1.insert( 10 );
   s1.insert( 20 );
   s1.insert( 30 );

   s1_rIter = s1.rbegin( );
   cout << "The first element in the reversed set is "
        << *s1_rIter << "." << endl;

   // begin can be used to start an iteration
   // through a set in a forward order
   cout << "The set is:";
   for ( s1_Iter = s1.begin( ) ; s1_Iter != s1.end( ); s1_Iter++ )
      cout << " " << *s1_Iter;
   cout << endl;

   // rbegin can be used to start an iteration
   // through a set in a reverse order
   cout << "The reversed set is:";
   for ( s1_rIter = s1.rbegin( ) ; s1_rIter != s1.rend( ); s1_rIter++ )
      cout << " " << *s1_rIter;
   cout << endl;

   // A set element can be erased by dereferencing to its key
   s1_rIter = s1.rbegin( );
   s1.erase ( *s1_rIter );

   s1_rIter = s1.rbegin( );
   cout << "After the erasure, the first element "
        << "in the reversed set is "<< *s1_rIter << "." << endl;
}
```

```Output
The first element in the reversed set is 30.
The set is: 10 20 30
The reversed set is: 30 20 10
After the erasure, the first element in the reversed set is 20.
```

## <a name="reference"></a>  set::reference

Tipo che fornisce un riferimento a un elemento archiviato in un set.

```cpp
typedef typename allocator_type::reference reference;
```

### <a name="example"></a>Esempio

```cpp
// set_reference.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1;

   s1.insert( 10 );
   s1.insert( 20 );

   // Declare and initialize a reference &Ref1 to the 1st element
   const int &Ref1 = *s1.begin( );

   cout << "The first element in the set is "
        << Ref1 << "." << endl;
}
```

```Output
The first element in the set is 10.
```

## <a name="rend"></a>  set::rend

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un set invertito.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta alla posizione successiva all'ultimo elemento di un oggetto set invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto set non invertito.

### <a name="remarks"></a>Note

`rend` viene usato con un oggetto set invertito proprio come [end](#end) viene usato con un oggetto set.

Se il valore restituito di `rend` viene assegnato a un `const_reverse_iterator`, l'oggetto set non può essere modificato. Se il valore restituito di `rend` viene assegnato a un `reverse_iterator`, l'oggetto set può essere modificato. Non è consigliabile dereferenziare il valore restituito da `rend`.

`rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo oggetto set.

### <a name="example"></a>Esempio

```cpp
// set_rend.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main() {
   using namespace std;
   set <int> s1;
   set <int>::iterator s1_Iter;
   set <int>::reverse_iterator s1_rIter;
   set <int>::const_reverse_iterator s1_crIter;

   s1.insert( 10 );
   s1.insert( 20 );
   s1.insert( 30 );

   s1_rIter = s1.rend( );
   s1_rIter--;
   cout << "The last element in the reversed set is "
        << *s1_rIter << "." << endl;

   // end can be used to terminate an iteration
   // through a set in a forward order
   cout << "The set is: ";
   for ( s1_Iter = s1.begin( ) ; s1_Iter != s1.end( ); s1_Iter++ )
      cout << *s1_Iter << " ";
   cout << "." << endl;

   // rend can be used to terminate an iteration
   // through a set in a reverse order
   cout << "The reversed set is: ";
   for ( s1_rIter = s1.rbegin( ) ; s1_rIter != s1.rend( ); s1_rIter++ )
      cout << *s1_rIter << " ";
   cout << "." << endl;

   s1_rIter = s1.rend( );
   s1_rIter--;
   s1.erase ( *s1_rIter );

   s1_rIter = s1.rend( );
   --s1_rIter;
   cout << "After the erasure, the last element in the "
        << "reversed set is " << *s1_rIter << "." << endl;
}
```

## <a name="reverse_iterator"></a>  set::reverse_iterator

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un set invertito.

```cpp
typedef std::reverse_iterator<iterator> reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `reverse_iterator` viene usato per eseguire l'iterazione sull'oggetto set in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rbegin](#rbegin) per indicazioni su come dichiarare e usare `reverse_iterator`.

## <a name="set"></a>  set::set

Costruisce un set vuoto o che rappresenta una copia totale o parziale di un altro set.

```cpp
set();

explicit set(
    const Traits& Comp);

set(
    const Traits& Comp,
    const Allocator& Al);

set(
    const set& Right);

set(
    set&& Right);

set(
    initializer_list<Type> IList);

set(
    initializer_list<Type> IList,
    const Compare& Comp);

set(
    initializer_list<Type> IList,
    const Compare& Comp,
    const Allocator& Al);

template <class InputIterator>
set(
    InputIterator First,
    InputIterator Last);

template <class InputIterator>
set(
    InputIterator First,
    InputIterator Last,
    const Traits& Comp);

template <class InputIterator>
set(
    InputIterator First,
    InputIterator Last,
    const Traits& Comp,
    const Allocator& Al);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*Al*|La classe dell'allocatore di archiviazione da usare per questo oggetto set, che per impostazione predefinita `Allocator`.|
|*Comp*|Funzione di confronto di tipo `const Traits` usata per ordinare gli elementi nell'oggetto set. Per impostazione predefinita è `Compare`.|
|*Rght*|Oggetto set di cui il set costruito deve essere una copia.|
|*Primo*|Posizione del primo elemento nell'intervallo di elementi da copiare.|
|*ultimo*|Posizione del primo elemento oltre l'intervallo di elementi da copiare.|
|*IList*|initializer_list da cui copiare gli elementi.|

### <a name="remarks"></a>Note

Tutti i costruttori archiviano un tipo di oggetto allocatore che gestisce l'archiviazione per l'oggetto set e che può essere restituito in un secondo momento chiamando [get_allocator](#get_allocator). Il parametro allocator viene spesso omesso nelle dichiarazioni di classe e vengono usate macro di pre-elaborazione per introdurre allocatori alternativi.

Tutti i costruttori inizializzano i relativi oggetti set.

Tutti i costruttori archiviano un oggetto funzione di tipo `Traits` che viene usato per stabilire un ordine tra le chiavi del set e che può essere restituito in un secondo momento chiamando [key_comp](#key_comp).

I primi tre costruttori specificano un set iniziale vuoto, il secondo specifica il tipo di funzione di confronto (`comp`) da usare per stabilire l'ordine degli elementi e il terzo specifica in modo esplicito l'allocatore di tipo (`al`) sia utilizzato. La parola chiave **explicit** elimina alcuni tipi di conversione automatica del tipo.

Il quarto costruttore specifica una copia dell'oggetto set `right`.

I tre costruttori successivi usano un oggetto initializer_list per specificare gli elementi.

I tre costruttori successivi copiano l'intervallo [ `first`, `last`) di un set con un grado di esplicitazione crescente nello specificare il tipo di funzione di confronto della classe `Traits` e **allocatore**.

L'ottavo costruttore specifica una copia dell'oggetto set tramite lo spostamento di `right`.

### <a name="example"></a>Esempio

```cpp
// set_set.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main()
{
    using namespace std;

    // Create an empty set s0 of key type integer
    set <int> s0;

    // Create an empty set s1 with the key comparison
    // function of less than, then insert 4 elements
    set <int, less<int> > s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    // Create an empty set s2 with the key comparison
    // function of less than, then insert 2 elements
    set <int, less<int> > s2;
    s2.insert(10);
    s2.insert(20);

    // Create a set s3 with the
    // allocator of set s1
    set <int>::allocator_type s1_Alloc;
    s1_Alloc = s1.get_allocator();
    set <int> s3(less<int>(), s1_Alloc);
    s3.insert(30);

    // Create a copy, set s4, of set s1
    set <int> s4(s1);

    // Create a set s5 by copying the range s1[ first,  last)
    set <int>::const_iterator s1_bcIter, s1_ecIter;
    s1_bcIter = s1.begin();
    s1_ecIter = s1.begin();
    s1_ecIter++;
    s1_ecIter++;
    set <int> s5(s1_bcIter, s1_ecIter);

    // Create a set s6 by copying the range s4[ first,  last)
    // and with the allocator of set s2
    set <int>::allocator_type s2_Alloc;
    s2_Alloc = s2.get_allocator();
    set <int> s6(s4.begin(), ++s4.begin(), less<int>(), s2_Alloc);

    cout << "s1 =";
    for (auto i : s1)
        cout << " " << i;
    cout << endl;

    cout << "s2 = " << *s2.begin() << " " << *++s2.begin() << endl;

    cout << "s3 =";
    for (auto i : s3)
        cout << " " << i;
    cout << endl;

    cout << "s4 =";
    for (auto i : s4)
        cout << " " << i;
    cout << endl;

    cout << "s5 =";
    for (auto i : s5)
        cout << " " << i;
    cout << endl;

    cout << "s6 =";
    for (auto i : s6)
        cout << " " << i;
    cout << endl;

    // Create a set by moving s5
    set<int> s7(move(s5));
    cout << "s7 =";
    for (auto i : s7)
        cout << " " << i;
    cout << endl;

    // Create a set with an initializer_list
    cout << "s8 =";
    set<int> s8{ { 1, 2, 3, 4 } };
    for (auto i : s8)
        cout << " " << i;
    cout << endl;

    cout << "s9 =";
    set<int> s9{ { 5, 6, 7, 8 }, less<int>() };
    for (auto i : s9)
        cout << " " << i;
    cout << endl;

    cout << "s10 =";
    set<int> s10{ { 10, 20, 30, 40 }, less<int>(), s9.get_allocator() };
    for (auto i : s10)
        cout << " " << i;
    cout << endl;
}
```

```Output
s1 = 10 20 30 40s2 = 10 20s3 = 30s4 = 10 20 30 40s5 = 10 20s6 = 10s7 = 10 20s8 = 1 2 3 4s9 = 5 6 7 8s10 = 10 20 30 40
```

## <a name="size"></a>  set::size

Restituisce il numero di elementi nel set.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza corrente dell'oggetto set.

### <a name="example"></a>Esempio

```cpp
// set_size.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1;
   set <int> :: size_type i;

   s1.insert( 1 );
   i = s1.size( );
   cout << "The set length is " << i << "." << endl;

   s1.insert( 2 );
   i = s1.size( );
   cout << "The set length is now " << i << "." << endl;
}
```

```Output
The set length is 1.
The set length is now 2.
```

## <a name="size_type"></a>  set::size_type

Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un set.

```cpp
typedef typename allocator_type::size_type size_type;
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [size](#size) per indicazioni su come dichiarare e usare `size_type`.

## <a name="swap"></a>  set::swap

Scambia gli elementi di due set.

```cpp
void swap(
    set<Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Argomento di tipo set che fornisce gli elementi da scambiare con l'oggetto set di destinazione.

### <a name="remarks"></a>Note

La funzione membro non invalida riferimenti, puntatori o iteratori che designano gli elementi dei due oggetti set di cui vengono scambiati gli elementi.

### <a name="example"></a>Esempio

```cpp
// set_swap.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1, s2, s3;
   set <int>::iterator s1_Iter;

   s1.insert( 10 );
   s1.insert( 20 );
   s1.insert( 30 );
   s2.insert( 100 );
   s2.insert( 200 );
   s3.insert( 300 );

   cout << "The original set s1 is:";
   for ( s1_Iter = s1.begin( ); s1_Iter != s1.end( ); s1_Iter++ )
      cout << " " << *s1_Iter;
   cout   << "." << endl;

   // This is the member function version of swap
   s1.swap( s2 );

   cout << "After swapping with s2, list s1 is:";
   for ( s1_Iter = s1.begin( ); s1_Iter != s1.end( ); s1_Iter++ )
      cout << " " << *s1_Iter;
   cout  << "." << endl;

   // This is the specialized template version of swap
   swap( s1, s3 );

   cout << "After swapping with s3, list s1 is:";
   for ( s1_Iter = s1.begin( ); s1_Iter != s1.end( ); s1_Iter++ )
      cout << " " << *s1_Iter;
   cout   << "." << endl;
}
```

```Output
The original set s1 is: 10 20 30.
After swapping with s2, list s1 is: 100 200.
After swapping with s3, list s1 is: 300.
```

## <a name="upper_bound"></a>  set::upper_bound

Restituisce un iteratore al primo elemento di un oggetto set con una chiave maggiore di una chiave specificata.

```cpp
const_iterator upper_bound(const Key& key) const;

iterator upper_bound(const Key& key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto set in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Un' `iterator` o `const_iterator` che punta alla posizione di un elemento in un set che con una chiave maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento nel set se non corrispondano viene trovata per la chiave.

### <a name="example"></a>Esempio

```cpp
// set_upper_bound.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1;
   set <int> :: const_iterator s1_AcIter, s1_RcIter;

   s1.insert( 10 );
   s1.insert( 20 );
   s1.insert( 30 );

   s1_RcIter = s1.upper_bound( 20 );
   cout << "The first element of set s1 with a key greater "
        << "than 20 is: " << *s1_RcIter << "." << endl;

   s1_RcIter = s1.upper_bound( 30 );

   // If no match is found for the key, end( ) is returned
   if ( s1_RcIter == s1.end( ) )
      cout << "The set s1 doesn't have an element "
           << "with a key greater than 30." << endl;
   else
      cout << "The element of set s1 with a key > 40 is: "
           << *s1_RcIter << "." << endl;

   // The element at a specific location in the set can be found
   // by using a dereferenced iterator addressing the location
   s1_AcIter = s1.begin( );
   s1_RcIter = s1.upper_bound( *s1_AcIter );
   cout << "The first element of s1 with a key greater than"
        << endl << "that of the initial element of s1 is: "
        << *s1_RcIter << "." << endl;
}
```

```Output
The first element of set s1 with a key greater than 20 is: 30.
The set s1 doesn't have an element with a key greater than 30.
The first element of s1 with a key greater than
that of the initial element of s1 is: 20.
```

## <a name="value_comp"></a>  set::value_comp

Recupera una copia dell'oggetto di confronto utilizzato per ordinare i valori degli elementi di un set.

```cpp
value_compare value_comp() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto funzione che viene usato da un oggetto set per ordinare gli elementi, corrispondente al parametro di modello `Traits`.

Per altre informazioni su `Traits`, vedere l'argomento [Classe set](../standard-library/set-class.md).

### <a name="remarks"></a>Note

L'oggetto archiviato definisce la funzione membro:

**bool operator**( **const Key&**`_xVal`, **const Key&**`_yVal`);

che restituisce **true** se `_xVal` precede e non è uguale a `_yVal` nell'ordinamento.

Si noti che [value_compare](#value_compare) e [key_compare](#key_compare) sono sinonimi per il parametro di modello `Traits`. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

### <a name="example"></a>Esempio

```cpp
// set_value_comp.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;

   set <int, less<int> > s1;
   set <int, less<int> >::value_compare vc1 = s1.value_comp( );
   bool result1 = vc1( 2, 3 );
   if( result1 == true )
   {
      cout << "vc1( 2,3 ) returns value of true, "
           << "where vc1 is the function object of s1."
           << endl;
   }
   else
   {
      cout << "vc1( 2,3 ) returns value of false, "
           << "where vc1 is the function object of s1."
           << endl;
   }

   set <int, greater<int> > s2;
   set<int, greater<int> >::value_compare vc2 = s2.value_comp( );
   bool result2 = vc2( 2, 3 );
   if( result2 == true )
   {
      cout << "vc2( 2,3 ) returns value of true, "
           << "where vc2 is the function object of s2."
           << endl;
   }
   else
   {
      cout << "vc2( 2,3 ) returns value of false, "
           << "where vc2 is the function object of s2."
           << endl;
   }
}
```

```Output
vc1( 2,3 ) returns value of true, where vc1 is the function object of s1.
vc2( 2,3 ) returns value of false, where vc2 is the function object of s2.
```

## <a name="value_compare"></a>  set::value_compare

Tipo che fornisce un oggetto funzione in grado di confrontare due valori di elemento per determinarne l'ordine relativo nell'oggetto set.

```cpp
typedef key_compare value_compare;
```

### <a name="remarks"></a>Note

`value_compare` è un sinonimo per il parametro di modello `Traits`.

Per altre informazioni su `Traits`, vedere l'argomento [Classe set](../standard-library/set-class.md).

Si noti che entrambe [key_compare](#key_compare) e `value_compare` sono sinonimi per il parametro di modello `Traits`. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_comp](#value_comp) per indicazioni su come dichiarare e usare `value_compare`.

## <a name="value_type"></a>  set::value_type

Tipo che descrive un oggetto archiviato come elemento di un oggetto set in qualità di valore.

```cpp
typedef Key value_type;
```

### <a name="remarks"></a>Note

`value_type` è un sinonimo per il parametro di modello `Key`.

Per altre informazioni su `Key`, vedere la sezione Note dell'argomento [Classe set](../standard-library/set-class.md).

Si noti che entrambe [key_type](#key_type) e `value_type` sono sinonimi per il parametro di modello `Key`. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

### <a name="example"></a>Esempio

```cpp
// set_value_type.cpp
// compile with: /EHsc
#include <set>
#include <iostream>

int main( )
{
   using namespace std;
   set <int> s1;
   set <int>::iterator s1_Iter;

   set <int>::value_type svt_Int;   // Declare value_type
   svt_Int = 10;            // Initialize value_type

   set <int> :: key_type skt_Int;   // Declare key_type
   skt_Int = 20;             // Initialize key_type

   s1.insert( svt_Int );         // Insert value into s1
   s1.insert( skt_Int );         // Insert key into s1

   // A set accepts key_types or value_types as elements
   cout << "The set has elements:";
   for ( s1_Iter = s1.begin( ) ; s1_Iter != s1.end( ); s1_Iter++)
      cout << " " << *s1_Iter;
   cout << "." << endl;
}
```

```Output
The set has elements: 10 20.
```

## <a name="see-also"></a>Vedere anche

[\<set>](../standard-library/set.md)<br/>
[Contenitori](../cpp/containers-modern-cpp.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
