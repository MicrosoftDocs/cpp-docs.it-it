---
title: vector (classe)
description: Riferimento per l' C++ implementazione della libreria standard Microsoft della classe Vector.
ms.date: 02/07/2020
f1_keywords:
- vector/std::vector::allocator_type
- vector/std::vector::const_iterator
- vector/std::vector::const_pointer
- vector/std::vector::const_reference
- vector/std::vector::const_reverse_iterator
- vector/std::vector::difference_type
- vector/std::vector::iterator
- vector/std::vector::pointer
- vector/std::vector::reference
- vector/std::vector::reverse_iterator
- vector/std::vector::size_type
- vector/std::vector::value_type
- vector/std::vector::assign
- vector/std::vector::at
- vector/std::vector::back
- vector/std::vector::begin
- vector/std::vector::capacity
- vector/std::vector::cbegin
- vector/std::vector::cend
- vector/std::vector::crbegin
- vector/std::vector::crend
- vector/std::vector::clear
- vector/std::vector::data
- vector/std::vector::emplace
- vector/std::vector::emplace_back
- vector/std::vector::empty
- vector/std::vector::end
- vector/std::vector::erase
- vector/std::vector::front
- vector/std::vector::get_allocator
- vector/std::vector::insert
- vector/std::vector::max_size
- vector/std::vector::pop_back
- vector/std::vector::push_back
- vector/std::vector::rbegin
- vector/std::vector::rend
- vector/std::vector::reserve
- vector/std::vector::resize
- vector/std::vector::shrink_to_fit
- vector/std::vector::size
- vector/std::vector::swap
helpviewer_keywords:
- std::vector [C++], allocator_type
- std::vector [C++], const_iterator
- std::vector [C++], const_pointer
- std::vector [C++], const_reference
- std::vector [C++], const_reverse_iterator
- std::vector [C++], difference_type
- std::vector [C++], iterator
- std::vector [C++], pointer
- std::vector [C++], reference
- std::vector [C++], reverse_iterator
- std::vector [C++], size_type
- std::vector [C++], value_type
- std::vector [C++], assign
- std::vector [C++], at
- std::vector [C++], back
- std::vector [C++], begin
- std::vector [C++], capacity
- std::vector [C++], cbegin
- std::vector [C++], cend
- std::vector [C++], crbegin
- std::vector [C++], crend
- std::vector [C++], clear
- std::vector [C++], data
- std::vector [C++], emplace
- std::vector [C++], emplace_back
- std::vector [C++], empty
- std::vector [C++], end
- std::vector [C++], erase
- std::vector [C++], front
- std::vector [C++], get_allocator
- std::vector [C++], insert
- std::vector [C++], max_size
- std::vector [C++], pop_back
- std::vector [C++], push_back
- std::vector [C++], rbegin
- std::vector [C++], rend
- std::vector [C++], reserve
- std::vector [C++], resize
- std::vector [C++], shrink_to_fit
- std::vector [C++], size
- std::vector [C++], swap
ms.assetid: a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d
ms.openlocfilehash: ed987409dc99ea9b1dade632a5fa5deeb322347a
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79422395"
---
# <a name="vector-class"></a>vector (classe)

La C++ classe Vector della libreria standard è un modello di classe per i contenitori sequenziali. Un vettore archivia gli elementi di un determinato tipo in una disposizione lineare e consente l'accesso casuale veloce a qualsiasi elemento. Un vettore è il contenitore preferito per una sequenza quando le prestazioni di accesso casuale sono Premium.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type, class Allocator = allocator<Type>>
class vector
```

### <a name="parameters"></a>Parametri

*Tipo*\
Tipo di dati degli elementi da archiviare nel vettore.

\ *allocatore*
Il tipo che rappresenta l'oggetto allocatore archiviato che incapsula dettagli sull'allocazione del vettore e deallocazione della memoria. Questo argomento è facoltativo e il valore predefinito è `allocator<Type>`.

## <a name="remarks"></a>Osservazioni

I vettori consentono inserimenti ed eliminazioni costanti nel tempo alla fine della sequenza. L'inserimento o l'eliminazione di elementi nel mezzo di un vettore richiede un tempo lineare. Il contenitore della [classe deque](../standard-library/deque-class.md) è più veloce in corrispondenza di inserimenti ed eliminazioni all'inizio e alla fine di una sequenza. Il contenitore della [classe List](../standard-library/list-class.md) è più veloce in caso di inserimenti ed eliminazioni in qualsiasi posizione all'interno di una sequenza.

La riallocazione dei vettori si verifica quando una funzione membro deve aumentare la sequenza contenuta nell'oggetto vettore oltre la capacità di archiviazione corrente. Altre operazioni di inserimento e cancellazione possono modificare i vari indirizzi di archiviazione all'interno della sequenza. In questi casi, gli iteratori o i riferimenti che puntano alle parti modificate della sequenza diventeranno non validi. Se non si verifica alcuna riallocazione, restano validi solo gli iteratori e i riferimenti prima del punto di inserimento o eliminazione.

Il [vettore\<bool > Classe](../standard-library/vector-bool-class.md) è una specializzazione completa del vettore del modello di classe per gli elementi di tipo `bool`. Dispone di un allocatore per il tipo sottostante utilizzato dalla specializzazione.

[Vector\<bool > classe Reference](../standard-library/vector-bool-class.md#reference_class) è una classe annidata i cui oggetti possono fornire riferimenti agli elementi (singoli bit) all'interno di un oggetto Vector\<bool >.

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|||
|-|-|
|[vector](#vector)|Costruisce un vettore di dimensioni specifiche, con elementi di un valore specifico, con un oggetto `allocator` specifico o come copia di un altro vettore.|

### <a name="typedefs"></a>Typedef

|||
|-|-|
|[allocator_type](#allocator_type)|Tipo che rappresenta la classe `allocator` per l'oggetto vector.|
|[const_iterator](#const_iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere un elemento **const** in un vettore.|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore a un elemento **const** di un vettore.|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento a un elemento **const** archiviato in un vettore. Viene usato per la lettura e l'esecuzione di operazioni **const** .|
|[const_reverse_iterator](#const_reverse_iterator)|Tipo che fornisce un iteratore ad accesso rapido che può leggere qualsiasi elemento **const** nel vettore.|
|[difference_type](#difference_type)|Tipo che offre la differenza tra gli indirizzi di due elementi in un vettore.|
|[iterator](#iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in un vettore.|
|[pointer](#pointer)|Tipo che fornisce un puntatore a un elemento in un vettore.|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento archiviato in un vettore.|
|[reverse_iterator](#reverse_iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in un vettore inverso.|
|[size_type](#size_type)|Tipo che conta il numero di elementi in un vettore.|
|[value_type](#value_type)|Tipo che rappresenta il tipo di dati archiviati in un vettore.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[assign](#assign)|Cancella un vettore e copia gli elementi specificati nel vettore vuoto.|
|[at](#at)|Restituisce un riferimento all'elemento in una posizione specificata nel vettore.|
|[back](#back)|Restituisce un riferimento all'ultimo elemento del vettore.|
|[begin](#begin)|Restituisce un iteratore ad accesso casuale al primo elemento nel vettore.|
|[capacity](#capacity)|Restituisce il numero di elementi che il vettore può contenere senza allocare più spazio di archiviazione.|
|[cbegin](#cbegin)|Restituisce un iteratore const ad accesso casuale al primo elemento nel vettore.|
|[cend](#cend)|Restituisce un iteratore const ad accesso casuale che punta appena oltre la fine del vettore.|
|[crbegin](#crbegin)|Restituisce un iteratore const che punta al primo elemento di un vettore invertito.|
|[crend](#crend)|Restituisce un iteratore const alla fine di un vettore invertito.|
|[deselezionare](#clear)|Cancella gli elementi del vettore.|
|[data](#data)|Restituisce un puntatore al primo elemento nel vettore.|
|[emplace](#emplace)|Inserisce un elemento costruito sul posto nel vettore in una posizione specificata.|
|[emplace_back](#emplace_back)|Aggiunge un elemento costruito sul posto alla fine del vettore.|
|[empty](#empty)|Verifica se il contenitore del vettore è vuoto.|
|[end](#end)|Restituisce un iteratore ad accesso casuale che punta alla fine del vettore.|
|[erase](#erase)|Rimuove un elemento o un intervallo di elementi di un vettore dalle posizioni specificate.|
|[front](#front)|Restituisce un riferimento al primo elemento di un vettore.|
|[get_allocator](#get_allocator)|Restituisce un oggetto alla classe `allocator` usata da un vettore.|
|[insert](#insert)|Inserisce un elemento o un numero di elementi nel vettore in una posizione specificata.|
|[max_size](#max_size)|Restituisce la lunghezza massima del vettore.|
|[pop_back](#pop_back)|Elimina l'elemento alla fine del vettore.|
|[push_back](#push_back)|Aggiunge un elemento alla fine del vettore.|
|[rbegin](#rbegin)|Restituisce un iteratore al primo elemento in un vettore inverso.|
|[rend](#rend)|Restituisce un iteratore alla fine di un vettore invertito.|
|[reserve](#reserve)|Riserva una lunghezza di archiviazione minima per un oggetto vector.|
|[resize](#resize)|Specifica una nuova dimensione per un vettore.|
|[shrink_to_fit](#shrink_to_fit)|Elimina la capacità in eccesso.|
|[size](#size)|Restituisce il numero di elementi nel vettore.|
|[swap](#swap)|Scambia gli elementi di due vettori.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator&#91;&#93;](#op_at)|Restituisce un riferimento a un elemento di vettore in corrispondenza di una posizione specificata.|
|[operator=](#op_eq)|Sostituisce gli elementi del vettore con una copia di un altro vettore.|

## <a name="allocator_type"></a>allocator_type

Tipo che rappresenta la classe allocator per l'oggetto vector.

```cpp
typedef Allocator allocator_type;
```

### <a name="remarks"></a>Osservazioni

`allocator_type` è un sinonimo per il parametro di modello `Allocator`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get_allocator](#get_allocator) indicazioni su come usare `allocator_type`.

## <a name="assign"></a>assegnare

Cancella un vettore e copia gli elementi specificati nel vettore vuoto.

```cpp
void assign(size_type count, const Type& value);
void assign(initializer_list<Type> init_list);

template <class InputIterator>
void assign(InputIterator first, InputIterator last);
```

### <a name="parameters"></a>Parametri

*primo*\
Posizione del primo elemento nell'intervallo di elementi da copiare.

*ultimo*\
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

*conteggio*\
Numero di copie di un elemento da inserire nel vettore.

*value*\
Valore dell'elemento da inserire nel vettore.

*init_list*\
Oggetto initializer_list contenente gli elementi da inserire.

### <a name="remarks"></a>Osservazioni

In primo luogo, `assign` Cancella tutti gli elementi esistenti in un vettore. Quindi, `assign` inserisce un intervallo specificato di elementi dal vettore originale in un vettore o inserisce copie di un nuovo elemento valore specificato in un vettore.

### <a name="example"></a>Esempio

```cpp
/ vector_assign.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1, v2, v3;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    cout << "v1 = ";
    for (auto& v : v1){
        cout << v << " ";
    }
    cout << endl;

    v2.assign(v1.begin(), v1.end());
    cout << "v2 = ";
    for (auto& v : v2){
        cout << v << " ";
    }
    cout << endl;

    v3.assign(7, 4);
    cout << "v3 = ";
    for (auto& v : v3){
        cout << v << " ";
    }
    cout << endl;

    v3.assign({ 5, 6, 7 });
    for (auto& v : v3){
        cout << v << " ";
    }
    cout << endl;
}
```

## <a name="at"></a>a

Restituisce un riferimento all'elemento in una posizione specificata nel vettore.

```cpp
reference at(size_type position);

const_reference at(size_type position) const;
```

### <a name="parameters"></a>Parametri

*posizione*\
Numero di posizione o indice dell'elemento a cui fare riferimento nel vettore.

### <a name="return-value"></a>Valore restituito

Riferimento all'elemento con indice nell'argomento. Se la *posizione* è maggiore della dimensione del vettore, `at` genera un'eccezione.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `at` viene assegnato a una `const_reference`, l'oggetto Vector non può essere modificato. Se il valore restituito di `at` viene assegnato a un oggetto `reference`, l'oggetto vector può essere modificato.

### <a name="example"></a>Esempio

```cpp
// vector_at.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;

   v1.push_back( 10 );
   v1.push_back( 20 );

   const int &i = v1.at( 0 );
   int &j = v1.at( 1 );
   cout << "The first element is " << i << endl;
   cout << "The second element is " << j << endl;
}
```

```Output
The first element is 10
The second element is 20
```

## <a name="back"></a>Indietro

Restituisce un riferimento all'ultimo elemento del vettore.

```cpp
reference back();

const_reference back() const;
```

### <a name="return-value"></a>Valore restituito

Ultimo elemento del vettore. Se il vettore è vuoto, il valore restituito non è definito.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `back` viene assegnato a una `const_reference`, l'oggetto Vector non può essere modificato. Se il valore restituito di `back` viene assegnato a un oggetto `reference`, l'oggetto vector può essere modificato.

Durante la compilazione tramite [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) definito come 1 o 2, se si tenta di accedere a un elemento di un vettore vuoto si verificherà un errore di runtime. Per altre informazioni, vedere [iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// vector_back.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace std;
   vector <int> v1;

   v1.push_back( 10 );
   v1.push_back( 11 );

   int& i = v1.back( );
   const int& ii = v1.front( );

   cout << "The last integer of v1 is " << i << endl;
   i--;
   cout << "The next-to-last integer of v1 is "<< ii << endl;
}
```

## <a name="begin"></a>iniziare

Restituisce un iteratore ad accesso casuale al primo elemento nel vettore.

```cpp
const_iterator begin() const;

iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore ad accesso casuale che punta al primo elemento dell'oggetto `vector` o alla posizione successiva a un oggetto `vector` vuoto. Confrontare sempre il valore restituito con [vector:: end](#end) per assicurarsi che sia valido.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `begin` viene assegnato a [vector:: const_iterator](#const_iterator), l'oggetto `vector` non può essere modificato. Se il valore restituito di `begin` viene assegnato a un oggetto [vector::iterator](#iterator), l'oggetto `vector` può essere modificato.

### <a name="example"></a>Esempio

```cpp
// vector_begin.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> c1;
    vector<int>::iterator c1_Iter;
    vector<int>::const_iterator c1_cIter;

    c1.push_back(1);
    c1.push_back(2);

    cout << "The vector c1 contains elements:";
    c1_Iter = c1.begin();
    for (; c1_Iter != c1.end(); c1_Iter++)
    {
        cout << " " << *c1_Iter;
    }
    cout << endl;

    cout << "The vector c1 now contains elements:";
    c1_Iter = c1.begin();
    *c1_Iter = 20;
    for (; c1_Iter != c1.end(); c1_Iter++)
    {
        cout << " " << *c1_Iter;
    }
    cout << endl;

    // The following line would be an error because iterator is const
    // *c1_cIter = 200;
}
```

```Output
The vector c1 contains elements: 1 2
The vector c1 now contains elements: 20 2
```

## <a name="capacity"></a>capacità

Restituisce il numero di elementi che il vettore può contenere senza allocare più spazio di archiviazione.

```cpp
size_type capacity() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza di archiviazione corrente allocata per il vettore.

### <a name="remarks"></a>Osservazioni

La funzione membro [resize](#resize) sarà più efficiente se viene allocata memoria sufficiente per contenerla. Usare la funzione membro [reserve](#reserve) per specificare la quantità di memoria allocata.

### <a name="example"></a>Esempio

```cpp
// vector_capacity.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;

   v1.push_back( 1 );
   cout << "The length of storage allocated is "
        << v1.capacity( ) << "." << endl;

   v1.push_back( 2 );
   cout << "The length of storage allocated is now "
        << v1.capacity( ) << "." << endl;
}
```

```Output
The length of storage allocated is 1.
The length of storage allocated is now 2.
```

## <a name="cbegin"></a>cbegin

Restituisce un iteratore **const** che punta al primo elemento nell'intervallo.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore **const** ad accesso casuale che punta al primo elemento dell'intervallo o alla posizione oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()`).

### <a name="remarks"></a>Osservazioni

Con il valore restituito di `cbegin`, gli elementi dell'intervallo non possono essere modificati.

È possibile usare questa funzione membro anziché la funzione membro `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, si consideri `Container` essere un contenitore modificabile (non **const**) di qualsiasi tipo che supporta `begin()` e `cbegin()`.

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator
```

## <a name="cend"></a>cend

Restituisce un iteratore **const** che punta alla posizione immediatamente successiva all'ultimo elemento di un intervallo.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore **const** ad accesso casuale che punta appena oltre la fine dell'intervallo.

### <a name="remarks"></a>Osservazioni

`cend` viene utilizzato per verificare se un iteratore ha superato la fine del relativo intervallo.

È possibile usare questa funzione membro anziché la funzione membro `end()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, si consideri `Container` essere un contenitore modificabile (non **const**) di qualsiasi tipo che supporta `end()` e `cend()`.

```cpp
auto i1 = Container.end();
// i1 is Container<T>::iterator
auto i2 = Container.cend();

// i2 is Container<T>::const_iterator
```

Non è necessario dereferenziare il valore restituito da `cend`. Utilizzarlo solo per i confronti.

## <a name="clear"></a>deselezionare

Cancella gli elementi del vettore.

```cpp
void clear();
```

### <a name="example"></a>Esempio

```cpp
// vector_clear.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;

   v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );

   cout << "The size of v1 is " << v1.size( ) << endl;
   v1.clear( );
   cout << "The size of v1 after clearing is " << v1.size( ) << endl;
}
```

```Output
The size of v1 is 3
The size of v1 after clearing is 0
```

## <a name="const_iterator"></a>const_iterator

Tipo che fornisce un iteratore ad accesso casuale che può leggere un elemento **const** in un vettore.

```cpp
typedef implementation-defined const_iterator;
```

### <a name="remarks"></a>Osservazioni

Non è possibile usare un tipo `const_iterator` per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [back](#back) per indicazioni su come usare `const_iterator`.

## <a name="const_pointer"></a>const_pointer

Tipo che fornisce un puntatore a un elemento **const** di un vettore.

```cpp
typedef typename Allocator::const_pointer const_pointer;
```

### <a name="remarks"></a>Osservazioni

Non è possibile usare un tipo `const_pointer` per modificare il valore di un elemento.

Per accedere a un elemento del vettore viene in genere usato un oggetto [iterator](#iterator).

## <a name="const_reference"></a>const_reference

Tipo che fornisce un riferimento a un elemento **const** archiviato in un vettore. Viene usato per la lettura e l'esecuzione di operazioni **const** .

```cpp
typedef typename Allocator::const_reference const_reference;
```

### <a name="remarks"></a>Osservazioni

Non è possibile usare un tipo `const_reference` per modificare il valore di un elemento.

### <a name="example"></a>Esempio

```cpp
// vector_const_ref.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;

   v1.push_back( 10 );
   v1.push_back( 20 );

   const vector <int> v2 = v1;
   const int &i = v2.front( );
   const int &j = v2.back( );
   cout << "The first element is " << i << endl;
   cout << "The second element is " << j << endl;

   // The following line would cause an error as v2 is const
   // v2.push_back( 30 );
}
```

```Output
The first element is 10
The second element is 20
```

## <a name="const_reverse_iterator"></a>const_reverse_iterator

Tipo che fornisce un iteratore ad accesso rapido che può leggere qualsiasi elemento **const** nel vettore.

```cpp
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene usato per scorrere il vettore in ordine inverso.

### <a name="example"></a>Esempio

Vedere [rbegin](#rbegin) per un esempio di come dichiarare e usare un iteratore inverso.

## <a name="crbegin"></a>crbegin

Restituisce un iteratore const che punta al primo elemento di un vettore invertito.

```cpp
const_reverse_iterator crbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore const inverso ad accesso casuale che punta al primo elemento di un oggetto [vector](../standard-library/vector-class.md) invertito o che punta a quello che era stato l'ultimo elemento nell'oggetto `vector` non invertito.

### <a name="remarks"></a>Osservazioni

Con il valore restituito di `crbegin`, l'oggetto `vector` non può essere modificato.

### <a name="example"></a>Esempio

```cpp
// vector_crbegin.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::iterator v1_Iter;
   vector <int>::const_reverse_iterator v1_rIter;

   v1.push_back( 1 );
   v1.push_back( 2 );

   v1_Iter = v1.begin( );
   cout << "The first element of vector is "
        << *v1_Iter << "." << endl;

   v1_rIter = v1.crbegin( );
   cout << "The first element of the reversed vector is "
        << *v1_rIter << "." << endl;
}
```

```Output
The first element of vector is 1.
The first element of the reversed vector is 2.
```

## <a name="crend"></a>crend

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un vettore invertito.

```cpp
const_reverse_iterator crend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore const inverso ad accesso casuale che punta alla posizione successiva all'ultimo elemento di un oggetto [vector](../standard-library/vector-class.md) invertito, ossia la posizione che precedeva il primo elemento nell'oggetto `vector` non invertito.

### <a name="remarks"></a>Osservazioni

`crend` viene usato con un oggetto `vector` invertito proprio come [vector::cend](#cend) viene usato con un oggetto `vector`.

Con il valore restituito di `crend` (opportunamente decrementato), l'oggetto `vector` non può essere modificato.

`crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine dell'oggetto `vector`.

Non è necessario dereferenziare il valore restituito da `crend`. Utilizzarlo solo per i confronti.

### <a name="example"></a>Esempio

```cpp
// vector_crend.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::const_reverse_iterator v1_rIter;

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

## <a name="data"></a>dati

Restituisce un puntatore al primo elemento nel vettore.

```cpp
const_pointer data() const;

pointer data();
```

### <a name="return-value"></a>Valore restituito

Puntatore al primo elemento dell'oggetto [vector](../standard-library/vector-class.md) o alla posizione successiva a un oggetto `vector` vuoto.

### <a name="example"></a>Esempio

```cpp
// vector_data.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> c1;
    vector<int>::pointer c1_ptr;
    vector<int>::const_pointer c1_cPtr;

    c1.push_back(1);
    c1.push_back(2);

    cout << "The vector c1 contains elements:";
    c1_cPtr = c1.data();
    for (size_t n = c1.size(); 0 < n; --n, c1_cPtr++)
    {
        cout << " " << *c1_cPtr;
    }
    cout << endl;

    cout << "The vector c1 now contains elements:";
    c1_ptr = c1.data();
    *c1_ptr = 20;
    for (size_t n = c1.size(); 0 < n; --n, c1_ptr++)
    {
        cout << " " << *c1_ptr;
    }
    cout << endl;
}
```

```Output
The vector c1 contains elements: 1 2
The vector c1 now contains elements: 20 2
```

## <a name="difference_type"></a>difference_type

Tipo che fornisce la differenza tra due iteratori che fanno riferimento agli elementi all'interno dello stesso vettore.

```cpp
typedef typename Allocator::difference_type difference_type;
```

### <a name="remarks"></a>Osservazioni

Un oggetto `difference_type` può anche essere descritto come il numero di elementi tra due puntatori, poiché un puntatore a un elemento ne contiene l'indirizzo.

Per accedere a un elemento del vettore viene in genere usato un oggetto [iterator](#iterator).

### <a name="example"></a>Esempio

```cpp
// vector_diff_type.cpp
// compile with: /EHsc
#include <iostream>
#include <vector>
#include <algorithm>

int main( )
{
   using namespace std;

   vector <int> c1;
   vector <int>::iterator c1_Iter, c2_Iter;

   c1.push_back( 30 );
   c1.push_back( 20 );
   c1.push_back( 30 );
   c1.push_back( 10 );
   c1.push_back( 30 );
   c1.push_back( 20 );

   c1_Iter = c1.begin( );
   c2_Iter = c1.end( );

   vector <int>::difference_type   df_typ1, df_typ2, df_typ3;

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

## <a name="emplace"></a>emplace

Inserisce un elemento costruito sul posto nel vettore in una posizione specificata.

```cpp
template <class... Types>
iterator emplace(
    const_iterator position,
    Types&&... args);
```

### <a name="parameters"></a>Parametri

*posizione*\
Posizione dell'oggetto [vector](../standard-library/vector-class.md) in cui viene inserito il primo elemento.

*argomenti*\
Argomenti del costruttore. La funzione deduce di quale costruttore eseguire l'overload per richiamare il costruttore in base agli argomenti forniti.

### <a name="return-value"></a>Valore restituito

La funzione restituisce un iteratore che punta alla posizione in cui è stato inserito il nuovo elemento nell'oggetto `vector`.

### <a name="remarks"></a>Osservazioni

Qualsiasi operazione di inserimento può essere dispendiosa. per una discussione sulle prestazioni `vector`, vedere [classe Vector](../standard-library/vector-class.md) .

### <a name="example"></a>Esempio

```cpp
// vector_emplace.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::iterator Iter;

   v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );

   cout << "v1 =" ;
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout << " " << *Iter;
   cout << endl;

// initialize a vector of vectors by moving v1
   vector < vector <int> > vv1;

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

## <a name="emplace_back"></a>emplace_back

Aggiunge un elemento costruito sul posto alla fine del vettore.

```cpp
template <class... Types>
void emplace_back(Types&&... args);
```

### <a name="parameters"></a>Parametri

*argomenti*\
Argomenti del costruttore. La funzione deduce di quale costruttore eseguire l'overload per richiamare il costruttore in base agli argomenti forniti.

### <a name="example"></a>Esempio

```cpp
#include <vector>
struct obj
{
   obj(int, double) {}
};

int main()
{
   std::vector<obj> v;
   v.emplace_back(1, 3.14); // obj in created in place in the vector
}
```

## <a name="empty"></a>vuoto

Verifica se il vettore è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il vettore è vuoto. **false** se il vettore non è vuoto.

### <a name="example"></a>Esempio

```cpp
// vector_empty.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;

   v1.push_back( 10 );

   if ( v1.empty( ) )
      cout << "The vector is empty." << endl;
   else
      cout << "The vector is not empty." << endl;
}
```

```Output
The vector is not empty.
```

## <a name="end"></a>fine

Restituisce l'iteratore successivo all'ultimo valore.

```cpp
iterator end();

const_iterator end() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore successivo all'ultimo valore per il vettore. Se il vettore è vuoto, `vector::end() == vector::begin()`.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `end` viene assegnato a una variabile di tipo `const_iterator`, l'oggetto Vector non può essere modificato. Se il valore restituito di `end` viene assegnato a una variabile di tipo `iterator`, l'oggetto Vector può essere modificato.

### <a name="example"></a>Esempio

```cpp
// vector_end.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>
int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::iterator v1_Iter;

   v1.push_back( 1 );
   v1.push_back( 2 );

   for ( v1_Iter = v1.begin( ) ; v1_Iter != v1.end( ) ; v1_Iter++ )
      cout << *v1_Iter << endl;
}
```

```Output
1
2
```

## <a name="erase"></a>cancellare

Rimuove un elemento o un intervallo di elementi di un vettore dalle posizioni specificate.

```cpp
iterator erase(
    const_iterator position);

iterator erase(
    const_iterator first,
    const_iterator last);
```

### <a name="parameters"></a>Parametri

*posizione*\
Posizione dell'elemento da rimuovere dal vettore.

*primo*\
Posizione del primo elemento rimosso dal vettore.

*ultimo*\
Posizione oltre l'ultimo elemento rimosso dal vettore.

### <a name="return-value"></a>Valore restituito

Iteratore che definisce il primo elemento rimanente oltre tutti gli elementi rimossi o puntatore alla fine del vettore se tale elemento non esiste.

### <a name="example"></a>Esempio

```cpp
// vector_erase.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::iterator Iter;

   v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );
   v1.push_back( 40 );
   v1.push_back( 50 );

   cout << "v1 =" ;
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout << " " << *Iter;
   cout << endl;

   v1.erase( v1.begin( ) );
   cout << "v1 =";
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout << " " << *Iter;
   cout << endl;

   v1.erase( v1.begin( ) + 1, v1.begin( ) + 3 );
   cout << "v1 =";
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout << " " << *Iter;
   cout << endl;
}
```

```Output
v1 = 10 20 30 40 50
v1 = 20 30 40 50
v1 = 20 50
```

## <a name="front"></a>fronte

Restituisce un riferimento al primo elemento di un vettore.

```cpp
reference front();

const_reference front() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento al primo elemento dell'oggetto vector. Se il vettore è vuoto, il valore restituito non è definito.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `front` viene assegnato a una `const_reference`, l'oggetto Vector non può essere modificato. Se il valore restituito di `front` viene assegnato a un oggetto **reference**, l'oggetto vector può essere modificato.

Durante la compilazione tramite [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) definito come 1 o 2, se si tenta di accedere a un elemento di un vettore vuoto si verificherà un errore di runtime. Per altre informazioni, vedere [iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// vector_front.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;

   v1.push_back( 10 );
   v1.push_back( 11 );

   int& i = v1.front( );
   const int& ii = v1.front( );

   cout << "The first integer of v1 is "<< i << endl;
   // by incrementing i, we move the front reference to the second element
   i++;
   cout << "Now, the first integer of v1 is "<< i << endl;
}
```

## <a name="get_allocator"></a>get_allocator

Restituisce una copia dell'oggetto allocatore usato per costruire il vettore.

```cpp
Allocator get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Allocatore usato dal vettore.

### <a name="remarks"></a>Osservazioni

Gli allocatori per la classe vector specificano il modo in cui la classe gestisce l'archiviazione. Gli allocatori predefiniti forniti con le classi contenitore della libreria standard C++ sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è una C++ funzionalità avanzata.

### <a name="example"></a>Esempio

```cpp
// vector_get_allocator.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   // The following lines declare objects that use the default allocator.
   vector<int> v1;
   vector<int, allocator<int> > v2 = vector<int, allocator<int> >(allocator<int>( )) ;

   // v3 will use the same allocator class as v1
   vector <int> v3( v1.get_allocator( ) );

   vector<int>::allocator_type xvec = v3.get_allocator( );
   // You can now call functions on the allocator class used by vec
}
```

## <a name="insert"></a>inserire

Inserisce un elemento, un numero di elementi o un intervallo di elementi nel vettore in una posizione specificata.

```cpp
iterator insert(
    const_iterator position,
    const Type& value);

iterator insert(
    const_iterator position,
    Type&& value);

void insert(
    const_iterator position,
    size_type count,
    const Type& value);

template <class InputIterator>
void insert(
    const_iterator position,
    InputIterator first,
    InputIterator last);
```

### <a name="parameters"></a>Parametri

*posizione*\
Posizione nel vettore in cui viene inserito il primo elemento.

*value*\
Valore dell'elemento da inserire nel vettore.

*conteggio*\
Numero di elementi da inserire nel vettore.

*primo*\
Posizione del primo elemento nell'intervallo di elementi da copiare.

*ultimo*\
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

### <a name="return-value"></a>Valore restituito

Le prime due funzioni `insert` restituiscono un iteratore che punta alla posizione in cui è stato inserito il nuovo elemento nel vettore.

### <a name="remarks"></a>Osservazioni

Come precondizione, *First* e *Last* non devono essere iteratori nel vettore o il comportamento non è definito. Qualsiasi operazione di inserimento può essere dispendiosa. per una discussione sulle prestazioni `vector`, vedere [classe Vector](../standard-library/vector-class.md) .

### <a name="example"></a>Esempio

```cpp
// vector_insert.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::iterator Iter;

   v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );

   cout << "v1 =" ;
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout << " " << *Iter;
   cout << endl;

   v1.insert( v1.begin( ) + 1, 40 );
   cout << "v1 =";
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout << " " << *Iter;
   cout << endl;
   v1.insert( v1.begin( ) + 2, 4, 50 );

   cout << "v1 =";
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout << " " << *Iter;
   cout << endl;

   const auto v2 = v1;
   v1.insert( v1.begin( )+1, v2.begin( )+2, v2.begin( )+4 );
   cout << "v1 =";
   for (Iter = v1.begin( ); Iter != v1.end( ); Iter++ )
      cout << " " << *Iter;
   cout << endl;

// initialize a vector of vectors by moving v1
   vector < vector <int> > vv1;

   vv1.insert( vv1.begin(), move( v1 ) );
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
v1 = 10 40 20 30
v1 = 10 40 50 50 50 50 20 30
v1 = 10 50 50 40 50 50 50 50 20 30
vv1[0] = 10 50 50 40 50 50 50 50 20 30
```

## <a name="iterator"></a>iteratore

Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in un vettore.

```cpp
typedef implementation-defined iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo **iterator** può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio per [begin](#begin).

## <a name="max_size"></a>max_size

Restituisce la lunghezza massima del vettore.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza massima possibile del vettore.

### <a name="example"></a>Esempio

```cpp
// vector_max_size.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::size_type i;

   i = v1.max_size( );
   cout << "The maximum possible length of the vector is " << i << "." << endl;
}
```

## <a name="op_at"></a>operator []

Restituisce un riferimento a un elemento di vettore in corrispondenza di una posizione specificata.

```cpp
reference operator[](size_type position);

const_reference operator[](size_type position) const;
```

### <a name="parameters"></a>Parametri

*posizione*\
Posizione dell'elemento di vettore.

### <a name="return-value"></a>Valore restituito

Se la posizione specificata è maggiore o uguale alla dimensione del contenitore, il risultato sarà non definito.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `operator[]` viene assegnato a una `const_reference`, l'oggetto Vector non può essere modificato. Se il valore restituito di `operator[]` viene assegnato a un riferimento, l'oggetto vector può essere modificato.

Durante la compilazione tramite [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) definito come 1 o 2, se si tenta di accedere a un elemento non incluso nei limiti del vettore si verificherà un errore di runtime. Per altre informazioni, vedere [iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// vector_op_ref.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;

   v1.push_back( 10 );
   v1.push_back( 20 );

   int& i = v1[1];
   cout << "The second integer of v1 is " << i << endl;
}
```

## <a name="op_eq"></a>operatore =

Sostituisce gli elementi del vettore con una copia di un altro vettore.

```cpp
vector& operator=(const vector& right);

vector& operator=(vector&& right);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Oggetto [vector](../standard-library/vector-class.md) da copiare nell'oggetto `vector`.

### <a name="remarks"></a>Osservazioni

Dopo la cancellazione di tutti gli elementi esistenti in un `vector`, `operator=` copia o sposta il contenuto di *direttamente* nella `vector`.

### <a name="example"></a>Esempio

```cpp
// vector_operator_as.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector<int> v1, v2, v3;
   vector<int>::iterator iter;

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
   v2 = move(v1);
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << *iter << " ";
   cout << endl;
}
```

## <a name="pointer"></a>puntatore

Tipo che fornisce un puntatore a un elemento in un vettore.

```cpp
typedef typename Allocator::pointer pointer;
```

### <a name="remarks"></a>Osservazioni

Un tipo **pointer** può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

```cpp
// vector_pointer.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
    using namespace std;
    vector<int> v;
    v.push_back( 11 );
    v.push_back( 22 );

    vector<int>::pointer ptr = &v[0];
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    *ptr = 44;
    cout << *ptr << endl;
}
```

```Output
11
22
44
```

## <a name="pop_back"></a>pop_back

Elimina l'elemento alla fine del vettore.

```cpp
void pop_back();
```

### <a name="remarks"></a>Osservazioni

Per un esempio di codice, vedere [vector::push_back()](#push_back).

## <a name="push_back"></a>push_back

Aggiunge un elemento alla fine del vettore.

```cpp
void push_back(const T& value);

void push_back(T&& value);
```

### <a name="parameters"></a>Parametri

*value*\
Valore da assegnare all'elemento aggiunto alla fine del vettore.

### <a name="example"></a>Esempio

```cpp
// compile with: /EHsc /W4
#include <vector>
#include <iostream>

using namespace std;

template <typename T> void print_elem(const T& t) {
    cout << "(" << t << ") ";
}

template <typename T> void print_collection(const T& t) {
    cout << "  " << t.size() << " elements: ";

    for (const auto& p : t) {
        print_elem(p);
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(10 + i);
    }

    cout << "vector data: " << endl;
    print_collection(v);

    // pop_back() until it's empty, printing the last element as we go
    while (v.begin() != v.end()) {
        cout << "v.back(): "; print_elem(v.back()); cout << endl;
        v.pop_back();
    }
}
```

## <a name="rbegin"></a>rbegin

Restituisce un iteratore al primo elemento in un vettore inverso.

```cpp
reverse_iterator rbegin();
const_reverse_iterator rbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore inverso ad accesso casuale che punta al primo elemento di un oggetto vector invertito (o che punta a quello che era stato l'ultimo elemento nell'oggetto vector non invertito).

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `rbegin` viene assegnato a una `const_reverse_iterator`, l'oggetto Vector non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a un oggetto `reverse_iterator`, l'oggetto vector può essere modificato.

### <a name="example"></a>Esempio

```cpp
// vector_rbegin.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::iterator v1_Iter;
   vector <int>::reverse_iterator v1_rIter;

   v1.push_back( 1 );
   v1.push_back( 2 );

   v1_Iter = v1.begin( );
   cout << "The first element of vector is "
        << *v1_Iter << "." << endl;

   v1_rIter = v1.rbegin( );
   cout << "The first element of the reversed vector is "
        << *v1_rIter << "." << endl;
}
```

```Output
The first element of vector is 1.
The first element of the reversed vector is 2.
```

## <a name="reference"></a>riferimento

Tipo che fornisce un riferimento a un elemento archiviato in un vettore.

```cpp
typedef typename Allocator::reference reference;
```

### <a name="example"></a>Esempio

Vedere [at](#at) per un esempio di come usare **reference** nella classe vector.

## <a name="rend"></a>rend

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un vettore invertito.

```cpp
const_reverse_iterator rend() const;
reverse_iterator rend();
```

### <a name="return-value"></a>Valore restituito

Iteratore inverso ad accesso casuale che punta alla posizione successiva all'ultimo elemento di un oggetto vector invertito, ossia la posizione che precedeva il primo elemento nell'oggetto vector non invertito).

### <a name="remarks"></a>Osservazioni

`rend` viene usato con un vettore invertito proprio come [end](#end) viene usato con un vettore.

Se il valore restituito di `rend` viene assegnato a una `const_reverse_iterator`, l'oggetto Vector non può essere modificato. Se il valore restituito di `rend` viene assegnato a un oggetto `reverse_iterator`, l'oggetto vector può essere modificato.

`rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo vettore.

Non è necessario dereferenziare il valore restituito da `rend`. Utilizzarlo solo per i confronti.

### <a name="example"></a>Esempio

```cpp
// vector_rend.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::reverse_iterator v1_rIter;

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

## <a name="reserve"></a>riserva

Riserva una lunghezza di archiviazione minima per un oggetto vettore, allocando lo spazio se necessario.

```cpp
void reserve(size_type count);
```

### <a name="parameters"></a>Parametri

*conteggio*\
Lunghezza di archiviazione minima da allocare per il vettore.

### <a name="example"></a>Esempio

```cpp
// vector_reserve.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   //vector <int>::iterator Iter;

   v1.push_back( 1 );
   cout << "Current capacity of v1 = "
      << v1.capacity( ) << endl;
   v1.reserve( 20 );
   cout << "Current capacity of v1 = "
      << v1.capacity( ) << endl;
}
```

```Output
Current capacity of v1 = 1
Current capacity of v1 = 20
```

## <a name="resize"></a>ridimensionare

Specifica una nuova dimensione per un vettore.

```cpp
void resize(size_type new_size);
void resize(size_type new_size, Type value);
```

### <a name="parameters"></a>Parametri

*new_size*\
La nuova dimensione del vettore.

*value*\
Valore di inizializzazione dei nuovi elementi aggiunti al vettore se la nuova dimensione è maggiore di quella originaria. Se il valore viene omesso, i nuovi oggetti usano il proprio costruttore predefinito.

### <a name="remarks"></a>Osservazioni

Se le dimensioni del contenitore sono inferiori alla dimensione richiesta, *new_size*`resize` aggiunge elementi al vettore finché non raggiunge la dimensione richiesta. Quando le dimensioni del contenitore sono maggiori della dimensione richiesta, `resize` Elimina gli elementi più vicini alla fine del contenitore fino a raggiungere le dimensioni *new_size*. Se la dimensione attuale del contenitore corrisponde a quella richiesta, non viene eseguita alcuna azione.

[size](#size) riflette la dimensione corrente del vettore.

### <a name="example"></a>Esempio

```cpp
// vectorsizing.cpp
// compile with: /EHsc /W4
// Illustrates vector::reserve, vector::max_size,
// vector::resize, vector::resize, and vector::capacity.
//
// Functions:
//
//    vector::max_size - Returns maximum number of elements vector could
//                       hold.
//
//    vector::capacity - Returns number of elements for which memory has
//                       been allocated.
//
//    vector::size - Returns number of elements in the vector.
//
//    vector::resize - Reallocates memory for vector, preserves its
//                     contents if new size is larger than existing size.
//
//    vector::reserve - Allocates elements for vector to ensure a minimum
//                      size, preserving its contents if the new size is
//                      larger than existing size.
//
//    vector::push_back - Appends (inserts) an element to the end of a
//                        vector, allocating memory for it if necessary.
//
//////////////////////////////////////////////////////////////////////

// The debugger cannot handle symbols more than 255 characters long.
// The C++ Standard Library often creates symbols longer than that.
// The warning can be disabled:
//#pragma warning(disable:4786)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename C> void print(const string& s, const C& c) {
    cout << s;

    for (const auto& e : c) {
        cout << e << " ";
    }
    cout << endl;
}

void printvstats(const vector<int>& v) {
    cout << "   the vector's size is: " << v.size() << endl;
    cout << "   the vector's capacity is: " << v.capacity() << endl;
    cout << "   the vector's maximum size is: " << v.max_size() << endl;
}

int main()
{
    // declare a vector that begins with 0 elements.
    vector<int> v;

    // Show statistics about vector.
    cout << endl << "After declaring an empty vector:" << endl;
    printvstats(v);
    print("   the vector's contents: ", v);

    // Add one element to the end of the vector.
    v.push_back(-1);
    cout << endl << "After adding an element:" << endl;
    printvstats(v);
    print("   the vector's contents: ", v);

    for (int i = 1; i < 10; ++i) {
        v.push_back(i);
    }
    cout << endl << "After adding 10 elements:" << endl;
    printvstats(v);
    print("   the vector's contents: ", v);

    v.resize(6);
    cout << endl << "After resizing to 6 elements without an initialization value:" << endl;
    printvstats(v);
    print("   the vector's contents: ", v);

    v.resize(9, 999);
    cout << endl << "After resizing to 9 elements with an initialization value of 999:" << endl;
    printvstats(v);
    print("   the vector's contents: ", v);

    v.resize(12);
    cout << endl << "After resizing to 12 elements without an initialization value:" << endl;
    printvstats(v);
    print("   the vector's contents: ", v);

    // Ensure there's room for at least 1000 elements.
    v.reserve(1000);
    cout << endl << "After vector::reserve(1000):" << endl;
    printvstats(v);

    // Ensure there's room for at least 2000 elements.
    v.resize(2000);
    cout << endl << "After vector::resize(2000):" << endl;
    printvstats(v);
}
```

## <a name="reverse_iterator"></a>reverse_iterator

Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in un vettore inverso.

```cpp
typedef std::reverse_iterator<iterator> reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo `reverse_iterator` viene usato per eseguire l'iterazione sul vettore in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio per [rbegin](#rbegin).

## <a name="shrink_to_fit"></a>shrink_to_fit

Elimina la capacità in eccesso.

```cpp
void shrink_to_fit();
```

### <a name="example"></a>Esempio

```cpp
// vector_shrink_to_fit.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   //vector <int>::iterator Iter;

   v1.push_back( 1 );
   cout << "Current capacity of v1 = "
      << v1.capacity( ) << endl;
   v1.reserve( 20 );
   cout << "Current capacity of v1 = "
      << v1.capacity( ) << endl;
   v1.shrink_to_fit();
   cout << "Current capacity of v1 = "
      << v1.capacity( ) << endl;
}
```

```Output
Current capacity of v1 = 1
Current capacity of v1 = 20
Current capacity of v1 = 1
```

## <a name="size"></a>dimensioni

Restituisce il numero di elementi nel vettore.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza corrente del vettore.

### <a name="example"></a>Esempio

```cpp
// vector_size.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::size_type i;

   v1.push_back( 1 );
   i = v1.size( );
   cout << "Vector length is " << i << "." << endl;

   v1.push_back( 2 );
   i = v1.size( );
   cout << "Vector length is now " << i << "." << endl;
}
```

```Output
Vector length is 1.
Vector length is now 2.
```

## <a name="size_type"></a>size_type

Tipo che conta il numero di elementi in un vettore.

```cpp
typedef typename Allocator::size_type size_type;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [capacity](#capacity).

## <a name="swap"></a>scambio

Scambia gli elementi di due vettori.

```cpp
void swap(
    vector<Type, Allocator>& right);

friend void swap(
    vector<Type, Allocator>& left,
    vector<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Vettore che fornisce gli elementi da scambiare. O, un vettore i cui elementi devono essere scambiati con gli elementi nel vettore a *sinistra*.

\ a *sinistra*
Vettore i cui elementi devono essere scambiati con gli elementi nel vettore a *destra*.

### <a name="example"></a>Esempio

```cpp
// vector_swap.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1, v2;

   v1.push_back( 1 );
   v1.push_back( 2 );
   v1.push_back( 3 );

   v2.push_back( 10 );
   v2.push_back( 20 );

   cout << "The number of elements in v1 = " << v1.size( ) << endl;
   cout << "The number of elements in v2 = " << v2.size( ) << endl;
   cout << endl;

   v1.swap( v2 );

   cout << "The number of elements in v1 = " << v1.size( ) << endl;
   cout << "The number of elements in v2 = " << v2.size( ) << endl;
}
```

```Output
The number of elements in v1 = 3
The number of elements in v2 = 2

The number of elements in v1 = 2
The number of elements in v2 = 3
```

## <a name="value_type"></a>value_type

Tipo che rappresenta il tipo di dati archiviati in un vettore.

```cpp
typedef typename Allocator::value_type value_type;
```

### <a name="remarks"></a>Osservazioni

`value_type` è un sinonimo per il parametro di modello `Type`.

### <a name="example"></a>Esempio

```cpp
// vector_value_type.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector<int>::value_type AnInt;
   AnInt = 44;
   cout << AnInt << endl;
}
```

```Output
44
```

## <a name="vector"></a>vettore

Costruisce un vettore. Gli overload costruiscono un vettore di una dimensione specifica o con elementi di un valore specifico. O, come copia di tutto o parte di un altro vettore. Alcuni overload consentono inoltre di specificare l'allocatore da utilizzare.

```cpp
vector();
explicit vector(const Allocator& allocator);
explicit vector(size_type count);
vector(size_type count, const Type& value);
vector(size_type count, const Type& value, const Allocator& allocator);

vector(const vector& source);
vector(vector&& source);
vector(initializer_list<Type> init_list, const Allocator& allocator);

template <class InputIterator>
vector(InputIterator first, InputIterator last);
template <class InputIterator>
vector(InputIterator first, InputIterator last, const Allocator& allocator);
```

### <a name="parameters"></a>Parametri

\ *allocatore*
Classe Allocator da usare con questo oggetto. [get_allocator](#get_allocator) restituisce la classe di un allocatore per l'oggetto.

*conteggio*\
Numero di elementi del vettore costruito.

*value*\
Valore degli elementi del vettore costruito.

\ di *origine*
Vettore di cui il vettore costruito deve essere una copia.

*primo*\
Posizione del primo elemento nell'intervallo di elementi da copiare.

*ultimo*\
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

*init_list*\
`initializer_list` contenente gli elementi da copiare.

### <a name="remarks"></a>Osservazioni

Tutti i costruttori archiviano un oggetto allocatore (*allocator*) e inizializzano il vettore.

I primi due costruttori specificano un vettore iniziale vuoto. Il secondo costruttore specifica in modo esplicito il tipo di allocatore (*allocatore*) da usare.

Il terzo costruttore specifica una ripetizione di un numero specificato di elementi del*count*valore predefinito per la classe `Type`.

Il quarto e il quinto costruttore specificano una ripetizione di (*count*) elementi del *valore*value.

Il sesto costruttore specifica una copia dell' *origine*del vettore.

Il settimo costruttore sposta l' *origine*del vettore.

L'ottavo costruttore usa un oggetto initializer_list per specificare gli elementi.

Il nono e il decimo costruttore copiano l'intervallo [`first`, `last`) di un vettore.

### <a name="example"></a>Esempio

```cpp
// vector_ctor.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    vector <int>::iterator v1_Iter, v2_Iter, v3_Iter, v4_Iter, v5_Iter, v6_Iter;

    // Create an empty vector v0
    vector <int> v0;

    // Create a vector v1 with 3 elements of default value 0
    vector <int> v1(3);

    // Create a vector v2 with 5 elements of value 2
    vector <int> v2(5, 2);

    // Create a vector v3 with 3 elements of value 1 and with the allocator
    // of vector v2
    vector <int> v3(3, 1, v2.get_allocator());

    // Create a copy, vector v4, of vector v2
    vector <int> v4(v2);

    // Create a new temporary vector for demonstrating copying ranges
    vector <int> v5(5);
    for (auto i : v5) {
        v5[i] = i;
    }

    // Create a vector v6 by copying the range v5[ first,  last)
    vector <int> v6(v5.begin() + 1, v5.begin() + 3);

    cout << "v1 =";
    for (auto& v : v1){
        cout << " " << v;
    }
    cout << endl;

    cout << "v2 =";
    for (auto& v : v2){
        cout << " " << v;
    }
    cout << endl;

    cout << "v3 =";
    for (auto& v : v3){
        cout << " " << v;
    }
    cout << endl;
    cout << "v4 =";
    for (auto& v : v4){
        cout << " " << v;
    }
    cout << endl;

    cout << "v5 =";
    for (auto& v : v5){
        cout << " " << v;
    }
    cout << endl;

    cout << "v6 =";
    for (auto& v : v6){
        cout << " " << v;
    }
    cout << endl;

    // Move vector v2 to vector v7
    vector <int> v7(move(v2));
    vector <int>::iterator v7_Iter;

    cout << "v7 =";
    for (auto& v : v7){
        cout << " " << v;
    }
    cout << endl;

    vector<int> v8{ { 1, 2, 3, 4 } };
    for (auto& v : v8){
        cout << " " << v ;
    }
    cout << endl;
}
```

```Output
v1 = 0 0 0v2 = 2 2 2 2 2v3 = 1 1 1v4 = 2 2 2 2 2v5 = 0 1 2 3 4v6 = 1 2v7 = 2 2 2 2 21 2 3 4
```

## <a name="see-also"></a>Vedere anche

[Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
