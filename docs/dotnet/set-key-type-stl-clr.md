---
title: "set::key_type (STL/CLR) | Microsoft Docs"
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
  - "cliext::set::key_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "key_type (membro) [STL/CLR]"
ms.assetid: 2c057cf7-ac3d-40a6-b7fc-eb1c0a317381
caps.latest.revision: 13
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# set::key_type (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo di una chiave di ordinamento.  
  
## Sintassi  
  
```  
typedef Key key_type;  
```  
  
## Note  
 Il tipo è un sinonimo per il parametro di modello `Key`.  
  
## Esempio  
  
```  
// cliext_set_key_type.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
    Myset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" using key_type   
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in key_type object   
        Myset::key_type val = *it;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**   
## Requisiti  
 **Intestazione:** \<cliext\/set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [set](../dotnet/set-stl-clr.md)   
 [set::key\_compare](../dotnet/set-key-compare-stl-clr.md)   
 [set::value\_type](../dotnet/set-value-type-stl-clr.md)