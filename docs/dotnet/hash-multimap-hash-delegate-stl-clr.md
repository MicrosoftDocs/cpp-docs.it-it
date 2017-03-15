---
title: "hash_multimap::hash_delegate (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multimap::hash_delegate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_delegate (membro) [STL/CLR]"
ms.assetid: 2a459f6d-9bb1-4b03-a013-0998ba842c25
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# hash_multimap::hash_delegate (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene trovato un elemento che corrisponde alla chiave specificata.  
  
## Sintassi  
  
```  
hasher^ hash_delegate();  
```  
  
## Note  
 La funzione membro restituisce il delegato utilizzato per convertire un valore di chiave in integer.  Utilizzarla per effettuare l'hash di una chiave.  
  
## Esempio  
  
```  
// cliext_hash_multimap_hash_delegate.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_multimap<wchar_t, int> Myhash_multimap;   
int main()   
    {   
    Myhash_multimap c1;   
    Myhash_multimap::hasher^ myhash = c1.hash_delegate();   
  
    System::Console::WriteLine("hash(L'a') = {0}", myhash(L'a'));   
    System::Console::WriteLine("hash(L'b') = {0}", myhash(L'b'));   
    return (0);   
    }  
  
```  
  
  **hash\(L'a'\) \= 1616896120**  
**hash\(L'b'\) \= 570892832**   
## Requisiti  
 **Intestazione:** \<cliext\/hash\_map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_multimap](../dotnet/hash-multimap-stl-clr.md)   
 [hash\_multimap::hasher](../dotnet/hash-multimap-hasher-stl-clr.md)