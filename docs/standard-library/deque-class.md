---
title: Classe deque
ms.date: 11/04/2016
f1_keywords:
- deque/std::deque
- deque/std::deque::allocator_type
- deque/std::deque::const_iterator
- deque/std::deque::const_pointer
- deque/std::deque::const_reference
- deque/std::deque::const_reverse_iterator
- deque/std::deque::difference_type
- deque/std::deque::iterator
- deque/std::deque::pointer
- deque/std::deque::reference
- deque/std::deque::reverse_iterator
- deque/std::deque::size_type
- deque/std::deque::value_type
- deque/std::deque::assign
- deque/std::deque::at
- deque/std::deque::back
- deque/std::deque::begin
- deque/std::deque::cbegin
- deque/std::deque::cend
- deque/std::deque::clear
- deque/std::deque::crbegin
- deque/std::deque::crend
- deque/std::deque::emplace
- deque/std::deque::emplace_back
- deque/std::deque::emplace_front
- deque/std::deque::empty
- deque/std::deque::end
- deque/std::deque::erase
- deque/std::deque::front
- deque/std::deque::get_allocator
- deque/std::deque::insert
- deque/std::deque::max_size
- deque/std::deque::pop_back
- deque/std::deque::pop_front
- deque/std::deque::push_back
- deque/std::deque::push_front
- deque/std::deque::rbegin
- deque/std::deque::rend
- deque/std::deque::resize
- deque/std::deque::shrink_to_fit
- deque/std::deque::size
- deque/std::deque::swap
helpviewer_keywords:
- std::deque [C++]
- std::deque [C++], allocator_type
- std::deque [C++], const_iterator
- std::deque [C++], const_pointer
- std::deque [C++], const_reference
- std::deque [C++], const_reverse_iterator
- std::deque [C++], difference_type
- std::deque [C++], iterator
- std::deque [C++], pointer
- std::deque [C++], reference
- std::deque [C++], reverse_iterator
- std::deque [C++], size_type
- std::deque [C++], value_type
- std::deque [C++], assign
- std::deque [C++], at
- std::deque [C++], back
- std::deque [C++], begin
- std::deque [C++], cbegin
- std::deque [C++], cend
- std::deque [C++], clear
- std::deque [C++], crbegin
- std::deque [C++], crend
- std::deque [C++], emplace
- std::deque [C++], emplace_back
- std::deque [C++], emplace_front
- std::deque [C++], empty
- std::deque [C++], end
- std::deque [C++], erase
- std::deque [C++], front
- std::deque [C++], get_allocator
- std::deque [C++], insert
- std::deque [C++], max_size
- std::deque [C++], pop_back
- std::deque [C++], pop_front
- std::deque [C++], push_back
- std::deque [C++], push_front
- std::deque [C++], rbegin
- std::deque [C++], rend
- std::deque [C++], resize
- std::deque [C++], shrink_to_fit
- std::deque [C++], size
- std::deque [C++], swap
ms.assetid: 64842ee5-057a-4063-8c16-4267a0332584
ms.openlocfilehash: ae2ea172b331472e6ea28c175ad2c7a10ae621a0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220951"
---
# <a name="deque-class"></a>Classe deque

Organizza gli elementi di un determinato tipo in una disposizione lineare e, come un vettore, consente l'accesso casuale veloce a qualsiasi elemento e l'inserimento e l'eliminazione efficienti sul retro del contenitore. Tuttavia, a differenza di un vettore, la classe `deque` supporta anche l'inserimento e l'eliminazione efficiente davanti al contenitore.

## <a name="syntax"></a>Sintassi

```unstlib
template <class Type, class Allocator =allocator<Type>>
class deque
```

### <a name="parameters"></a>Parametri

*Tipo*\
Tipo di dati degli elementi da archiviare nella deque.

*Allocatore*\
Tipo che rappresenta l'oggetto allocatore memorizzato che incapsula i dettagli sull'allocazione e sulla deallocazione della deque e della memoria. Questo argomento è facoltativo e il valore predefinito è **allocator \<Type> **.

## <a name="remarks"></a>Osservazioni

La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione. I [vettori](../standard-library/vector-class.md) devono essere il contenitore preferito per la gestione di una sequenza quando l'accesso casuale a qualsiasi elemento è a un livello Premium e gli inserimenti o le eliminazioni di elementi sono necessari solo alla fine di una sequenza. Le prestazioni del contenitore elenco sono superiori quando il numero di inserimenti ed eliminazioni efficienti (in tempo costante) in qualsiasi posizione all'interno della sequenza è limitato. Tali operazioni al centro della sequenza richiedono copie di elementi e assegnazioni proporzionali al numero di elementi della sequenza (tempo lineare).

La riallocazione della deque si verifica quando una funzione interna deve inserire o eliminare elementi della sequenza:

- Se un elemento viene inserito in una sequenza vuota o se un elemento viene rimosso per lasciare vuota una sequenza, gli iteratori restituiti da [begin](#begin) ed [end](#end) diventano non validi.

- Se un elemento viene inserito nella prima posizione della deque, tutti gli iteratori, ma nessun riferimento, che definiscono gli elementi esistenti diventano validi.

- Se un elemento viene inserito alla fine della deque, [end](#end) e tutti gli iteratori, ma nessun riferimento, che definiscono gli elementi esistenti diventano non validi.

- Se un elemento viene cancellato all'inizio della deque, solo l'iteratore e i riferimenti all'elemento cancellato diventano non validi.

- Se l'ultimo elemento viene rimosso dalla fine della deque, solo l'iteratore nell'elemento finale e i riferimenti all'elemento eliminato diventano non validi.

In caso contrario, l'inserimento o l'eliminazione di un elemento invalida tutti gli iteratori e i riferimenti.

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|||
|-|-|
|[deque](#deque)|Costruisce un oggetto `deque`. Sono disponibili diversi costruttori per configurare il contenuto del nuovo `deque` in modi diversi: vuoto; caricato con un numero specificato di elementi vuoti, contenuto spostato o copiato da un altro oggetto `deque` , contenuto copiato o spostato utilizzando un iteratore e un elemento copiato nei `deque` `count` tempi. Alcuni costruttori consentono l'utilizzo di un `allocator` personalizzato per creare elementi.|

### <a name="typedefs"></a>Typedef

|||
|-|-|
|[allocator_type](#allocator_type)|Tipo che rappresenta la classe `allocator` per l'oggetto `deque`.|
|[const_iterator](#const_iterator)|Tipo che fornisce un iteratore ad accesso casuale che può accedere e leggere gli elementi in `deque` come**`const`**|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore a un elemento in un `deque` come `const.`.|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento a un elemento in una `deque` per leggere ed effettuare altre operazioni come `const.`.|
|[const_reverse_iterator](#const_reverse_iterator)|Tipo che fornisce un iteratore ad accesso casuale che può accedere e leggere gli elementi in `deque` come **`const`** . La deque viene visualizzata al contrario. Per altre informazioni, vedere [Classe reverse_iterator](../standard-library/reverse-iterator-class.md)|
|[difference_type](#difference_type)|Tipo che fornisce la differenza tra due iteratori di accesso casuale che fanno riferimento agli elementi all'interno della stessa `deque`.|
|[iteratore](#iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in una `deque`.|
|[puntatore](#pointer)|Tipo che fornisce un puntatore a un elemento in un `deque`.|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento archiviato in un `deque`.|
|[reverse_iterator](#reverse_iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare un elemento in una `deque`. La deque viene visualizzata in ordine inverso.|
|[size_type](#size_type)|Tipo che conta il numero di elementi in una `deque`.|
|[value_type](#value_type)|Tipo che rappresenta il tipo di dati archiviati in un `deque`.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[assign](#assign)|Elimina gli elementi da una `deque` e copia una nuova sequenza di elementi nella `deque` di destinazione.|
|[at](#at)|Restituisce un riferimento all'elemento in corrispondenza della posizione specificata nella `deque`.|
|[Indietro](#back)|Restituisce un riferimento all'ultimo elemento della `deque`.|
|[iniziare](#begin)|Restituisce un iteratore ad accesso casuale che punta al primo elemento nella `deque`.|
|[cbegin](#cbegin)|Restituisce un iteratore const al primo elemento nella `deque`.|
|[cend](#cend)|Restituisce un iteratore ad accesso casuale **`const`** che punta appena oltre la fine di `deque` .|
|[deselezionare](#clear)|Cancella tutti gli elementi di un `deque`.|
|[crbegin](#crbegin)|Restituisce un iteratore const ad accesso casuale al primo elemento in una `deque` visualizzata in ordine inverso.|
|[crend](#crend)|Restituisce un iteratore const ad accesso casuale al primo elemento in una `deque` visualizzata in ordine inverso.|
|[emplace](#emplace)|Inserisce un elemento costruito sul posto nella `deque` in una posizione specificata.|
|[emplace_back](#emplace_back)|Aggiunge un elemento costruito sul posto alla fine della `deque`.|
|[emplace_front](#emplace_front)|Aggiunge un elemento costruito sul posto all'inizio della `deque`.|
|[empty](#empty)|Restituisce **`true`** se `deque` contiene zero elementi e **`false`** se contiene uno o più elementi.|
|[fine](#end)|Restituisce un iteratore ad accesso casuale che punta appena oltre la fine della `deque`.|
|[erase](#erase)|Rimuove un elemento o un intervallo di elementi in una `deque` da posizioni specificate.|
|[fronte](#front)|Restituisce un riferimento al primo elemento in una `deque`.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il `deque`.|
|[insert](#insert)|Inserisce un elemento, diversi elementi, o un intervallo di elementi nella `deque` in una posizione specificata.|
|[max_size](#max_size)|Restituisce la lunghezza massima possibile della `deque`.|
|[pop_back](#pop_back)|Cancella l'elemento alla fine della `deque`.|
|[pop_front](#pop_front)|Cancella l'elemento all'inizio della `deque`.|
|[push_back](#push_back)|Aggiunge un elemento alla fine della `deque`.|
|[push_front](#push_front)|Aggiunge un elemento all'inizio della `deque`.|
|[rbegin](#rbegin)|Restituisce un iteratore ad accesso casuale al primo elemento in una `deque` invertita.|
|[rend](#rend)|Restituisce un iteratore ad accesso casuale che punta appena oltre l'ultimo elemento di una `deque` invertita.|
|[ridimensionare](#resize)|Specifica una nuova dimensione per `deque`.|
|[shrink_to_fit](#shrink_to_fit)|Elimina la capacità in eccesso.|
|[size](#size)|Restituisce il numero di elementi nel `deque`.|
|[scambio](#swap)|Scambia gli elementi di due `deque`.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator&#91;&#93;](#op_at)|Restituisce un riferimento all'elemento `deque` in una posizione specificata.|
|[operatore =](#op_eq)|Sostituisce gli elementi di una `deque` con una copia di un'altra `deque`.|

## <a name="allocator_type"></a><a name="allocator_type"></a>allocator_type

Tipo che rappresenta la classe allocator per l'oggetto deque.

```cpp
typedef Allocator allocator_type;
```

### <a name="remarks"></a>Osservazioni

`allocator_type` è un sinonimo per il parametro di modello `Allocator`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get_allocator](#get_allocator).

## <a name="assign"></a><a name="assign"></a>assegnare

Elimina elementi da una deque e copia un nuovo set di elementi nella deque di destinazione.

```cpp
template <class InputIterator>
void assign(
    InputIterator First,
    InputIterator Last);

void assign(
    size_type Count,
    const Type& Val);

void assign(initializer_list<Type> IList);
```

### <a name="parameters"></a>Parametri

*Prima*\
Posizione del primo elemento nell'intervallo di elementi da copiare dalla deque degli argomenti.

*Ultima*\
Posizione del primo elemento oltre l'intervallo di elementi da copiare dalla deque degli argomenti.

*Conteggio*\
Numero di copie di un elemento inserito nella deque.

*Val*\
Valore dell'elemento inserito nella deque.

*IList*\
Oggetto initializer_list da inserire nella deque.

### <a name="remarks"></a>Osservazioni

Dopo che sono stati eliminati tutti gli elementi esistenti nella deque di destinazione, `assign` inserisce un intervallo specificato di elementi dalla deque originale o da un'altra deque nella deque di destinazione oppure inserisce copie di un nuovo elemento con un valore specifico nella deque di destinazione.

### <a name="example"></a>Esempio

```cpp
// deque_assign.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>
#include <initializer_list>

int main()
{
    using namespace std;
    deque <int> c1, c2;
    deque <int>::const_iterator cIter;

    c1.push_back(10);
    c1.push_back(20);
    c1.push_back(30);
    c2.push_back(40);
    c2.push_back(50);
    c2.push_back(60);

    deque<int> d1{ 1, 2, 3, 4 };
    initializer_list<int> iList{ 5, 6, 7, 8 };
    d1.assign(iList);

    cout << "d1 = ";
    for (int i : d1)
        cout << i;
    cout << endl;

    cout << "c1 =";
    for (int i : c1)
        cout << i;
    cout << endl;

    c1.assign(++c2.begin(), c2.end());
    cout << "c1 =";
    for (int i : c1)
        cout << i;
    cout << endl;

    c1.assign(7, 4);
    cout << "c1 =";
    for (int i : c1)
        cout << i;
    cout << endl;
}
```

```Output
d1 = 5678c1 =102030c1 =5060c1 =4444444
```

## <a name="at"></a><a name="at"></a>a

Restituisce un riferimento all'elemento in una posizione specificata nella deque.

```cpp
reference at(size_type pos);

const_reference at(size_type pos) const;
```

### <a name="parameters"></a>Parametri

*POS*\
Numero di posizione o indice dell'elemento a cui fare riferimento nella deque.

### <a name="return-value"></a>Valore restituito

Se *pos* è maggiore della dimensione della deque, `at` genera un'eccezione.

### <a name="return-value"></a>Valore restituito

Se il valore restituito di `at` viene assegnato a un oggetto `const_reference`, l'oggetto deque non può essere modificato. Se il valore restituito di `at` viene assegnato a un oggetto `reference`, l'oggetto deque può essere modificato.

### <a name="example"></a>Esempio

```cpp
// deque_at.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;

   c1.push_back( 10 );
   c1.push_back( 20 );

   const int& i = c1.at( 0 );
   int& j = c1.at( 1 );
   cout << "The first element is " << i << endl;
   cout << "The second element is " << j << endl;
}
```

```Output
The first element is 10
The second element is 20
```

## <a name="back"></a><a name="back"></a>Indietro

Restituisce un riferimento all'ultimo elemento della deque.

```cpp
reference back();
const_reference back() const;
```

### <a name="return-value"></a>Valore restituito

Ultimo elemento della deque. Se l'oggetto deque è vuoto, il valore restituito è indefinito.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `back` viene assegnato a un oggetto `const_reference`, l'oggetto deque non può essere modificato. Se il valore restituito di `back` viene assegnato a un oggetto `reference`, l'oggetto deque può essere modificato.

Durante la compilazione con [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) definito come 1 o 2, se si prova ad accedere a un elemento in una deque vuota si verifica un errore di runtime.  Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// deque_back.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;

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

## <a name="begin"></a><a name="begin"></a>iniziare

Restituisce un iteratore che punta al primo elemento della deque.

```cpp
const_iterator begin() const;
iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore ad accesso casuale che punta al primo elemento della deque o alla posizione successiva a una deque vuota.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `begin` viene assegnato a un oggetto `const_iterator`, l'oggetto deque non può essere modificato. Se il valore restituito di `begin` viene assegnato a un `iterator` , l'oggetto deque può essere modificato.

### <a name="example"></a>Esempio

```cpp
// deque_begin.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;
   deque <int>::iterator c1_Iter;
   deque <int>::const_iterator c1_cIter;

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

## <a name="cbegin"></a><a name="cbegin"></a>cbegin

Restituisce un **`const`** iteratore che punta al primo elemento nell'intervallo.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

**`const`** Iteratore ad accesso casuale che punta al primo elemento dell'intervallo o alla posizione oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()` ).

### <a name="remarks"></a>Osservazioni

Con il valore restituito di `cbegin`, gli elementi dell'intervallo non possono essere modificati.

È possibile usare questa funzione membro anziché la funzione membro `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, si consideri come `Container` un contenitore (non **`const`** ) modificabile di qualsiasi tipo che supporta `begin()` e `cbegin()` .

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator
```

## <a name="cend"></a><a name="cend"></a>cend

Restituisce un **`const`** iteratore che punta alla posizione immediatamente successiva all'ultimo elemento di un intervallo.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore ad accesso casuale che punta oltre la fine dell'intervallo.

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

## <a name="clear"></a><a name="clear"></a>deselezionare

Cancella tutti gli elementi di una deque.

```cpp
void clear();
```

### <a name="example"></a>Esempio

```cpp
// deque_clear.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   cout << "The size of the deque is initially " << c1.size( ) << endl;
   c1.clear( );
   cout << "The size of the deque after clearing is " << c1.size( ) << endl;
}
```

```Output
The size of the deque is initially 3
The size of the deque after clearing is 0
```

## <a name="const_iterator"></a><a name="const_iterator"></a>const_iterator

Tipo che fornisce un iteratore ad accesso casuale che può accedere e leggere un **`const`** elemento nella deque.

```cpp
typedef implementation-defined const_iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo `const_iterator` non può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio per [back](#back).

## <a name="const_pointer"></a><a name="const_pointer"></a>const_pointer

Fornisce un puntatore a un **`const`** elemento in una deque.

```cpp
typedef typename Allocator::const_pointer const_pointer;
```

### <a name="remarks"></a>Osservazioni

Un tipo `const_pointer` non può essere usato per modificare il valore di un elemento. Per accedere a un elemento di deque in genere si usa un [iteratore](#iterator).

## <a name="const_reference"></a><a name="const_reference"></a>const_reference

Tipo che fornisce un riferimento a un **`const`** elemento archiviato in una deque per la lettura e l'esecuzione di **`const`** operazioni.

```cpp
typedef typename Allocator::const_reference const_reference;
```

### <a name="remarks"></a>Osservazioni

Un tipo `const_reference` non può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

```cpp
// deque_const_ref.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;

   c1.push_back( 10 );
   c1.push_back( 20 );

   const deque <int> c2 = c1;
   const int &i = c2.front( );
   const int &j = c2.back( );
   cout << "The first element is " << i << endl;
   cout << "The second element is " << j << endl;

   // The following line would cause an error as c2 is const
   // c2.push_back( 30 );
}
```

```Output
The first element is 10
The second element is 20
```

## <a name="const_reverse_iterator"></a><a name="const_reverse_iterator"></a>const_reverse_iterator

Tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi **`const`** elemento nella deque.

```cpp
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene usato per eseguire l'iterazione nella deque in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rbegin](#rbegin) per indicazioni su come dichiarare e usare un iteratore.

## <a name="crbegin"></a><a name="crbegin"></a>crbegin

Restituisce un iteratore const che punta al primo elemento di una deque invertita.

```cpp
const_reverse_iterator crbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore const inverso ad accesso casuale che punta al primo elemento di un oggetto [deque](../standard-library/deque-class.md) invertito o a quello che era stato l'ultimo elemento nell'oggetto `deque` non invertito.

### <a name="remarks"></a>Osservazioni

Con il valore restituito di `crbegin`, l'oggetto `deque` non può essere modificato.

### <a name="example"></a>Esempio

```cpp
// deque_crbegin.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> v1;
   deque <int>::iterator v1_Iter;
   deque <int>::const_reverse_iterator v1_rIter;

   v1.push_back( 1 );
   v1.push_back( 2 );

   v1_Iter = v1.begin( );
   cout << "The first element of deque is "
        << *v1_Iter << "." << endl;

   v1_rIter = v1.crbegin( );
   cout << "The first element of the reversed deque is "
        << *v1_rIter << "." << endl;
}
```

```Output
The first element of deque is 1.
The first element of the reversed deque is 2.
```

## <a name="crend"></a><a name="crend"></a>crend

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di una deque invertita.

```cpp
const_reverse_iterator crend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore const inverso ad accesso casuale che punta alla posizione successiva all'ultimo elemento in una [deque](../standard-library/deque-class.md) invertita, ovvero la posizione che precedeva il primo elemento nella deque non invertita.

### <a name="remarks"></a>Osservazioni

`crend` viene usato con un oggetto `deque` invertito proprio come [array::cend](../standard-library/array-class-stl.md#cend) viene usato con un oggetto `deque`.

Con il valore restituito di `crend` (opportunamente diminuito), l'oggetto `deque` non può essere modificato.

`crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine della relativa deque.

Non è consigliabile dereferenziare il valore restituito da `crend`.

### <a name="example"></a>Esempio

```cpp
// deque_crend.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> v1;
   deque <int>::const_reverse_iterator v1_rIter;

   v1.push_back( 1 );
   v1.push_back( 2 );

   for ( v1_rIter = v1.rbegin( ) ; v1_rIter != v1.rend( ) ; v1_rIter++ )
      cout << *v1_rIter << endl;
}
```

```Output
2
1
```

## <a name="deque"></a><a name="deque"></a>deque

Costruisce una deque di dimensioni specifiche, con elementi di un valore specifico, con un allocatore specifico oppure come copia di tutto o parte di un'altra deque.

```cpp
deque();

explicit deque(const Allocator& Al);
explicit deque(size_type Count);
deque(size_type Count, const Type& Val);

deque(
    size_type Count,
    const Type& Val,
    const Allocator& Al);

deque(const deque& Right);

template <class InputIterator>
deque(InputIterator First,  InputIterator Last);

template <class InputIterator>
deque(
   InputIterator First,
   InputIterator Last,
   const Allocator& Al);

deque(initializer_list<value_type> IList, const Allocator& Al);
```

### <a name="parameters"></a>Parametri

*Al*\
Classe Allocator da usare con questo oggetto.

*Conteggio*\
Numero di elementi della deque costruita.

*Val*\
Valore degli elementi della deque costruita.

*Ok*\
Deque di cui la deque costruita deve essere una copia.

*Prima*\
Posizione del primo elemento nell'intervallo di elementi da copiare.

*Ultima*\
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

*IList*\
Oggetto initializer_list da copiare.

### <a name="remarks"></a>Osservazioni

Tutti i costruttori archiviano un oggetto allocatore (*al*) e inizializzano la deque.

I primi due costruttori specificano una deque iniziale vuota. il secondo specifica anche il tipo di allocatore ( `_Al` ) da usare.

Tramite il terzo costruttore viene specificata una ripetizione di un numero indicato (`count`) di elementi del valore predefinito per la classe `Type`.

Il quarto e il quinto costruttore specificano una ripetizione di (*count*) elementi di value `val` .

Il sesto costruttore specifica una copia della deque a *destra*.

Il settimo e l'ottavo costruttore copiano l'intervallo `[First, Last)` di una deque.

Il settimo costruttore sposta la deque a *destra*.

L'ottavo costruttore copia il contenuto di un oggetto initializer_list.

Nessuno dei costruttori esegue riallocazioni provvisorie.

### <a name="example"></a>Esempio

```cpp
/ compile with: /EHsc
#include <deque>
#include <iostream>
#include <forward_list>

int main()
{
    using namespace std;

    forward_list<int> f1{ 1, 2, 3, 4 };

    f1.insert_after(f1.begin(), { 5, 6, 7, 8 });

    deque <int>::iterator c1_Iter, c2_Iter, c3_Iter, c4_Iter, c5_Iter, c6_Iter;

    // Create an empty deque c0
    deque <int> c0;

    // Create a deque c1 with 3 elements of default value 0
    deque <int> c1(3);

    // Create a deque c2 with 5 elements of value 2
    deque <int> c2(5, 2);

    // Create a deque c3 with 3 elements of value 1 and with the
    // allocator of deque c2
    deque <int> c3(3, 1, c2.get_allocator());

    // Create a copy, deque c4, of deque c2
    deque <int> c4(c2);

    // Create a deque c5 by copying the range c4[ first,  last)
    c4_Iter = c4.begin();
    c4_Iter++;
    c4_Iter++;
    deque <int> c5(c4.begin(), c4_Iter);

    // Create a deque c6 by copying the range c4[ first,  last) and
    // c2 with the allocator of deque
    c4_Iter = c4.begin();
    c4_Iter++;
    c4_Iter++;
    c4_Iter++;
    deque <int> c6(c4.begin(), c4_Iter, c2.get_allocator());

    // Create a deque c8 by copying the contents of an initializer_list
    // using brace initialization
    deque<int> c8({ 1, 2, 3, 4 });

    initializer_list<int> iList{ 5, 6, 7, 8 };
    deque<int> c9( iList);

    cout << "c1 = ";
    for (int i : c1)
        cout << i << " ";
    cout << endl;

    cout << "c2 = ";
    for (int i : c2)
        cout << i << " ";
    cout << endl;

    cout << "c3 = ";
    for (int i : c3)
        cout << i << " ";
    cout << endl;

    cout << "c4 = ";
    for (int i : c4)
        cout << i << " ";
    cout << endl;

    cout << "c5 = ";
    for (int i : c5)
        cout << i << " ";
    cout << endl;

    cout << "c6 = ";
    for (int i : c6)
        cout << i << " ";
    cout << endl;

    // Move deque c6 to deque c7
    deque <int> c7(move(c6));
    deque <int>::iterator c7_Iter;

    cout << "c7 =";
    for (int i : c7)
        cout << i << " ";
    cout << endl;

    cout << "c8 = ";
    for (int i : c8)
        cout << i << " ";
    cout << endl;

    cout << "c9 = ";
    for (int i : c9)
        cout << i << " ";
    cout << endl;

    int x = 3;
}
// deque_deque.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
    using namespace std;
   deque <int>::iterator c1_Iter, c2_Iter, c3_Iter, c4_Iter, c5_Iter, c6_Iter;

    // Create an empty deque c0
    deque <int> c0;

    // Create a deque c1 with 3 elements of default value 0
    deque <int> c1( 3 );

    // Create a deque c2 with 5 elements of value 2
    deque <int> c2( 5, 2 );

    // Create a deque c3 with 3 elements of value 1 and with the
    // allocator of deque c2
    deque <int> c3( 3, 1, c2.get_allocator( ) );

    // Create a copy, deque c4, of deque c2
    deque <int> c4( c2 );

    // Create a deque c5 by copying the range c4[ first,  last)
    c4_Iter = c4.begin( );
    c4_Iter++;
    c4_Iter++;
    deque <int> c5( c4.begin( ), c4_Iter );

    // Create a deque c6 by copying the range c4[ first,  last) and
    // c2 with the allocator of deque
    c4_Iter = c4.begin( );
   c4_Iter++;
   c4_Iter++;
   c4_Iter++;
   deque <int> c6( c4.begin( ), c4_Iter, c2.get_allocator( ) );

    // Create a deque c8 by copying the contents of an initializer_list
    // using brace initialization
    deque<int> c8({ 1, 2, 3, 4 });

        initializer_list<int> iList{ 5, 6, 7, 8 };
    deque<int> c9( iList);

    cout << "c1 = ";
    for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
        cout << *c1_Iter << " ";
    cout << endl;

    cout << "c2 = ";
    for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )
        cout << *c2_Iter << " ";
    cout << endl;

    cout << "c3 = ";
    for ( c3_Iter = c3.begin( ); c3_Iter != c3.end( ); c3_Iter++ )
        cout << *c3_Iter << " ";
    cout << endl;

    cout << "c4 = ";
    for ( c4_Iter = c4.begin( ); c4_Iter != c4.end( ); c4_Iter++ )
        cout << *c4_Iter << " ";
    cout << endl;

    cout << "c5 = ";
    for ( c5_Iter = c5.begin( ); c5_Iter != c5.end( ); c5_Iter++ )
        cout << *c5_Iter << " ";
    cout << endl;

    cout << "c6 = ";
    for ( c6_Iter = c6.begin( ); c6_Iter != c6.end( ); c6_Iter++ )
        cout << *c6_Iter << " ";
    cout << endl;

    // Move deque c6 to deque c7
    deque <int> c7( move(c6) );
    deque <int>::iterator c7_Iter;

    cout << "c7 =" ;
    for ( c7_Iter = c7.begin( ) ; c7_Iter != c7.end( ) ; c7_Iter++ )
        cout << " " << *c7_Iter;
    cout << endl;

    cout << "c8 = ";
    for (int i : c8)
        cout << i << " ";
    cout << endl;

    cout << "c9 = ";
    or (int i : c9)
        cout << i << " ";
    cout << endl;
}
```

## <a name="difference_type"></a><a name="difference_type"></a>difference_type

Tipo che specifica la differenza tra due iteratori che fanno riferimento agli elementi all'interno della stessa deque.

```cpp
typedef typename Allocator::difference_type difference_type;
```

### <a name="remarks"></a>Osservazioni

Un oggetto `difference_type` può anche essere descritto come il numero di elementi tra due puntatori.

### <a name="example"></a>Esempio

```cpp
// deque_diff_type.cpp
// compile with: /EHsc
#include <iostream>
#include <deque>
#include <algorithm>

int main( )
{
   using namespace std;

   deque <int> c1;
   deque <int>::iterator c1_Iter, c2_Iter;

   c1.push_back( 30 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1.push_back( 10 );
   c1.push_back( 30 );
   c1.push_back( 20 );

   c1_Iter = c1.begin( );
   c2_Iter = c1.end( );

   deque <int>::difference_type df_typ1, df_typ2, df_typ3;

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

## <a name="emplace"></a><a name="emplace"></a>emplace

Inserisce un elemento costruito sul posto nella deque in una posizione specificata.

```cpp
iterator emplace(
    const_iterator _Where,
    Type&& val);
```

### <a name="parameters"></a>Parametri

*_Where*\
Posizione nella [deque](../standard-library/deque-class.md) in cui viene inserito il primo elemento.

*Val*\
Valore dell'elemento da inserire nell'oggetto `deque`.

### <a name="return-value"></a>Valore restituito

La funzione restituisce un iteratore che punta alla posizione in cui è stato inserito il nuovo elemento nella deque.

### <a name="remarks"></a>Osservazioni

Un'operazione di inserimento può essere dispendiosa. Vedere `deque` per informazioni sulle prestazioni dell'oggetto `deque`.

### <a name="example"></a>Esempio

```cpp
// deque_emplace.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> v1;
   deque <int>::iterator Iter;

   v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );

   cout << "v1 =" ;
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout << " " << *Iter;
   cout << endl;

// initialize a deque of deques by moving v1
   deque < deque <int> > vv1;

   vv1.emplace( vv1.begin(), move( v1 ) );
   if ( vv1.size( ) != 0 && vv1[0].size( ) != 0 )
      {
      cout << "vv1[0] =";
      for (Iter = vv1[0].begin( ); Iter != vv1[0].end( ); Iter++ )
         cout << " " << *Iter;
      cout << endl;
      }
}
```

```Output
v1 = 10 20 30
vv1[0] = 10 20 30
```

## <a name="emplace_back"></a><a name="emplace_back"></a>emplace_back

Aggiunge un elemento costruito sul posto alla fine della deque.

```cpp
void emplace_back(Type&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Elemento aggiunto alla fine della [deque](../standard-library/deque-class.md).

### <a name="example"></a>Esempio

```cpp
// deque_emplace_back.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> v1;

   v1.push_back( 1 );
   if ( v1.size( ) != 0 )
      cout << "Last element: " << v1.back( ) << endl;

   v1.push_back( 2 );
   if ( v1.size( ) != 0 )
      cout << "New last element: " << v1.back( ) << endl;

// initialize a deque of deques by moving v1
   deque < deque <int> > vv1;

   vv1.emplace_back( move( v1 ) );
   if ( vv1.size( ) != 0 && vv1[0].size( ) != 0 )
      cout << "Moved last element: " << vv1[0].back( ) << endl;
}
```

```Output
Last element: 1
New last element: 2
Moved last element: 2
```

## <a name="emplace_front"></a><a name="emplace_front"></a>emplace_front

Aggiunge un elemento costruito sul posto alla fine della deque.

```cpp
void emplace_front(Type&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Elemento aggiunto all'inizio della [deque](../standard-library/deque-class.md).

### <a name="example"></a>Esempio

```cpp
// deque_emplace_front.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> v1;

   v1.push_back( 1 );
   if ( v1.size( ) != 0 )
      cout << "Last element: " << v1.back( ) << endl;

   v1.push_back( 2 );
   if ( v1.size( ) != 0 )
      cout << "New last element: " << v1.back( ) << endl;

// initialize a deque of deques by moving v1
   deque < deque <int> > vv1;

   vv1.emplace_front( move( v1 ) );
   if ( vv1.size( ) != 0 && vv1[0].size( ) != 0 )
      cout << "Moved last element: " << vv1[0].back( ) << endl;
}
```

```Output
Last element: 1
New last element: 2
Moved last element: 2
```

## <a name="empty"></a><a name="empty"></a>vuoto

Verifica se una deque è vuota.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se la deque è vuota; **`false`** se la deque non è vuota.

### <a name="example"></a>Esempio

```cpp
// deque_empty.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;

   c1.push_back( 10 );
   if ( c1.empty( ) )
      cout << "The deque is empty." << endl;
   else
      cout << "The deque is not empty." << endl;
}
```

```Output
The deque is not empty.
```

## <a name="end"></a><a name="end"></a>fine

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di una deque.

```cpp
const_iterator end() const;

iterator end();
```

### <a name="return-value"></a>Valore restituito

Iteratore ad accesso casuale che punta alla posizione successiva all'ultimo elemento in una deque. Se la deque è vuota, deque:: end == deque::begin.

### <a name="remarks"></a>Osservazioni

`end`viene usato per verificare se un iteratore ha raggiunto la fine della relativa deque.

### <a name="example"></a>Esempio

```cpp
// deque_end.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;
   deque <int>::iterator c1_Iter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1_Iter = c1.end( );
   c1_Iter--;
   cout << "The last integer of c1 is " << *c1_Iter << endl;

   c1_Iter--;
   *c1_Iter = 400;
   cout << "The new next-to-last integer of c1 is " << *c1_Iter << endl;

   // If a const iterator had been declared instead with the line:
   // deque <int>::const_iterator c1_Iter;
   // an error would have resulted when inserting the 400

   cout << "The deque is now:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
}
```

```Output
The last integer of c1 is 30
The new next-to-last integer of c1 is 400
The deque is now: 10 400 30
```

## <a name="erase"></a><a name="erase"></a>cancellare

Rimuove un elemento o un intervallo di elementi di una deque dalle posizioni specificate.

```cpp
iterator erase(iterator _Where);

iterator erase(iterator first, iterator last);
```

### <a name="parameters"></a>Parametri

*_Where*\
Posizione dell'elemento da rimuovere dalla deque.

*prima*\
Posizione del primo elemento rimosso dalla deque.

*Ultima*\
Posizione immediatamente successiva all'ultimo elemento rimosso dalla deque.

### <a name="return-value"></a>Valore restituito

Iteratore ad accesso casuale che definisce il primo elemento rimanente oltre tutti gli elementi rimossi o un puntatore alla fine della deque se tale elemento non esiste.

### <a name="remarks"></a>Osservazioni

`erase` non genera mai un'eccezione.

### <a name="example"></a>Esempio

```cpp
// deque_erase.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;
   deque <int>::iterator Iter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1.push_back( 40 );
   c1.push_back( 50 );
   cout << "The initial deque is: ";
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout << *Iter << " ";
   cout << endl;
   c1.erase( c1.begin( ) );
   cout << "After erasing the first element, the deque becomes:  ";
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout << *Iter << " ";
   cout << endl;
   Iter = c1.begin( );
   Iter++;
   c1.erase( Iter, c1.end( ) );
   cout << "After erasing all elements but the first, deque becomes: ";
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )
      cout << *Iter << " ";
   cout << endl;
}
```

```Output
The initial deque is: 10 20 30 40 50
After erasing the first element, the deque becomes:  20 30 40 50
After erasing all elements but the first, deque becomes: 20
```

## <a name="front"></a><a name="front"></a>fronte

Restituisce un riferimento al primo elemento di una deque.

```cpp
reference front();

const_reference front() const;
```

### <a name="return-value"></a>Valore restituito

Se la deque è vuota, il valore restituito è indefinito.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `front` viene assegnato a un oggetto `const_reference`, l'oggetto deque non può essere modificato. Se il valore restituito di `front` viene assegnato a un oggetto `reference`, l'oggetto deque può essere modificato.

Durante la compilazione con [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) definito come 1 o 2, se si prova ad accedere a un elemento in una deque vuota si verifica un errore di runtime.  Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// deque_front.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;

   c1.push_back( 10 );
   c1.push_back( 11 );

   int& i = c1.front( );
   const int& ii = c1.front( );

   cout << "The first integer of c1 is " << i << endl;
   i++;
   cout << "The second integer of c1 is " << ii << endl;
}
```

```Output
The first integer of c1 is 10
The second integer of c1 is 11
```

## <a name="get_allocator"></a><a name="get_allocator"></a>get_allocator

Restituisce una copia dell'oggetto allocatore usato per costruire la deque.

```cpp
Allocator get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Allocatore usato dalla deque.

### <a name="remarks"></a>Osservazioni

Gli allocatori per la classe deque specificano il modo in cui la classe gestisce l'archiviazione. Gli allocatori predefiniti forniti con le classi dei contenitori della libreria standard C++ sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.

### <a name="example"></a>Esempio

```cpp
// deque_get_allocator.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   // The following lines declare objects that use the default allocator.
   deque <int> c1;
   deque <int, allocator<int> > c2 = deque <int, allocator<int> >( allocator<int>( ) );

   // c3 will use the same allocator class as c1
   deque <int> c3( c1.get_allocator( ) );

   deque <int>::allocator_type xlst = c1.get_allocator( );
   // You can now call functions on the allocator class used by c1
}
```

## <a name="insert"></a><a name="insert"></a>inserire

Inserisce un elemento, un numero di elementi o un intervallo di elementi nella deque in una posizione specificata.

```cpp
iterator insert(
    const_iterator Where,
    const Type& Val);

iterator insert(
    const_iterator Where,
    Type&& Val);

void insert(
    iterator Where,
    size_type Count,
    const Type& Val);

template <class InputIterator>
void insert(
    iterator Where,
    InputIterator First,
    InputIterator Last);

iterator insert(
    iterator Where,initializer_list<Type>
IList);
```

### <a name="parameters"></a>Parametri

*In cui*\
Posizione nella deque di destinazione dove viene inserito il primo elemento.

*Val*\
Valore dell'elemento inserito nella deque.

*Conteggio*\
Numero di elementi da inserire nella deque.

*Prima*\
Posizione del primo elemento nell'intervallo di elementi nella deque di argomenti da copiare.

*Ultima*\
Posizione del primo elemento oltre l'intervallo di elementi nella deque di argomenti da copiare.

*IList*\
Oggetto initializer_list con gli elementi da inserire.

### <a name="return-value"></a>Valore restituito

Le prime due funzioni di inserimento restituiscono un iteratore che punta alla posizione in cui è stato inserito il nuovo elemento nella deque.

### <a name="remarks"></a>Osservazioni

Un'operazione di inserimento può essere dispendiosa.

## <a name="iterator"></a><a name="iterator"></a>iteratore

Tipo che specifica un iteratore ad accesso casuale in grado di leggere o modificare qualsiasi elemento in una deque.

```cpp
typedef implementation-defined iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo `iterator` può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio per [begin](#begin).

## <a name="max_size"></a><a name="max_size"></a>max_size

Restituisce la lunghezza massima della deque.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza massima possibile della deque.

### <a name="example"></a>Esempio

```cpp
// deque_max_size.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;
   deque <int>::size_type i;

   i = c1.max_size( );
   cout << "The maximum possible length of the deque is " << i << "." << endl;
}
```

## <a name="operator"></a><a name="op_at"></a>operator []

Restituisce un riferimento all'elemento della deque in una posizione specificata.

```cpp
reference operator[](size_type pos);

const_reference operator[](size_type pos) const;
```

### <a name="parameters"></a>Parametri

*POS*\
Posizione dell'elemento della deque a cui fare riferimento.

### <a name="return-value"></a>Valore restituito

Un riferimento all'elemento la cui posizione è specificata nell'argomento. Se la posizione specificata è maggiore della dimensione della deque, il risultato sarà non definito.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `operator[]` viene assegnato a un oggetto `const_reference`, l'oggetto deque non può essere modificato. Se il valore restituito di `operator[]` viene assegnato a un oggetto `reference`, l'oggetto deque può essere modificato.

Durante la compilazione con [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) definito come 1 o 2, se si tenta di accedere a un elemento esterno ai limiti della deque si verificherà un errore di runtime.  Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// deque_op_ref.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;

   c1.push_back( 10 );
   c1.push_back( 20 );
   cout << "The first integer of c1 is " << c1[0] << endl;
   int& i = c1[1];
   cout << "The second integer of c1 is " << i << endl;
}
```

```Output
The first integer of c1 is 10
The second integer of c1 is 20
```

## <a name="operator"></a><a name="op_eq"></a>operatore =

Sostituisce gli elementi di questa deque usando gli elementi di un'altra deque.

```cpp
deque& operator=(const deque& right);

deque& operator=(deque&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Deque che specifica il nuovo contenuto.

### <a name="remarks"></a>Osservazioni

Il primo override copia gli elementi in questa deque da *destra*, l'origine dell'assegnazione. Il secondo override sposta gli elementi in questa deque da *destra*.

Vengono rimossi gli elementi contenuti nella deque prima che venga eseguito l'operatore.

### <a name="example"></a>Esempio

```cpp
// deque_operator_as.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>
using namespace std;

typedef deque<int> MyDeque;

template<typename MyDeque> struct S;

template<typename MyDeque> struct S<MyDeque&> {
  static void show( MyDeque& d ) {
    MyDeque::const_iterator iter;
    for (iter = d.cbegin(); iter != d.cend(); iter++)
       cout << *iter << " ";
    cout << endl;
  }
};

template<typename MyDeque> struct S<MyDeque&&> {
  static void show( MyDeque&& d ) {
    MyDeque::const_iterator iter;
    for (iter = d.cbegin(); iter != d.cend(); iter++)
       cout << *iter << " ";
cout << " via unnamed rvalue reference " << endl;
  }
};

int main( )
{
   MyDeque d1, d2;

   d1.push_back(10);
   d1.push_back(20);
   d1.push_back(30);
   d1.push_back(40);
   d1.push_back(50);

   cout << "d1 = " ;
   S<MyDeque&>::show( d1 );

   d2 = d1;
   cout << "d2 = ";
   S<MyDeque&>::show( d2 );

   cout << "     ";
   S<MyDeque&&>::show ( move< MyDeque& > (d1) );
}
```

## <a name="pointer"></a>Puntatore <a name="pointer"></a>

Specifica un puntatore a un elemento in una [deque](../standard-library/deque-class.md).

```unstlib
typedef typename Allocator::pointer pointer;
```

### <a name="remarks"></a>Osservazioni

Un tipo `pointer` può essere usato per modificare il valore di un elemento. Per accedere a un elemento di deque in genere si usa un [iteratore](#iterator).

## <a name="pop_back"></a><a name="pop_back"></a>pop_back

Elimina l'elemento alla fine della deque.

```cpp
void pop_back();
```

### <a name="remarks"></a>Osservazioni

L'ultimo elemento non deve essere vuoto. `pop_back` non genera mai un'eccezione.

### <a name="example"></a>Esempio

```cpp
// deque_pop_back.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;

   c1.push_back( 1 );
   c1.push_back( 2 );
   cout << "The first element is: " << c1.front( ) << endl;
   cout << "The last element is: " << c1.back( ) << endl;

   c1.pop_back( );
   cout << "After deleting the element at the end of the deque, the "
      "last element is: " << c1.back( ) << endl;
}
```

```Output
The first element is: 1
The last element is: 2
After deleting the element at the end of the deque, the last element is: 1
```

## <a name="pop_front"></a><a name="pop_front"></a>pop_front

Elimina l'elemento all'inizio della deque.

```cpp
void pop_front();
```

### <a name="remarks"></a>Osservazioni

Il primo elemento non deve essere vuoto. `pop_front` non genera mai un'eccezione.

### <a name="example"></a>Esempio

```cpp
// deque_pop_front.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;

   c1.push_back( 1 );
   c1.push_back( 2 );
   cout << "The first element is: " << c1.front( ) << endl;
   cout << "The second element is: " << c1.back( ) << endl;

   c1.pop_front( );
   cout << "After deleting the element at the beginning of the "
      "deque, the first element is: " << c1.front( ) << endl;
}
```

```Output
The first element is: 1
The second element is: 2
After deleting the element at the beginning of the deque, the first element is: 2
```

## <a name="push_back"></a><a name="push_back"></a>push_back

Aggiunge un elemento alla fine della deque.

```cpp
void push_back(const Type& val);

void push_back(Type&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Elemento aggiunto alla fine della deque.

### <a name="remarks"></a>Osservazioni

Se viene generata un'eccezione, la deque rimane inalterata e viene nuovamente generata l'eccezione.

## <a name="push_front"></a><a name="push_front"></a>push_front

Aggiunge un elemento all'inizio della deque.

```cpp
void push_front(const Type& val);
void push_front(Type&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Elemento aggiunto all'inizio della deque.

### <a name="remarks"></a>Osservazioni

Se viene generata un'eccezione, la deque rimane inalterata e viene nuovamente generata l'eccezione.

### <a name="example"></a>Esempio

```cpp
// deque_push_front.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   deque <int> c1;

   c1.push_front( 1 );
   if ( c1.size( ) != 0 )
      cout << "First element: " << c1.front( ) << endl;

   c1.push_front( 2 );
   if ( c1.size( ) != 0 )
      cout << "New first element: " << c1.front( ) << endl;

// move initialize a deque of strings
   deque <string> c2;
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

## <a name="rbegin"></a><a name="rbegin"></a>rbegin

Restituisce un iteratore al primo elemento in una deque invertita.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```

### <a name="return-value"></a>Valore restituito

Iteratore inverso ad accesso casuale che punta al primo elemento di una deque invertita o a quello che era stato l'ultimo elemento nella deque non invertita.

### <a name="remarks"></a>Osservazioni

`rbegin` viene usato con una deque invertita proprio come [begin](#begin) viene usato con una deque.

Se il valore restituito di `rbegin` viene assegnato a un oggetto `const_reverse_iterator`, l'oggetto deque non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a un oggetto `reverse_iterator`, l'oggetto deque può essere modificato.

`rbegin` può essere usato per eseguire l'iterazione indietro su una deque.

### <a name="example"></a>Esempio

```cpp
// deque_rbegin.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;
   deque <int>::iterator c1_Iter;
   deque <int>::reverse_iterator c1_rIter;

   // If the following line had replaced the line above, an error
   // would have resulted in the line modifying an element
   // (commented below) because the iterator would have been const
   // deque <int>::const_reverse_iterator c1_rIter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1_rIter = c1.rbegin( );
   cout << "Last element in the deque is " << *c1_rIter << "." << endl;

   cout << "The deque contains the elements: ";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << *c1_Iter << " ";
   cout << "in that order.";
   cout << endl;

   // rbegin can be used to iterate through a deque in reverse order
   cout << "The reversed deque is: ";
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )
      cout << *c1_rIter << " ";
   cout << endl;

   c1_rIter = c1.rbegin( );
   *c1_rIter = 40;  // This would have caused an error if a
                    // const_reverse iterator had been declared as
                    // noted above
   cout << "Last element in deque is now " << *c1_rIter << "." << endl;
}
```

```Output
Last element in the deque is 30.
The deque contains the elements: 10 20 30 in that order.
The reversed deque is: 30 20 10
Last element in deque is now 40.
```

## <a name="reference"></a><a name="reference"></a>riferimento

Tipo che specifica un riferimento a un elemento archiviato in una deque.

```cpp
typedef typename Allocator::reference reference;
```

### <a name="example"></a>Esempio

```cpp
// deque_reference.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;

   c1.push_back( 10 );
   c1.push_back( 20 );

   const int &i = c1.front( );
   int &j = c1.back( );
   cout << "The first element is " << i << endl;
   cout << "The second element is " << j << endl;
}
```

```Output
The first element is 10
The second element is 20
```

## <a name="rend"></a><a name="rend"></a>rend

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di una deque invertita.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
```

### <a name="return-value"></a>Valore restituito

Iteratore ad accesso casuale inverso che punta alla posizione successiva all'ultimo elemento in una deque invertita, ovvero la posizione che precedeva il primo elemento nella deque non invertita.

### <a name="remarks"></a>Osservazioni

`rend` viene usato con una deque invertita proprio come [end](#end) viene usato con una deque.

Se il valore restituito di `rend` viene assegnato a un oggetto `const_reverse_iterator`, l'oggetto deque non può essere modificato. Se il valore restituito di `rend` viene assegnato a un oggetto `reverse_iterator`, l'oggetto deque può essere modificato.

`rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine della relativa deque.

Non è consigliabile dereferenziare il valore restituito da `rend`.

### <a name="example"></a>Esempio

```cpp
// deque_rend.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;

   deque <int> c1;
   deque <int>::iterator c1_Iter;
   deque <int>::reverse_iterator c1_rIter;
   // If the following line had replaced the line above, an error
   // would have resulted in the line modifying an element
   // (commented below) because the iterator would have been const
   // deque <int>::const_reverse_iterator c1_rIter;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1_rIter = c1.rend( );
   c1_rIter --; // Decrementing a reverse iterator moves it forward
                // in the deque (to point to the first element here)
   cout << "The first element in the deque is: " << *c1_rIter << endl;

   cout << "The deque is: ";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << *c1_Iter << " ";
   cout << endl;

   // rend can be used to test if an iteration is through all of
   // the elements of a reversed deque
   cout << "The reversed deque is: ";
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )
      cout << *c1_rIter << " ";
   cout << endl;

   c1_rIter = c1.rend( );
   c1_rIter--; // Decrementing the reverse iterator moves it backward
               // in the reversed deque (to the last element here)
   *c1_rIter = 40; // This modification of the last element would
                   // have caused an error if a const_reverse
                   // iterator had been declared (as noted above)
   cout << "The modified reversed deque is: ";
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )
      cout << *c1_rIter << " ";
   cout << endl;
}
```

```Output
The first element in the deque is: 10
The deque is: 10 20 30
The reversed deque is: 30 20 10
The modified reversed deque is: 30 20 40
```

## <a name="resize"></a><a name="resize"></a>ridimensionare

Specifica una nuova dimensione per una deque.

```cpp
void resize(size_type _Newsize);

void resize(size_type _Newsize, Type val);
```

### <a name="parameters"></a>Parametri

*_Newsize*\
Nuova dimensione della deque.

*Val*\
Valore dei nuovi elementi da aggiungere alla deque se la nuova dimensione è maggiore di quella originale. Se il valore viene omesso, ai nuovi elementi viene assegnato il valore predefinito per la classe.

### <a name="remarks"></a>Osservazioni

Se la dimensione della deque è inferiore alla dimensione richiesta, *_Newsize*, gli elementi vengono aggiunti alla deque fino a quando non raggiunge la dimensione richiesta.

Se la dimensione della deque è maggiore della dimensione richiesta, gli elementi più vicini alla fine della deque vengono eliminati finché la deque non raggiunge la dimensione *_Newsize*.

Se la dimensione attuale della deque corrisponde a quella richiesta, non viene eseguita alcuna azione.

[size](#size) riflette la dimensione corrente della deque.

### <a name="example"></a>Esempio

```cpp
// deque_resize.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;

   c1.push_back( 10 );
   c1.push_back( 20 );
   c1.push_back( 30 );

   c1.resize( 4,40 );
   cout << "The size of c1 is: " << c1.size( ) << endl;
   cout << "The value of the last element is " << c1.back( ) << endl;

   c1.resize( 5 );
   cout << "The size of c1 is now: " << c1.size( ) << endl;
   cout << "The value of the last element is now " << c1.back( ) << endl;

   c1.resize( 2 );
   cout << "The reduced size of c1 is: " << c1.size( ) << endl;
   cout << "The value of the last element is now " << c1.back( ) << endl;
}
```

```Output
The size of c1 is: 4
The value of the last element is 40
The size of c1 is now: 5
The value of the last element is now 0
The reduced size of c1 is: 2
The value of the last element is now 20
```

## <a name="reverse_iterator"></a><a name="reverse_iterator"></a>reverse_iterator

Tipo che fornisce un iteratore ad accesso casuale in grado di leggere o modificare un elemento in una deque invertita.

```cpp
typedef std::reverse_iterator<iterator> reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo `reverse_iterator` viene usato per eseguire l'iterazione sulla deque.

### <a name="example"></a>Esempio

Vedere l'esempio per rbegin.

## <a name="shrink_to_fit"></a><a name="shrink_to_fit"></a>shrink_to_fit

Elimina la capacità in eccesso.

```cpp
void shrink_to_fit();
```

### <a name="remarks"></a>Osservazioni

Non esiste un modo portabile per determinare se `shrink_to_fit` riduce la memoria usata da una [deque](../standard-library/deque-class.md).

### <a name="example"></a>Esempio

```cpp
// deque_shrink_to_fit.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> v1;
   //deque <int>::iterator Iter;

   v1.push_back( 1 );
   v1.push_back( 2 );
   cout << "Current size of v1 = "
      << v1.size( ) << endl;
   v1.shrink_to_fit();
   cout << "Current size of v1 = "
      << v1.size( ) << endl;
}
```

```Output
Current size of v1 = 1
Current size of v1 = 1
```

## <a name="size"></a><a name="size"></a>dimensioni

Restituisce il numero di elementi nella deque.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza corrente della deque.

### <a name="example"></a>Esempio

```cpp
// deque_size.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1;
   deque <int>::size_type i;

   c1.push_back( 1 );
   i = c1.size( );
   cout << "The deque length is " << i << "." << endl;

   c1.push_back( 2 );
   i = c1.size( );
   cout << "The deque length is now " << i << "." << endl;
}
```

```Output
The deque length is 1.
The deque length is now 2.
```

## <a name="size_type"></a><a name="size_type"></a>size_type

Tipo che conta il numero di elementi in una deque.

```cpp
typedef typename Allocator::size_type size_type;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [size](#size).

## <a name="swap"></a><a name="swap"></a>scambio

Scambia gli elementi di due deque.

```cpp
void swap(deque<Type, Allocator>& right);

friend void swap(deque<Type, Allocator>& left, deque<Type, Allocator>& right) template <class Type, class Allocator>
void swap(deque<Type, Allocator>& left, deque<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Deque in cui sono presenti gli elementi da scambiare o deque i cui elementi devono essere scambiati con quelli della deque `left`.

*sinistra*\
Deque i cui elementi devono essere scambiati con quelli della deque a *destra*.

### <a name="example"></a>Esempio

```cpp
// deque_swap.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2, c3;
   deque <int>::iterator c1_Iter;

   c1.push_back( 1 );
   c1.push_back( 2 );
   c1.push_back( 3 );
   c2.push_back( 10 );
   c2.push_back( 20 );
   c3.push_back( 100 );

   cout << "The original deque c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   c1.swap( c2 );

   cout << "After swapping with c2, deque c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   swap( c1,c3 );

   cout << "After swapping with c3, deque c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;

   swap<>(c1, c2);
   cout << "After swapping with c2, deque c1 is:";
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )
      cout << " " << *c1_Iter;
   cout << endl;
}
```

```Output
The original deque c1 is: 1 2 3
After swapping with c2, deque c1 is: 10 20
After swapping with c3, deque c1 is: 100
After swapping with c2, deque c1 is: 1 2 3
```

## <a name="value_type"></a><a name="value_type"></a>value_type

Tipo che rappresenta il tipo di dati archiviati in una deque.

```cpp
typedef typename Allocator::value_type value_type;
```

### <a name="remarks"></a>Osservazioni

`value_type` è un sinonimo per il parametro di modello `Type`.

### <a name="example"></a>Esempio

```cpp
// deque_value_type.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>
int main( )
{
   using namespace std;
   deque<int>::value_type AnInt;
   AnInt = 44;
   cout << AnInt << endl;
}
```

```Output
44
```

## <a name="see-also"></a>Vedere anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
