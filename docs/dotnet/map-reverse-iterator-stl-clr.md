---
title: "map::reverse_iterator (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::map::reverse_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "reverse_iterator (membro) [STL/CLR]"
ms.assetid: 50e461a5-61d1-455f-9c66-e0a8d88d54db
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# map::reverse_iterator (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo di iteratore inverso per la sequenza selezionata.  
  
## Sintassi  
  
```  
typedef T3 reverse_iterator;  
```  
  
## Note  
 Il tipo viene descritto un oggetto di tipo non specificato `T3` che può essere utilizzata come iteratore inverso per la sequenza selezionata.  
  
## Esempio  
  
```  
// cliext_map_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
int main()   
    {   
    Mymap c1;   
    c1.insert(Mymap::make_value(L'a', 1));   
    c1.insert(Mymap::make_value(L'b', 2));   
    c1.insert(Mymap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]" reversed   
    Mymap::reverse_iterator rit = c1.rbegin();   
    for (; rit != c1.rend(); ++rit)   
        System::Console::Write(" [{0} {1}]", rit->first, rit->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **\[c 3\] \[b \[2\]un 1\]**   
## Requisiti  
 **Intestazione:**\<cliext\/map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [map](../dotnet/map-stl-clr.md)   
 [map::const\_iterator](../dotnet/map-const-iterator-stl-clr.md)   
 [map::const\_reverse\_iterator](../dotnet/map-const-reverse-iterator-stl-clr.md)   
 [map::iterator](../dotnet/map-iterator-stl-clr.md)