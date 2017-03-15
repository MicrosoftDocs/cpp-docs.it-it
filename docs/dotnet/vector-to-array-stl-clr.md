---
title: "vector::to_array (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::vector::to_array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "to_array (membro) [STL/CLR]"
ms.assetid: 00e1f1c6-6ef5-4238-b95a-411059e0b69b
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# vector::to_array (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Copia la sequenza controllata in un nuovo array.  
  
## Sintassi  
  
```  
cli::array<Value>^ to_array();  
```  
  
## Note  
 La funzione membro restituisce un array contenente la sequenza controllata.  Utilizzarla per ottenere una copia della sequenza controllata in forma di array.  
  
## Esempio  
  
```  
// cliext_vector_to_array.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// copy the container and modify it   
    cli::array<wchar_t>^ a1 = c1.to_array();   
  
    c1.push_back(L'd');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display the earlier array copy   
    for each (wchar_t elem in a1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c d**  
 **a b c**   
## Requisiti  
 **Intestazione:** \<cliext\/vector\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [vettore](../dotnet/vector-stl-clr.md)