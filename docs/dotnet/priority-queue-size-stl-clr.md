---
title: "priority_queue::size (STL/CLR) | Microsoft Docs"
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
  - "cliext::priority_queue::size"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "size (membro) [STL/CLR]"
ms.assetid: 37ef4be3-daac-4b5a-9a00-085863f694e0
caps.latest.revision: 17
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# priority_queue::size (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Conta il numero di elementi.  
  
## Sintassi  
  
```  
size_type size();  
```  
  
## Note  
 La funzione membro restituisce la lunghezza della sequenza controllata.  Utilizzarla per determinare il numero di elementi attualmente presenti nella sequenza controllata.  Se tutto ciò che interessa è che la sequenza abbia dimensione diversa da zero, vedere [priority\_queue::empty](../dotnet/priority-queue-empty-stl-clr.md)`()`.  
  
## Esempio  
  
```  
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
  
  **c a b**  
**size\(\) \= 3 starting with 3**  
**size\(\) \= 2 after popping**  
**size\(\) \= 4 after adding 2**   
## Requisiti  
 **Intestazione:** \<cliext\/queue\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [priority\_queue](../dotnet/priority-queue-stl-clr.md)   
 [priority\_queue::empty](../dotnet/priority-queue-empty-stl-clr.md)