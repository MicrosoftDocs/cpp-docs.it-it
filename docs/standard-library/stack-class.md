---
title: "Classe stack | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::stack"
  - "std.stack"
  - "stack"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stack, stack (classe)"
  - "stack (classe)"
ms.assetid: 02151c1e-eab0-41b8-be94-a839ead78ecf
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe stack
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

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
 Tipo del contenitore sottostante usato per implementare lo stack. Il valore predefinito è la classe `deque`*\< tipo>*.  
  
## <a name="remarks"></a>Note  
 Gli elementi della classe **tipo** previsti nel modello di primo parametro di un oggetto stack corrispondo alle [value_type](#stack__value_type) e deve corrispondere al tipo di elemento della classe contenitore sottostante **contenitore** previsti dal secondo parametro di modello. Il **tipo** deve essere assegnabile, in modo che sia possibile copiare oggetti di quel tipo e assegnare valori alle variabili di tale tipo.  
  
 Includono le classi contenitore sottostante adatte per stack [deque](../standard-library/deque-class.md), [classe list](../standard-library/list-class.md), e [classe vector](vector%20Class.md), o qualsiasi altro contenitore di sequenza che supporta le operazioni di **nuovamente**, `push_back`, e `pop_back`. La classe del contenitore sottostante è incapsulata nell'adattatore di contenitori, che espone solo il set limitato di funzioni membro dei contenitori di sequenza come interfaccia pubblica.  
  
 Lo stack di oggetti sono uguaglianza comparabili se e solo se gli elementi della classe **tipo** sono confrontabili uguaglianza e minore di-più simili se e solo se gli elementi della classe **tipo** sono minori-più simili.  
  
-   La classe stack supporta la struttura dei dati LIFO (Last-In, First-Out). Una buona analogia è costituita da una pila di piatti. Gli elementi (piatti) possono essere inseriti, ispezionati o rimossi solo dalla cima della pila/stack, ovvero l'ultimo elemento alla fine del contenitore di base. La restrizione relativa alla possibilità di accedere solo al primo elemento è il motivo per l'uso della classe stack.  
  
-   La [classe queue](../standard-library/queue-class.md) supporta una struttura di dati First-Out (FIFO) first-in. Una buona analogia è costituita da persone in coda davanti allo sportello di una banca. Gli elementi (persone) possono essere aggiunti alla fine della fila e vengono rimossi dalla parte iniziale della fila. È possibile ispezionare sia l'inizio che la fine della fila. La restrizione relativa alla possibilità di accedere solo agli elementi iniziali e finali in questo modo costituisce il motivo per l'uso della classe queue.  
  
-   La [classe priority_queue](../standard-library/priority-queue-class.md) Ordina gli elementi in modo che l'elemento più grande è sempre in corrispondenza della posizione superiore. Supporta l'inserimento di un elemento e l'ispezione e la rimozione del primo elemento. Una buona analogia è costituita da una fila di persone disposte in base a età, altezza o qualche altro criterio.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[stack](#stack__stack)|Costruisce un `stack` vuoto o che rappresenta una copia totale o parziale di un oggetto contenitore di base.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[container_type](#stack__container_type)|Tipo che fornisce il contenitore di base che deve essere adattato da un oggetto `stack`.|  
|[size_type](#stack__size_type)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `stack`.|  
|[value_type](#stack__value_type)|Tipo che rappresenta il tipo di oggetto archiviato come elemento in `stack`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[vuoto](#stack__empty)|Verifica se `stack` è vuoto.|  
|[POP](#stack__pop)|Rimuove l'elemento dalla parte superiore di `stack`.|  
|[push](#stack__push)|Aggiunge un elemento alla parte superiore di `stack`.|  
|[dimensioni](#stack__size)|Restituisce il numero di elementi nel `stack`.|  
|[In alto](#stack__top)|Restituisce un riferimento a un elemento nella parte superiore di `stack`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< stack>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namestackcontainertypea-stackcontainertype"></a><a name="stack__container_type"></a>  stack:: container_type  
 Tipo che fornisce un contenitore di base per essere adattate.  
  
```  
typedef Container container_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Container`. Tutte le tre classi di contenitori di sequenza STL, ovvero la classe vector, classe di elenco e deque la classe predefinita: soddisfano i requisiti per essere utilizzato come contenitore di base per un oggetto dello stack. Tipi definiti dall'utente che soddisfano questi requisiti possono anche essere utilizzati.  
  
 Per ulteriori informazioni su `Container`, vedere la sezione Note della [classe stack](../standard-library/stack-class.md) argomento.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [stack:: stack](#stack__stack) per un esempio di come dichiarare e utilizzare `container_type`.  
  
##  <a name="a-namestackemptya-stackempty"></a><a name="stack__empty"></a>  stack:: Empty  
 Verifica se uno stack è vuoto.  
  
```  
bool empty() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 **true** Se lo stack è vuoto; **false** Se lo stack è vuoto.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namestackpopa-stackpop"></a><a name="stack__pop"></a>  stack:: POP  
 Rimuove l'elemento dalla parte superiore dello stack.  
  
```  
void pop();
```  
  
### <a name="remarks"></a>Note  
 Lo stack deve essere non vuoto per applicare la funzione membro. L'inizio dello stack è la posizione occupata dall'elemento aggiunto più di recente ed è l'ultimo elemento alla fine del contenitore.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namestackpusha-stackpush"></a><a name="stack__push"></a>  stack:: push  
 Aggiunge un elemento per l'estremità superiore dello stack.  
  
```  
void push(const Type& val);
```  
  
### <a name="parameters"></a>Parametri  
 ` val`  
 Elemento aggiunto all'inizio dello stack.  
  
### <a name="remarks"></a>Note  
 L'inizio dello stack è la posizione occupata dall'elemento aggiunto più di recente ed è l'ultimo elemento alla fine del contenitore.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namestacksizea-stacksize"></a><a name="stack__size"></a>  stack:: Size  
 Restituisce il numero di elementi nello stack.  
  
```  
size_type size() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza corrente dello stack.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namestacksizetypea-stacksizetype"></a><a name="stack__size_type"></a>  stack:: size_type  
 Un tipo unsigned integer che può rappresentare il numero di elementi in uno stack.  
  
```  
typedef typename Container::size_type size_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo di `size_type` del contenitore di base adattato dallo stack.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [dimensioni](#stack__size) per un esempio di come dichiarare e utilizzare `size_type`.  
  
##  <a name="a-namestackstacka-stackstack"></a><a name="stack__stack"></a>  stack:: stack  
 Crea uno stack è vuoto o che è una copia di una classe contenitore di base.  
  
```  
stack();

explicit stack(const container_type& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Il contenitore di cui è lo stack costruito deve essere una copia.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namestacktopa-stacktop"></a><a name="stack__top"></a>  stack:: Top  
 Restituisce un riferimento a un elemento nella parte superiore dello stack.  
  
```  
reference top();

const_reference top() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'ultimo elemento nel contenitore nella parte superiore dello stack.  
  
### <a name="remarks"></a>Note  
 Lo stack deve essere non vuoto per applicare la funzione membro. L'inizio dello stack è la posizione occupata dall'elemento aggiunto più di recente ed è l'ultimo elemento alla fine del contenitore.  
  
 Se il valore restituito di **inizio** viene assegnato a un `const_reference`, l'oggetto stack non può essere modificato. Se il valore restituito di **inizio** viene assegnato a un **riferimento**, l'oggetto stack può essere modificato.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namestackvaluetypea-stackvaluetype"></a><a name="stack__value_type"></a>  stack:: value_type  
 Un tipo che rappresenta il tipo di oggetto archiviato come elemento in uno stack.  
  
```  
typedef typename Container::value_type value_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo di `value_type` del contenitore di base adattato dallo stack.  
  
### <a name="example"></a>Esempio  
  
```  
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
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)

