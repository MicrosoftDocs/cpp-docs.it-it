---
title: "priority_queue::priority_queue (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::priority_queue::priority_queue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "priority_queue (membro) [STL/CLR]"
ms.assetid: aab423d7-959e-48fd-9028-e9f45f43cb8a
caps.latest.revision: 17
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# priority_queue::priority_queue (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto dell'adattatore del contenitore.  
  
## Sintassi  
  
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
  
#### Parametri  
 continuazione  
 Contenitore da copiare.  
  
 innanzitutto  
 Avvio dell'intervallo da inserire.  
  
 last  
 Fine di intervalli da inserire.  
  
 pred  
 Predicato utilizzato per ordinare la sequenza selezionata.  
  
 right  
 Oggetto o intervallo da inserire.  
  
## Note  
 Il costruttore:  
  
 `priority_queue();`  
  
 crea un contenitore di cui è stato eseguito il wrapping vuoto, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per specificare una sequenza iniziale controllata vuota, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `priority_queue(priority_queue<Value, Container>% right);`  
  
 crea un contenitore di cui è stato eseguito il wrapping che è una copia di `right.get_container()`, con il predicato `right.value_comp()`dell'ordine.  È possibile utilizzarlo per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto coda `right`, con lo stesso ordine di predicato.  
  
 Il costruttore:  
  
 `priority_queue(priority_queue<Value, Container>^ right);`  
  
 crea un contenitore di cui è stato eseguito il wrapping che è una copia di `right->get_container()`, con il predicato `right->value_comp()`dell'ordine.  È possibile utilizzarlo per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto coda `*right`, con lo stesso ordine di predicato.  
  
 Il costruttore:  
  
 `explicit priority_queue(value_compare^ pred);`  
  
 crea un contenitore di cui è stato eseguito il wrapping vuoto, con il predicato `pred`dell'ordine.  È possibile utilizzarlo per specificare una sequenza iniziale controllata vuota, con il predicato specificato dell'ordine.  
  
 Il costruttore:  
  
 `priority_queue(value_compare^ pred, container_type cont);`  
  
 crea un contenitore di cui è stato eseguito il wrapping vuoto, con il predicato `pred` order, quindi esegue tutti gli elementi di `cont` di utilizzarla per specificare una sequenza iniziale controllata da un contenitore esistente, con il predicato specificato dell'ordine.  
  
 Il costruttore:  
  
 `template<typename InIt>`  
  
 `priority_queue(InIt first, InIt last);`  
  
 crea un contenitore di cui è stato eseguito il wrapping vuoto, con il predicato predefinito dell'ordine, quindi richiesto la sequenza `[``first``,` `last``)`.  Utilizzarla per specificare una sequenza selezionata iniziale da un eqeuence specificato, con il predicato specificato dell'ordine.  
  
 Il costruttore:  
  
 `template<typename InIt>`  
  
 `priority_queue(InIt first, InIt last,`  
  
 `value_compare^ pred);`  
  
 crea un contenitore di cui è stato eseguito il wrapping vuoto, con il predicato `pred` order, quindi richiesto la sequenza `[``first``,` `last``)`.  Utilizzarla per specificare una sequenza selezionata iniziale da un seqeuence specificato, con il predicato specificato dell'ordine.  
  
 Il costruttore:  
  
 `template<typename InIt>`  
  
 `priority_queue(InIt first, InIt last,`  
  
 `value_compare^ pred, container_type% cont);`  
  
 crea un contenitore di cui è stato eseguito il wrapping vuoto, con il predicato `pred` order, quindi esegue tutti gli elementi di `cont` più la sequenza `[``first``,` `last``)`.  Utilizzarla per specificare una sequenza iniziale controllata da un contenitore esistente e da un seqeuence specificato, con il predicato specificato dell'ordine.  
  
## Esempio  
  
```  
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
  
  **size\(\) \= 0**  
 **c a b**  
**size\(\) \= 0**  
 **c b**  
 **c b**  
 **c a b**  
 **c b**  
 **a b c c b**  
 **c a b**  
 **c a b**  
 **c b**   
## Requisiti  
 **Intestazione:**\<cliext\/queue\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [priority\_queue](../dotnet/priority-queue-stl-clr.md)   
 [priority\_queue::assign](../dotnet/priority-queue-assign-stl-clr.md)   
 [priority\_queue::generic\_container](../dotnet/priority-queue-generic-container-stl-clr.md)   
 [priority\_queue::operator\=](../dotnet/priority-queue-operator-assign-stl-clr.md)