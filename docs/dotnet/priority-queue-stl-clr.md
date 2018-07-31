---
title: priority_queue (STL/CLR) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::priority_queue
- cliext::priority_queue::assign
- cliext::priority_queue::const_reference
- cliext::priority_queue::container_type
- cliext::priority_queue::difference_type
- cliext::priority_queue::empty
- cliext::priority_queue::generic_container
- cliext::priority_queue::generic_value
- cliext::priority_queue::get_container
- cliext::priority_queue::operator=
- cliext::priority_queue::pop
- cliext::priority_queue::priority_queue
- cliext::priority_queue::push
- cliext::priority_queue::reference
- cliext::priority_queue::size
- cliext::priority_queue::size_type
- cliext::priority_queue::to_array
- cliext::priority_queue::top
- cliext::priority_queue::top_item
- cliext::priority_queue::value_comp
- cliext::priority_queue::value_compare
- cliext::priority_queue::value_type
dev_langs:
- C++
helpviewer_keywords:
- priority_queue class [STL/CLR]
- <queue> header [STL/CLR]
- <cliext/queue> header [STL/CLR]
- assign member [STL/CLR]
- const_reference member [STL/CLR]
- container_type member [STL/CLR]
- difference_type member [STL/CLR]
- empty member [STL/CLR]
- generic_container member [STL/CLR]
- generic_value member [STL/CLR]
- get_container member [STL/CLR]
- operator= member [STL/CLR]
- pop member [STL/CLR]
- priority_queue member [STL/CLR]
- push member [STL/CLR]
- reference member [STL/CLR]
- size member [STL/CLR]
- size_type member [STL/CLR]
- to_array member [STL/CLR]
- top member [STL/CLR]
- top_item member [STL/CLR]
- value_comp member [STL/CLR]
- value_compare member [STL/CLR]
- value_type member [STL/CLR]
ms.assetid: 4d0000d3-68ff-4c4b-8157-7060540136f5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: cb2ee3fa52612ee3c6abae7a57046564c10c8afb
ms.sourcegitcommit: bad2441d1930275ff506d44759d283d94cccd1c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/31/2018
ms.locfileid: "39376037"
---
# <a name="priorityqueue-stlclr"></a>priority_queue (STL/CLR)
La classe modello descrive un oggetto che controlla una lunghezza variabile ordinati in sequenza di elementi che ha accesso limitato. Si utilizza l'adapter contenitore `priority_queue` per gestire un contenitore sottostante come una coda di priorità.  
  
 Nella sezione successiva, `GValue` equivale a *valore* , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Value^`. Analogamente, `GContainer` equivale a *contenitore* , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Container^`.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename Value,  
    typename Container>  
    ref class priority_queue  
        System::ICloneable,  
        Microsoft::VisualC::StlClr::IPriorityQueue<GValue, GContainer>  
    { ..... };  
```  
  
### <a name="parameters"></a>Parametri  
 *Valore*  
 Tipo di un elemento nella sequenza controllata.  
  
 *Contenitore*  
 Tipo del contenitore sottostante.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/coda >  
  
 **Namespace:** cliext  

## <a name="declarations"></a>Dichiarazioni  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[priority_queue::const_reference (STL/CLR)](#const_reference)|Tipo di un riferimento costante a un elemento.|  
|[priority_queue::container_type (STL/CLR)](#container_type)|Tipo del contenitore sottostante.|  
|[priority_queue::difference_type (STL/CLR)](#difference_type)|Tipo di una distanza Signed tra due elementi.|  
|[priority_queue::generic_container (STL/CLR)](#generic_container)|Il tipo dell'interfaccia generica per l'adattatore del contenitore.|  
|[priority_queue::generic_value (STL/CLR)](#generic_value)|Il tipo di un elemento per l'interfaccia generica per l'adattatore del contenitore.|  
|[priority_queue::reference (STL/CLR)](#reference)|Tipo di un riferimento a un elemento.|  
|[priority_queue::size_type (STL/CLR)](#size_type)|Tipo di una distanza Signed tra due elementi.|  
|[priority_queue::value_compare (STL/CLR)](#value_compare)|Delegato di ordinamento per due elementi.|  
|[priority_queue::value_type (STL/CLR)](#value_type)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[priority_queue::assign (STL/CLR)](#assign)|Sostituisce tutti gli elementi.|  
|[priority_queue::empty (STL/CLR)](#empty)|Verifica se sono presenti o meno degli elementi.|  
|[priority_queue::get_container (STL/CLR)](#get_container)|Accede al contenitore sottostante.|  
|[priority_queue::pop (STL/CLR)](#pop)|Rimuove l'elemento con priorità hghest.|  
|[priority_queue::priority_queue (STL/CLR)](#priority_queue)|Costruisce un oggetto contenitore.|  
|[priority_queue::push (STL/CLR)](#push)|Aggiunge un nuovo elemento.|  
|[priority_queue::size (STL/CLR)](#size)|Conta il numero di elementi.|  
|[priority_queue::top (STL/CLR)](#top)|Accede all'elemento con priorità più alta.|  
|[priority_queue::to_array (STL/CLR)](#to_array)|Copia la sequenza controllata in una nuova matrice.|  
|[priority_queue::value_comp (STL/CLR)](#value_comp)|Copia il delegato di ordinamento per due elementi.|  
  
|Proprietà|Descrizione|  
|--------------|-----------------|  
|[priority_queue::top_item (STL/CLR)](#top_item)|Accede all'elemento con priorità più alta.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[priority_queue::operator= (STL/CLR)](#op_as)|Sostituisce la sequenza controllata.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|IPriorityQueue\<Value, contenitore >|Mantenere la scheda di contenitore generico.|  
  
## <a name="remarks"></a>Note  
 L'oggetto alloca e libera la memoria per la sequenza da esso controllata tramite un contenitore sottostante, typu `Container`, che archivia `Value` elementi e cresce su richiesta. Mantiene la sequenza ordinata come heap, con l'elemento con priorità più alta (l'elemento superiore) facilmente accessibile e rimovibile. L'oggetto limita l'accesso per l'inserimento di nuovi elementi e si estraggono semplicemente l'elemento con priorità più alta che implementa una coda di priorità.  
  
 L'oggetto ordina la sequenza da esso controllata chiamando un oggetto delegato archiviato di tipo [priority_queue::value_compare (STL/CLR)](../dotnet/priority-queue-value-compare-stl-clr.md). È possibile specificare l'oggetto delegato archiviato quando si costruisce l'oggetto priority_queue; Se non si specifica alcun oggetto delegato, il valore predefinito è il confronto `operator<(value_type, value_type)`. Accedere a questo oggetto archiviato chiamando la funzione membro [priority_queue::value_comp (STL/CLR)](../dotnet/priority-queue-value-comp-stl-clr.md)`()`.  
  
 Un oggetto delegato di questo tipo deve imporre un rigido ordinamento debole con valori di tipo [priority_queue:: value_type (STL/CLR)](../dotnet/priority-queue-value-type-stl-clr.md). Che significa che, per le due chiavi `X` e `Y`:  
  
 `value_comp()(X, Y)` Restituisce il valore booleano stesso risultato in ogni chiamata.  
  
 Se `value_comp()(X, Y)` è true, quindi `value_comp()(Y, X)` deve essere false.  
  
 Se `value_comp()(X, Y)` è true, quindi `X` viene definito per essere ordinata prima `Y`.  
  
 Se `!value_comp()(X, Y) && !value_comp()(Y, X)` è true, quindi `X` e `Y` vengono definiti con ordinamento equivalente.  
  
 Per qualsiasi elemento `X` che precede `Y` nella sequenza controllata, `key_comp()(Y, X)` è false. (Per l'oggetto delegato predefinita, le chiavi valore diminuisce mai.)  
  
 In questo modo l'elemento con priorità più alta è uno degli elementi che non viene ordinato prima di qualsiasi altro elemento.  
  
 Poiché il contenitore sottostante conserva gli elementi ordinati come heap:  
  
 Il contenitore deve supportare gli iteratori ad accesso casuale.  
  
 Gli elementi con ordinamento equivalente possono essere estratto in un ordine diverso rispetto a cui sono state inserite. (L'ordinamento non è stabile.)  
  
 Di conseguenza, sono candidati per il contenitore sottostante [deque (STL/CLR)](../dotnet/deque-stl-clr.md) e [vettore (STL/CLR)](../dotnet/vector-stl-clr.md).  
  
## <a name="members"></a>Membri
  
## <a name="assign"></a> priority_queue::Assign (STL/CLR)
Sostituisce tutti gli elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
void assign(priority_queue<Value, Container>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 *right*  
 Adattatore del contenitore da inserire.  
  
### <a name="remarks"></a>Note  
 La funzione membro assegna `right.get_container()` al contenitore sottostante. Usarlo per modificare l'intero contenuto della coda.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_assign.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign a repetition of values   
    Mypriority_queue c2;   
    c2.assign(c1);   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
```  
  
```Output  
c a b  
c a b  
```  

## <a name="const_reference"></a> priority_queue::const_reference (STL/CLR)
Tipo di un riferimento costante a un elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
typedef value_type% const_reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un riferimento costante a un elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_const_reference.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display reversed contents " c b a"   
    for (; !c1.empty(); c1.pop())   
        {   // get a const reference to an element   
        Mypriority_queue::const_reference cref = c1.top();   
        System::Console::Write(" {0}", cref);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
```  
  
```Output  
c b a  
```  

## <a name="container_type"></a> priority_queue:: container_type (STL/CLR)
Tipo del contenitore sottostante.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
typedef Container value_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Container`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_container_type.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c" using container_type   
    Mypriority_queue::container_type wc1 = c1.get_container();   
    for each (wchar_t elem in wc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
```  
  
```Output  
c a b  
```  

## <a name="difference_type"></a> priority_queue::difference_type (STL/CLR)
I tipi di una distanza signed tra due elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
typedef int difference_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un conteggio di elementi potenzialmente negativo.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_difference_type.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// compute negative difference   
    Mypriority_queue::difference_type diff = c1.size();   
    c1.push(L'd');   
    c1.push(L'e');   
    diff -= c1.size();   
    System::Console::WriteLine("pushing 2 = {0}", diff);   
  
// compute positive difference   
    diff = c1.size();   
    c1.pop();   
    c1.pop();   
    c1.pop();   
    diff -= c1.size();   
    System::Console::WriteLine("popping 3 = {0}", diff);   
    return (0);   
    }  
```  
  
```Output  
 c a b  
pushing 2 = -2  
popping 3 = 3  
```  

## <a name="empty"></a> priority_queue:: Empty (STL/CLR)
Verifica se sono presenti o meno degli elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
bool empty();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce true per una sequenza controllata vuota. È equivalente a [priority_queue:: Size (STL/CLR)](../dotnet/priority-queue-size-stl-clr.md)`() == 0`. Usarlo per verificare se l'oggetto priority_queue è vuoto.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_empty.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine("size() = {0}", c1.size());   
    System::Console::WriteLine("empty() = {0}", c1.empty());   
  
// clear the container and reinspect   
    c1.pop();   
    c1.pop();   
    c1.pop();   
    System::Console::WriteLine("size() = {0}", c1.size());   
    System::Console::WriteLine("empty() = {0}", c1.empty());   
    return (0);   
    }  
```  
  
```Output  
 c a b  
size() = 3  
empty() = False  
size() = 0  
empty() = True  
```  

## <a name="generic_container"></a> priority_queue::generic_container (STL/CLR)
Il tipo dell'interfaccia generica per il contenitore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
typedef Microsoft::VisualC::StlClr::IPriorityQueue<Value>  
    generic_container;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive l'interfaccia generica per questa classe di adattatore di contenitori di modelli.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_generic_container.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct a generic container   
    Mypriority_queue::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1->get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify generic and display original   
    gc1->push(L'd');   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify original and display generic   
    c1.push(L'e');   
    for each (wchar_t elem in gc1->get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
```  
  
```Output  
c a b  
c a b  
d c b a  
e d b a c  
```  

## <a name="generic_value"></a> priority_queue::generic_value (STL/CLR)
Il tipo di elemento per l'uso con l'interfaccia generica per il contenitore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
typedef GValue generic_value;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo `GValue` che descrive il valore dell'elemento archiviato per l'uso con l'interfaccia generica per questa classe di contenitori di modelli. (`GValue` può essere `value_type` oppure `value_type^` se `value_type` è un tipo di riferimento.)  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_generic_value.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// get interface to container   
    Mypriority_queue::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1->get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display in priority order using generic_value   
    for (; !gc1->empty(); gc1->pop())   
        {   
        Mypriority_queue::generic_value elem = gc1->top();   
  
        System::Console::Write(" {0}", elem);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
```  
  
```Output  
c a b  
c a b  
c b a  
```  

## <a name="get_container"></a> priority_queue::get_container (STL/CLR)
Accede al contenitore sottostante.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
container_type get_container();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il contenitore sottostante. È utilizzato per ignorare le restrizioni imposte dal wrapper del contenitore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_get_container.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
```  
  
```Output  
c a b  
```  

## <a name="op_as"></a> priority_queue::operator = (STL/CLR)
Sostituisce la sequenza controllata.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
priority_queue <Value, Container>% operator=(priority_queue <Value, Container>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 *right*  
 Adattatore del contenitore da copiare.  
  
### <a name="remarks"></a>Note  
 Le copie di operatore membro *a destra* all'oggetto, quindi restituisce `*this`. Usarlo per sostituire la sequenza controllata con una copia della sequenza controllata nel *a destra*.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_operator_as.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Mypriority_queue c2;   
    c2 = c1;   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }   
```  
  
```Output  
c a b  
c a b  
```  

## <a name="pop"></a> priority_queue:: POP (STL/CLR)
Rimuove l'elemento più alto proirity.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
void pop();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro rimuove l'elemento con priorità più alta della sequenza controllata, che deve essere non vuoto. Utilizzarla per abbreviare la coda di un elemento nella parte posteriore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_pop.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// pop an element and redisplay   
    c1.pop();   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
```  
  
```Output  
c a b  
b a  
```  

## <a name="priority_queue"></a> priority_queue:: priority_queue (STL/CLR)
Costruisce un oggetto scheda di contenitore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
priority_queue();  
priority_queue(priority_queue<Value, Container> right);  
priority_queue(priority_queue<Value, Container> right);  
explicit priority_queue(value_compare^ pred);  
priority_queue(value_compare^ pred, container_type% cont);  
template<typename InIt>  
    priority_queue(InIt first, InIt last);  
template<typename InIt>  
    priority_queue(InIt first, InIt last,  
        value_compare^ pred);  
template<typename InIt>  
    priority_queue(InIt first, InIt last,  
        value_compare^ pred, container_type% cont);  
```  
  
#### <a name="parameters"></a>Parametri  
 *cont*  
 Contenitore da copiare.  
  
 *first*  
 Inizio dell'intervallo da inserire.  
  
 *last*  
 Fine dell'intervallo da inserire.  
  
 *Pred*  
 Ordinamento di predicato per la sequenza controllata.  
  
 *right*  
 Oggetto o un intervallo da inserire.  
  
### <a name="remarks"></a>Note  
 Il costruttore:  
  
 `priority_queue();`  
  
 Crea un contenitore con wrapping vuoto, con il predicato dell'ordinamento predefinito. Usarlo per specificare una sequenza controllata iniziale vuota, con il predicato dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `priority_queue(priority_queue<Value, Container>% right);`  
  
 Crea un contenitore con wrapper è una copia del `right.get_container()`, con il predicato di ordinamento `right.value_comp()`. È utilizzata per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto coda *a destra*, con il predicato di ordinamento stesso.  
  
 Il costruttore:  
  
 `priority_queue(priority_queue<Value, Container>^ right);`  
  
 Crea un contenitore con wrapper è una copia del `right->get_container()`, con il predicato di ordinamento `right->value_comp()`. È utilizzata per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto coda `*right`, con il predicato di ordinamento stesso.  
  
 Il costruttore:  
  
 `explicit priority_queue(value_compare^ pred);`  
  
 Crea un contenitore con wrapping vuoto, con il predicato di ordinamento *pred*. Usarlo per specificare una sequenza controllata iniziale vuota, con il predicato di ordinamento specificato.  
  
 Il costruttore:  
  
 `priority_queue(value_compare^ pred, container_type cont);`  
  
 Crea un contenitore con wrapping vuoto, con il predicato di ordinamento *pred*, quindi inserisce gli elementi della *cont* è utilizzata per specificare una sequenza controllata iniziale da un contenitore esistente, con il predicato di ordinamento specificato.  
  
 Il costruttore:  
  
 `template<typename InIt> priority_queue(InIt first, InIt last);`  
  
 Crea un contenitore con wrapping vuoto, con il predicato di ordinamento predefinito, quindi inserisce la sequenza [`first`, `last`). Usarlo per specificare una sequenza controllata iniziale da un eqeuence specificato, con il predicato di ordinamento specificato.  
  
 Il costruttore:  
  
 `template<typename InIt> priority_queue(InIt first, InIt last, value_compare^ pred);`  
  
 Crea un contenitore con wrapping vuoto, con il predicato di ordinamento *pred*, quindi inserisce la sequenza [`first`, `last`). Usarlo per specificare una sequenza controllata iniziale da un seqeuence specificato, con il predicato di ordinamento specificato.  
  
 Il costruttore:  
  
 `template<typename InIt> priority_queue(InIt first, InIt last, value_compare^ pred, container_type% cont);`  
  
 Crea un contenitore con wrapping vuoto, con il predicato di ordinamento *pred*, quindi inserisce gli elementi della *cont* oltre la sequenza [`first`, `last`). Usarlo per specificare una sequenza controllata iniziale da un contenitore esistente e un seqeuence specificato, con il predicato di ordinamento specificato.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_construct.cpp   
// compile with: /clr   
#include <cliext/queue>   
#include <cliext/deque>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
typedef cliext::deque<wchar_t> Mydeque;   
int main()   
    {   
// construct an empty container   
    Mypriority_queue c1;   
    Mypriority_queue::container_type^ wc1 = c1.get_container();   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
    for each (wchar_t elem in wc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Mypriority_queue c2 = cliext::greater<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    for each (wchar_t elem in wc1)   
        c2.push(elem);   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule by copying an underlying container   
    Mypriority_queue c2x =   
        gcnew Mypriority_queue(cliext::greater<wchar_t>(), *wc1);   
   for each (wchar_t elem in c2x.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Mypriority_queue c3(wc1->begin(), wc1->end());   
    for each (wchar_t elem in c3.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Mypriority_queue c4(wc1->begin(), wc1->end(),   
        cliext::greater<wchar_t>());   
    for each (wchar_t elem in c4.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range, another container, and an ordering rule   
    Mypriority_queue c5(wc1->begin(), wc1->end(),   
        cliext::greater<wchar_t>(), *wc1);   
    for each (wchar_t elem in c5.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct from a generic container   
    Mypriority_queue c6(c3);   
    for each (wchar_t elem in c6.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Mypriority_queue c7(%c3);   
    for each (wchar_t elem in c7.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule, by copying an underlying container   
    Mypriority_queue c8 =   
        gcnew Mypriority_queue(cliext::greater<wchar_t>(), *wc1);   
    for each (wchar_t elem in c8.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    return (0);   
    }  
```  
  
```Output  
size() = 0  
 c a b  
size() = 0  
 a c b  
 a c b  
 c a b  
 a c b  
 a a b c c b  
 c a b  
 c a b  
 a c b  
```  
  
## <a name="push"></a> priority_queue:: push (STL/CLR)
Aggiunge un nuovo elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
void push(value_type val);  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro inserisce un elemento con valore `val` nella sequenza controllata e Riordina la sequenza controllata per mantenere la disciplina dell'heap. Usarlo per aggiungere un altro elemento nella coda.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_push.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
```  
  
```Output  
c a b  
```  
  
## <a name="reference"></a> priority_queue::Reference (STL/CLR)
Tipo di un riferimento a un elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
typedef value_type% reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un riferimento a un elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_reference.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify top of priority_queue and redisplay   
    Mypriority_queue::reference ref = c1.top();   
    ref = L'x';   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
```  
  
```Output  
c a b  
x a b  
```  

## <a name="size"></a> priority_queue:: Size (STL/CLR)
Conta il numero di elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
size_type size();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce la lunghezza della sequenza controllata. Utilizzarla per determinare il numero di elementi attualmente presenti nella sequenza controllata. Se si è interessati è se la sequenza ha dimensioni diverse da zero, vedere [priority_queue:: Empty (STL/CLR)](../dotnet/priority-queue-empty-stl-clr.md)`()`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_size.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine("size() = {0} starting with 3", c1.size());   
  
// pop an item and reinspect   
    c1.pop();   
    System::Console::WriteLine("size() = {0} after popping", c1.size());   
  
// add two elements and reinspect   
    c1.push(L'a');   
    c1.push(L'b');   
    System::Console::WriteLine("size() = {0} after adding 2", c1.size());   
    return (0);   
    }  
```  
  
```Output  
 c a b  
size() = 3 starting with 3  
size() = 2 after popping  
size() = 4 after adding 2  
```  

## <a name="size_type"></a> priority_queue:: size_type (STL/CLR)
Il tipo di una distanza signed tra due elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
typedef int size_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un conteggio di elementi non negativo.  
  
### <a name="example"></a>Esempio  
  
```cpp 
// cliext_priority_queue_size_type.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// compute positive difference   
    Mypriority_queue::size_type diff = c1.size();   
    c1.pop();   
    c1.pop();   
    diff -= c1.size();   
    System::Console::WriteLine("size difference = {0}", diff);   
    return (0);   
    }  
```  
  
```Output  
 c a b  
size difference = 2  
```  
  
## <a name="to_array"></a> priority_queue::to_array (STL/CLR)
Copia la sequenza controllata in una nuova matrice.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
cli::array<Value>^ to_array();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce una matrice che contiene la sequenza controllata. È utilizzato per ottenere una copia della sequenza controllata in forma di matrice.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_to_array.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// copy the container and modify it   
    cli::array<wchar_t>^ a1 = c1.to_array();   
  
    c1.push(L'd');   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display the earlier array copy   
    for each (wchar_t elem in a1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
```  
  
```Output  
d c b a  
c a b  
```  

## <a name="top"></a> priority_queue:: Top (STL/CLR)
Accede all'elemento con priorità più alta.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
reference top();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce un riferimento all'elemento superiore (o con priorità) della sequenza controllata, che deve essere non vuoto. Usarlo per accedere all'elemento con priorità più alta, quando si è certi che esista.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_top.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect last item   
    System::Console::WriteLine("top() = {0}", c1.top());   
  
// alter last item and reinspect   
    c1.top() = L'x';   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
```  

## <a name="top_item"></a> priority_queue::top_item (STL/CLR)
Accede all'elemento con priorità più alta.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
property value_type back_item;  
```  
  
### <a name="remarks"></a>Note  
 La proprietà accede all'elemento superiore (o con priorità) della sequenza controllata, che deve essere non vuoto. Usarlo per leggere o scrivere l'elemento con priorità più alta, quando si è certi che esista.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_top_item.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect last item   
    System::Console::WriteLine("top_item = {0}", c1.top_item);   
  
// alter last item and reinspect   
    c1.top_item = L'x';   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
```  
  
```Output  
 c a b  
top_item = c  
 x a b  
```  

## <a name="value_comp"></a> priority_queue::value_comp (STL/CLR)
Copia il delegato di ordinamento per due elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
value_compare^ value_comp();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il delegato di ordinamento usato per ordinare la sequenza controllata. È utilizzato per confrontare due valori.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_value_comp.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    Mypriority_queue::value_compare^ vcomp = c1.value_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        vcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        vcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        vcomp(L'b', L'a'));   
    System::Console::WriteLine();   
  
// test a different ordering rule   
    Mypriority_queue c2 = cliext::greater<wchar_t>();   
    vcomp = c2.value_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        vcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        vcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        vcomp(L'b', L'a'));   
    return (0);   
    }  
```  
  
```Output  
compare(L'a', L'a') = False  
compare(L'a', L'b') = True  
compare(L'b', L'a') = False  
  
compare(L'a', L'a') = False  
compare(L'a', L'b') = False  
compare(L'b', L'a') = True  
```  

## <a name="value_compare"></a> priority_queue::value_compare (STL/CLR)
Delegato di ordinamento per due valori.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
binary_delegate<value_type, value_type, int> value_compare;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo per il delegato che determina se il primo argomento è ordinato prima della seconda.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_value_compare.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    Mypriority_queue::value_compare^ vcomp = c1.value_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        vcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        vcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        vcomp(L'b', L'a'));   
    System::Console::WriteLine();   
  
// test a different ordering rule   
    Mypriority_queue c2 = cliext::greater<wchar_t>();   
    vcomp = c2.value_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        vcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        vcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        vcomp(L'b', L'a'));   
    return (0);   
    }  
```  
  
```Output  
compare(L'a', L'a') = False  
compare(L'a', L'b') = True  
compare(L'b', L'a') = False  
  
compare(L'a', L'a') = False  
compare(L'a', L'b') = False  
compare(L'b', L'a') = True  
```  

## <a name="value_type"></a> priority_queue:: value_type (STL/CLR)
Tipo di un elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
typedef Value value_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello *valore*.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_priority_queue_value_type.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display reversed contents " a b c" using value_type   
    for (; !c1.empty(); c1.pop())   
        {   // store element in value_type object   
        Mypriority_queue::value_type val = c1.top();   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
```  
  
```Output  
c b a  
```  