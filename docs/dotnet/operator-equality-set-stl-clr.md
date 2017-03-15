---
title: "operator== (set) (STL/CLR) | Microsoft Docs"
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
  - "cliext::set::operator=="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator== (membro) [STL/CLR]"
ms.assetid: 013a0a76-11fa-4fde-8a84-d96e26f56774
caps.latest.revision: 15
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# operator== (set) (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Elenca il confronto uguale.  
  
## Sintassi  
  
```  
template<typename Key>  
    bool operator==(set<Key>% left,  
        set<Key>% right);  
```  
  
#### Parametri  
 left  
 Contenitore sinistro da confrontare.  
  
 right  
 Contenitore destro da confrontare.  
  
## Note  
 La funzione operatore restituisce true solo se le sequenze controllate da `left` e `right` hanno la stessa lunghezza e, per ogni posizione `i`, `left``[i] ==` `right``[i]`.  Utilizzarla per verificare se `left` viene ordinato allo stesso modo di `right` quando i due insiemi vengono confrontati elemento per elemento.  
  
## Esempio  
  
```  
// cliext_set_operator_eq.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
    Myset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myset c2;   
    c2.insert(L'a');   
    c2.insert(L'b');   
    c2.insert(L'd');   
  
// display contents " a b d"   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] == [a b c] is {0}",   
        c1 == c1);   
    System::Console::WriteLine("[a b c] == [a b d] is {0}",   
        c1 == c2);   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b d**  
**\[a b c\] \=\= \[a b c\] è True**  
**\[a b c\] \=\= \[a b d\] è False**   
## Requisiti  
 **Intestazione:** \<cliext\/set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [set](../dotnet/set-stl-clr.md)   
 [operator\!\= \(set\)](../dotnet/operator-inequality-set-stl-clr.md)   
 [operator\< \(set\)](../dotnet/operator-less-than-set-stl-clr.md)   
 [operator\>\= \(set\)](../dotnet/operator-greater-or-equal-set-stl-clr.md)   
 [operator\> \(set\)](../dotnet/operator-greater-than-set-stl-clr.md)   
 [operator\<\= \(set\)](../dotnet/operator-less-or-equal-set-stl-clr.md)