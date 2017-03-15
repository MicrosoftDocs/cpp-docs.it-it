---
title: "deque::rbegin (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::deque::rbegin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rbegin (membro) [STL/CLR]"
ms.assetid: 5d399c1d-bd7e-4b2e-bde0-11a000e29679
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# deque::rbegin (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce l'inizio della sequenza inversa controllata.  
  
## Sintassi  
  
```  
reverse_iterator rbegin();  
```  
  
## Note  
 La funzione membro restituirà un iteratore inverso che definisce l'ultimo elemento della sequenza selezionata, ovvero poco oltre all'avvio di una sequenza vuota.  Definisce quindi l'oggetto `beginning` della sequenza inversa.  Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata considerata in ordine inverso, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.  
  
## Esempio  
  
```  
// cliext_deque_rbegin.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first two items in reversed sequence   
    cliext::deque<wchar_t>::reverse_iterator rit = c1.rbegin();   
    System::Console::WriteLine("*rbegin() = {0}", *rit);   
    System::Console::WriteLine("*++rbegin() = {0}", *++rit);   
  
// alter first two items and reinspect   
    *--rit = L'x';   
    *++rit = L'y';   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**\*rbegin\(\) \= c**  
**\*\+\+rbegin\(\) \= b**  
 **y x**   
## Requisiti  
 **Intestazione:** \<cliext\/deque\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [deque](../dotnet/deque-stl-clr.md)   
 [deque::begin](../dotnet/deque-begin-stl-clr.md)   
 [deque::end](../dotnet/deque-end-stl-clr.md)   
 [deque::rend](../dotnet/deque-rend-stl-clr.md)