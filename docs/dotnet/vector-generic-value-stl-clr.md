---
title: "vector::generic_value (STL/CLR) | Microsoft Docs"
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
  - "cliext::vector::generic_value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generic_value (membro) [STL/CLR]"
ms.assetid: 01fdc5c5-27d3-4dc2-b242-cae2fd04a60d
caps.latest.revision: 8
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# vector::generic_value (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo di un elemento per l'utilizzo con l'interfaccia generica del contenitore.  
  
## Sintassi  
  
```  
typedef GValue generic_value;  
```  
  
## Note  
 Il tipo descrive un oggetto di tipo `GValue` che descrive il valore dell'elemento archiviato da utilizzare con l'interfaccia generica per questa classe di contenitori del modello.  
  
## Esempio  
  
```  
// cliext_vector_generic_value.cpp   
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
    cliext::vector<wchar_t>::generic_iterator gcit = gc1->begin();   
    cliext::vector<wchar_t>::generic_value gcval = *gcit;   
    *++gcit = gcval;   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b c**  
 **a a c**   
## Requisiti  
 **Intestazione:** \<cliext\/vector\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [vettore](../dotnet/vector-stl-clr.md)   
 [vector::generic\_container](../dotnet/vector-generic-container-stl-clr.md)   
 [vector::generic\_iterator](../dotnet/vector-generic-iterator-stl-clr.md)   
 [vector::generic\_reverse\_iterator](../dotnet/vector-generic-reverse-iterator-stl-clr.md)