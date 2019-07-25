---
title: Classe front_insert_iterator
ms.date: 11/04/2016
f1_keywords:
- iterator/std::front_insert_iterator
- iterator/std::front_insert_iterator::container_type
- iterator/std::front_insert_iterator::reference
helpviewer_keywords:
- std::front_insert_iterator [C++]
- std::front_insert_iterator [C++], container_type
- std::front_insert_iterator [C++], reference
ms.assetid: a9a9c075-136a-4419-928b-c4871afa033c
ms.openlocfilehash: 176fac8053d352d6a7a72ce62d5a8ee7a64b9811
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68454127"
---
# <a name="frontinsertiterator-class"></a>Classe front_insert_iterator

Descrive un adattatore dell'iteratore che soddisfa i requisiti dell'iteratore di output. Inserisce, anziché sovrascrivere, gli elementi nella parte iniziale di una sequenza, fornendo in questo modo una semantica diversa dalla semantica di sovrascrittura fornita dagli iteratori dei contenitori sequenziali C++. Viene creato un modello della classe `front_insert_iterator` in base al tipo di contenitore.

## <a name="syntax"></a>Sintassi

```cpp
template <class Container>
class front_insert_iterator;
```

### <a name="parameters"></a>Parametri

*Contenitore*\
Tipo di contenitore nella cui parte iniziale devono essere inseriti gli elementi da un `front_insert_iterator`.

## <a name="remarks"></a>Note

Il contenitore deve soddisfare i requisiti di una sequenza di inserimento all'inizio in cui è possibile inserire gli elementi all'inizio della sequenza in un tempo costante ammortizzato. I contenitori sequenziali della libreria standard C++ definiti dalla [classe deque](../standard-library/deque-class.md) e dalla [classe list](../standard-library/list-class.md) forniscono la funzione membro `push_front` necessaria e soddisfano tali requisiti. Al contrario, i contenitori sequenziali definiti dalla [classe vector](../standard-library/vector-class.md) non soddisfano tali requisiti e non possono essere adattati per l'uso con oggetti `front_insert_iterator`. Un `front_insert_iterator` deve essere sempre inizializzato con il relativo contenitore.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[front_insert_iterator](#front_insert_iterator)|Crea un iteratore in grado di inserire elementi all'inizio di un oggetto contenitore specificato.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[container_type](#container_type)|Tipo che rappresenta il contenitore in cui è necessario effettuare un inserimento all'inizio.|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento di una sequenza controllata dal contenitore associato.|

### <a name="operators"></a>Operatori

|Operator|Descrizione|
|-|-|
|[operator*](#op_star)|Operatore di dereferenziazione utilizzato per implementare l'espressione \* `i`  =  `x` dell'iteratore di output per un inserimento all'inizio.|
|[operator++](#op_add_add)|Incrementa `front_insert_iterator` alla posizione successiva in cui è possibile archiviare un valore.|
|[operator=](#op_eq)|Operatore di assegnazione usato \* per implementare l'espressione `i`  =  `x` dell'iteratore di output per un inserimento all'inizio.|

## <a name="requirements"></a>Requisiti

**Intestazione**: \<iterator>

**Spazio dei nomi:** std

## <a name="container_type"></a>  front_insert_iterator::container_type

Tipo che rappresenta il contenitore in cui è necessario effettuare un inserimento all'inizio.

```cpp
typedef Container container_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello *Container*.

### <a name="example"></a>Esempio

```cpp
// front_insert_iterator_container_type.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   list<int> L1;
   front_insert_iterator<list<int> >::container_type L2 = L1;
   front_inserter ( L2 ) = 20;
   front_inserter ( L2 ) = 10;
   front_inserter ( L2 ) = 40;

   list <int>::iterator vIter;
   cout << "The list L2 is: ( ";
   for ( vIter = L2.begin ( ) ; vIter != L2.end ( ); vIter++)
      cout << *vIter << " ";
   cout << ")." << endl;
}
/* Output:
The list L2 is: ( 40 10 20 ).
*/
```

## <a name="front_insert_iterator"></a>  front_insert_iterator::front_insert_iterator

Crea un iteratore in grado di inserire elementi all'inizio di un oggetto contenitore specificato.

```cpp
explicit front_insert_iterator(Container& _Cont);
```

### <a name="parameters"></a>Parametri

*_Cont*\
Oggetto contenitore in cui `front_insert_iterator` deve inserire gli elementi.

### <a name="return-value"></a>Valore restituito

`front_insert_iterator` per l'oggetto contenitore di parametri.

### <a name="example"></a>Esempio

```cpp
// front_insert_iterator_front_insert_iterator.cpp
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
   for (i = -1 ; i < 9 ; ++i )
   {
      L.push_back ( 2 * i );
   }

   cout << "The list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout << *L_Iter << " ";
   cout << ")." << endl;

   // Using the member function to insert an element
   front_inserter ( L ) = 20;

   // Alternatively, one may use the template function
   front_insert_iterator< list < int> > Iter(L);
*Iter = 30;

   cout << "After the front insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout << *L_Iter << " ";
   cout << ")." << endl;
}
/* Output:
The list L is:
( -2 0 2 4 6 8 10 12 14 16 ).
After the front insertions, the list L is:
( 30 20 -2 0 2 4 6 8 10 12 14 16 ).
*/
```

## <a name="op_star"></a>  front_insert_iterator::operator\*

Dereferenzia l'iteratore di inserimento restituendo l'elemento a cui punta.

```cpp
front_insert_iterator<Container>& operator*();
```

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce il valore dell'elemento puntato.

### <a name="remarks"></a>Note

Usato per implementare l'espressione dell'iteratore di output **\*Iter** = **value**. Se `Iter` è un iteratore che punta a un elemento in una sequenza  **\*** , il**valore** iter = sostituisce tale elemento con Value e non modifica il numero totale di elementi della sequenza.

### <a name="example"></a>Esempio

```cpp
// front_insert_iterator_deref.cpp
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
      L.push_back ( 2 * i );
   }

   cout << "The list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout << *L_Iter << " ";
   cout << ")." << endl;

   front_insert_iterator< list < int> > Iter(L);
*Iter = 20;

   // Alternatively, you may use
   front_inserter ( L ) = 30;

   cout << "After the front insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout << *L_Iter << " ";
   cout << ")." << endl;
}
/* Output:
The list L is:
( -2 0 2 4 6 8 10 12 14 16 ).
After the front insertions, the list L is:
( 30 20 -2 0 2 4 6 8 10 12 14 16 ).
*/
```

## <a name="op_add_add"></a>  front_insert_iterator::operator++

Incrementa `back_insert_iterator` alla posizione successiva in cui è possibile archiviare un valore.

```cpp
front_insert_iterator<Container>& operator++();

front_insert_iterator<Container> operator++(int);
```

### <a name="return-value"></a>Valore restituito

`front_insert_iterator` che punta alla posizione successiva in cui può essere archiviato un valore.

### <a name="remarks"></a>Note

Sia gli operatori di pre-incremento che quelli di post-incremento restituiscono lo stesso risultato.

### <a name="example"></a>Esempio

```cpp
// front_insert_iterator_op_incre.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   list<int> L1;
   front_insert_iterator<list<int> > iter ( L1 );
*iter = 10;
   iter++;
*iter = 20;
   iter++;
*iter = 30;
   iter++;

   list <int>::iterator vIter;
   cout << "The list L1 is: ( ";
   for ( vIter = L1.begin ( ) ; vIter != L1.end ( ); vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;
}
/* Output:
The list L1 is: ( 30 20 10 ).
*/
```

## <a name="op_eq"></a>  front_insert_iterator::operator=

Accoda (inserisce mediante push) un valore all'inizio del contenitore.

```cpp
front_insert_iterator<Container>& operator=(typename Container::const_reference val);

front_insert_iterator<Container>& operator=(typename Container::value_type&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Valore da assegnare al contenitore.

### <a name="return-value"></a>Valore restituito

Riferimento all'ultimo elemento inserito all'inizio del contenitore.

### <a name="remarks"></a>Note

Il primo operatore membro valuta `container.push_front( val)` e quindi restituisce `*this`.

Il secondo operatore membro valuta

`container->push_front((typename Container::value_type&&) val)`,

e quindi restituisce `*this`.

### <a name="example"></a>Esempio

```cpp
// front_insert_iterator_op_assign.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   list<int> L1;
   front_insert_iterator<list<int> > iter ( L1 );
*iter = 10;
   iter++;
*iter = 20;
   iter++;
*iter = 30;
   iter++;

   list <int>::iterator vIter;
   cout << "The list L1 is: ( ";
   for ( vIter = L1.begin ( ) ; vIter != L1.end ( ); vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;
}
/* Output:
The list L1 is: ( 30 20 10 ).
*/
```

## <a name="reference"></a>  front_insert_iterator::reference

Tipo che fornisce un riferimento a un elemento di una sequenza controllata dal contenitore associato.

```cpp
typedef typename Container::reference reference;
```

### <a name="example"></a>Esempio

```cpp
// front_insert_iterator_reference.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   list<int> L;
   front_insert_iterator<list<int> > fiivIter( L );
*fiivIter = 10;
*fiivIter = 20;
*fiivIter = 30;

   list<int>::iterator LIter;
   cout << "The list L is: ( ";
   for ( LIter = L.begin ( ) ; LIter != L.end ( ); LIter++)
      cout << *LIter << " ";
   cout << ")." << endl;

   front_insert_iterator<list<int> >::reference
        RefFirst = *(L.begin ( ));
   cout << "The first element in the list L is: "
        << RefFirst << "." << endl;
}
/* Output:
The list L is: ( 30 20 10 ).
The first element in the list L is: 30.
*/
```

## <a name="see-also"></a>Vedere anche

[\<iterator>](../standard-library/iterator.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
