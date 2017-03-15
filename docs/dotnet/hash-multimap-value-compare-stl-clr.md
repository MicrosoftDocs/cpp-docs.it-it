---
title: "hash_multimap::value_compare (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multimap::value_compare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value_compare (membro) [STL/CLR]"
ms.assetid: 64daa1b6-3019-4850-9ec5-ae63c01fe819
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# hash_multimap::value_compare (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il delegato dell'ordine per due valori degli elementi.  
  
## Sintassi  
  
```  
Microsoft::VisualC::StlClr::BinaryDelegate<generic_value, generic_value, bool>  
    value_compare;  
```  
  
## Note  
 Il tipo è sinonimo del delegato che determina l'ordine degli argomenti di valore.  
  
## Esempio  
  
```  
// cliext_hash_multimap_value_compare.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_map<wchar_t, int> Myhash_multimap;   
int main()   
    {   
    Myhash_multimap c1;   
    Myhash_multimap::value_compare^ kcomp = c1.value_comp();   
  
    System::Console::WriteLine("compare([L'a', 1], [L'a', 1]) = {0}",   
        kcomp(Myhash_multimap::make_value(L'a', 1),   
            Myhash_multimap::make_value(L'a', 1)));   
    System::Console::WriteLine("compare([L'a', 1], [L'b', 2]) = {0}",   
        kcomp(Myhash_multimap::make_value(L'a', 1),   
            Myhash_multimap::make_value(L'b', 2)));   
    System::Console::WriteLine("compare([L'b', 2], [L'a', 1]) = {0}",   
        kcomp(Myhash_multimap::make_value(L'b', 2),   
            Myhash_multimap::make_value(L'a', 1)));   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **confronta \(\[L'a, 1\], \[L'a, 1\]\) \= True**  
**confronta \(\[L'a, 1\], \[L'b, 2\]\) \= True**  
**confronta \(\[L'b, 2\], \[L'a, 1\] \= False\)**   
## Requisiti  
 **Intestazione:**\<cliext\/hash\_map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_multimap](../dotnet/hash-multimap-stl-clr.md)   
 [hash\_multimap::key\_compare](../dotnet/hash-multimap-key-compare-stl-clr.md)   
 [hash\_multimap::value\_comp](../dotnet/hash-multimap-value-comp-stl-clr.md)   
 [hash\_multimap::value\_type](../dotnet/hash-multimap-value-type-stl-clr.md)