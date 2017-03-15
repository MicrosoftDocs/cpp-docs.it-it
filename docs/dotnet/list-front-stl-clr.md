---
title: "list::front (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::list::front"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "front (membro) [STL/CLR]"
ms.assetid: ead6aaaa-b518-4a9c-af80-7189bf872cad
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# list::front (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Accede al primo elemento.  
  
## Sintassi  
  
```  
reference front();  
```  
  
## Note  
 La funzione membro restituisce un riferimento al primo elemento della sequenza selezionata, che deve essere non vuota.  Utilizzarla per leggere o scrivere il primo elemento, quando lo si conosce esiste.  
  
## Esempio  
  
```  
// cliext_list_front.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
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
**front\(\) \= a.**  
 **x b c**   
## Requisiti  
 **Intestazione:**\<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [list::back](../dotnet/list-back-stl-clr.md)   
 [list::back\_item](../dotnet/list-back-item-stl-clr.md)   
 [list::front\_item](../dotnet/list-front-item-stl-clr.md)