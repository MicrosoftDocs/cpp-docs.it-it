---
title: "stack::reference (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::stack::reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "reference (membro) [STL/CLR]"
ms.assetid: 05c8fb2c-215c-4b83-80f9-d4d354577c6a
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# stack::reference (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo di un riferimento a un elemento.  
  
## Sintassi  
  
```  
typedef value_type% reference;  
```  
  
## Note  
 Il tipo descrive un riferimento ad un elemento.  
  
## Esempio  
  
```  
// cliext_stack_reference.cpp   
// compile with: /clr   
#include <cliext/stack>   
  
typedef cliext::stack<wchar_t> Mystack;   
int main()   
    {   
    Mystack c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify top of stack and redisplay   
    Mystack::reference ref = c1.top();   
    ref = L'x';   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b x**   
## Requisiti  
 **Intestazione:** \<cliext\/stack\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [stack](../dotnet/stack-stl-clr.md)   
 [stack::const\_reference](../dotnet/stack-const-reference-stl-clr.md)   
 [stack::value\_type](../dotnet/stack-value-type-stl-clr.md)