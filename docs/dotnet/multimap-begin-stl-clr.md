---
title: "multimap::begin (STL/CLR) | Microsoft Docs"
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
  - "cliext::multimap::begin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "begin (membro) [STL/CLR]"
ms.assetid: 2e1e48f5-31e5-4ead-abae-bb5220925226
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# multimap::begin (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce l'inizio della sequenza controllata.  
  
## Sintassi  
  
```  
iterator begin();  
```  
  
## Note  
 La funzione membro restituisce un iteratone bidirezionale che designa il primo elemento della sequenza controllata o appena oltre la fine di una sequenza vuota.  Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.  
  
## Esempio  
  
```  
// cliext_multimap_begin.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::multimap<wchar_t, int> Mymultimap;   
int main()   
    {   
    Mymultimap c1;   
    c1.insert(Mymultimap::make_value(L'a', 1));   
    c1.insert(Mymultimap::make_value(L'b', 2));   
    c1.insert(Mymultimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Mymultimap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// inspect first two items   
    Mymultimap::iterator it = c1.begin();   
    System::Console::WriteLine("*begin() = [{0} {1}]",   
        it->first, it->second);   
    ++it;   
    System::Console::WriteLine("*++begin() = [{0} {1}]",   
        it->first, it->second);   
    return (0);   
    }  
  
```  
  
  **\[a 1\] \[b 2\] \[c 3\]**  
**\*begin\(\) \= \[a 1\]**  
**\*\+\+begin\(\) \= \[b 2\]**   
## Requisiti  
 **Intestazione:** \<cliext\/map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [multimap](../dotnet/multimap-stl-clr.md)   
 [multimap::end](../dotnet/multimap-end-stl-clr.md)