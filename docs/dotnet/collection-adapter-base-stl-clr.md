---
title: "collection_adapter::base (STL/CLR) | Microsoft Docs"
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
  - "cliext::collection_adapter::base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "base (membro) [STL/CLR]"
ms.assetid: 44928046-3fda-4974-817f-bc61a6f11b9f
caps.latest.revision: 9
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# collection_adapter::base (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce l'interfaccia di cui è stato eseguito il wrapping di BCL.  
  
## Sintassi  
  
```  
Coll^ base();  
```  
  
## Note  
 La funzione membro restituisce l'handle archiviate dell'interfaccia di BCL.  
  
## Esempio  
  
```  
// cliext_collection_adapter_base.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d6x(6, L'x');   
    Mycoll c1(%d6x);   
  
// display initial contents " x x x x x x"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("base() same = {0}", c1.base() == %c1);   
    return (0);   
    }  
  
```  
  
  **x x x x x x**  
**base\(\) stessi \= True**   
## Requisiti  
 **Intestazione:**\<cliext\/adapter\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [collection\_adapter](../dotnet/collection-adapter-stl-clr.md)