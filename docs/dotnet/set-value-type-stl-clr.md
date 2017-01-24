---
title: "set::value_type (STL/CLR) | Microsoft Docs"
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
  - "cliext::set::value_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value_type (membro) [STL/CLR]"
ms.assetid: 9af2fe12-9a8e-4919-9619-7a2f80988951
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# set::value_type (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo di un elemento.  
  
## Sintassi  
  
```  
  
typedef generic_value value_type;  
  
```  
  
## Note  
 Il tipo è sinonimo di `generic_value`.  
  
## Esempio  
  
```  
// cliext_set_value_type.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
    Myset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" using value_type   
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in value_type object   
        Myset::value_type val = *it;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**   
## Requisiti  
 **Intestazione:**\<cliext\/set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [set](../dotnet/set-stl-clr.md)   
 [set::const\_reference](../dotnet/set-const-reference-stl-clr.md)   
 [set::key\_type](../dotnet/set-key-type-stl-clr.md)   
 [set::reference](../dotnet/set-reference-stl-clr.md)