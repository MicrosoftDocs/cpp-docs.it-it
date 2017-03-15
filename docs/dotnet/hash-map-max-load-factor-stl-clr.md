---
title: "hash_map::max_load_factor (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_map::max_load_factor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "max_load_factor (membro) [STL/CLR]"
ms.assetid: 7c0773c9-a918-4e61-ae95-e45148f1ff24
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# hash_map::max_load_factor (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene o imposta elementi massimo per bucket.  
  
## Sintassi  
  
```  
float max_load_factor();  
void max_load_factor(float new_factor);  
```  
  
#### Parametri  
 new\_factor  
 Nuovo fattore di carico massimo da archiviare.  
  
## Note  
 La prima funzione membro restituisce il fattore di carico massimo archiviato corrente.  Utilizzarla per determinare la dimensione massima media del bucket.  
  
 La seconda funzione membro sostituisce il fattore di carico massimo dell'archivio con `new_factor`.  Rimaneggiare automatico non viene eseguita finché di inserimento successiva.  
  
## Esempio  
  
```  
// cliext_hash_map_max_load_factor.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_map<wchar_t, int> Myhash_map;   
int main()   
    {   
    Myhash_map c1 = gcnew Myhash_map;   
    c1.insert(Myhash_map::make_value(L'a', 1));   
    c1.insert(Myhash_map::make_value(L'b', 2));   
    c1.insert(Myhash_map::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Myhash_map::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// inspect current parameters   
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());   
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());   
    System::Console::WriteLine("max_load_factor() = {0}",   
        c1.max_load_factor());   
    System::Console::WriteLine();   
  
// change max_load_factor and redisplay   
    c1.max_load_factor(0.25f);   
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());   
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());   
    System::Console::WriteLine("max_load_factor() = {0}",   
        c1.max_load_factor());   
    System::Console::WriteLine();   
  
// rehash and redisplay   
    c1.rehash(100);   
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());   
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());   
    System::Console::WriteLine("max_load_factor() = {0}",   
        c1.max_load_factor());   
    return (0);   
    }  
  
```  
  
  **un \[1\] \[b \[2\]c 3\]**  
**bucket\_count\(\) \= 16**  
**load\_factor\(\) \= 0,1875**  
**max\_load\_factor\(\) \= 4**  
**bucket\_count\(\) \= 16**  
**load\_factor\(\) \= 0,1875**  
**max\_load\_factor\(\) \= 0,25**  
**bucket\_count\(\) \= 128**  
**load\_factor\(\) \= 0,0234375**  
**max\_load\_factor\(\) \= 0,25**   
## Requisiti  
 **Intestazione:**\<cliext\/hash\_map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_map](../dotnet/hash-map-stl-clr.md)   
 [hash\_map::bucket\_count](../dotnet/hash-map-bucket-count-stl-clr.md)   
 [hash\_map::load\_factor](../dotnet/hash-map-load-factor-stl-clr.md)   
 [hash\_map::rehash](../dotnet/hash-map-rehash-stl-clr.md)