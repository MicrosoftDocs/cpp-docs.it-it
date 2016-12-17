---
title: "pair::second (STL/CLR) | Microsoft Docs"
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
  - "cliext::pair::second"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "second (membro) [STL/CLR]"
ms.assetid: f30d3d1f-c7be-45d2-92ff-6861b96a92ff
caps.latest.revision: 9
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# pair::second (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il secondo valore trasformato.  
  
## Sintassi  
  
```  
Value2 second;  
```  
  
## Note  
 L'oggetto archivia il secondo valore trasformato.  
  
## Esempio  
  
```  
// cliext_pair_second.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
  
    cliext::pair<wchar_t, int>::first_type first_val = c1.first;   
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;   
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);   
    return (0);   
    }  
  
```  
  
  **\[x, 3\]**   
## Requisiti  
 **Intestazione:**\<cliext\/utility\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [pair](../dotnet/pair-stl-clr.md)   
 [pair::first](../dotnet/pair-first-stl-clr.md)   
 [pair::first\_type](../dotnet/pair-first-type-stl-clr.md)   
 [pair::second\_type](../dotnet/pair-second-type-stl-clr.md)