---
title: "stack::pop (STL/CLR) | Microsoft Docs"
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
  - "cliext::stack::pop"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pop (membro) [STL/CLR]"
ms.assetid: b7565385-9e6b-432d-8c71-c62c9c6ad90d
caps.latest.revision: 15
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# stack::pop (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rimuove l'ultimo elemento.  
  
## Sintassi  
  
```  
void pop();  
```  
  
## Note  
 La funzione membro rimuove l'ultimo elemento della sequenza selezionata, che deve essere non vuota.  Utilizzarla per ridurre lo stack da un elemento posteriore.  
  
## Esempio  
  
```  
// cliext_stack_pop.cpp   
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
  
// pop an element and redisplay   
    c1.pop();   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b**   
## Requisiti  
 **Intestazione:**\<cliext\/stack\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [stack](../dotnet/stack-stl-clr.md)   
 [stack::push](../dotnet/stack-push-stl-clr.md)