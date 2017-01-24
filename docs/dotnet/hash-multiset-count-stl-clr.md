---
title: "hash_multiset::count (STL/CLR) | Microsoft Docs"
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
  - "cliext::hash_multiset::count"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "count (membro) [STL/CLR]"
ms.assetid: 2b31e6b6-3f2c-4042-a06d-90d3074aad43
caps.latest.revision: 15
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_multiset::count (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Trova il numero di elementi che corrispondono a una chiave specificata.  
  
## Sintassi  
  
```  
size_type count(key_type key);  
```  
  
#### Parametri  
 chiave  
 Valore di chiave da cercare.  
  
## Note  
 La funzione membro restituisce il numero di elementi della sequenza controllata con ordinamento equivalente a `key`.  Viene utilizzata per determinare il numero di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.  
  
## Esempio  
  
```  
// cliext_hash_multiset_count.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_multiset<wchar_t> Myhash_multiset;   
int main()   
    {   
    Myhash_multiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("count(L'A') = {0}", c1.count(L'A'));   
    System::Console::WriteLine("count(L'b') = {0}", c1.count(L'b'));   
    System::Console::WriteLine("count(L'C') = {0}", c1.count(L'C'));   
    return (0);   
    }  
  
```  
  
  **a b c**  
**count\(L'A'\) \= 0**  
**count\(L'b'\) \= 1**  
**count\(L'C'\) \= 0**   
## Requisiti  
 **Intestazione:** \<cliext\/hash\_set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_multiset](../dotnet/hash-multiset-stl-clr.md)   
 [hash\_multiset::equal\_range](../dotnet/hash-multiset-equal-range-stl-clr.md)