---
title: "hash_set::key_compare (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_set::key_compare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "key_compare (membro) [STL/CLR]"
ms.assetid: 93a94dde-3296-4e34-b461-3e2a20801041
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# hash_set::key_compare (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il delegato dell'ordine per due chiavi.  
  
## Sintassi  
  
```  
Microsoft::VisualC::StlClr::BinaryDelegate<GKey, GKey, bool>  
    key_compare;  
```  
  
## Note  
 Il tipo è sinonimo del delegato che determina l'ordine dei relativi argomenti principali.  
  
## Esempio  
  
```  
// cliext_hash_set_key_compare.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    Myhash_set::key_compare^ kcomp = c1.key_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    System::Console::WriteLine();   
  
// test a different ordering rule   
    Myhash_set c2 = cliext::greater<wchar_t>();   
    kcomp = c2.key_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    return (0);   
    }  
  
```  
  
  **confronta \(L'a, L'a\) \= True**  
**confronta \(L'a, L'b\) \= True**  
**confronta \(L'b, L'a\) \= False**  
**confronta \(L'a, L'a\) \= False**  
**confronta \(L'a, L'b\) \= False**  
**confronta \(L'b, L'a\) \= True**   
## Requisiti  
 **Intestazione:**\<cliext\/hash\_set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [hash\_set::key\_comp](../dotnet/hash-set-key-comp-stl-clr.md)   
 [hash\_set::key\_type](../dotnet/hash-set-key-type-stl-clr.md)   
 [hash\_set::value\_compare](../dotnet/hash-set-value-compare-stl-clr.md)