---
title: "list::operator= (STL/CLR) | Microsoft Docs"
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
  - "cliext::list::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= (membro) [STL/CLR]"
ms.assetid: 0e4fdcc6-7574-40af-b947-98c2c683676d
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# list::operator= (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sostituisce la sequenza controllata.  
  
## Sintassi  
  
```  
list<Value>% operator=(list<Value>% right);  
```  
  
#### Parametri  
 right  
 Contenitore da copiare.  
  
## Note  
 L'operatore membro copia `right` all'oggetto, quindi restituisce `*this`.  Viene utilizzato per sostituire la sequenza controllata con una copia della sequenza controllata in `right`.  
  
## Esempio  
  
```  
// cliext_list_operator_as.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    cliext::list<wchar_t> c2;   
    c2 = c1;   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b c**   
## Requisiti  
 **Intestazione:** \<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [list::assign](../dotnet/list-assign-stl-clr.md)