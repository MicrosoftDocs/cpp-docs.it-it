---
title: "vector::generic_container (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::vector::generic_container"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generic_container (membro) [STL/CLR]"
ms.assetid: f291493f-dbdd-4240-935e-ce7432b59872
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# vector::generic_container (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo dell'interfaccia generica del contenitore.  
  
## Sintassi  
  
```  
typedef Microsoft::VisualC::StlClr::  
    IVector<generic_value>  
    generic_container;  
```  
  
## Note  
 Il tipo viene descritta l'interfaccia generica per questa classe di contenitori del modello.  
  
## Esempio  
  
```  
// cliext_vector_generic_container.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct a generic container   
    cliext::vector<wchar_t>::generic_container^ gc1 = %c1;   
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
 **a b e c d**   
## Requisiti  
 **Intestazione:**\<cliext\/vector\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 <xref:Microsoft.VisualC.StlClr.IVector%601>   
 [vettore](../dotnet/vector-stl-clr.md)   
 [vector::generic\_iterator](../dotnet/vector-generic-iterator-stl-clr.md)   
 [vector::generic\_reverse\_iterator](../dotnet/vector-generic-reverse-iterator-stl-clr.md)   
 [vector::generic\_value](../dotnet/vector-generic-value-stl-clr.md)