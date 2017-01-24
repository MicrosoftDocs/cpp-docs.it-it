---
title: "queue::generic_value (STL/CLR) | Microsoft Docs"
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
  - "cliext::queue::generic_value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generic_value (membro) [STL/CLR]"
ms.assetid: 5efd9812-6b4d-4e59-b8e8-c4975ae61667
caps.latest.revision: 8
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# queue::generic_value (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo di elemento per l'utilizzo con l'interfaccia generica del contenitore.  
  
## Sintassi  
  
```  
typedef GValue generic_value;  
```  
  
## Note  
 Il tipo viene descritto un oggetto di tipo `GValue` che descrive il valore dell'elemento archiviato da utilizzare con l'interfaccia generica per questa classe di contenitori del modello. \(`GValue` è `value_type` o `value_type^` se `value_type` è un tipo di riferimento.\)  
  
## Esempio  
  
```  
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
  
  **a b c**  
 **a b c**  
 **a b c**   
## Requisiti  
 **Intestazione:**\<cliext\/queue\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [queue](../dotnet/queue-stl-clr.md)   
 [queue::generic\_container](../dotnet/queue-generic-container-stl-clr.md)   
 [queue::value\_type](../dotnet/queue-value-type-stl-clr.md)