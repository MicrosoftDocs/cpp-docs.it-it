---
title: "multiset::value_type (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multiset::value_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value_type (membro) [STL/CLR]"
ms.assetid: 6a88ee7a-27a1-4fbb-a56c-9c8d7abc4471
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# multiset::value_type (STL/CLR)
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
// cliext_multiset_value_type.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
int main()   
    {   
    Mymultiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" using value_type   
    for (Mymultiset::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in value_type object   
        Mymultiset::value_type val = *it;   
  
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
 [multiset](../dotnet/multiset-stl-clr.md)   
 [multiset::const\_reference](../dotnet/multiset-const-reference-stl-clr.md)   
 [multiset::key\_type](../dotnet/multiset-key-type-stl-clr.md)   
 [multiset::reference](../dotnet/multiset-reference-stl-clr.md)