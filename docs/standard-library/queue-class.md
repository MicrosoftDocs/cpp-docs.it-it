---
title: "Classe queue | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.queue"
  - "std::queue"
  - "queue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "queue (classe)"
ms.assetid: 28c20ab0-3a72-4185-9e0f-5a44eea0e204
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe queue
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe dell'adattatore di contenitore modello che fornisce una restrizione di funzionalità per un determinato tipo di contenitore sottostante, limitare l'accesso agli elementi anteriori e posteriore. Gli elementi possono essere aggiunti alla parte posteriore o rimosse dall'inizio, e gli elementi possono essere controllati in delle estremità della coda.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Type, class Container = deque <Type>>  
class queue  
```  
  
#### <a name="parameters"></a>Parametri  
 *Type*  
 Il tipo di elemento dati da archiviare nella coda  
  
 `Container`  
 Il tipo di contenitore sottostante utilizzato per implementare la coda.  
  
## <a name="remarks"></a>Note  
 Gli elementi della classe **tipo** previsti nel modello di primo parametro di un oggetto coda corrispondo alle [value_type](#queue__value_type) e deve corrispondere al tipo di elemento della classe contenitore sottostante **contenitore** previsti dal secondo parametro di modello. Il **tipo** deve essere assegnabile, in modo che sia possibile copiare oggetti di quel tipo e assegnare valori alle variabili di tale tipo.  
  
 Includono le classi contenitore sottostante adatte per la coda [deque](../standard-library/deque-class.md) e [elenco](../standard-library/list-class.md), o qualsiasi altro contenitore di sequenza che supporta le operazioni di `front`, **nuovamente**, `push_back`, e `pop_front`. La classe del contenitore sottostante è incapsulata nell'adattatore di contenitori, che espone solo il set limitato di funzioni membro dei contenitori di sequenza come interfaccia pubblica.  
  
 La coda di oggetti sono uguaglianza comparabili se e solo se gli elementi della classe **tipo** sono confrontabili uguaglianza e sono minori-più simili se e solo se gli elementi della classe **tipo** sono minori-rispetto confrontabili.  
  
 Esistono tre tipi di adattatori del contenitore definiti dalla libreria STL: priority_queue, queue e stack. Ogni limita la funzionalità di una classe contenitore sottostante per fornire un'interfaccia precisamente controllata a una struttura di dati standard.  
  
-   La [classe stack](../standard-library/stack-class.md) supporta una struttura last in, First-Out (LIFO) dei dati. Una buona analogia è costituita da una pila di piatti. Gli elementi (piatti) possono essere inseriti, ispezionati o rimossi solo dalla cima della pila/stack, ovvero l'ultimo elemento alla fine del contenitore di base. La restrizione relativa alla possibilità di accedere solo al primo elemento è il motivo per l'uso della classe stack.  
  
-   La classe coda supporta una struttura di dati First-Out (FIFO) first-in. Una buona analogia è costituita da persone in coda davanti allo sportello di una banca. Gli elementi (persone) possono essere aggiunti alla fine della fila e vengono rimossi dalla parte iniziale della fila. È possibile ispezionare sia l'inizio che la fine della fila. La restrizione per l'accesso solo gli elementi anteriori e posteriore in questo modo è il motivo per utilizzare la classe di coda.  
  
-   La [classe priority_queue](../standard-library/priority-queue-class.md) Ordina gli elementi in modo che l'elemento più grande è sempre in corrispondenza della posizione superiore. Supporta l'inserimento di un elemento e l'ispezione e la rimozione del primo elemento. Una buona analogia è costituita da una fila di persone disposte in base a età, altezza o qualche altro criterio.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[coda](#queue__queue)|Costruisce un `queue` vuoto o che rappresenta una copia totale o parziale di un oggetto contenitore di base.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[container_type](#queue__container_type)|Tipo che fornisce un contenitore di base per essere adattate per il `queue`.|  
|[size_type](#queue__size_type)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `queue`.|  
|[value_type](#queue__value_type)|Tipo che rappresenta il tipo di oggetto archiviato come elemento in `queue`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[Indietro](#queue__back)|Restituisce un riferimento all'ultima e più di recente aggiunta elemento al backup del `queue`.|  
|[vuoto](#queue__empty)|Verifica se `queue` è vuoto.|  
|[primo piano](#queue__front)|Restituisce un riferimento al primo elemento in primo piano la `queue`.|  
|[POP](#queue__pop)|Rimuove un elemento dall'inizio del `queue`.|  
|[push](#queue__push)|Aggiunge un elemento nella parte posteriore del `queue`.|  
|[dimensioni](#queue__size)|Restituisce il numero di elementi nel `queue`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< coda>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namequeuebacka-queueback"></a><a name="queue__back"></a>  Queue:: back  
 Restituisce che un riferimento all'ultima e più di recente è stato aggiunto elemento nella parte posteriore della coda.  
  
```  
reference back();

const_reference back() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 L'ultimo elemento della coda. Se la coda è vuota, il valore restituito è indefinito.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito di **nuovamente** viene assegnato a un `const_reference`, l'oggetto di coda non può essere modificato. Se il valore restituito di **nuovamente** viene assegnato a un **riferimento**, l'oggetto coda può essere modificato.  
  
 Durante la compilazione con SECURE_SCL 1, si verificherà un errore di runtime se si tenta di accedere a un elemento in una coda vuota.  Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md) .  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namequeuecontainertypea-queuecontainertype"></a><a name="queue__container_type"></a>  Queue:: container_type  
 Tipo che fornisce un contenitore di base per essere adattate.  
  
```  
typedef Container container_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Container`. Due classi dei contenitori STL sequenza, la classe di elenco e la classe deque predefinita, i requisiti per essere utilizzato come contenitore di base per un oggetto coda. Tipi definiti dall'utente che soddisfano i requisiti possono anche essere utilizzati.  
  
 Per ulteriori informazioni su `Container`, vedere la sezione Note della [classe queue](../standard-library/queue-class.md) argomento.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [coda](#queue__queue) per un esempio di come dichiarare e utilizzare `container_type`.  
  
##  <a name="a-namequeueemptya-queueempty"></a><a name="queue__empty"></a>  Queue:: Empty  
 Verifica se una coda è vuota.  
  
```  
bool empty() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 **true** Se la coda è vuota; **false** Se la coda è vuota.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namequeuefronta-queuefront"></a><a name="queue__front"></a>  Queue:: front  
 Restituisce un riferimento al primo elemento nella parte anteriore della coda.  
  
```  
reference front();

const_reference front() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il primo elemento della coda. Se la coda è vuota, il valore restituito è indefinito.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito di `front` viene assegnato a un `const_reference`, l'oggetto di coda non può essere modificato. Se il valore restituito di `front` viene assegnato a un **riferimento**, l'oggetto coda può essere modificato.  
  
 La funzione membro restituisce un **riferimento** al primo elemento della sequenza controllata, che può essere vuoto.  
  
 Durante la compilazione con SECURE_SCL 1, si verificherà un errore di runtime se si tenta di accedere a un elemento in una coda vuota.  Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md) .  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namequeuepopa-queuepop"></a><a name="queue__pop"></a>  Queue:: POP  
 Rimuove un elemento dalla parte anteriore della coda.  
  
```  
void pop();
```  
  
### <a name="remarks"></a>Note  
 La coda deve essere non vuota per applicare la funzione membro. Inizio della coda è la posizione occupata dall'elemento aggiunto più di recente ed è l'ultimo elemento alla fine del contenitore.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namequeuepusha-queuepush"></a><a name="queue__push"></a>  Queue:: push  
 Aggiunge un elemento nella parte posteriore della coda.  
  
```  
void push(const Type& val);
```  
  
### <a name="parameters"></a>Parametri  
 `val`  
 L'elemento aggiunto alla fine della coda.  
  
### <a name="remarks"></a>Note  
 Nella parte posteriore della coda è la posizione occupata dall'elemento aggiunto più di recente ed è l'ultimo elemento alla fine del contenitore.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namequeuequeuea-queuequeue"></a><a name="queue__queue"></a>  Queue:: Queue  
 Costruisce una coda è vuota o che è una copia di un oggetto contenitore di base.  
  
```  
queue();

explicit queue(const container_type& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Il **const** contenitore di cui la coda costruita è una copia.  
  
### <a name="remarks"></a>Note  
 Il contenitore di base predefinito per la coda è deque. È inoltre possibile specificare l'elenco come un contenitore di base, ma non è possibile specificare vettore, perché manca il necessario `pop_front` funzione membro.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namequeuesizea-queuesize"></a><a name="queue__size"></a>  Queue:: Size  
 Restituisce il numero di elementi nella coda.  
  
```  
size_type size() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza corrente della coda.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namequeuesizetypea-queuesizetype"></a><a name="queue__size_type"></a>  Queue:: size_type  
 Un tipo unsigned integer che può rappresentare il numero di elementi in una coda.  
  
```  
typedef typename Container::size_type size_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo per la `size_type` del contenitore di base adattato dalla coda.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [Queue:: front](#queue__front) per un esempio di come dichiarare e utilizzare `size_type`.  
  
##  <a name="a-namequeuevaluetypea-queuevaluetype"></a><a name="queue__value_type"></a>  Queue:: value_type  
 Un tipo che rappresenta il tipo di oggetto archiviato come elemento in una coda.  
  
```  
typedef typename Container::value_type value_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo per la `value_type` del contenitore di base adattato dalla coda.  
  
### <a name="example"></a>Esempio  
  
```  
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
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)

