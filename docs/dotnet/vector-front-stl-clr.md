---
title: "vector::front (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::vector::front"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "front (membro) [STL/CLR]"
ms.assetid: 37a36157-8220-4d5b-85b5-c6a63211a322
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# vector::front (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Accede al primo elemento.  
  
## Sintassi  
  
```  
reference front();  
```  
  
## Note  
 La funzione membro restituisce un riferimento al primo elemento della sequenza controllata, che non deve essere vuota.  Utilizzarlo per leggere o scrivere il primo elemento, quando si è certi della sua esistenza.  
  
## Esempio  
  
```  
// cliext_vector_front.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first item   
    System::Console::WriteLine("front() = {0}", c1.front());   
  
// alter first item and reinspect   
    c1.front() = L'x';   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**front\(\) \= a**  
 **x b c**   
## Requisiti  
 **Intestazione:** \<cliext\/vector\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [vettore](../dotnet/vector-stl-clr.md)   
 [vector::back](../dotnet/vector-back-stl-clr.md)   
 [vector::back\_item](../dotnet/vector-back-item-stl-clr.md)   
 [vector::front\_item](../dotnet/vector-front-item-stl-clr.md)