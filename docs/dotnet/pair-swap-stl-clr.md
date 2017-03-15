---
title: "pair::swap (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::pair::swap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "swap (membro) [STL/CLR]"
ms.assetid: 7f5cbfa0-3702-40ab-a3f4-ffde02126095
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# pair::swap (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Scambia il contenuto di due coppie.  
  
## Sintassi  
  
```  
void swap(pair<Value1, Value2>% right);  
```  
  
#### Parametri  
 right  
 Coppia per scambiare con il contenuto.  
  
## Note  
 La funzione membro scambia archiviata la coppia di valori tra `*this` e `right`.  
  
## Esempio  
  
```  
// cliext_pair_swap.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Mycoll c1(%d1);   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct another container with repetition of values   
    cliext::deque<wchar_t> d2(5, L'x');   
    Mycoll c2(%d2);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// swap and redisplay   
    c1.swap(c2);   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **x x x x x**  
 **x x x x x**  
 **a b c**   
## Requisiti  
 **Intestazione:**\<cliext\/utility\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [pair](../dotnet/pair-stl-clr.md)   
 [pair::operator\=](../dotnet/pair-operator-assign-stl-clr.md)