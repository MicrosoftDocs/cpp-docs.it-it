---
title: coda (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::queue
- cliext::operator!=
- cliext::operator<
- cliext::operator<=
- cliext::operator==
- cliext::operator>
- cliext::operator>=
- cliext::queue::assign
- cliext::queue::back
- cliext::queue::back_item
- cliext::queue::const_reference
- cliext::queue::container_type
- cliext::queue::difference_type
- cliext::queue::empty
- cliext::queue::front
- cliext::queue::front_item
- cliext::queue::generic_container
- cliext::queue::generic_value
- cliext::queue::get_container
- cliext::queue::operator=
- cliext::queue::pop
- cliext::queue::push
- cliext::queue::queue
- cliext::queue::reference
- cliext::queue::size
- cliext::queue::size_type
- cliext::queue::to_array
- cliext::queue::value_type
dev_langs:
- C++
helpviewer_keywords:
- <queue> header [STL/CLR]
- queue class [STL/CLR]
- <cliext/queue> header [STL/CLR]
- operator!= member [STL/CLR]
- operator< member [STL/CLR]
- operator<= member [STL/CLR]
- operator== member [STL/CLR]
- operator> member [STL/CLR]
- operator>= member [STL/CLR]
- assign member [STL/CLR]
- back member [STL/CLR]
- back_item member [STL/CLR]
- const_reference member [STL/CLR]
- container_type member [STL/CLR]
- difference_type member [STL/CLR]
- empty member [STL/CLR]
- front member [STL/CLR]
- front_item member [STL/CLR]
- generic_container member [STL/CLR]
- generic_value member [STL/CLR]
- get_container member [STL/CLR]
- operator= member [STL/CLR]
- pop member [STL/CLR]
- push member [STL/CLR]
- queue member [STL/CLR]
- reference member [STL/CLR]
- size member [STL/CLR]
- size_type member [STL/CLR]
- to_array member [STL/CLR]
- value_type member [STL/CLR]
ms.assetid: 9ea7dec3-ea98-48ff-87d0-a5afc924aaf2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: b4d591d2abd7613777dec6ae668badd84fe31d0c
ms.sourcegitcommit: 301bb19056e5bae84ff50f7d1df1e546efe225ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/21/2018
ms.locfileid: "36305553"
---
# <a name="queue-stlclr"></a>queue (STL/CLR)
La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che dispone dell'accesso first-in First-Out. Si utilizza l'adapter contenitore `queue` per gestire un contenitore sottostante come una coda.  
  
 Nella sezione successiva, `GValue` equivale `Value` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Value^`. Analogamente, `GContainer` equivale `Container` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Container^`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    ref class queue  
        :   public  
        System::ICloneable,  
        Microsoft::VisualC::StlClr::IQueue<GValue, GContainer>  
    { ..... };  
```  
  
#### <a name="parameters"></a>Parametri  
 Valore  
 Tipo di un elemento nella sequenza controllata.  
  
 Contenitore  
 Tipo del contenitore sottostante.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/code >  
  
 **Namespace:** cliext  

## <a name="declarations"></a>Dichiarazioni  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[queue::const_reference (STL/CLR)](#const_reference)|Tipo di un riferimento costante a un elemento.|  
|[queue::container_type (STL/CLR)](#container_type)|Tipo del contenitore sottostante.|  
|[queue::difference_type (STL/CLR)](#difference_type)|Tipo di una distanza Signed tra due elementi.|  
|[queue::generic_container (STL/CLR)](#generic_container)|Il tipo dell'interfaccia generica per l'adapter di contenitore.|  
|[queue::generic_value (STL/CLR)](#generic_value)|Il tipo di un elemento per l'interfaccia generica per l'adapter di contenitore.|  
|[queue::reference (STL/CLR)](#reference)|Tipo di un riferimento a un elemento.|  
|[queue::size_type (STL/CLR)](#size_type)|Tipo di una distanza Signed tra due elementi.|  
|[queue::value_type (STL/CLR)](#value_type)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[queue::assign (STL/CLR)](#assign)|Sostituisce tutti gli elementi.|  
|[queue::back (STL/CLR)](#back)|Accede all'ultimo elemento.|  
|[queue::empty (STL/CLR)](#empty)|Verifica se sono presenti o meno degli elementi.|  
|[queue::front (STL/CLR)](#front)|Accede al primo elemento.|  
|[queue::get_container (STL/CLR)](#get_container)|Accede al contenitore sottostante.|  
|[queue::pop (STL/CLR)](#pop)|Rimuove il primo elemento.|  
|[queue::push (STL/CLR)](#push)|Aggiunge un nuovo ultimo elemento.|  
|[queue::queue (STL/CLR)](#queue)|Costruisce un oggetto contenitore.|  
|[queue::size (STL/CLR)](#size)|Conta il numero di elementi.|  
|[queue::to_array (STL/CLR)](#to_array)|La sequenza controllata viene copiata in una nuova matrice.|  
  
|Proprietà|Descrizione|  
|--------------|-----------------|  
|[queue::back_item (STL/CLR)](#back_item)|Accede all'ultimo elemento.|  
|[queue::front_item (STL/CLR)](#front_item)|Accede al primo elemento.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[queue::operator= (STL/CLR)](#op_as)|Sostituisce la sequenza controllata.|  
|[operator!= (queue) (STL/CLR)](#op_neq)|Determina se un `queue` oggetto non è uguale a un altro `queue` oggetto.|  
|[operator< (queue) (STL/CLR)](#op_lt)|Determina se un `queue` oggetto è minore di un altro `queue` oggetto.|  
|[operator<= (queue) (STL/CLR)](#op_lteq)|Determina se un `queue` oggetto è minore o uguale a un altro `queue` oggetto.|  
|[operator== (queue) (STL/CLR)](#op_eq)|Determina se un `queue` è uguale a un altro oggetto `queue` oggetto.|  
|[operator> (queue) (STL/CLR)](#op_gt)|Determina se un `queue` è maggiore di un altro oggetto `queue` oggetto.|  
|[operator>= (queue) (STL/CLR)](#op_gteq)|Determina se un `queue` oggetto è maggiore o uguale a un altro `queue` oggetto.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|ICoda\<valore, contenitore >|Gestire gli adattatori del contenitore generico.|  
  
### <a name="remarks"></a>Note  
 L'oggetto alloca e libera spazio di archiviazione per la sequenza da esso controllata tramite un contenitore sottostante, di tipo `Container`, che archivia `Value` elementi e aumento delle dimensioni su richiesta. L'oggetto limita l'accesso alla pressione solo il primo elemento e si estraggono l'ultimo elemento, che implementa un first in First-Out coda (noto anche come una coda FIFO, o semplicemente una coda).  
  
## <a name="members"></a>Membri

## <a name="assign"></a> Queue:: Assign (STL/CLR)
Sostituisce tutti gli elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void assign(queue<Value, Container>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Scheda contenitore da inserire.  
  
### <a name="remarks"></a>Note  
 La funzione membro assegna `right.get_container()` al contenitore sottostante. Utilizzarla per modificare l'intero contenuto della coda.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_assign.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign a repetition of values   
    Myqueue c2;   
    c2.assign(c1);   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
```  

## <a name="back"></a> Queue:: back (STL/CLR)
Accede all'ultimo elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
reference back();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce un riferimento all'ultimo elemento della sequenza controllata, che deve essere non vuoto. Usarlo per accedere all'ultimo elemento quando si è certi che esista.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_back.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect last item   
    System::Console::WriteLine("back() = {0}", c1.back());   
  
// alter last item and reinspect   
    c1.back() = L'x';   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
back() = c  
 a b x  
```  

## <a name="back_item"></a> Queue::back_item (STL/CLR)
Accede all'ultimo elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
property value_type back_item;  
```  
  
### <a name="remarks"></a>Note  
 La proprietà accede all'ultimo elemento della sequenza controllata, che deve essere non vuoto. Utilizzarla per leggere o scrivere l'ultimo elemento, quando si è certi che esista.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_back_item.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect last item   
    System::Console::WriteLine("back_item = {0}", c1.back_item);   
  
// alter last item and reinspect   
    c1.back_item = L'x';   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
back_item = c  
 a b x  
```  

## <a name="const_reference"></a> Queue::const_reference (STL/CLR)
Tipo di un riferimento costante a un elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef value_type% const_reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un riferimento costante a un elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_const_reference.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for (; !c1.empty(); c1.pop())   
        {   // get a const reference to an element   
        Myqueue::const_reference cref = c1.front();   
        System::Console::Write(" {0}", cref);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="container_type"></a> Queue:: container_type (STL/CLR)
Tipo del contenitore sottostante.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef Container value_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Container`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_container_type.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c" using container_type   
    Myqueue::container_type wc1 = c1.get_container();   
    for each (wchar_t elem in wc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="difference_type"></a> Queue::difference_type (STL/CLR)
I tipi di una distanza signed tra due elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef int difference_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un conteggio di elementi eventualmente negativo.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_difference_type.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// compute negative difference   
    Myqueue::difference_type diff = c1.size();   
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
 a b c  
pushing 2 = -2  
popping 3 = 3  
```  

## <a name="empty"></a> Queue:: Empty (STL/CLR)
Verifica se sono presenti o meno degli elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
bool empty();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce true per una sequenza controllata vuota. È equivalente a [Queue:: Size (STL/CLR)](../dotnet/queue-size-stl-clr.md)`() == 0`. Utilizzarla per verificare se la coda è vuota.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_empty.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
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
 a b c  
size() = 3  
empty() = False  
size() = 0  
empty() = True  
```  

## <a name="front"></a> Queue:: front (STL/CLR)
Accede al primo elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
reference front();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce un riferimento al primo elemento della sequenza controllata, che deve essere non vuoto. Utilizzarla per accedere al primo elemento, quando si è certi che esista.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_front.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first item   
    System::Console::WriteLine("front() = {0}", c1.front());   
  
// alter first item and reinspect   
    c1.front() = L'x';   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
front() = a  
 x b c  
```  

## <a name="front_item"></a> Queue::front_item (STL/CLR)
Accede al primo elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
property value_type front_item;  
```  
  
### <a name="remarks"></a>Note  
 La proprietà accede al primo elemento della sequenza controllata, che deve essere non vuoto. Utilizzarla per leggere o scrivere il primo elemento, quando si è certi che esista.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_front_item.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect last item   
    System::Console::WriteLine("front_item = {0}", c1.front_item);   
  
// alter last item and reinspect   
    c1.front_item = L'x';   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
front_item = a  
 x b c  
```  

## <a name="generic_container"></a> Queue::generic_container (STL/CLR)
Il tipo dell'interfaccia generica per l'adapter di contenitore.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef Microsoft::VisualC::StlClr::IQueue<Value>  
    generic_container;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive l'interfaccia generica per questa classe di adattatori di contenitore di modello.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_generic_container.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct a generic container   
    Myqueue::generic_container^ gc1 = %c1;   
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
a b c  
a b c  
a b c d  
a b c d e  
```  

## <a name="generic_value"></a> Queue::generic_value (STL/CLR)
Il tipo di elemento per l'utilizzo con l'interfaccia generica per il contenitore.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef GValue generic_value;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo `GValue` che descrive il valore dell'elemento archiviato per l'utilizzo con l'interfaccia generica per questa classe di contenitori di modelli. (`GValue` è `value_type` o `value_type^` se `value_type` è un tipo di riferimento.)  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_generic_value.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// get interface to container   
    Myqueue::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1->get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display in order using generic_value   
    for (; !gc1->empty(); gc1->pop())   
        {   
        Myqueue::generic_value elem = gc1->front();   
  
        System::Console::Write(" {0}", elem);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
a b c  
```  

## <a name="get_container"></a> Queue:: get_container (STL/CLR)
Accede al contenitore sottostante.  
  
### <a name="syntax"></a>Sintassi  
  
```  
container_type^ get_container();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il contenitore sottostante. È utilizzato per ignorare le restrizioni imposte dal wrapper del contenitore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_get_container.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
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
a b c  
```  

## <a name="op_as"></a> Queue::operator = (STL/CLR)
Sostituisce la sequenza controllata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
queue <Value, Container>% operator=(queue <Value, Container>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Scheda contenitore da copiare.  
  
### <a name="remarks"></a>Note  
 Le copie di operatore membro `right` all'oggetto, quindi restituisce `*this`. Viene usato per sostituire la sequenza controllata con una copia della sequenza controllata in `right`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_operator_as.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myqueue c2;   
    c2 = c1;   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
```  

## <a name="pop"></a> Queue:: POP (STL/CLR)
Rimuove l'ultimo elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void pop();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro rimuove l'ultimo elemento della sequenza controllata, che deve essere non vuoto. Utilizzarla per abbreviare la coda di un elemento sul retro.  
  
### <a name="example"></a>Esempio  
  
```  
// cliext_queue_pop.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
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
a b c  
b c  
```  

## <a name="push"></a> Queue:: push (STL/CLR)
Aggiunge un nuovo ultimo elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void push(value_type val);  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro aggiunge un elemento con valore `val` alla fine della coda. Utilizzarlo per aggiungere un elemento alla coda.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_push.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
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
a b c  
```  

## <a name="queue"></a> Queue:: Queue (STL/CLR)
Costruisce un oggetto adattatore di contenitore.  
  
### <a name="syntax"></a>Sintassi  
  
```  
queue();  
queue(queue<Value, Container>% right);  
queue(queue<Value, Container>^ right);  
explicit queue(container_type% wrapped);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Oggetto da copiare.  
  
 il wrapping  
 Sottoposta a wrapping contenitore da usare.  
  
### <a name="remarks"></a>Note  
 Il costruttore:  
  
 `queue();`  
  
 Crea un contenitore vuoto sottoposta a wrapping. È utilizzata per specificare una sequenza controllata iniziale vuota.  
  
 Il costruttore:  
  
 `queue(queue<Value, Container>% right);`  
  
 Crea un contenitore incluso che è una copia di `right.get_container()`. Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto coda `right`.  
  
 Il costruttore:  
  
 `queue(queue<Value, Container>^ right);`  
  
 Crea un contenitore incluso che è una copia di `right->get_container()`. Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto coda `*right`.  
  
 Il costruttore:  
  
 `explicit queue(container_type wrapped);`  
  
 Usa il contenitore esistente `wrapped` come contenitore sottoposto a wrapping. È utilizzato per costruire una coda da un contenitore esistente.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_construct.cpp   
// compile with: /clr   
#include <cliext/queue>   
#include <cliext/list>   
  
typedef cliext::queue<wchar_t> Myqueue;   
typedef cliext::list<wchar_t> Mylist;   
typedef cliext::queue<wchar_t, Mylist> Myqueue_list;   
int main()   
    {   
// construct an empty container   
    Myqueue c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// construct from an underlying container   
    Mylist v2(5, L'x');   
    Myqueue_list c2(v2);       
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Myqueue_list c3(c2);   
    for each (wchar_t elem in c3.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container through handle   
    Myqueue_list c4(%c2);   
    for each (wchar_t elem in c4.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
size() = 0  
 x x x x x  
 x x x x x  
 x x x x x  
```  

## <a name="reference"></a> Queue::Reference (STL/CLR)
Tipo di un riferimento a un elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef value_type% reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un riferimento a un elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_reference.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify back of queue and redisplay   
    Myqueue::reference ref = c1.back();   
    ref = L'x';   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b x  
```  

## <a name="size"></a> Queue:: Size (STL/CLR)
Conta il numero di elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
size_type size();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce la lunghezza della sequenza controllata. Utilizzarla per determinare il numero di elementi attualmente presenti nella sequenza controllata. Se invece è rilevante se la sequenza è diverso da zero dimensioni, vedere [Queue:: Empty (STL/CLR)](../dotnet/queue-empty-stl-clr.md)`()`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_size.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
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
 a b c  
size() = 3 starting with 3  
size() = 2 after popping  
size() = 4 after adding 2  
```  

## <a name="size_type"></a> Queue:: size_type (STL/CLR)
Il tipo di una distanza signed tra due elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef int size_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un conteggio di elementi non negativo.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_size_type.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// compute positive difference   
    Myqueue::size_type diff = c1.size();   
    c1.pop();   
    c1.pop();   
    diff -= c1.size();   
    System::Console::WriteLine("size difference = {0}", diff);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
size difference = 2  
```  

## <a name="to_array"></a> Queue::to_array (STL/CLR)
La sequenza controllata viene copiata in una nuova matrice.  
  
### <a name="syntax"></a>Sintassi  
  
```  
cli::array<Value>^ to_array();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce una matrice che contiene la sequenza controllata. È utilizzato per ottenere una copia della sequenza controllata in forma di matrice.  
  
### <a name="example"></a>Esempio  
  
```  
// cliext_queue_to_array.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
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
a b c d  
a b c  
```  

## <a name="value_type"></a> Queue:: value_type (STL/CLR)
Tipo di un elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef Value value_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Value`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_value_type.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display reversed contents " a b c" using value_type   
    for (; !c1.empty(); c1.pop())   
        {   // store element in value_type object   
        Myqueue::value_type val = c1.front();   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="op_neq"></a> operatore! = (coda) (STL/CLR)
Coda non uguale a confronto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    bool operator!=(queue<Value, Container>% left,  
        queue<Value, Container>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 left  
 Contenitore sinistro da confrontare.  
  
 right  
 Contenitore destro da confrontare.  
  
### <a name="remarks"></a>Note  
 La funzione di operatore restituisce `!(left == right)`. Utilizzati per verificare se `left` non viene ordinato identico `right` quando due code vengono confrontato elemento per elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_operator_ne.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myqueue c2;   
    c2.push(L'a');   
    c2.push(L'b');   
    c2.push(L'd');   
  
// display contents " a b d"   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] != [a b c] is {0}",   
        c1 != c1);   
    System::Console::WriteLine("[a b c] != [a b d] is {0}",   
        c1 != c2);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
 a b d  
[a b c] != [a b c] is False  
[a b c] != [a b d] is True  
```  

## <a name="op_lt"></a> operatore&lt; (coda) (STL/CLR)
Coda minore di confronto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    bool operator<(queue<Value, Container>% left,  
        queue<Value, Container>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 left  
 Contenitore sinistro da confrontare.  
  
 right  
 Contenitore destro da confrontare.  
  
### <a name="remarks"></a>Note  
 L'operatore funzione restituisce true se, per la posizione più bassa `i` per il quale `!(right[i] < left[i])` è anche vero che `left[i] < right[i]`. In caso contrario, restituisce `left->` [Queue:: Size (STL/CLR)](../dotnet/queue-size-stl-clr.md) `() <` `right->size()` utilizzati per verificare se `left` viene ordinato prima `right` quando due code vengono confrontato elemento per elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_operator_lt.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myqueue c2;   
    c2.push(L'a');   
    c2.push(L'b');   
    c2.push(L'd');   
  
// display contents " a b d"   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] < [a b c] is {0}",   
        c1 < c1);   
    System::Console::WriteLine("[a b c] < [a b d] is {0}",   
        c1 < c2);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
 a b d  
[a b c] < [a b c] is False  
[a b c] < [a b d] is True  
```  

## <a name="op_lteq"></a> operatore&lt;= (coda) (STL/CLR)
Minore o uguale coda confronto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    bool operator<=(queue<Value, Container>% left,  
        queue<Value, Container>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 left  
 Contenitore sinistro da confrontare.  
  
 right  
 Contenitore destro da confrontare.  
  
### <a name="remarks"></a>Note  
 La funzione di operatore restituisce `!(right < left)`. Utilizzati per verificare se `left` non viene ordinato dopo `right` quando due code vengono confrontato elemento per elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_operator_le.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myqueue c2;   
    c2.push(L'a');   
    c2.push(L'b');   
    c2.push(L'd');   
  
// display contents " a b d"   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] <= [a b c] is {0}",   
        c1 <= c1);   
    System::Console::WriteLine("[a b d] <= [a b c] is {0}",   
        c2 <= c1);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
 a b d  
[a b c] <= [a b c] is True  
[a b d] <= [a b c] is False  
```  

## <a name="op_eq"></a> operatore = = (coda) (STL/CLR)
Confronto uguale a coda.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    bool operator==(queue<Value, Container>% left,  
        queue<Value, Container>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 left  
 Contenitore sinistro da confrontare.  
  
 right  
 Contenitore destro da confrontare.  
  
### <a name="remarks"></a>Note  
 La funzione di operatore restituisce true solo se le sequenze controllate da `left` e `right` hanno la stessa lunghezza e, per ogni posizione `i`, `left[i] ==` `right[i]`. Utilizzati per verificare se `left` viene ordinato identico `right` quando due code vengono confrontato elemento per elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_operator_eq.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myqueue c2;   
    c2.push(L'a');   
    c2.push(L'b');   
    c2.push(L'd');   
  
// display contents " a b d"   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] == [a b c] is {0}",   
        c1 == c1);   
    System::Console::WriteLine("[a b c] == [a b d] is {0}",   
        c1 == c2);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
 a b d  
[a b c] == [a b c] is True  
[a b c] == [a b d] is False  
```  

## <a name="op_gt"></a> operatore&gt; (coda) (STL/CLR)
Coda maggiore di confronto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    bool operator>(queue<Value, Container>% left,  
        queue<Value, Container>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 left  
 Contenitore sinistro da confrontare.  
  
 right  
 Contenitore destro da confrontare.  
  
### <a name="remarks"></a>Note  
 La funzione di operatore restituisce `right` `<` `left`. Utilizzati per verificare se `left` viene ordinato dopo `right` quando due code vengono confrontato elemento per elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_operator_gt.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myqueue c2;   
    c2.push(L'a');   
    c2.push(L'b');   
    c2.push(L'd');   
  
// display contents " a b d"   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] > [a b c] is {0}",   
        c1 > c1);   
    System::Console::WriteLine("[a b d] > [a b c] is {0}",   
        c2 > c1);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
 a b d  
[a b c] > [a b c] is False  
[a b d] > [a b c] is True  
```  

## <a name="op_gteq"></a> operatore&gt;= (coda) (STL/CLR)
Coda è maggiore di o uguale a confronto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    bool operator>=(queue<Value, Container>% left,  
        queue<Value, Container>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 left  
 Contenitore sinistro da confrontare.  
  
 right  
 Contenitore destro da confrontare.  
  
### <a name="remarks"></a>Note  
 La funzione di operatore restituisce `!(left < right)`. Utilizzati per verificare se `left` non viene ordinato prima `right` quando due code vengono confrontato elemento per elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_queue_operator_ge.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myqueue c2;   
    c2.push(L'a');   
    c2.push(L'b');   
    c2.push(L'd');   
  
// display contents " a b d"   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] >= [a b c] is {0}",   
        c1 >= c1);   
    System::Console::WriteLine("[a b c] >= [a b d] is {0}",   
        c1 >= c2);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
 a b d  
[a b c] >= [a b c] is True  
[a b c] >= [a b d] is False  
```  