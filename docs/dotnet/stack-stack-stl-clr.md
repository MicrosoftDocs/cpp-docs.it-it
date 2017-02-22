---
title: "stack::stack (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::stack::stack"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stack (membro) [STL/CLR]"
ms.assetid: f1cfb3fe-4d22-41e5-906b-e8faa0bcde9b
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# stack::stack (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto dell'adattatore del contenitore.  
  
## Sintassi  
  
```  
stack();  
stack(stack<Value, Container>% right);  
stack(stack<Value, Container>^ right);  
explicit stack(container_type% wrapped);  
```  
  
#### Parametri  
 right  
 Oggetto da copiare.  
  
 di cui è stato eseguito il wrapping  
 Contenitore di cui è stato eseguito il wrapping da utilizzare.  
  
## Note  
 Il costruttore:  
  
 `stack();`  
  
 crea un contenitore di cui è stato eseguito il wrapping vuoto.  Utilizzarla per specificare una sequenza iniziale controllata vuota.  
  
 Il costruttore:  
  
 `stack(stack<Value, Container>% right);`  
  
 crea un contenitore di cui è stato eseguito il wrapping che è una copia di `right.get_container()`.  È possibile utilizzarlo per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right`dello stack.  
  
 Il costruttore:  
  
 `stack(stack<Value, Container>^ right);`  
  
 crea un contenitore di cui è stato eseguito il wrapping che è una copia di `right->get_container()`.  Utilizzarla per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `*right`dello stack.  
  
 Il costruttore:  
  
 `explicit stack(container_type% wrapped);`  
  
 utilizza il contenitore esistente `wrapped` come contenitore di cui è stato eseguito il wrapping.  Viene utilizzato per costruire uno stack da un contenitore esistente.  
  
## Esempio  
  
```  
// cliext_stack_construct.cpp   
// compile with: /clr   
#include <cliext/stack>   
#include <cliext/vector>   
  
typedef cliext::stack<wchar_t> Mystack;   
typedef cliext::vector<wchar_t> Myvector;   
typedef cliext::stack<wchar_t, Myvector> Mystack_vec;   
int main()   
    {   
// construct an empty container   
    Mystack c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// construct from an underlying container   
    Myvector v2(5, L'x');   
    Mystack_vec c2(v2);       
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Mystack_vec c3(c2);   
    for each (wchar_t elem in c3.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container through handle   
    Mystack_vec c4(%c2);   
    for each (wchar_t elem in c4.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **size\(\) \= 0**  
 **x x x x x**  
 **x x x x x**  
 **x x x x x**   
## Requisiti  
 **Intestazione:**\<cliext\/stack\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [stack](../dotnet/stack-stl-clr.md)   
 [stack::assign](../dotnet/stack-assign-stl-clr.md)   
 [stack::generic\_container](../dotnet/stack-generic-container-stl-clr.md)   
 [stack::operator\=](../dotnet/stack-operator-assign-stl-clr.md)