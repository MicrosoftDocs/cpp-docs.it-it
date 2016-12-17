---
title: "map::find (STL/CLR) | Microsoft Docs"
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
  - "cliext::map::find"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "find (membro) [STL/CLR]"
ms.assetid: 779dcbee-d584-4fbd-b788-481e094ece9d
caps.latest.revision: 16
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# map::find (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene trovato un elemento che corrisponde alla chiave specificata.  
  
## Sintassi  
  
```  
iterator find(key_type key);  
```  
  
#### Parametri  
 chiave  
 Valore della chiave da cercare.  
  
## Note  
 Se almeno un elemento nella sequenza selezionata ordine è equivalente a `key`, la funzione membro restituirà un iteratore che definisce uno degli elementi; in caso contrario restituisce [map::end](../dotnet/map-end-stl-clr.md)`()`.  Utilizzarla per posizionare attualmente un elemento nella sequenza controllata che corrisponde a una chiave specificata.  
  
## Esempio  
  
```  
// cliext_map_find.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
int main()   
    {   
    Mymap c1;   
    c1.insert(Mymap::make_value(L'a', 1));   
    c1.insert(Mymap::make_value(L'b', 2));   
    c1.insert(Mymap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Mymap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("find {0} = {1}",   
        L'A', c1.find(L'A') != c1.end());   
  
    Mymap::iterator it = c1.find(L'b');   
    System::Console::WriteLine("find {0} = [{1} {2}]",   
        L'b', it->first, it->second);   
  
    System::Console::WriteLine("find {0} = {1}",   
        L'C', c1.find(L'C') != c1.end());   
    return (0);   
    }  
  
```  
  
  **un \[1\] \[b \[2\]c 3\]**  
**individuare A \= False**  
**trova b \= \[b 2\]**  
**individuare C \= False**   
## Descrizione  
 Si noti che `find` non garantisce quale diversi l'elemento cerca.  
  
## Requisiti  
 **Intestazione:**\<cliext\/map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [map](../dotnet/map-stl-clr.md)   
 [map::equal\_range](../dotnet/map-equal-range-stl-clr.md)   
 [map::lower\_bound](../dotnet/map-lower-bound-stl-clr.md)   
 [map::upper\_bound](../dotnet/map-upper-bound-stl-clr.md)