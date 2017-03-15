---
title: "hash_multiset::find (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multiset::find"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "find (membro) [STL/CLR]"
ms.assetid: fbedeb37-242e-4c2a-b1f8-234bcfd9cd25
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# hash_multiset::find (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene trovato un elemento che corrisponde alla chiave specificata.  
  
## Sintassi  
  
```  
iterator find(key_type key);  
```  
  
#### Parametri  
 chiave  
 Valore della chiave da cercare.  
  
## Note  
 Se almeno un elemento nella sequenza selezionata ordine è equivalente a `key`, la funzione membro restituirà un iteratore che definisce uno degli elementi; in caso contrario restituisce [hash\_multiset::end](../dotnet/hash-multiset-end-stl-clr.md)`()`.  Utilizzarla per posizionare attualmente un elemento nella sequenza controllata che corrisponde a una chiave specificata.  
  
## Esempio  
  
```  
// cliext_hash_multiset_find.cpp   
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
  
    System::Console::WriteLine("find {0} = {1}",   
        L'A', c1.find(L'A') != c1.end());   
    System::Console::WriteLine("find {0} = {1}",   
        L'b', *c1.find(L'b'));   
    System::Console::WriteLine("find {0} = {1}",   
        L'C', c1.find(L'C') != c1.end());   
    return (0);   
    }  
  
```  
  
  **a b c**  
**individuare A \= False**  
**individuare b \= b**  
**individuare C \= False**   
## Descrizione  
 Si noti che `find` non garantisce quale diversi l'elemento cerca.  
  
## Requisiti  
 **Intestazione:**\<cliext\/hash\_set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_multiset](../dotnet/hash-multiset-stl-clr.md)   
 [hash\_multiset::equal\_range](../dotnet/hash-multiset-equal-range-stl-clr.md)   
 [hash\_multiset::lower\_bound](../dotnet/hash-multiset-lower-bound-stl-clr.md)   
 [hash\_multiset::upper\_bound](../dotnet/hash-multiset-upper-bound-stl-clr.md)