---
title: "hash_multimap::lower_bound (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multimap::lower_bound"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lower_bound (membro) [STL/CLR]"
ms.assetid: c61091ef-8364-4447-bdd2-a402cbc05f05
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# hash_multimap::lower_bound (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Individuare l'inizio dell'intervallo che corrisponde a una chiave specificata.  
  
## Sintassi  
  
```  
iterator lower_bound(key_type key);  
```  
  
#### Parametri  
 chiave  
 Valore della chiave da cercare.  
  
## Note  
 La funzione membro determina il primo elemento `X` sequenza controllata che esegue l'hashing allo stesso bucket di `key` e ha ordine equivalente a `key`.  Se tale elemento non esiste, restituisce [hash\_multimap::end](../dotnet/hash-multimap-end-stl-clr.md)`()`; in caso contrario restituisce un iteratore che definisce `X`.  Viene utilizzato per individuare attualmente l'inizio di una sequenza di elementi della sequenza controllata che corrispondono a una chiave specificata.  
  
## Esempio  
  
```  
// cliext_hash_multimap_lower_bound.cpp   
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
  
    System::Console::WriteLine("lower_bound(L'x')==end() = {0}",   
        c1.lower_bound(L'x') == c1.end());   
  
    Myhash_multimap::iterator it = c1.lower_bound(L'a');   
    System::Console::WriteLine("*lower_bound(L'a') = [{0} {1}]",   
        it->first, it->second);   
    it = c1.lower_bound(L'b');   
    System::Console::WriteLine("*lower_bound(L'b') = [{0} {1}]",   
        it->first, it->second);   
    return (0);   
    }  
  
```  
  
  **un \[1\] \[b \[2\]c 3\]**  
**lower\_bound\(L'x'\)\=\=end\(\) \= True**  
**\*lower\_bound \(L'a\) \= \[un 1\]**  
**\*lower\_bound \(L'b\) \= \[b 2\]**   
## Requisiti  
 **Intestazione:**\<cliext\/hash\_map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_multimap](../dotnet/hash-multimap-stl-clr.md)   
 [hash\_multimap::count](../dotnet/hash-multimap-count-stl-clr.md)   
 [hash\_multimap::equal\_range](../dotnet/hash-multimap-equal-range-stl-clr.md)   
 [hash\_multimap::find](../dotnet/hash-multimap-find-stl-clr.md)   
 [hash\_multimap::upper\_bound](../dotnet/hash-multimap-upper-bound-stl-clr.md)