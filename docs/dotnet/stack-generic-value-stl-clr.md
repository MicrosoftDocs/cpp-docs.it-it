---
title: "stack::generic_value (STL/CLR) | Microsoft Docs"
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
  - "cliext::stack::generic_value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generic_value (membro) [STL/CLR]"
ms.assetid: f918f5e6-5cb6-480e-8548-13e15026ffde
caps.latest.revision: 8
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# stack::generic_value (STL/CLR)
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
// cliext_stack_generic_value.cpp   
// compile with: /clr   
#include <cliext/stack>   
  
typedef cliext::stack<wchar_t> Mystack;   
int main()   
    {   
    Mystack c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// get interface to container   
    Mystack::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1->get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display in reverse using generic_value   
    for (; !gc1->empty(); gc1->pop())   
        {   
        Mystack::generic_value elem = gc1->top();   
  
        System::Console::Write(" {0}", elem);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b c**  
 **c a b**   
## Requisiti  
 **Intestazione:**\<cliext\/stack\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [stack](../dotnet/stack-stl-clr.md)   
 [stack::generic\_container](../dotnet/stack-generic-container-stl-clr.md)   
 [stack::value\_type](../dotnet/stack-value-type-stl-clr.md)