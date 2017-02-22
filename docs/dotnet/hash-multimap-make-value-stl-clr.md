---
title: "hash_multimap::make_value (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multimap::make_value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "make_value (membro) [STL/CLR]"
ms.assetid: 300fb6ec-98c8-48d5-8626-0646878a8462
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# hash_multimap::make_value (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto valore.  
  
## Sintassi  
  
```  
static value_type make_value(key_type key, mapped_type mapped);  
```  
  
#### Parametri  
 chiave  
 Valore chiave da utilizzare.  
  
 Mappato  
 Valore mappato da cercare.  
  
## Note  
 La funzione membro restituisce un oggetto `value_type` la cui chiave è `key` e il cui valore mappato è `mapped`.  Utilizzarla per comporre un oggetto appropriato da utilizzare con diverse altre funzioni membro.  
  
## Esempio  
  
```  
// cliext_hash_multimap_make_value.cpp   
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
    return (0);   
    }  
  
```  
  
  **\[a 1\] \[b 2\] \[c 3\]**   
## Requisiti  
 **Intestazione:** \<cliext\/hash\_map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_multimap](../dotnet/hash-multimap-stl-clr.md)   
 [hash\_multimap::key\_type](../dotnet/hash-multimap-key-type-stl-clr.md)   
 [hash\_multimap::mapped\_type](../dotnet/hash-multimap-mapped-type-stl-clr.md)   
 [hash\_multimap::value\_type](../dotnet/hash-multimap-value-type-stl-clr.md)