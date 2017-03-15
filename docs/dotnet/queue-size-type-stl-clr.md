---
title: "queue::size_type (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::queue::size_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "size_type (membro) [STL/CLR]"
ms.assetid: 9b24c931-cc23-4d25-a29f-950ffff762ef
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# queue::size_type (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo di distanza con segno tra l'elemento due.  
  
## Sintassi  
  
```  
typedef int size_type;  
```  
  
## Note  
 Il tipo viene descritto un numero non negativo dell'elemento.  
  
## Esempio  
  
```  
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
  
  **a b c**  
**differenza di dimensioni \= 2**   
## Requisiti  
 **Intestazione:**\<cliext\/queue\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [queue](../dotnet/queue-stl-clr.md)   
 [queue::empty](../dotnet/queue-empty-stl-clr.md)