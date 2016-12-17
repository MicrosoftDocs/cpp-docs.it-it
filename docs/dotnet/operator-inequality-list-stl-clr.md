---
title: "operator!= (list) (STL/CLR) | Microsoft Docs"
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
  - "cliext::list::operator!="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator!= (membro) [STL/CLR]"
ms.assetid: aa4e1461-8137-43df-a99c-fbec8dd3269f
caps.latest.revision: 16
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# operator!= (list) (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Elenca il confronto non uguale.  
  
## Sintassi  
  
```  
template<typename Value>  
    bool operator!=(list<Value>% left,  
        list<Value>% right);  
```  
  
#### Parametri  
 left  
 Contenitore sinistro da confrontare.  
  
 right  
 Contenitore appropriato da confrontare.  
  
## Note  
 La funzione di operatore restituisce `!(``left` `==` `right``)`.  Utilizzarla per verificare se `left` non è stato ordinato uguale a `right` quando i due elenchi sono elemento confrontata dall'elemento.  
  
## Esempio  
  
```  
// cliext_list_operator_ne.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    cliext::list<wchar_t> c2;   
    c2.push_back(L'a');   
    c2.push_back(L'b');   
    c2.push_back(L'd');   
  
// display contents " a b d"   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] != [a b c] is {0}",   
        c1 != c1);   
    System::Console::WriteLine("[a b c] != [a b d] is {0}",   
        c1 != c2);   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b d**  
**\[a b c\] \!\= \[a b c\] è false**  
**\[a b c\] \!\= \[a b d\] è true**   
## Requisiti  
 **Intestazione:**\<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [operator\=\= \(list\)](../dotnet/operator-equality-list-stl-clr.md)   
 [operator\< \(list\)](../dotnet/operator-less-than-list-stl-clr.md)   
 [operator\>\= \(list\)](../dotnet/operator-greater-or-equal-list-stl-clr.md)   
 [operator\> \(list\)](../dotnet/operator-greater-than-list-stl-clr.md)   
 [operator\<\= \(list\)](../dotnet/operator-less-or-equal-list-stl-clr.md)