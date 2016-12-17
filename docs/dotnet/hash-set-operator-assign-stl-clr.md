---
title: "hash_set::operator= (STL/CLR) | Microsoft Docs"
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
  - "cliext::hash_set::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= (membro) [STL/CLR]"
ms.assetid: 25ee3afd-90cd-483f-ae03-b52ce1396090
caps.latest.revision: 8
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_set::operator= (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sostituisce la sequenza controllata.  
  
## Sintassi  
  
```  
hash_set<Key>% operator=(hash_set<Key>% right);  
```  
  
#### Parametri  
 right  
 Contenitore da copiare.  
  
## Note  
 L'operatore membro copia `right` all'oggetto, quindi restituisce `*this`.  Viene utilizzato per sostituire la sequenza controllata con una copia della sequenza controllata in `right`.  
  
## Esempio  
  
```  
// cliext_hash_set_operator_as.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c"   
    for each (Myhash_set::value_type elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myhash_set c2;   
    c2 = c1;   
// display contents " a b c"   
    for each (Myhash_set::value_type elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b c**   
## Requisiti  
 **Intestazione:** \<cliext\/hash\_set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_set](../dotnet/hash-set-stl-clr.md)