---
title: "list::generic_container (STL/CLR) | Microsoft Docs"
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
  - "cliext::list::generic_container"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generic_container (membro) [STL/CLR]"
ms.assetid: 1a8b708e-3c75-4551-a86e-5b50d6be706a
caps.latest.revision: 15
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# list::generic_container (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo della generica interfaccia per il contenitore.  
  
## Sintassi  
  
```  
typedef Microsoft::VisualC::StlClr::  
    IList<generic_value>  
    generic_container;  
```  
  
## Note  
 Il tipo descrive la generica interfaccia per questa classe di contenitori del modello.  
  
## Esempio  
  
```  
// cliext_list_generic_container.cpp   
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
  
// construct a generic container   
    cliext::list<wchar_t>::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify generic and display original   
    gc1->insert(gc1->end(), L'd');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify original and display generic   
    c1.push_back(L'e');   
  
    System::Collections::IEnumerator^ enum1 =   
        gc1->GetEnumerator();   
    while (enum1->MoveNext())   
        System::Console::Write(" {0}", enum1->Current);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b c**  
 **a b c d**  
 **a b c d e**   
## Requisiti  
 **Header:** \<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 <xref:Microsoft.VisualC.StlClr.IList%601>   
 [list](../dotnet/list-stl-clr.md)   
 [list::generic\_iterator](../dotnet/list-generic-iterator-stl-clr.md)   
 [list::generic\_reverse\_iterator](../dotnet/list-generic-reverse-iterator-stl-clr.md)   
 [list::generic\_value](../dotnet/list-generic-value-stl-clr.md)