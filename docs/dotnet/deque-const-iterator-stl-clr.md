---
title: "deque::const_iterator (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::deque::const_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const_iterator (membro) [STL/CLR]"
ms.assetid: 51579985-4664-4aaa-bad3-02f52f9050ac
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# deque::const_iterator (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo di un iteratore costante della sequenza controllata.  
  
## Sintassi  
  
```  
typedef T2 const_iterator;  
```  
  
## Note  
 Il tipo viene descritto un oggetto di tipo non specificato `T2` che può fungere dagli iteratori di accesso casuale costante per la sequenza selezionata.  
  
## Esempio  
  
```  
// cliext_deque_const_iterator.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    cliext::deque<wchar_t>::const_iterator cit = c1.begin();   
    for (; cit != c1.end(); ++cit)   
        System::Console::Write(" {0}", *cit);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**   
## Requisiti  
 **Intestazione:** \<cliext\/deque\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [deque](../dotnet/deque-stl-clr.md)   
 [deque::iterator](../dotnet/deque-iterator-stl-clr.md)