---
title: "deque::generic_value (STL/CLR) | Microsoft Docs"
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
  - "cliext::deque::generic_value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generic_value (membro) [STL/CLR]"
ms.assetid: fa482105-9bf1-4482-8cf2-38f50bf4f920
caps.latest.revision: 9
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# deque::generic_value (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo di elemento per l'utilizzo con l'interfaccia generica del contenitore.  
  
## Sintassi  
  
```  
typedef GValue generic_value;  
```  
  
## Note  
 Il tipo viene descritto un oggetto di tipo `GValue` che descrive il valore dell'elemento archiviato da utilizzare con l'interfaccia generica per questa classe di contenitori del modello.  
  
## Esempio  
  
```  
// cliext_deque_generic_value.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct a generic container   
    cliext::deque<wchar_t>::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify generic and display original   
    cliext::deque<wchar_t>::generic_iterator gcit = gc1->begin();   
    cliext::deque<wchar_t>::generic_value gcval = *gcit;   
    *++gcit = gcval;   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b c**  
 **una c**   
## Requisiti  
 **Intestazione:** \<cliext\/deque\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [deque](../dotnet/deque-stl-clr.md)   
 [deque::generic\_container](../dotnet/deque-generic-container-stl-clr.md)   
 [deque::generic\_iterator](../dotnet/deque-generic-iterator-stl-clr.md)   
 [deque::generic\_reverse\_iterator](../dotnet/deque-generic-reverse-iterator-stl-clr.md)