---
title: "hash_multimap::find (STL/CLR) | Microsoft Docs"
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
  - "cliext::hash_multimap::find"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "find (membro) [STL/CLR]"
ms.assetid: ce839c5e-b8c5-434e-9cc0-e4c6ee6a6bb3
caps.latest.revision: 15
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_multimap::find (STL/CLR)
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
 Se almeno un elemento nella sequenza selezionata ordine è equivalente a `key`, la funzione membro restituirà un iteratore che definisce uno degli elementi; in caso contrario restituisce [hash\_multimap::end](../dotnet/hash-multimap-end-stl-clr.md)`()`.  Utilizzarla per posizionare attualmente un elemento nella sequenza controllata che corrisponde a una chiave specificata.  
  
## Esempio  
  
```  
// cliext_hash_multimap_find.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_multimap<wchar_t, int> Myhash_multimap;   
int main()   
    {   
    Myhash_multimap c1;   
    c1.insert(Myhash_multimap::make_value(L'a', 1));   
    c1.insert(Myhash_multimap::make_value(L'b', 2));   
    c1.insert(Myhash_multimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Myhash_multimap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("find {0} = {1}",   
        L'A', c1.find(L'A') != c1.end());   
  
    Myhash_multimap::iterator it = c1.find(L'b');   
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
 **Intestazione:**\<cliext\/hash\_map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_multimap](../dotnet/hash-multimap-stl-clr.md)   
 [hash\_multimap::equal\_range](../dotnet/hash-multimap-equal-range-stl-clr.md)   
 [hash\_multimap::lower\_bound](../dotnet/hash-multimap-lower-bound-stl-clr.md)   
 [hash\_multimap::upper\_bound](../dotnet/hash-multimap-upper-bound-stl-clr.md)