---
title: "multimap::const_reference (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multimap::const_reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const_reference (membro) [STL/CLR]"
ms.assetid: ae963633-63a9-4f73-bc06-7bac13663f5a
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# multimap::const_reference (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo di un riferimento costante a un elemento.  
  
## Sintassi  
  
```  
typedef value_type% const_reference;  
```  
  
## Note  
 Il tipo viene descritto un riferimento costante a un elemento.  
  
## Esempio  
  
```  
// cliext_multimap_const_reference.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::multimap<wchar_t, int> Mymultimap;   
int main()   
    {   
    Mymultimap c1;   
    c1.insert(Mymultimap::make_value(L'a', 1));   
    c1.insert(Mymultimap::make_value(L'b', 2));   
    c1.insert(Mymultimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    Mymultimap::const_iterator cit = c1.begin();   
    for (; cit != c1.end(); ++cit)   
        {   // get a const reference to an element   
        Mymultimap::const_reference cref = *cit;   
        System::Console::Write(" [{0} {1}]", cref->first, cref->second);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **un \[1\] \[b \[2\]c 3\]**   
## Requisiti  
 **Intestazione:**\<cliext\/map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [multimap](../dotnet/multimap-stl-clr.md)   
 [multimap::reference](../dotnet/multimap-reference-stl-clr.md)   
 [multimap::value\_type](../dotnet/multimap-value-type-stl-clr.md)