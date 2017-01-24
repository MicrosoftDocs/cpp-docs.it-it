---
title: "hash_map::equal_range (STL/CLR) | Microsoft Docs"
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
  - "cliext::hash_map::equal_range"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "equal_range (membro) [STL/CLR]"
ms.assetid: 9b9a18b8-42fd-4d17-91bd-df85e583cf61
caps.latest.revision: 18
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_map::equal_range (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I rileva variano che corrisponde a una chiave specificata.  
  
## Sintassi  
  
```  
cliext::pair<iterator, iterator> equal_range(key_type key);  
```  
  
#### Parametri  
 chiave  
 Valore della chiave da cercare.  
  
## Note  
 La funzione membro restituisce una coppia degli iteratori `cliext::pair<iterator, iterator>(` [hash\_map::lower\_bound](../dotnet/hash-map-lower-bound-stl-clr.md)`(``key``),` [hash\_map::upper\_bound](../dotnet/hash-map-upper-bound-stl-clr.md)`(``key``))`.  Utilizzarla per determinare attualmente l'intervallo degli elementi nella sequenza controllata che corrispondono a una chiave specificata.  
  
## Esempio  
  
```  
// cliext_hash_map_equal_range.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_map<wchar_t, int> Myhash_map;   
typedef Myhash_map::pair_iter_iter Pairii;   
int main()   
    {   
    Myhash_map c1;   
    c1.insert(Myhash_map::make_value(L'a', 1));   
    c1.insert(Myhash_map::make_value(L'b', 2));   
    c1.insert(Myhash_map::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Myhash_map::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// display results of failed search   
    Pairii pair1 = c1.equal_range(L'x');   
    System::Console::WriteLine("equal_range(L'x') empty = {0}",   
        pair1.first == pair1.second);   
  
// display results of successful search   
    pair1 = c1.equal_range(L'b');   
    for (; pair1.first != pair1.second; ++pair1.first)   
        System::Console::Write(" [{0} {1}]",   
            pair1.first->first, pair1.first->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **un \[1\] \[b \[2\]c 3\]**  
**equal\_range L'x \(vuoto\) \= True**  
 **\[b 2\]**   
## Requisiti  
 **Intestazione:**\<cliext\/hash\_map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_map](../dotnet/hash-map-stl-clr.md)   
 [hash\_map::count](../dotnet/hash-map-count-stl-clr.md)   
 [hash\_map::find](../dotnet/hash-map-find-stl-clr.md)   
 [hash\_map::lower\_bound](../dotnet/hash-map-lower-bound-stl-clr.md)   
 [hash\_map::upper\_bound](../dotnet/hash-map-upper-bound-stl-clr.md)