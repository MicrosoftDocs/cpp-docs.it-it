---
title: "hash_multimap::value_comp (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multimap::value_comp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value_comp (membro) [STL/CLR]"
ms.assetid: ec6108b8-a529-499b-bc7f-dce41f5b6175
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# hash_multimap::value_comp (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Copiare il delegato dell'ordine per due valori degli elementi.  
  
## Sintassi  
  
```  
value_compare^ value_comp();  
```  
  
## Note  
 La funzione membro restituisce il delegato dell'ordine utilizzato per ordinare la sequenza selezionata.  Utilizzarla per confrontare due valori degli elementi.  
  
## Esempio  
  
```  
// cliext_hash_multimap_value_comp.cpp   
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
 [hash\_multimap::value\_compare](../dotnet/hash-multimap-value-compare-stl-clr.md)   
 [hash\_multimap::value\_type](../dotnet/hash-multimap-value-type-stl-clr.md)