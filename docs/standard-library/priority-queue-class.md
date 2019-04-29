---
title: Classe priority_queue
ms.date: 11/04/2016
f1_keywords:
- queue/std::priority_queue::container_type
- queue/std::priority_queue::size_type
- queue/std::priority_queue::value_type
- queue/std::priority_queue::empty
- queue/std::priority_queue::pop
- queue/std::priority_queue::push
- queue/std::priority_queue::size
- queue/std::priority_queue::top
helpviewer_keywords:
- std::priority_queue [C++], container_type
- std::priority_queue [C++], size_type
- std::priority_queue [C++], value_type
- std::priority_queue [C++], empty
- std::priority_queue [C++], pop
- std::priority_queue [C++], push
- std::priority_queue [C++], size
- std::priority_queue [C++], top
ms.assetid: 69fca9cc-a449-4be4-97b7-02ca5db9cbb2
ms.openlocfilehash: d8f2b4ab788c82e531d1121f04dd0d422efb17cd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62370014"
---
# <a name="priorityqueue-class"></a>Classe priority_queue

Classe di adattatori di contenitori di modelli che fornisce una restrizione di funzionalità, limitando l'accesso all'elemento iniziale di un tipo di contenitore sottostante, che è sempre il più grande o quello con la priorità più elevata. È possibile aggiungere nuovi elementi all'oggetto priority_queue e controllarne o rimuoverne l'elemento iniziale.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type, class Container= vector <Type>, class Compare= less <typename Container ::value_type>>
class priority_queue
```

### <a name="parameters"></a>Parametri

*Type*<br/>
Tipo di dati degli elementi da archiviare nell'oggetto priority_queue.

*Container*<br/>
Tipo del contenitore sottostante usato per implementare l'oggetto priority_queue.

*Compare*<br/>
Tipo che fornisce un oggetto funzione in grado di confrontare i valori di due elementi come chiavi di ordinamento per determinarne l'ordine relativo nell'oggetto priority_queue. Questo argomento è facoltativo e il predicato binario `less<typename Container::value_type>` rappresenta il valore predefinito.

## <a name="remarks"></a>Note

Gli elementi della classe `Type` stipulata nel primo modello di parametro di un oggetto queue sono sinonimi di [value_type](#value_type) e deve corrispondere al tipo di elemento nella classe del contenitore sottostante `Container` stabilito per il secondo parametro di modello. Il `Type` deve essere assegnabile, in modo che sia possibile copiare oggetti di quel tipo e assegnare valori alle variabili di quel tipo.

L'oggetto priority_queue Ordina la sequenza da esso controllata chiamando un oggetto funzione archiviato della classe `Traits`. In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti (ovvero che uno non è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard.

Le classi contenitore sottostanti idonee per l'oggetto priority_queue includono la [classe deque](../standard-library/deque-class.md), la [classe vector](../standard-library/vector-class.md) predefinita o qualsiasi altro contenitore sequenziale che supporta le operazioni di `front`, `push_back` e `pop_back`, nonché un iteratore ad accesso casuale. La classe del contenitore sottostante è incapsulata nell'adattatore di contenitori, che espone solo il set limitato di funzioni membro dei contenitori di sequenza come interfaccia pubblica.

L'aggiunta di elementi e la rimozione di elementi da una `priority_queue` hanno complessità logaritmica. L'accesso agli elementi in una `priority_queue` ha una complessità costante.

Esistono tre tipi di adattatori di contenitori definiti nella libreria standard C++: stack, queue e priority_queue. Ognuno di essi limita la funzionalità di una classe contenitore sottostante per fornire un'interfaccia controllata con precisione a una struttura di dati standard.

- La [classe stack](../standard-library/stack-class.md) supporta una struttura di dati LIFO (Last-In, First-Out). Una buona analogia è costituita da una pila di piatti. Gli elementi (piatti) possono essere inseriti, ispezionati o rimossi solo dalla cima della pila/stack, ovvero l'ultimo elemento alla fine del contenitore di base. La restrizione relativa alla possibilità di accedere solo al primo elemento è il motivo per l'uso della classe stack.

- La [classe queue](../standard-library/queue-class.md) supporta una struttura dei dati FIFO (First-In, First-Out). Una buona analogia è costituita da persone in coda davanti allo sportello di una banca. Gli elementi (persone) possono essere aggiunti alla fine della fila e vengono rimossi dalla parte iniziale della fila. È possibile ispezionare sia l'inizio che la fine della fila. La restrizione relativa alla possibilità di accedere solo agli elementi iniziali e finali in questo modo costituisce il motivo per l'uso della classe queue.

- L'oggetto priority_queue ordina gli elementi in modo che l'elemento più grande sia sempre in posizione iniziale. Supporta l'inserimento di un elemento e l'ispezione e la rimozione del primo elemento. Una buona analogia è costituita da una fila di persone disposte in base a età, altezza o qualche altro criterio.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[priority_queue](#priority_queue)|Costruisce una `priority_queue` vuota o che rappresenta una copia di un intervallo di un oggetto contenitore di base o di un'altra `priority_queue`.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[container_type](#container_type)|Tipo che fornisce il contenitore di base che deve essere adattato da un oggetto `priority_queue`.|
|[size_type](#size_type)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `priority_queue`.|
|[value_type](#value_type)|Tipo che rappresenta il tipo di oggetto archiviato come elemento in `priority_queue`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[empty](#empty)|Verifica se `priority_queue` è vuoto.|
|[pop](#pop)|Rimuove l'elemento più grande dalla posizione iniziale della `priority_queue`.|
|[push](#push)|Aggiunge un elemento all'oggetto priority_queue in base alla priorità dell'elemento di operator<.|
|[size](#size)|Restituisce il numero di elementi nel `priority_queue`.|
|[top](#top)|Restituisce un riferimento const all'elemento più grande all'inizio della `priority_queue`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<queue>

**Spazio dei nomi:** std

## <a name="container_type"></a>  priority_queue::container_type

Tipo che fornisce il contenitore di base da adattare.

```cpp
typedef Container container_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Container`. La classe contenitore sequenziale della libreria standard C++ `deque` e la classe predefinita `vector` soddisfano i requisiti da usare come contenitore di base per un oggetto priority_queue. È anche possibile usare tipi definiti dall'utente che soddisfano i requisiti.

Per altre informazioni su `Container`, vedere la sezione Note dell'argomento [Classe priority_queue](../standard-library/priority-queue-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [priority_queue](#priority_queue) per indicazioni su come dichiarare e usare `container_type`.

## <a name="empty"></a>  priority_queue::empty

Verifica se un oggetto priority_queue è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto priority_queue è vuoto; in caso contrario, **false**.

### <a name="example"></a>Esempio

```cpp
// pqueue_empty.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares priority_queues with default deque base container
   priority_queue <int> q1, s2;

   q1.push( 1 );

   if ( q1.empty( ) )
      cout << "The priority_queue q1 is empty." << endl;
   else
      cout << "The priority_queue q1 is not empty." << endl;

   if ( s2.empty( ) )
      cout << "The priority_queue s2 is empty." << endl;
   else
      cout << "The priority_queue s2 is not empty." << endl;
}
```

```Output
The priority_queue q1 is not empty.
The priority_queue s2 is empty.
```

## <a name="pop"></a>  priority_queue::pop

Rimuove l'elemento più grande dalla prima posizione dell'oggetto priority_queue.

```cpp
void pop();
```

### <a name="remarks"></a>Note

La classe priority_queue deve essere non vuota per applicare la funzione membro. L'inizio dell'oggetto priority_queue è sempre occupato dall'elemento più grande del contenitore.

### <a name="example"></a>Esempio

```cpp
// pqueue_pop.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   priority_queue <int> q1, s2;

   q1.push( 10 );
   q1.push( 20 );
   q1.push( 30 );

   priority_queue <int>::size_type i, iii;
   i = q1.size( );
   cout << "The priority_queue length is " << i << "." << endl;

   const int& ii = q1.top( );
   cout << "The element at the top of the priority_queue is "
        << ii << "." << endl;

   q1.pop( );

   iii = q1.size( );
   cout << "After a pop, the priority_queue length is "
        << iii << "." << endl;

   const int& iv = q1.top( );
   cout << "After a pop, the element at the top of the "
        << "priority_queue is " << iv << "." << endl;
}
```

```Output
The priority_queue length is 3.
The element at the top of the priority_queue is 30.
After a pop, the priority_queue length is 2.
After a pop, the element at the top of the priority_queue is 20.
```

## <a name="priority_queue"></a>  priority_queue::priority_queue

Costruisce un oggetto priority_queue vuoto o che rappresenta una copia di un intervallo di un oggetto contenitore di base o di un altro oggetto priority_queue.

```cpp
priority_queue();

explicit priority_queue(const Traits& _comp);

priority_queue(const Traits& _comp, const container_type& _Cont);

priority_queue(const priority_queue& right);

template <class InputIterator>
priority_queue(InputIterator first, InputIterator last);

template <class InputIterator>
priority_queue(InputIterator first, InputIterator last, const Traits& _comp);

template <class InputIterator>
priority_queue(InputIterator first, InputIterator last, const Traits& _comp, const container_type& _Cont);
```

### <a name="parameters"></a>Parametri

*_comp*<br/>
Funzione di confronto di tipo **constTraits** usata per ordinare gli elementi nell'oggetto priority_queue, il cui valore predefinito è la funzione di confronto del contenitore di base.

*_Cont*<br/>
Contenitore di base di cui l'oggetto priority_queue costruito deve essere una copia.

*right*<br/>
Oggetto priority_queue di cui il set costruito deve essere una copia.

*first*<br/>
Posizione del primo elemento nell'intervallo di elementi da copiare.

*last*<br/>
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

### <a name="remarks"></a>Note

Ognuno dei primi tre costruttori specifica un oggetto priority_queue vuoto iniziale, il secondo specifica il tipo di funzione di confronto (`comp`) da usare per stabilire l'ordine degli elementi e la terza in modo esplicito specificando le `container_type`(`_Cont`) da utilizzare. La parola chiave **explicit** elimina alcuni tipi di conversione automatica del tipo.

Il quarto costruttore specifica una copia dell'oggetto priority_queue *a destra*.

Gli ultimi tre costruttori copiano l'intervallo \[ *primo*, *ultimo*) di un contenitore e usare i valori per inizializzare un oggetto priority_queue con un grado di esplicitazione crescente nello specificare il tipo di funzione di confronto della classe `Traits` e `container_type`.

### <a name="example"></a>Esempio

```cpp
// pqueue_ctor.cpp
// compile with: /EHsc
#include <queue>
#include <vector>
#include <deque>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function declares priority_queue
   // with a default vector base container
   priority_queue <int> q1;
   cout << "q1 = ( ";
   while ( !q1.empty( ) )
   {
      cout << q1.top( ) << " ";
      q1.pop( );
   }
   cout << ")" << endl;

   // Explicitly declares a priority_queue with nondefault
   // deque base container
   priority_queue <int, deque <int> > q2;
   q2.push( 5 );
   q2.push( 15 );
   q2.push( 10 );
   cout << "q2 = ( ";
   while ( !q2.empty( ) )
   {
      cout << q2.top( ) << " ";
      q2.pop( );
   }
   cout << ")" << endl;

   // This method of printing out the elements of a priority_queue
   // removes the elements from the priority queue, leaving it empty
   cout << "After printing, q2 has " << q2.size( ) << " elements." << endl;

   // The third member function declares a priority_queue
   // with a vector base container and specifies that the comparison
   // function greater is to be used for ordering elements
   priority_queue <int, vector<int>, greater<int> > q3;
   q3.push( 2 );
   q3.push( 1 );
   q3.push( 3 );
   cout << "q3 = ( ";
   while ( !q3.empty( ) )
   {
      cout << q3.top( ) << " ";
      q3.pop( );
   }
   cout << ")" << endl;

   // The fourth member function declares a priority_queue and
   // initializes it with elements copied from another container:
   // first, inserting elements into q1, then copying q1 elements into q4
   q1.push( 100 );
   q1.push( 200 );
   priority_queue <int> q4( q1 );
   cout << "q4 = ( ";
   while ( !q4.empty( ) )
   {
      cout << q4.top( ) << " ";
      q4.pop( );
   }
   cout << ")" << endl;

   // Creates an auxiliary vector object v5 to be used to initialize q5
   vector <int> v5;
   vector <int>::iterator v5_Iter;
   v5.push_back( 10 );
   v5.push_back( 30 );
   v5.push_back( 20 );
   cout << "v5 = ( " ;
   for ( v5_Iter = v5.begin( ) ; v5_Iter != v5.end( ) ; v5_Iter++ )
      cout << *v5_Iter << " ";
   cout << ")" << endl;

   // The fifth member function declares and
   // initializes a priority_queue q5 by copying the
   // range v5[ first,  last) from vector v5
   priority_queue <int> q5( v5.begin( ), v5.begin( ) + 2 );
   cout << "q5 = ( ";
   while ( !q5.empty( ) )
   {
      cout << q5.top( ) << " ";
      q5.pop( );
   }
   cout << ")" << endl;

   // The sixth member function declares a priority_queue q6
   // with a comparison function greater and initializes q6
   // by copying the range v5[ first,  last) from vector v5
   priority_queue <int, vector<int>, greater<int> >
      q6( v5.begin( ), v5.begin( ) + 2 );
   cout << "q6 = ( ";
   while ( !q6.empty( ) )
   {
      cout << q6.top( ) << " ";
      q6.pop( );
   }
   cout << ")" << endl;
}
```

## <a name="push"></a>  priority_queue::push

Aggiunge un elemento all'oggetto priority_queue in base alla priorità dell'elemento di operator<.

```cpp
void push(const Type& val);
```

### <a name="parameters"></a>Parametri

*val*<br/>
Elemento aggiunto all'inizio dell'oggetto priority_queue.

### <a name="remarks"></a>Note

L'inizio dell'oggetto priority_queue è la posizione occupata dall'elemento più grande del contenitore.

### <a name="example"></a>Esempio

```cpp
// pqueue_push.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   priority_queue<int> q1;

   q1.push( 10 );
   q1.push( 30 );
   q1.push( 20 );

   priority_queue<int>::size_type i;
   i = q1.size( );
   cout << "The priority_queue length is " << i << "." << endl;

   const int& ii = q1.top( );
   cout << "The element at the top of the priority_queue is "
        << ii << "." << endl;
}
```

```Output
The priority_queue length is 3.
The element at the top of the priority_queue is 30.
```

## <a name="size"></a>  priority_queue::size

Restituisce il numero di elementi presenti nell'oggetto priority_queue.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza corrente dell'oggetto priority_queue.

### <a name="example"></a>Esempio

```cpp
// pqueue_size.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   priority_queue <int> q1, q2;
   priority_queue <int>::size_type i;

   q1.push( 1 );
   i = q1.size( );
   cout << "The priority_queue length is " << i << "." << endl;

   q1.push( 2 );
   i = q1.size( );
   cout << "The priority_queue length is now " << i << "." << endl;
}
```

```Output
The priority_queue length is 1.
The priority_queue length is now 2.
```

## <a name="size_type"></a>  priority_queue::size_type

Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un oggetto priority_queue.

```cpp
typedef typename Container::size_type size_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del `size_type` del contenitore di base adattato dall'oggetto priority_queue.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [size](#size) per indicazioni su come dichiarare e usare `size_type`.

## <a name="top"></a>  priority_queue::top

Restituisce un riferimento const all'elemento più grande all'inizio della classe priority_queue.

```cpp
const_reference top() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento all'elemento più grande, come determinato dal `Traits` funzione, oggetto della classe priority_queue.

### <a name="remarks"></a>Note

La classe priority_queue deve essere non vuota per applicare la funzione membro.

### <a name="example"></a>Esempio

```cpp
// pqueue_top.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   priority_queue<int> q1;

   q1.push( 10 );
   q1.push( 30 );
   q1.push( 20 );

   priority_queue<int>::size_type i;
   i = q1.size( );
   cout << "The priority_queue length is " << i << "." << endl;

   const int& ii = q1.top( );
   cout << "The element at the top of the priority_queue is "
        << ii << "." << endl;
}
```

```Output
The priority_queue length is 3.
The element at the top of the priority_queue is 30.
```

## <a name="value_type"></a>  priority_queue::value_type

Tipo che rappresenta il tipo di oggetto archiviato come elemento in un oggetto priority_queue.

```cpp
typedef typename Container::value_type value_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del `value_type` del contenitore di base adattato dall'oggetto priority_queue.

### <a name="example"></a>Esempio

```cpp
// pqueue_value_type.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares priority_queues with default deque base container
   priority_queue<int>::value_type AnInt;

   AnInt = 69;
   cout << "The value_type is AnInt = " << AnInt << endl;

   priority_queue<int> q1;
   q1.push( AnInt );
   cout << "The element at the top of the priority_queue is "
        << q1.top( ) << "." << endl;
}
```

```Output
The value_type is AnInt = 69
The element at the top of the priority_queue is 69.
```

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
