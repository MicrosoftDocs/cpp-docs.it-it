---
title: Classe insert_iterator
ms.date: 11/04/2016
f1_keywords:
- iterator/std::insert_iterator
- iterator/std::insert_iterator::container_type
- iterator/std::insert_iterator::reference
helpviewer_keywords:
- std::insert_iterator [C++]
- std::insert_iterator [C++], container_type
- std::insert_iterator [C++], reference
ms.assetid: d5d86405-872e-4e3b-9e68-c69a2b7e8221
ms.openlocfilehash: 530168f5e259934f7d614b305e6ac1092ba68f4d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233158"
---
# <a name="insert_iterator-class"></a>Classe insert_iterator

Descrive un adattatore dell'iteratore che soddisfa i requisiti dell'iteratore di output. Inserisce, anziché sovrascrivere, gli elementi in una sequenza, fornendo in questo modo una semantica diversa dalla semantica di sovrascrittura fornita dagli iteratori dei contenitori associativi e di sequenza C++. Viene creato un modello della classe `insert_iterator` in base al tipo di contenitore da adattare.

## <a name="syntax"></a>Sintassi

```cpp
template <class Container>
class insert_iterator;
```

### <a name="parameters"></a>Parametri

*Contenitore*\
Tipo di contenitore in cui devono essere inseriti gli elementi da un `insert_iterator`.

## <a name="remarks"></a>Osservazioni

Il contenitore di tipo `Container` deve soddisfare i requisiti per un contenitore a dimensione variabile e disporre di una funzione membro di inserimento a due argomenti in cui i parametri sono di tipo `Container::iterator` e `Container::value_type` e che restituisce un tipo `Container::iterator` . La sequenza della libreria standard C++ e i contenitori associativi ordinati soddisfano tali requisiti e possono essere adattati per l'uso con `insert_iterator`. Per i contenitori associativi, l'argomento della posizione viene considerato come un suggerimento, che potrebbe migliorare o ridurre le prestazioni a seconda della validità di tale suggerimento. Un `insert_iterator` deve essere sempre inizializzato insieme al relativo contenitore.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[insert_iterator](#insert_iterator)|Costruisce un `insert_iterator` che inserisce un elemento in una posizione specificata di un contenitore.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[container_type](#container_type)|Tipo che rappresenta il contenitore in cui è necessario effettuare un inserimento generale.|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento di una sequenza controllata dal contenitore associato.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore](#op_star)|Operatore di dereferenziazione usato per implementare l'espressione dell'iteratore di output * `i` = `x` per un inserimento generale.|
|[operatore + +](#op_add_add)|Incrementa `insert_iterator` alla posizione successiva in cui è possibile archiviare un valore.|
|[operatore =](#op_eq)|Operatore di assegnazione usato per implementare l'espressione dell'iteratore di output * `i` = `x` per un inserimento generale.|

## <a name="requirements"></a>Requisiti

**Intestazione**:\<iterator>

**Spazio dei nomi:** std

## <a name="insert_iteratorcontainer_type"></a><a name="container_type"></a>insert_iterator:: container_type

Tipo che rappresenta il contenitore in cui è necessario effettuare un inserimento generale.

```cpp
typedef Container container_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello *Container*.

### <a name="example"></a>Esempio

```cpp
// insert_iterator_container_type.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   list<int> L1;
   insert_iterator<list<int> >::container_type L2 = L1;
   inserter ( L2, L2.end ( ) ) = 20;
   inserter ( L2, L2.end ( ) ) = 10;
   inserter ( L2, L2.begin ( ) ) = 40;

   list <int>::iterator vIter;
   cout << "The list L2 is: ( ";
   for ( vIter = L2.begin ( ) ; vIter != L2.end ( ); vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;
}
/* Output:
The list L2 is: ( 40 20 10 ).
*/
```

## <a name="insert_iteratorinsert_iterator"></a><a name="insert_iterator"></a>insert_iterator:: insert_iterator

Costruisce un `insert_iterator` che inserisce un elemento in una posizione specificata di un contenitore.

```cpp
insert_iterator(Container& _Cont, typename Container::iterator _It);
```

### <a name="parameters"></a>Parametri

*_Cont*\
Contenitore in cui `insert_iterator` deve inserire gli elementi.

*_It*\
Posizione per l'inserimento.

### <a name="remarks"></a>Osservazioni

Tutti i contenitori hanno la funzione membro di inserimento chiamata da `insert_iterator`. Per i contenitori associativi il parametro della posizione è semplicemente un suggerimento. La funzione insert offre un modo pratico per inserire valori.

### <a name="example"></a>Esempio

```cpp
// insert_iterator_insert_iterator.cpp
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
   for (i = 1 ; i < 4 ; ++i )
   {
      L.push_back ( 10 * i );
   }

   cout << "The list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout << *L_Iter << " ";
   cout << ")." << endl;

   // Using the member function to insert an element
   inserter ( L, L.begin ( ) ) = 2;

   // Alternatively, you may use the template version
   insert_iterator< list < int> > Iter(L, L.end ( ) );
*Iter = 300;

   cout << "After the insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout << *L_Iter << " ";
   cout << ")." << endl;
}
/* Output:
The list L is:
( 10 20 30 ).
After the insertions, the list L is:
( 2 10 20 30 300 ).
*/
```

## <a name="insert_iteratoroperator"></a><a name="op_star"></a>insert_iterator:: operator *

Dereferenzia l'iteratore di inserimento restituendo l'elemento a cui punta.

```cpp
insert_iterator<Container>& operator*();
```

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce il valore dell'elemento puntato.

### <a name="remarks"></a>Osservazioni

Utilizzato per implementare il valore ** \* iter**dell'espressione dell'iteratore di output  =  **value**. Se `Iter` è un iteratore che punta a un elemento in una sequenza ** \* **,  =  il**valore** iter sostituisce tale elemento con Value e non modifica il numero totale di elementi della sequenza.

### <a name="example"></a>Esempio

```cpp
// insert_iterator_op_deref.cpp
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
   for (i = 0 ; i < 4 ; ++i )
   {
      L.push_back ( 2 * i );
   }

   cout << "The original list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout << *L_Iter << " ";
   cout << ")." << endl;

   insert_iterator< list < int> > Iter(L, L.begin ( ) );
*Iter = 10;
*Iter = 20;
*Iter = 30;

   cout << "After the insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout << *L_Iter << " ";
   cout << ")." << endl;
}
/* Output:
The original list L is:
( 0 2 4 6 ).
After the insertions, the list L is:
( 10 20 30 0 2 4 6 ).
*/
```

## <a name="insert_iteratoroperator"></a><a name="op_add_add"></a>insert_iterator:: operator + +

Incrementa `insert_iterator` alla posizione successiva in cui è possibile archiviare un valore.

```cpp
insert_iterator<Container>& operator++();

insert_iterator<Container> operator++(int);
```

### <a name="parameters"></a>Parametri

`insert_iterator` che punta alla posizione successiva in cui può essere archiviato un valore.

### <a name="remarks"></a>Osservazioni

Sia gli operatori di pre-incremento che quelli di post-incremento restituiscono lo stesso risultato.

### <a name="example"></a>Esempio

```cpp
// insert_iterator_op_incr.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for (i = 1 ; i < 5 ; ++i )
   {
      vec.push_back (  i );
   }

   vector <int>::iterator vIter;
   cout << "The vector vec is:\n ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   insert_iterator<vector<int> > ii ( vec, vec.begin ( ) );
*ii = 30;
   ii++;
*ii = 40;
   ii++;
*ii = 50;

   cout << "After the insertions, the vector vec becomes:\n ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;
}
/* Output:
The vector vec is:
( 1 2 3 4 ).
After the insertions, the vector vec becomes:
( 30 40 50 1 2 3 4 ).
*/
```

## <a name="insert_iteratoroperator"></a><a name="op_eq"></a>insert_iterator:: operator =

Inserisce un valore nel contenitore e restituisce l'iteratore aggiornato in modo da puntare al nuovo elemento.

```cpp
insert_iterator<Container>& operator=(
    typename Container::const_reference val,);

insert_iterator<Container>& operator=(
    typename Container::value_type&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Valore da assegnare al contenitore.

### <a name="return-value"></a>Valore restituito

Riferimento all'elemento inserito nel contenitore.

### <a name="remarks"></a>Osservazioni

Il primo operatore membro valuta

`Iter = container->insert(Iter, val)`;

`++Iter;`

restituisce quindi **`*this`** .

Il secondo operatore membro valuta

`Iter = container->insert(Iter, std::move(val));`

`++Iter;`

restituisce quindi **`*this`** .

### <a name="example"></a>Esempio

```cpp
// insert_iterator_op_assign.cpp
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
   for (i = 0 ; i < 4 ; ++i )
   {
      L.push_back ( 2 * i );
   }

   cout << "The original list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout << *L_Iter << " ";
   cout << ")." << endl;

   insert_iterator< list < int> > Iter(L, L.begin ( ) );
*Iter = 10;
*Iter = 20;
*Iter = 30;

   cout << "After the insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout << *L_Iter << " ";
   cout << ")." << endl;
}
/* Output:
The original list L is:
( 0 2 4 6 ).
After the insertions, the list L is:
( 10 20 30 0 2 4 6 ).
*/
```

## <a name="insert_iteratorreference"></a><a name="reference"></a>insert_iterator:: Reference

Tipo che fornisce un riferimento a un elemento di una sequenza controllata dal contenitore associato.

```cpp
typedef typename Container::reference reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento a un elemento della sequenza controllata dal contenitore associato.

### <a name="example"></a>Esempio

```cpp
// insert_iterator_container_reference.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   list<int> L;
   insert_iterator<list<int> > iivIter( L , L.begin ( ) );
*iivIter = 10;
*iivIter = 20;
*iivIter = 30;

   list<int>::iterator LIter;
   cout << "The list L is: ( ";
   for ( LIter = L.begin ( ) ; LIter != L.end ( ); LIter++ )
      cout << *LIter << " ";
   cout << ")." << endl;

   insert_iterator<list<int> >::reference
        RefFirst = *(L.begin ( ));
   cout << "The first element in the list L is: "
        << RefFirst << "." << endl;
}
/* Output:
The list L is: ( 10 20 30 ).
The first element in the list L is: 10.
*/
```

## <a name="see-also"></a>Vedere anche

[\<iterator>](../standard-library/iterator.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
