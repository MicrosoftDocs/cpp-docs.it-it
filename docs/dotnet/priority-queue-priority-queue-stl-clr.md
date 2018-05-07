---
title: 'priority_queue:: priority_queue (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::priority_queue::priority_queue
dev_langs:
- C++
helpviewer_keywords:
- priority_queue member [STL/CLR]
ms.assetid: aab423d7-959e-48fd-9028-e9f45f43cb8a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 8cb50eed9dbfcbe9480a6588ff10f966f1888205
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="priorityqueuepriorityqueue-stlclr"></a>priority_queue::priority_queue (STL/CLR)
Costruisce un oggetto adattatore di contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
 cont  
 Contenitore da copiare.  
  
 primo  
 Inizio dell'intervallo da inserire.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 pred  
 Ordinamento di predicato per la sequenza controllata.  
  
 right  
 Oggetto o un intervallo da inserire.  
  
## <a name="remarks"></a>Note  
 Il costruttore:  
  
 `priority_queue();`  
  
 Crea un contenitore vuoto sottoposta a wrapping, con il predicato dell'ordinamento predefinito. È utilizzata per specificare una sequenza controllata iniziale vuota, con il predicato dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `priority_queue(priority_queue<Value, Container>% right);`  
  
 Crea un contenitore incluso che è una copia di `right.get_container()`, con il predicato ordinamento `right.value_comp()`. Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto coda `right`, con il predicato di ordinamento stesso.  
  
 Il costruttore:  
  
 `priority_queue(priority_queue<Value, Container>^ right);`  
  
 Crea un contenitore incluso che è una copia di `right->get_container()`, con il predicato ordinamento `right->value_comp()`. Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto coda `*right`, con il predicato di ordinamento stesso.  
  
 Il costruttore:  
  
 `explicit priority_queue(value_compare^ pred);`  
  
 Crea un contenitore vuoto sottoposta a wrapping, con il predicato ordinamento `pred`. È utilizzata per specificare una sequenza controllata iniziale vuota, con il predicato di ordinamento specificato.  
  
 Il costruttore:  
  
 `priority_queue(value_compare^ pred, container_type cont);`  
  
 Crea un contenitore vuoto sottoposta a wrapping, con il predicato ordinamento `pred`, quindi inserisce gli elementi della `cont` è utilizzata per specificare una sequenza controllata iniziale da un contenitore esistente, con il predicato di ordinamento specificato.  
  
 Il costruttore:  
  
 `template<typename InIt> priority_queue(InIt first, InIt last);`  
  
 Crea un contenitore vuoto sottoposta a wrapping, con il predicato di ordinamento predefinito, quindi inserisce la sequenza [`first`, `last`). È utilizzata per specificare una sequenza controllata iniziale da un eqeuence specificato, con il predicato di ordinamento specificato.  
  
 Il costruttore:  
  
 `template<typename InIt> priority_queue(InIt first, InIt last, value_compare^ pred);`  
  
 Crea un contenitore vuoto sottoposta a wrapping, con il predicato ordinamento `pred`, quindi inserisce la sequenza [`first`, `last`). È utilizzata per specificare una sequenza controllata iniziale da un seqeuence specificato, con il predicato di ordinamento specificato.  
  
 Il costruttore:  
  
 `template<typename InIt> priority_queue(InIt first, InIt last, value_compare^ pred, container_type% cont);`  
  
 Crea un contenitore vuoto sottoposta a wrapping, con il predicato ordinamento `pred`, quindi inserisce gli elementi della `cont` più la sequenza [`first`, `last`). È utilizzata per specificare una sequenza controllata iniziale da un contenitore esistente e un seqeuence specificato, con il predicato di ordinamento specificato.  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/code >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)   
 [priority_queue::Assign (STL/CLR)](../dotnet/priority-queue-assign-stl-clr.md)   
 [priority_queue::generic_container (STL/CLR)](../dotnet/priority-queue-generic-container-stl-clr.md)   
 [priority_queue::operator= (STL/CLR)](../dotnet/priority-queue-operator-assign-stl-clr.md)