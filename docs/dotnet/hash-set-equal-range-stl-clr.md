---
title: "hash_set::equal_range (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_set::equal_range"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "equal_range (membro) [STL/CLR]"
ms.assetid: 502af4c5-f71e-44cf-a180-21e9da4b50ff
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# hash_set::equal_range (STL/CLR)
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
 La funzione membro restituisce una coppia degli iteratori `cliext::pair<iterator, iterator>(` [hash\_set::lower\_bound](../dotnet/hash-set-lower-bound-stl-clr.md)`(``key``),` [hash\_set::upper\_bound](../dotnet/hash-set-upper-bound-stl-clr.md)`(``key``))`.  Utilizzarla per determinare attualmente l'intervallo degli elementi nella sequenza controllata che corrispondono a una chiave specificata.  
  
## Esempio  
  
```  
// cliext_hash_set_equal_range.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
typedef Myhash_set::pair_iter_iter Pairii;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display results of failed search   
    Pairii pair1 = c1.equal_range(L'x');   
    System::Console::WriteLine("equal_range(L'x') empty = {0}",   
        pair1.first == pair1.second);   
  
// display results of successful search   
    pair1 = c1.equal_range(L'b');   
    for (; pair1.first != pair1.second; ++pair1.first)   
        System::Console::Write(" {0}", *pair1.first);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**equal\_range L'x \(vuoto\) \= True**  
 **b**   
## Requisiti  
 **Intestazione:**\<cliext\/hash\_set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [hash\_set::count](../dotnet/hash-set-count-stl-clr.md)   
 [hash\_set::find](../dotnet/hash-set-find-stl-clr.md)   
 [hash\_set::lower\_bound](../dotnet/hash-set-lower-bound-stl-clr.md)   
 [hash\_set::upper\_bound](../dotnet/hash-set-upper-bound-stl-clr.md)