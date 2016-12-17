---
title: "hash_set::size (STL/CLR) | Microsoft Docs"
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
  - "cliext::hash_set::size"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "size (membro) [STL/CLR]"
ms.assetid: e006590e-8710-4294-b3a3-dcded0668a24
caps.latest.revision: 16
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_set::size (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Conta il numero di elementi.  
  
## Sintassi  
  
```  
size_type size();  
```  
  
## Note  
 La funzione membro restituisce la lunghezza della sequenza selezionata.  Utilizzarla per determinare attualmente il numero di elementi della sequenza selezionata.  Se si è preoccupiate su viene se la sequenza ha dimensione diversa da zero, vedere [hash\_set::empty](../dotnet/hash-set-empty-stl-clr.md)`()`.  
  
## Esempio  
  
```  
// cliext_hash_set_size.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
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
    System::Console::WriteLine("size() = {0} starting with 3", c1.size());   
  
// clear the container and reinspect   
    c1.clear();   
    System::Console::WriteLine("size() = {0} after clearing", c1.size());   
  
// add elements and clear again   
    c1.insert(L'a');   
    c1.insert(L'b');   
    System::Console::WriteLine("size() = {0} after adding 2", c1.size());   
    return (0);   
    }  
  
```  
  
  **a b c**  
**size\(\) \= 3 che iniziano con 3**  
**size\(\) \= 0 dopo aver cancellato**  
**size\(\) \= 2 dopo l'aggiunta di 2**   
## Requisiti  
 **Intestazione:**\<cliext\/hash\_set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [hash\_set::empty](../dotnet/hash-set-empty-stl-clr.md)