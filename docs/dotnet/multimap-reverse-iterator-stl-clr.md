---
title: "multimap::reverse_iterator (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multimap::reverse_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "reverse_iterator (membro) [STL/CLR]"
ms.assetid: 45ef2b07-8f5d-478c-8dcb-35bd07d3743a
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# multimap::reverse_iterator (STL/CLR)
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
// cliext_multimap_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::multimap<wchar_t, int> Mymultimap;   
int main()   
    {   
    Mymultimap c1;   
    c1.insert(Mymultimap::make_value(L'a', 1));   
    c1.insert(Mymultimap::make_value(L'b', 2));   
    c1.insert(Mymultimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]" reversed   
    Mymultimap::reverse_iterator rit = c1.rbegin();   
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
 [multimap](../dotnet/multimap-stl-clr.md)   
 [multimap::const\_iterator](../dotnet/multimap-const-iterator-stl-clr.md)   
 [multimap::const\_reverse\_iterator](../dotnet/multimap-const-reverse-iterator-stl-clr.md)   
 [multimap::iterator](../dotnet/multimap-iterator-stl-clr.md)