---
title: Classe queue
ms.date: 11/04/2016
f1_keywords:
- queue/std::queue::container_type
- queue/std::queue::size_type
- queue/std::queue::value_type
- queue/std::queue::back
- queue/std::queue::empty
- queue/std::queue::front
- queue/std::queue::pop
- queue/std::queue::push
- queue/std::queue::size
helpviewer_keywords:
- std::queue [C++], container_type
- std::queue [C++], size_type
- std::queue [C++], value_type
- std::queue [C++], back
- std::queue [C++], empty
- std::queue [C++], front
- std::queue [C++], pop
- std::queue [C++], push
- std::queue [C++], size
ms.assetid: 28c20ab0-3a72-4185-9e0f-5a44eea0e204
ms.openlocfilehash: 512b9499e63933a71a27a87f91a3bef8a65339e1
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78890862"
---
# <a name="queue-class"></a>Classe queue

Classe di adattatori di contenitori di modelli che fornisce una restrizione di funzionalità per un tipo di contenitore sottostante, limitando l'accesso all'elemento anteriore e all'elemento posteriore. Gli elementi possono essere aggiunti nella parte posteriore o rimossi dalla parte anteriore e gli elementi possono essere controllati in entrambe le estremità dell'oggetto queue.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type, class Container = deque <Type>>
class queue
```

### <a name="parameters"></a>Parametri

*Tipo*\
Tipo di dati degli elementi da archiviare nell'oggetto queue

\ *contenitore*
Tipo del contenitore sottostante usato per implementare l'oggetto queue.

## <a name="remarks"></a>Osservazioni

Gli elementi della classe `Type` specificati nel primo parametro di modello di un oggetto Queue sono sinonimi di [value_type](#value_type) e devono corrispondere al tipo di elemento nella classe di contenitore sottostante `Container` stipulata dal secondo parametro di modello. Il `Type` deve essere assegnabile, in modo che sia possibile copiare oggetti di quel tipo e assegnare valori alle variabili di quel tipo.

Le classi contenitore sottostanti appropriate per la coda includono [deque](../standard-library/deque-class.md) ed [elenco](../standard-library/list-class.md)o qualsiasi altro contenitore sequenza che supporta le operazioni di `front`, `back`, `push_back`e `pop_front`. La classe del contenitore sottostante è incapsulata nell'adattatore di contenitori, che espone solo il set limitato di funzioni membro dei contenitori di sequenza come interfaccia pubblica.

Gli oggetti Queue sono confrontabili con l'uguaglianza se e solo se gli elementi della classe `Type` sono confrontabili con l'uguaglianza e sono meno di confrontabili se e solo se gli elementi della classe `Type` sono confrontabili con minore.

Esistono tre tipi di adattatori di contenitori definiti nella libreria standard C++: stack, queue e priority_queue. Ognuno di essi limita la funzionalità di una classe contenitore sottostante per fornire un'interfaccia controllata con precisione a una struttura di dati standard.

- La [classe stack](../standard-library/stack-class.md) supporta una struttura di dati LIFO (Last-In, First-Out). Una buona analogia è costituita da una pila di piatti. Gli elementi (piatti) possono essere inseriti, ispezionati o rimossi solo dalla cima della pila/stack, ovvero l'ultimo elemento alla fine del contenitore di base. La restrizione relativa alla possibilità di accedere solo al primo elemento è il motivo per l'uso della classe stack.

- La classe queue supporta una struttura dei dati FIFO (First-In, First-Out). Una buona analogia è costituita da persone in coda davanti allo sportello di una banca. Gli elementi (persone) possono essere aggiunti alla fine della fila e vengono rimossi dalla parte iniziale della fila. È possibile ispezionare sia l'inizio che la fine della fila. La restrizione relativa alla possibilità di accedere solo agli elementi iniziali e finali in questo modo costituisce il motivo per l'uso della classe queue.

- La [classe priority_queue](../standard-library/priority-queue-class.md) ordina gli elementi in modo che l'elemento più grande sia sempre in posizione iniziale. Supporta l'inserimento di un elemento e l'ispezione e la rimozione del primo elemento. Una buona analogia è costituita da una fila di persone disposte in base a età, altezza o qualche altro criterio.

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|||
|-|-|
|[queue](#queue)|Costruisce un `queue` vuoto o che rappresenta una copia totale o parziale di un oggetto contenitore di base.|

### <a name="typedefs"></a>Typedef

|||
|-|-|
|[container_type](#container_type)|Tipo che fornisce il contenitore di base che deve essere adattato da `queue`.|
|[size_type](#size_type)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `queue`.|
|[value_type](#value_type)|Tipo che rappresenta il tipo di oggetto archiviato come elemento in `queue`.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[back](#back)|Restituisce un riferimento all'ultimo elemento aggiunto di recente alla fine della `queue`.|
|[empty](#empty)|Verifica se `queue` è vuoto.|
|[front](#front)|Restituisce un riferimento al primo elemento all'inizio dell'oggetto `queue`.|
|[pop](#pop)|Rimuove un elemento dall'inizio dell'oggetto `queue`.|
|[push](#push)|Aggiunge un elemento alla fine dell'oggetto `queue`.|
|[size](#size)|Restituisce il numero di elementi nel `queue`.|

## <a name="back"></a>Indietro

Restituisce un riferimento all'ultimo elemento aggiunto di recente alla fine dell'oggetto queue.

```cpp
reference back();

const_reference back() const;
```

### <a name="return-value"></a>Valore restituito

Ultimo elemento dell'oggetto queue. Se l'oggetto queue è vuoto, il valore restituito è indefinito.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `back` viene assegnato a un oggetto `const_reference`, l'oggetto queue non può essere modificato. Se il valore restituito di `back` viene assegnato a una `reference`, l'oggetto Queue può essere modificato.

Durante la compilazione tramite [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) definito come 1 o 2, si verificherà un errore di runtime se si tenta di accedere a un elemento in un oggetto queue vuoto.  Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md) .

### <a name="example"></a>Esempio

```cpp
// queue_back.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   queue <int> q1;

   q1.push( 10 );
   q1.push( 11 );

   int& i = q1.back( );
   const int& ii = q1.front( );

   cout << "The integer at the back of queue q1 is " << i
        << "." << endl;
   cout << "The integer at the front of queue q1 is " << ii
        << "." << endl;
}
```

## <a name="container_type"></a>container_type

Tipo che fornisce il contenitore di base da adattare.

```cpp
typedef Container container_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `Container`. Due classi contenitore sequenziale della libreria standard C++, ovvero la classe list e la classe deque predefinita, soddisfano i requisiti da usare come contenitore di base per un oggetto queue. È anche possibile usare tipi definiti dall'utente che soddisfano i requisiti.

Per altre informazioni su `Container`, vedere la sezione Note dell'argomento [Classe queue](../standard-library/queue-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [queue](#queue) per indicazioni su come dichiarare e usare `container_type`.

## <a name="empty"></a>vuoto

Verifica se un oggetto queue è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto queue è vuoto; in caso contrario, **false**.

### <a name="example"></a>Esempio

```cpp
// queue_empty.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
using namespace std;

   // Declares queues with default deque base container
   queue <int> q1, q2;

   q1.push( 1 );

   if ( q1.empty( ) )
      cout << "The queue q1 is empty." << endl;
   else
      cout << "The queue q1 is not empty." << endl;

   if ( q2.empty( ) )
      cout << "The queue q2 is empty." << endl;
   else
      cout << "The queue q2 is not empty." << endl;
}
```

```Output
The queue q1 is not empty.
The queue q2 is empty.
```

## <a name="front"></a>fronte

Restituisce un riferimento al primo elemento all'inizio dell'oggetto queue.

```cpp
reference front();

const_reference front() const;
```

### <a name="return-value"></a>Valore restituito

Primo elemento dell'oggetto queue. Se l'oggetto queue è vuoto, il valore restituito è indefinito.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `front` viene assegnato a un oggetto `const_reference`, l'oggetto queue non può essere modificato. Se il valore restituito di `front` viene assegnato a una `reference`, l'oggetto Queue può essere modificato.

La funzione membro restituisce un `reference` al primo elemento della sequenza controllata, che non deve essere vuoto.

Durante la compilazione tramite [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) definito come 1 o 2, si verificherà un errore di runtime se si tenta di accedere a un elemento in un oggetto queue vuoto.  Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md) .

### <a name="example"></a>Esempio

```cpp
// queue_front.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main() {
   using namespace std;
   queue <int> q1;

   q1.push( 10 );
   q1.push( 20 );
   q1.push( 30 );

   queue <int>::size_type i;
   i = q1.size( );
   cout << "The queue length is " << i << "." << endl;

   int& ii = q1.back( );
   int& iii = q1.front( );

   cout << "The integer at the back of queue q1 is " << ii
        << "." << endl;
   cout << "The integer at the front of queue q1 is " << iii
        << "." << endl;
}
```

## <a name="pop"></a>popup

Rimuove un elemento dall'inizio dell'oggetto queue.

```cpp
void pop();
```

### <a name="remarks"></a>Osservazioni

L'oggetto queue non deve essere vuoto per applicare la funzione membro. L'inizio dell'oggetto queue è la posizione occupata dall'elemento aggiunto più di recente ed è l'ultimo elemento alla fine del contenitore.

### <a name="example"></a>Esempio

```cpp
// queue_pop.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   queue <int> q1, s2;

   q1.push( 10 );
   q1.push( 20 );
   q1.push( 30 );

   queue <int>::size_type i;
   i = q1.size( );
   cout << "The queue length is " << i << "." << endl;

   i = q1.front( );
   cout << "The element at the front of the queue is "
        << i << "." << endl;

   q1.pop( );

   i = q1.size( );
   cout << "After a pop the queue length is "
        << i << "." << endl;

   i = q1. front ( );
   cout << "After a pop, the element at the front of the queue is "
        << i << "." << endl;
}
```

```Output
The queue length is 3.
The element at the front of the queue is 10.
After a pop the queue length is 2.
After a pop, the element at the front of the queue is 20.
```

## <a name="push"></a>spingere

Aggiunge un elemento alla fine dell'oggetto queue.

```cpp
void push(const Type& val);
```

### <a name="parameters"></a>Parametri

\ *Val*
Elemento aggiunto alla fine dell'oggetto queue.

### <a name="remarks"></a>Osservazioni

La fine dell'oggetto queue è la posizione occupata dall'elemento aggiunto più di recente ed è l'ultimo elemento alla fine del contenitore.

### <a name="example"></a>Esempio

```cpp
// queue_push.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   queue <int> q1;

   q1.push( 10 );
   q1.push( 20 );
   q1.push( 30 );

   queue <int>::size_type i;
   i = q1.size( );
   cout << "The queue length is " << i << "." << endl;

   i = q1.front( );
   cout << "The element at the front of the queue is "
        << i << "." << endl;
}
```

```Output
The queue length is 3.
The element at the front of the queue is 10.
```

## <a name="queue"></a>coda

Costruisce un oggetto queue vuoto o che rappresenta una copia di un oggetto contenitore di base.

```cpp
queue();

explicit queue(const container_type& right);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Il contenitore **const** di cui l'oggetto queue costruito deve essere una copia.

### <a name="remarks"></a>Osservazioni

Il contenitore di base predefinito per l'oggetto queue è deque. È anche possibile specificare un elenco come contenitore di base, ma non è possibile specificare un vettore, perché non è presente la funzione membro `pop_front` necessaria.

### <a name="example"></a>Esempio

```cpp
// queue_queue.cpp
// compile with: /EHsc
#include <queue>
#include <vector>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares queue with default deque base container
   queue <char> q1;

   // Explicitly declares a queue with deque base container
   queue <char, deque<char> > q2;

   // These lines don't cause an error, even though they
   // declares a queue with a vector base container
   queue <int, vector<int> > q3;
   q3.push( 10 );
   // but the following would cause an error because vector has
   // no pop_front member function
   // q3.pop( );

   // Declares a queue with list base container
   queue <int, list<int> > q4;

   // The second member function copies elements from a container
   list<int> li1;
   li1.push_back( 1 );
   li1.push_back( 2 );
   queue <int, list<int> > q5( li1 );
   cout << "The element at the front of queue q5 is "
        << q5.front( ) << "." << endl;
   cout << "The element at the back of queue q5 is "
        << q5.back( ) << "." << endl;
}
```

```Output
The element at the front of queue q5 is 1.
The element at the back of queue q5 is 2.
```

## <a name="size"></a>dimensioni

Restituisce il numero di elementi dell'oggetto queue.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza corrente dell'oggetto queue.

### <a name="example"></a>Esempio

```cpp
// queue_size.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   queue <int> q1, q2;
   queue <int>::size_type i;

   q1.push( 1 );
   i = q1.size( );
   cout << "The queue length is " << i << "." << endl;

   q1.push( 2 );
   i = q1.size( );
   cout << "The queue length is now " << i << "." << endl;
}
```

```Output
The queue length is 1.
The queue length is now 2.
```

## <a name="size_type"></a>size_type

Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un oggetto queue.

```cpp
typedef typename Container::size_type size_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del `size_type` del contenitore di base adattato dall'oggetto queue.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [queue::front](#front) per indicazioni su come dichiarare e usare `size_type`.

## <a name="value_type"></a>value_type

Tipo che rappresenta il tipo di oggetto archiviato come elemento in un oggetto queue.

```cpp
typedef typename Container::value_type value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del `value_type` del contenitore di base adattato dall'oggetto queue.

### <a name="example"></a>Esempio

```cpp
// queue_value_type.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
using namespace std;

   // Declares queues with default deque base container
   queue<int>::value_type AnInt;

   AnInt = 69;
   cout << "The value_type is AnInt = " << AnInt << endl;

   queue<int> q1;
   q1.push(AnInt);
   cout << "The element at the front of the queue is "
        << q1.front( ) << "." << endl;
}
```

```Output
The value_type is AnInt = 69
The element at the front of the queue is 69.
```

## <a name="see-also"></a>Vedere anche

[Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
