---
title: Classe stack | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- stack/std::stack::container_type
- stack/std::stack::size_type
- stack/std::stack::value_type
- stack/std::stack::empty
- stack/std::stack::pop
- stack/std::stack::push
- stack/std::stack::size
- stack/std::stack::top
dev_langs: C++
helpviewer_keywords:
- std::stack [C++], container_type
- std::stack [C++], size_type
- std::stack [C++], value_type
- std::stack [C++], empty
- std::stack [C++], pop
- std::stack [C++], push
- std::stack [C++], size
- std::stack [C++], top
ms.assetid: 02151c1e-eab0-41b8-be94-a839ead78ecf
caps.latest.revision: "22"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 2a0c593042bf92e63b1c1514326440d9aee8101b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="stack-class"></a>Classe stack
Una classe di adattatori di contenitori di modelli che fornisce una restrizione di funzionalità, limitando l'accesso all'elemento aggiunto più recentemente a un tipo di contenitore sottostante. La classe stack viene usata quando è importante chiarire che sul contenitore vengono eseguite solo operazioni di stack.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Type, class Container= deque <Type>>  
class stack  
```  
  
#### <a name="parameters"></a>Parametri  
 *Type*  
 Tipo di dati degli elementi da archiviare nello stack.  
  
 `Container`  
 Tipo del contenitore sottostante usato per implementare lo stack. Il valore predefinito è la classe `deque`*\<Type>*.  
  
## <a name="remarks"></a>Note  
 Gli elementi della classe **Type** stipulata nel primo parametro di modello di un oggetto stack sono sinonimi di [value_type](#value_type) e devono corrispondere al tipo di elemento della classe contenitore sottostante **Container** stipulata dal secondo parametro di modello. La classe **Type** deve essere assegnabile, in modo che sia possibile copiare oggetti di quel tipo e assegnare valori alle variabili di quel tipo.  
  
 Le classi contenitore sottostanti idonee per lo stack includono le classi [deque](../standard-library/deque-class.md), [list](../standard-library/list-class.md) e [vector](../standard-library/vector-class.md) o qualsiasi altro contenitore sequenziale che supporta il funzionamento di **back**, `push_back` e `pop_back`. La classe del contenitore sottostante è incapsulata nell'adattatore di contenitori, che espone solo il set limitato di funzioni membro dei contenitori di sequenza come interfaccia pubblica.  
  
 Gli oggetti stack sono di tipo EqualityComparable se e solo se gli elementi della classe **Type** sono di tipo EqualityComparable. Sono invece di tipo LessThanComparable se e solo se gli elementi della classe **Type** sono di tipo LessThanComparable.  
  
-   La classe stack supporta la struttura dei dati LIFO (Last-In, First-Out). Una buona analogia è costituita da una pila di piatti. Gli elementi (piatti) possono essere inseriti, ispezionati o rimossi solo dalla cima della pila/stack, ovvero l'ultimo elemento alla fine del contenitore di base. La restrizione relativa alla possibilità di accedere solo al primo elemento è il motivo per l'uso della classe stack.  
  
-   La [classe queue](../standard-library/queue-class.md) supporta una struttura dei dati FIFO (First-In, First-Out). Una buona analogia è costituita da persone in coda davanti allo sportello di una banca. Gli elementi (persone) possono essere aggiunti alla fine della fila e vengono rimossi dalla parte iniziale della fila. È possibile ispezionare sia l'inizio che la fine della fila. La restrizione relativa alla possibilità di accedere solo agli elementi iniziali e finali in questo modo costituisce il motivo per l'uso della classe queue.  
  
-   La [classe priority_queue](../standard-library/priority-queue-class.md) ordina gli elementi in modo che l'elemento più grande sia sempre in prima posizione. Supporta l'inserimento di un elemento e l'ispezione e la rimozione del primo elemento. Una buona analogia è costituita da una fila di persone disposte in base a età, altezza o qualche altro criterio.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[stack](#stack)|Costruisce un `stack` vuoto o che rappresenta una copia totale o parziale di un oggetto contenitore di base.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[container_type](#container_type)|Tipo che fornisce il contenitore di base che deve essere adattato da un oggetto `stack`.|  
|[size_type](#size_type)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `stack`.|  
|[value_type](#value_type)|Tipo che rappresenta il tipo di oggetto archiviato come elemento in `stack`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[empty](#empty)|Verifica se `stack` è vuoto.|  
|[pop](#pop)|Rimuove l'elemento dalla parte superiore di `stack`.|  
|[push](#push)|Aggiunge un elemento alla parte superiore di `stack`.|  
|[size](#size)|Restituisce il numero di elementi nel `stack`.|  
|[top](#top)|Restituisce un riferimento a un elemento nella parte superiore di `stack`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<stack>  
  
 **Spazio dei nomi:** std  
  
##  <a name="container_type"></a>  stack::container_type  
 Tipo che fornisce il contenitore di base da adattare.  
  
```  
typedef Container container_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Container`. Tutti e tre i contenitori sequenziali della libreria standard C++, ovvero la classe vector, la classe list e la classe predefinita deque, soddisfano i requisiti richiesti e possono essere usati come contenitori per un oggetto stack. È anche possibile usare tipi definiti dall'utente che soddisfano i requisiti.  
  
 Per altre informazioni su `Container`, vedere la sezione Note dell'argomento [Classe stack](../standard-library/stack-class.md).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [stack::stack](#stack) per indicazioni su come dichiarare e usare `container_type`.  
  
##  <a name="empty"></a>  stack::empty  
 Verifica se uno stack è vuoto.  
  
```  
bool empty() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto stack è vuoto; in caso contrario, **false**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// stack_empty.cpp  
// compile with: /EHsc  
#include <stack>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   // Declares stacks with default deque base container  
   stack <int> s1, s2;  
  
   s1.push( 1 );  
  
   if ( s1.empty( ) )  
      cout << "The stack s1 is empty." << endl;  
   else  
      cout << "The stack s1 is not empty." << endl;  
  
   if ( s2.empty( ) )  
      cout << "The stack s2 is empty." << endl;  
   else  
      cout << "The stack s2 is not empty." << endl;  
}  
```  
  
```Output  
The stack s1 is not empty.  
The stack s2 is empty.  
```  
  
##  <a name="pop"></a>  stack::pop  
 Rimuove l'elemento all'inizio dello stack.  
  
```  
void pop();
```  
  
### <a name="remarks"></a>Note  
 Per applicare la funzione membro, lo stack deve essere non vuoto. L'inizio dello stack è la posizione occupata dall'elemento aggiunto più di recente ed è l'ultimo elemento alla fine del contenitore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// stack_pop.cpp  
// compile with: /EHsc  
#include <stack>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   stack <int> s1, s2;  
  
   s1.push( 10 );  
   s1.push( 20 );  
   s1.push( 30 );  
  
   stack <int>::size_type i;  
   i = s1.size( );  
   cout << "The stack length is " << i << "." << endl;  
  
   i = s1.top( );  
   cout << "The element at the top of the stack is "  
        << i << "." << endl;  
  
   s1.pop( );  
  
   i = s1.size( );  
   cout << "After a pop, the stack length is "   
        << i << "." << endl;  
  
   i = s1.top( );  
   cout << "After a pop, the element at the top of the stack is "  
        << i << "." << endl;  
}  
```  
  
```Output  
The stack length is 3.  
The element at the top of the stack is 30.  
After a pop, the stack length is 2.  
After a pop, the element at the top of the stack is 20.  
```  
  
##  <a name="push"></a>  stack::push  
 Aggiunge un elemento alla fine dello stack.  
  
```  
void push(const Type& val);
```  
  
### <a name="parameters"></a>Parametri  
 `val`  
 Elemento aggiunto all'inizio dello stack.  
  
### <a name="remarks"></a>Note  
 L'inizio dello stack è la posizione occupata dall'elemento aggiunto più di recente ed è l'ultimo elemento alla fine del contenitore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// stack_push.cpp  
// compile with: /EHsc  
#include <stack>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   stack <int> s1;  
  
   s1.push( 10 );  
   s1.push( 20 );  
   s1.push( 30 );  
  
   stack <int>::size_type i;  
   i = s1.size( );  
   cout << "The stack length is " << i << "." << endl;  
  
   i = s1.top( );  
   cout << "The element at the top of the stack is "  
        << i << "." << endl;  
}  
```  
  
```Output  
The stack length is 3.  
The element at the top of the stack is 30.  
```  
  
##  <a name="size"></a>  stack::size  
 Restituisce il numero di elementi presenti nello stack.  
  
```  
size_type size() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Lunghezza corrente dello stack.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// stack_size.cpp  
// compile with: /EHsc  
#include <stack>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   stack <int> s1, s2;  
   stack <int>::size_type i;  
  
   s1.push( 1 );  
   i = s1.size( );  
   cout << "The stack length is " << i << "." << endl;  
  
   s1.push( 2 );  
   i = s1.size( );  
   cout << "The stack length is now " << i << "." << endl;  
}  
```  
  
```Output  
The stack length is 1.  
The stack length is now 2.  
```  
  
##  <a name="size_type"></a>  stack::size_type  
 Tipo Unsigned Integer in grado di rappresentare il numero di elementi di uno stack.  
  
```  
typedef typename Container::size_type size_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del `size_type` del contenitore di base adattato dallo stack.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [size](#size) per indicazioni su come dichiarare e usare `size_type`.  
  
##  <a name="stack"></a>  stack::stack  
 Costruisce uno stack vuoto o che rappresenta una copia totale o parziale di una classe contenitore di base.  
  
```  
stack();

explicit stack(const container_type& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Contenitore di cui lo stack costruito deve essere una copia.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// stack_stack.cpp  
// compile with: /EHsc  
#include <stack>  
#include <vector>  
#include <list>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   // Declares stack with default deque base container  
   stack <char> dsc1;  
  
   //Explicitly declares a stack with deque base container  
   stack <char, deque<char> > dsc2;  
  
   // Declares a stack with vector base containers  
   stack <int, vector<int> > vsi1;  
  
   // Declares a stack with list base container  
   stack <int, list<int> > lsi;  
  
   // The second member function copies elements from a container  
   vector<int> v1;  
   v1.push_back( 1 );  
   stack <int, vector<int> > vsi2( v1 );  
   cout << "The element at the top of stack vsi2 is "  
        << vsi2.top( ) << "." << endl;  
}  
```  
  
```Output  
The element at the top of stack vsi2 is 1.  
```  
  
##  <a name="top"></a>  stack::top  
 Restituisce un riferimento a un elemento all'inizio dello stack.  
  
```  
reference top();

const_reference top() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'ultimo elemento del contenitore all'inizio dello stack.  
  
### <a name="remarks"></a>Note  
 Per applicare la funzione membro, lo stack deve essere non vuoto. L'inizio dello stack è la posizione occupata dall'elemento aggiunto più di recente ed è l'ultimo elemento alla fine del contenitore.  
  
 Se il valore restituito di **top** viene assegnato a `const_reference`, l'oggetto stack non può essere modificato. Se il valore restituito di **top** viene assegnato a un oggetto **reference**, l'oggetto stack può essere modificato.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// stack_top.cpp  
// compile with: /EHsc  
#include <stack>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   stack <int> s1;  
  
   s1.push( 1 );  
   s1.push( 2 );  
  
   int& i = s1.top( );  
   const int& ii = s1.top( );  
  
   cout << "The top integer of the stack s1 is "  
        << i << "." << endl;  
   i--;  
   cout << "The next integer down is "<< ii << "." << endl;  
}  
```  
  
```Output  
The top integer of the stack s1 is 2.  
The next integer down is 1.  
```  
  
##  <a name="value_type"></a>  stack::value_type  
 Tipo che rappresenta il tipo di oggetto archiviato come elemento in uno stack.  
  
```  
typedef typename Container::value_type value_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del `value_type` del contenitore di base adattato dallo stack.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// stack_value_type.cpp  
// compile with: /EHsc  
#include <stack>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   // Declares stacks with default deque base container  
   stack<int>::value_type AnInt;  
  
   AnInt = 69;  
   cout << "The value_type is AnInt = " << AnInt << endl;  
  
   stack<int> s1;  
   s1.push( AnInt );  
   cout << "The element at the top of the stack is "  
        << s1.top( ) << "." << endl;  
}  
```  
  
```Output  
The value_type is AnInt = 69  
The element at the top of the stack is 69.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)  (Sicurezza dei thread nella libreria standard C++)  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
