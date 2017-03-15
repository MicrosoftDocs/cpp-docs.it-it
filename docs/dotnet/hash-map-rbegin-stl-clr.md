---
title: "hash_map::rbegin (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_map::rbegin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rbegin (membro) [STL/CLR]"
ms.assetid: e3b6c4d5-9482-471e-b5fc-70331b082a9b
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# hash_map::rbegin (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce l'inizio della sequenza inversa controllata.  
  
## Sintassi  
  
```  
reverse_iterator rbegin();  
```  
  
## Note  
 La funzione membro restituirà un iteratore inverso che definisce l'ultimo elemento della sequenza selezionata, ovvero poco oltre all'avvio di una sequenza vuota.  Definisce quindi l'oggetto `beginning` della sequenza inversa.  Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata considerata in ordine inverso, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.  
  
## Esempio  
  
```  
// cliext_hash_map_rbegin.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_map<wchar_t, int> Myhash_map;   
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
  
// inspect first two items in reversed sequence   
    Myhash_map::reverse_iterator rit = c1.rbegin();   
    System::Console::WriteLine("*rbegin() = [{0} {1}]",   
        rit->first, rit->second);   
    ++rit;   
    System::Console::WriteLine("*++rbegin() = [{0} {1}]",   
        rit->first, rit->second);   
    return (0);   
    }  
  
```  
  
  **un \[1\] \[b \[2\]c 3\]**  
**\*rbegin\(\) \= \[c 3\]**  
**\*\+\+rbegin\(\) \= \[b 2\]**   
## Requisiti  
 **Intestazione:**\<cliext\/hash\_map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_map](../dotnet/hash-map-stl-clr.md)   
 [hash\_map::begin](../dotnet/hash-map-begin-stl-clr.md)   
 [hash\_map::end](../dotnet/hash-map-end-stl-clr.md)   
 [hash\_map::rend](../dotnet/hash-map-rend-stl-clr.md)