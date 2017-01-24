---
title: "priority_queue::size_type (STL/CLR) | Microsoft Docs"
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
  - "cliext::priority_queue::size_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "size_type (membro) [STL/CLR]"
ms.assetid: 0f38e670-4f61-474a-990c-0b8cd31ada5e
caps.latest.revision: 13
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# priority_queue::size_type (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo di una distanza con segno tra due elementi.  
  
## Sintassi  
  
```  
typedef int size_type;  
```  
  
## Note  
 Il tipo descrive un conteggio di elementi non negativo.  
  
## Esempio  
  
```  
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
  
  **c a b**  
**size difference \= 2**   
## Requisiti  
 **Intestazione:** \<cliext\/queue\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [priority\_queue](../dotnet/priority-queue-stl-clr.md)   
 [priority\_queue::empty](../dotnet/priority-queue-empty-stl-clr.md)