---
title: "queue::front_item (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::queue::front_item"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "front_item (membro) [STL/CLR]"
ms.assetid: 389ab030-4351-48e6-9b03-417f1d3fcb86
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# queue::front_item (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Accede al primo elemento.  
  
## Sintassi  
  
```  
property value_type front_item;  
```  
  
## Note  
 La proprietà accede al primo elemento della sequenza controllata, che non deve essere vuota.  Utilizzarlo per leggere o scrivere il primo elemento, quando si è certi della sua esistenza.  
  
## Esempio  
  
```  
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
  
  **a b c**  
**front\_item \= a**  
 **x b c**   
## Requisiti  
 **Intestazione:** \<cliext\/queue\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [queue](../dotnet/queue-stl-clr.md)   
 [queue::back](../dotnet/queue-back-stl-clr.md)   
 [queue::back\_item](../dotnet/queue-back-item-stl-clr.md)   
 [queue::front](../dotnet/queue-front-stl-clr.md)   
 [queue::front](../dotnet/queue-front-stl-clr.md)