---
title: "hash_multimap::clear (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multimap::clear"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "clear (membro) [STL/CLR]"
ms.assetid: 8ad99f08-93b3-42b7-be07-f9a8ec556554
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# hash_multimap::clear (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rimuove tutti gli elementi.  
  
## Sintassi  
  
```  
void clear();  
```  
  
## Note  
 La funzione membro effettivamente chiama [hash\_multimap::erase](../dotnet/hash-multimap-erase-stl-clr.md)`(` [hash\_multimap::begin](../dotnet/hash-multimap-begin-stl-clr.md)`(),` [hash\_multimap::end](../dotnet/hash-multimap-end-stl-clr.md)`())`.  Utilizzarla per assicurarsi che la sequenza selezionata è vuota.  
  
## Esempio  
  
```  
// cliext_hash_multimap_clear.cpp   
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
  
// clear the container and reinspect   
    c1.clear();   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(Myhash_multimap::make_value(L'a', 1));   
    c1.insert(Myhash_multimap::make_value(L'b', 2));   
  
// display contents " [a 1] [b 2]"   
    for each (Myhash_multimap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    c1.clear();   
    System::Console::WriteLine("size() = {0}", c1.size());   
    return (0);   
    }  
  
```  
  
  **un \[1\] \[b \[2\]c 3\]**  
**size\(\) \= 0**  
 **un \[1\] \[b 2\]**  
**size\(\) \= 0**   
## Requisiti  
 **Intestazione:**\<cliext\/hash\_map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_multimap](../dotnet/hash-multimap-stl-clr.md)   
 [hash\_multimap::erase](../dotnet/hash-multimap-erase-stl-clr.md)