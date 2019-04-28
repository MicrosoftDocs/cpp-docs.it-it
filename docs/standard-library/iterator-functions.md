---
title: Funzioni &lt;iterator&gt;
ms.date: 11/04/2016
f1_keywords:
- xutility/std::advance
- xutility/std::back_inserter
- xutility/std::begin
- xutility/std::cbegin
- xutility/std::cend
- xutility/std::distance
- xutility/std::end
- xutility/std::front_inserter
- xutility/std::inserter
- xutility/std::make_checked_array_iterator
- xutility/std::make_move_iterator
- xutility/std::make_unchecked_array_iterator
- xutility/std::next
- xutility/std::prev
ms.assetid: 4a57c9a3-7e36-411f-8655-e0be2eec88e7
helpviewer_keywords:
- std::advance [C++]
- std::back_inserter [C++]
- std::begin [C++]
- std::cbegin [C++]
- std::cend [C++]
- std::distance [C++]
- std::end [C++]
- std::front_inserter [C++]
- std::inserter [C++]
- std::make_checked_array_iterator [C++]
- std::make_move_iterator [C++]
- std::make_unchecked_array_iterator [C++]
- std::next [C++]
- std::prev [C++]
ms.openlocfilehash: f6ea1ac49dabbfc34af9c8ddd020543f606d37a4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62224142"
---
# <a name="ltiteratorgt-functions"></a>Funzioni &lt;iterator&gt;

||||
|-|-|-|
|[advance](#advance)|[back_inserter](#back_inserter)|[begin](#begin)|
|[cbegin](#cbegin)|[cend](#cend)|[distance](#distance)|
|[end](#end)|[front_inserter](#front_inserter)|[inserter](#inserter)|
|[make_checked_array_iterator](#make_checked_array_iterator)|[make_move_iterator](#make_move_iterator)|[make_unchecked_array_iterator](#make_unchecked_array_iterator)|
|[next](#next)|[prev](#prev)|

## <a name="advance"></a>  advance

Incrementa un iteratore di un numero specificato di posizioni.

```cpp
template <class InputIterator, class Distance>
void advance(
    InputIterator& InIt,
    Distance Off);
```

### <a name="parameters"></a>Parametri

*InIt*<br/>
Iteratore che deve essere incrementato e che deve soddisfare i requisiti per un iteratore di input.

*Off*<br/>
Tipo integrale convertibile nel tipo di differenza dell'iteratore e che specifica il numero di incrementi in cui è necessario far avanzare la posizione dell'iteratore.

### <a name="remarks"></a>Note

L'intervallo fatto avanzare deve essere non singolare, in cui gli iteratori devono essere deferenziabili o oltre la fine.

Se il `InputIterator` soddisfa i requisiti per un tipo di iteratore bidirezionale, quindi *disattivato* può essere negativo. Se `InputIterator` è un tipo di iteratore di input o inoltro, *disattivato* deve essere non negativo.

La funzione advance presenta una complessità costante quando `InputIterator` soddisfa i requisiti per un iteratore ad accesso casuale; in caso contrario, presenta una complessità lineare ed è pertanto potenzialmente dispendiosa.

### <a name="example"></a>Esempio

```cpp
// iterator_advance.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   list<int> L;
   for ( i = 1 ; i < 9 ; ++i )
   {
      L.push_back ( i );
   }
   list <int>::iterator L_Iter, LPOS = L.begin ( );

   cout << "The list L is: ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout << *L_Iter << " ";
   cout << ")." << endl;

   cout << "The iterator LPOS initially points to the first element: "
        << *LPOS << "." << endl;

   advance ( LPOS , 4 );
   cout << "LPOS is advanced 4 steps forward to point"
        << " to the fifth element: "
        << *LPOS << "." << endl;

   advance ( LPOS , -3 );
   cout << "LPOS is moved 3 steps back to point to the "
        << "2nd element: " << *LPOS << "." << endl;
}
```

```Output
The list L is: ( 1 2 3 4 5 6 7 8 ).
The iterator LPOS initially points to the first element: 1.
LPOS is advanced 4 steps forward to point to the fifth element: 5.
LPOS is moved 3 steps back to point to the 2nd element: 2.
```

## <a name="back_inserter"></a>  back_inserter

Crea un iteratore in grado di inserire gli elementi nella parte finale di un contenitore specificato.

```cpp
template <class Container>
back_insert_iterator<Container> back_inserter(Container& _Cont);
```

### <a name="parameters"></a>Parametri

*_Cont*<br/>
Contenitore in cui deve essere eseguito l'inserimento inverso.

### <a name="return-value"></a>Valore restituito

Oggetto `back_insert_iterator` associato all'oggetto contenitore *_Cont*.

### <a name="remarks"></a>Note

All'interno della libreria standard C++, l'argomento deve fare riferimento a uno dei tre contenitori sequenziali che hanno la funzione membro `push_back`: [Classe deque](../standard-library/deque-class.md), [Classe list](../standard-library/list-class.md) o [Classe vector](../standard-library/vector-class.md).

### <a name="example"></a>Esempio

```cpp
// iterator_back_inserter.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for ( i = 0 ; i < 3 ; ++i )
   {
      vec.push_back ( i );
   }

   vector <int>::iterator vIter;
   cout << "The initial vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout << *vIter << " ";
   cout << ")." << endl;

   // Insertions can be done with template function
   back_insert_iterator<vector<int> > backiter ( vec );
*backiter = 30;
   backiter++;
*backiter = 40;

   // Alternatively, insertions can be done with the
   // back_insert_iterator member function
   back_inserter ( vec ) = 500;
   back_inserter ( vec ) = 600;

   cout << "After the insertions, the vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;
}
```

```Output
The initial vector vec is: ( 0 1 2 ).
After the insertions, the vector vec is: ( 0 1 2 30 40 500 600 ).
```

## <a name="begin"></a>  begin

Recupera un iteratore al primo elemento di un contenitore specificato.

```cpp
template <class Container>
auto begin(Container& cont)  `
   -> decltype(cont.begin());

template <class Container>
auto begin(const Container& cont)   `
   -> decltype(cont.begin());

template <class Ty, class Size>
Ty *begin(Ty (& array)[Size]);
```

### <a name="parameters"></a>Parametri

*cont*<br/>
Contenitore.

*array*<br/>
Matrice di oggetti di tipo `Ty`.

### <a name="return-value"></a>Valore restituito

Le prime due funzioni di modello restituiscono `cont.begin()`. La prima funzione è non costante; la seconda è costante.

La terza funzione modello restituisce *matrice*.

### <a name="example"></a>Esempio

È consigliabile utilizzare questa funzione di modello anziché il membro del contenitore `begin()` quando è richiesto un comportamento più generico.

```cpp
// cl.exe /EHsc /nologo /W4 /MTd
#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>

template <typename C> void reverse_sort(C& c) {
    using std::begin;
    using std::end;

    std::sort(begin(c), end(c), std::greater<>());
}

template <typename C> void print(const C& c) {
    for (const auto& e : c) {
        std::cout << e << " ";
    }

    std::cout << "\n";
}

int main() {
    std::vector<int> v = { 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1 };

    print(v);
    reverse_sort(v);
    print(v);

    std::cout << "--\n";

    int arr[] = { 23, 70, 35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1 };

    print(arr);
    reverse_sort(arr);
    print(arr);
}
```

```Output
11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
52 40 34 26 20 17 16 13 11 10 8 5 4 2 1
--
23 70 35 106 53 160 80 40 20 10 5 16 8 4 2 1
160 106 80 70 53 40 35 23 20 16 10 8 5 4 2 1
```

La funzione `reverse_sort` supporta contenitori di qualsiasi tipo, oltre alle matrici normali, perché chiama la versione non membro di `begin()`. Se `reverse_sort` è stato codificato per utilizzare il membro del contenitore `begin()`:

```cpp
template <typename C>
void reverse_sort(C& c) {
    using std::begin;
    using std::end;

    std::sort(c.begin(), c.end(), std::greater<>());

}
```

L'invio ad esso di una matrice a genererebbe il seguente errore del compilatore:

```Output
error C2228: left of '.begin' must have class/struct/union
```

## <a name="cbegin"></a>  cbegin

Recupera un iteratore const al primo elemento di un contenitore specificato.

```cpp
template <class Container>
auto cbegin(const Container& cont)
   -> decltype(cont.begin());
```

### <a name="parameters"></a>Parametri

*cont*<br/>
Contenitore o un initializer_list.

### <a name="return-value"></a>Valore restituito

Costante `cont.begin()`.

### <a name="remarks"></a>Note

Questa funzione viene eseguita con tutti i contenitori della libreria standard C++ e con [initializer_list](../standard-library/initializer-list-class.md).

È possibile utilizzare questa funzione membro anziché il modello `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, prendere in considerazione `Container` sia un modificabili (non - **const**) contenitore oppure `initializer_list` di qualsiasi tipo che supporta `begin()` e `cbegin()`.

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator
```

## <a name="cend"></a>  cend

Recupera un iteratore const all'elemento successivo all'ultimo elemento del contenitore specificato.

```cpp
template <class Container>
auto cend(const Container& cont)
   -> decltype(cont.end());
```

### <a name="parameters"></a>Parametri

*cont*<br/>
Contenitore o un initializer_list.

### <a name="return-value"></a>Valore restituito

Costante `cont.end()`.

### <a name="remarks"></a>Note

Questa funzione viene eseguita con tutti i contenitori della libreria standard C++ e con [initializer_list](../standard-library/initializer-list-class.md).

È possibile usare questa funzione membro in sostituzione della funzione modello [end()](../standard-library/iterator-functions.md#end) per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, prendere in considerazione `Container` sia un modificabili (non - **const**) contenitore oppure `initializer_list` di qualsiasi tipo che supporta `end()` e `cend()`.

```cpp
auto i1 = Container.end();
// i1 is Container<T>::iterator
auto i2 = Container.cend();

// i2 is Container<T>::const_iterator
```

## <a name="distance"></a>  distance

Determina il numero di incrementi tra le posizioni a cui puntano due iteratori.

```cpp
template <class InputIterator>
typename iterator_traits<InputIterator>::difference_type distance(InputIterator first, InputIterator last);
```

### <a name="parameters"></a>Parametri

*first*<br/>
Primo iteratore di cui deve essere determinata la distanza dal secondo.

*last*<br/>
Secondo iteratore di cui deve essere determinata la distanza dal primo.

### <a name="return-value"></a>Valore restituito

Il numero di occorrenze *primo* devono essere incrementati finché non è uguale *ultima*.

### <a name="remarks"></a>Note

La funzione distance presenta una complessità costante quando `InputIterator` soddisfa i requisiti per un iteratore ad accesso casuale; in caso contrario, presenta una complessità lineare ed è pertanto potenzialmente dispendiosa.

### <a name="example"></a>Esempio

```cpp
// iterator_distance.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   list<int> L;
   for ( i = -1 ; i < 9 ; ++i )
   {
      L.push_back ( 2 * i );
   }
   list <int>::iterator L_Iter, LPOS = L.begin ( );

   cout << "The list L is: ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout << *L_Iter << " ";
   cout << ")." << endl;

   cout << "The iterator LPOS initially points to the first element: "
        << *LPOS << "." << endl;

   advance ( LPOS , 7 );
   cout << "LPOS is advanced 7 steps forward to point "
        << " to the eighth element: "
        << *LPOS << "." << endl;

   list<int>::difference_type Ldiff ;
   Ldiff = distance ( L.begin ( ) , LPOS );
   cout << "The distance from L.begin( ) to LPOS is: "
        << Ldiff << "." << endl;
}
```

```Output
The list L is: ( -2 0 2 4 6 8 10 12 14 16 ).
The iterator LPOS initially points to the first element: -2.
LPOS is advanced 7 steps forward to point  to the eighth element: 12.
The distance from L.begin( ) to LPOS is: 7.
```

## <a name="end"></a>  end

Recupera un iteratore all'elemento successivo all'ultimo elemento nel contenitore specificato.

```cpp
template <class Container>
auto end(Container& cont)
   -> decltype(cont.end());

template <class Container>
auto end(const Container& cont)
   -> decltype(cont.end());

template <class Ty, class Size>
Ty *end(Ty (& array)[Size]);
```

### <a name="parameters"></a>Parametri

*cont*<br/>
Contenitore.

*array*<br/>
Matrice di oggetti di tipo `Ty`.

### <a name="return-value"></a>Valore restituito

Le prime due funzioni di modello restituiscono `cont.end()` (le prima è una funzione non costante, mentre la seconda è una funzione costante).

La terza funzione di modello restituisce `array + Size`.

### <a name="remarks"></a>Note

Per un esempio di codice, vedere [begin](../standard-library/iterator-functions.md#begin).

## <a name="front_inserter"></a>  front_inserter

Crea un iteratore in grado di inserire elementi all'inizio di un contenitore specificato.

```cpp
template <class Container>
front_insert_iterator<Container> front_inserter(Container& _Cont);
```

### <a name="parameters"></a>Parametri

*_Cont*<br/>
Oggetto contenitore all'inizio del quale viene inserito un elemento.

### <a name="return-value"></a>Valore restituito

Oggetto `front_insert_iterator` associato all'oggetto contenitore *_Cont*.

### <a name="remarks"></a>Note

È possibile usare anche la funzione membro [front_insert_iterator](../standard-library/front-insert-iterator-class.md#front_insert_iterator) della classe front_insert_iterator.

All'interno della libreria standard C++, l'argomento deve fare riferimento a uno dei due contenitori sequenziali che hanno la funzione membro `push_back`: [Classe deque](../standard-library/deque-class.md) o "Classe list".

### <a name="example"></a>Esempio

```cpp
// iterator_front_inserter.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   int i;
   list <int>::iterator L_Iter;

   list<int> L;
   for ( i = -1 ; i < 9 ; ++i )
   {
      L.push_back ( i );
   }

   cout << "The list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout << *L_Iter << " ";
   cout << ")." << endl;

   // Using the template function to insert an element
   front_insert_iterator< list < int> > Iter(L);
*Iter = 100;

   // Alternatively, you may use the front_insert member function
   front_inserter ( L ) = 200;

   cout << "After the front insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout << *L_Iter << " ";
   cout << ")." << endl;
}
```

```Output
The list L is:
( -1 0 1 2 3 4 5 6 7 8 ).
After the front insertions, the list L is:
( 200 100 -1 0 1 2 3 4 5 6 7 8 ).
```

## <a name="inserter"></a>  inserter

Funzione di modello helper che consente di usare `inserter(_Cont, _Where)` invece di `insert_iterator<Container>(_Cont, _Where)`.

```cpp
template <class Container>
insert_iterator<Container>
inserter(
    Container& _Cont,
    typename Container::iterator _Where);
```

### <a name="parameters"></a>Parametri

*_Cont*<br/>
Contenitore a cui devono essere aggiunti nuovi elementi.

*_Where*<br/>
Iteratore che individua il punto di inserimento.

### <a name="remarks"></a>Note

La funzione modello restituisce [insert_iterator](../standard-library/insert-iterator-class.md#insert_iterator)`<Container>(_Cont, _Where)`.

### <a name="example"></a>Esempio

```cpp
// iterator_inserter.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   int i;
   list <int>::iterator L_Iter;

   list<int> L;
   for (i = 2 ; i < 5 ; ++i )
   {
      L.push_back ( 10 * i );
   }

   cout << "The list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout << *L_Iter << " ";
   cout << ")." << endl;

   // Using the template version to insert an element
   insert_iterator<list <int> > Iter( L, L.begin ( ) );
*Iter = 1;

   // Alternatively, using the member function to insert an element
   inserter ( L, L.end ( ) ) = 500;

   cout << "After the insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout << *L_Iter << " ";
   cout << ")." << endl;
}
```

```Output
The list L is:
( 20 30 40 ).
After the insertions, the list L is:
( 1 20 30 40 500 ).
```

## <a name="make_checked_array_iterator"></a>  make_checked_array_iterator

Crea un oggetto [checked_array_iterator](../standard-library/checked-array-iterator-class.md) che può essere usato da altri algoritmi.

> [!NOTE]
> Questa funzione è un'estensione Microsoft della libreria standard C++. Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C++ che non supportano questa estensione Microsoft.

```cpp
template <class Iter>
checked_array_iterator<Iter>
    make_checked_array_iterator(
Iter Ptr,
    size_t Size,
    size_t Index = 0);
```

### <a name="parameters"></a>Parametri

*Ptr*<br/>
Puntatore alla matrice di destinazione.

*Dimensione*<br/>
Dimensioni della matrice di destinazione.

*Index*<br/>
Indice facoltativo nella matrice.

### <a name="return-value"></a>Valore restituito

Istanza di `checked_array_iterator`.

### <a name="remarks"></a>Note

La funzione `make_checked_array_iterator` viene definita nello spazio dei nomi `stdext`.

Questa funzione accetta un puntatore non elaborato, che causa in genere problemi relativi al superamento dei limiti, e ne esegue il wrapping in una classe [checked_array_iterator](../standard-library/checked-array-iterator-class.md) che effettua la verifica. Poiché la classe è contrassegnata come verificata, la libreria standard C++ non fornisce alcun avviso. Per altre informazioni ed esempi di codice, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

Nell'esempio seguente viene creato un oggetto [vector](../standard-library/vector-class.md) e tale oggetto viene popolato con 10 elementi. Il contenuto del vettore viene copiato in una matrice utilizzando l'algoritmo di copia, quindi viene utilizzato `make_checked_array_iterator` per specificare la destinazione. Questa attività è seguita da una violazione intenzionale del controllo dei limiti in modo da generare un errore di asserzione di debug.

```cpp
// make_checked_array_iterator.cpp
// compile with: /EHsc /W4 /MTd

#include <algorithm>
#include <iterator> // stdext::make_checked_array_iterator
#include <memory> // std::make_unique
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

int main()
{
    const size_t dest_size = 10;
    // Old-school but not exception safe, favor make_unique<int[]>
    // int* dest = new int[dest_size];
    unique_ptr<int[]> updest = make_unique<int[]>(dest_size);
    int* dest = updest.get(); // get a raw pointer for the demo

    vector<int> v;

    for (int i = 0; i < dest_size; ++i) {
        v.push_back(i);
    }
    print("vector v: ", v);

    copy(v.begin(), v.end(), stdext::make_checked_array_iterator(dest, dest_size));

    cout << "int array dest: ";
    for (int i = 0; i < dest_size; ++i) {
        cout << dest[i] << " ";
    }
    cout << endl;

    // Add another element to the vector to force an overrun.
    v.push_back(10);
    // The next line causes a debug assertion when it executes.
    copy(v.begin(), v.end(), stdext::make_checked_array_iterator(dest, dest_size));
}
```

## <a name="make_move_iterator"></a>  make_move_iterator

Crea un oggetto `move iterator` contenente l'iteratore fornito come iteratore `stored`.

```cpp
template <class Iterator>
move_iterator<Iterator>
make_move_iterator(const Iterator& _It);
```

### <a name="parameters"></a>Parametri

*_It*<br/>
Iteratore archiviato nel nuovo iteratore di spostamento.

### <a name="remarks"></a>Note

La funzione modello restituisce `move_iterator` `<Iterator>(_It)`.

## <a name="make_unchecked_array_iterator"></a>  make_unchecked_array_iterator

Crea un oggetto [unchecked_array_iterator](../standard-library/unchecked-array-iterator-class.md) che può essere usato da altri algoritmi.

> [!NOTE]
> Questa funzione è un'estensione Microsoft della libreria standard C++. Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C++ che non supportano questa estensione Microsoft.

```cpp
template <class Iter>
unchecked_array_iterator<Iter>
    make_unchecked_array_iterator(Iter Ptr);
```

### <a name="parameters"></a>Parametri

*Ptr*<br/>
Puntatore alla matrice di destinazione.

### <a name="return-value"></a>Valore restituito

Istanza di `unchecked_array_iterator`.

### <a name="remarks"></a>Note

La funzione `make_unchecked_array_iterator` viene definita nello spazio dei nomi `stdext`.

Questa funzione accetta un puntatore non elaborato e ne esegue il wrapping in una classe che non esegue alcuna verifica e pertanto non produce alcuna ottimizzazione, ma disattiva anche gli avvisi del compilatore, ad esempio [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Questa modalità consente pertanto di gestire gli avvisi relativi ai puntatori non verificati senza disattivarli globalmente o senza la necessità di un controllo. Per altre informazioni ed esempi di codice, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

Nell'esempio seguente viene creato un oggetto [vector](../standard-library/vector-class.md) e tale oggetto viene popolato con 10 elementi. Il contenuto del vettore viene copiato in una matrice utilizzando l'algoritmo di copia, quindi viene utilizzato `make_unchecked_array_iterator` per specificare la destinazione.

```cpp
// make_unchecked_array_iterator.cpp
// compile with: /EHsc /W4 /MTd

#include <algorithm>
#include <iterator> // stdext::make_unchecked_array_iterator
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

int main()
{
    const size_t dest_size = 10;
    int *dest = new int[dest_size];
    vector<int> v;

    for (int i = 0; i < dest_size; ++i) {
        v.push_back(i);
    }
    print("vector v: ", v);

    // COMPILER WARNING SILENCED: stdext::unchecked_array_iterator is marked as checked in debug mode
    // (it performs no checking, so an overrun will trigger undefined behavior)
    copy(v.begin(), v.end(), stdext::make_unchecked_array_iterator(dest));

    cout << "int array dest: ";
    for (int i = 0; i < dest_size; ++i) {
        cout << dest[i] << " ";
    }
    cout << endl;

    delete[] dest;
}
```

## <a name="next"></a>  next

Esegue l'iterazione per un numero specificato di volte e restituisce la nuova posizione dell'iteratore.

```cpp
template <class InputIterator>
InputIterator next(
    InputIterator first,
    typename iterator_traits<InputIterator>::difference_type _Off = 1);
```

### <a name="parameters"></a>Parametri

*first*<br/>
Posizione corrente.

*_Off*<br/>
Numero di operazioni di iterazione.

### <a name="return-value"></a>Valore restituito

Restituisce la nuova posizione dell'iteratore dopo l'iterazione *Off* volte.

### <a name="remarks"></a>Note

La funzione modello restituisce `next` incrementato *Off* volte

## <a name="prev"></a>  prev

Esegue l'iterazione in ordine inverso per un numero specificato di volte e restituisce la nuova posizione dell'iteratore.

```cpp
template <class BidirectionalIterator>
BidirectionalIterator prev(
    BidirectionalIterator first,
    typename iterator_traits<BidirectionalIterator>::difference_type _Off = 1);
```

### <a name="parameters"></a>Parametri

*first*<br/>
Posizione corrente.

*_Off*<br/>
Numero di operazioni di iterazione.

### <a name="remarks"></a>Note

La funzione modello restituisce `next` decrementato `off` volte.

## <a name="see-also"></a>Vedere anche

[\<iterator>](../standard-library/iterator.md)<br/>
