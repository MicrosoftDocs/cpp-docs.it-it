---
title: "multiset::rend (STL/CLR) | Microsoft Docs"
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
  - "cliext::multiset::rend"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rend (membro) [STL/CLR]"
ms.assetid: db84e142-efa7-4171-bad6-8132f3f5f741
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# multiset::rend (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce la fine della sequenza inversa controllata.  
  
## Sintassi  
  
```  
reverse_iterator rend();  
```  
  
## Note  
 La funzione membro restituirà un iteratore inverso che punta oltre all'inizio della sequenza selezionata.  Definisce quindi l'oggetto `end` della sequenza inversa.  Viene utilizzato per ottenere un iteratore che definisce la fine `current` della sequenza controllata considerata in ordine inverso, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.  
  
## Esempio  
  
```  
// cliext_multiset_rend.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
int main()   
    {   
    Mymultiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first two items   
    Mymultiset::reverse_iterator rit = c1.rend();   
    --rit;   
    System::Console::WriteLine("*-- --rend() = {0}", *--rit);   
    System::Console::WriteLine("*--rend() = {0}", *++rit);   
    return (0);   
    }  
  
```  
  
  **a b c**  
**\*\-\- \-\-rend\(\) \= b**  
**\*\-\-rend\(\) \= a.**   
## Requisiti  
 **Intestazione:**\<cliext\/set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [multiset](../dotnet/multiset-stl-clr.md)   
 [multiset::begin](../dotnet/multiset-begin-stl-clr.md)   
 [multiset::end](../dotnet/multiset-end-stl-clr.md)   
 [multiset::rbegin](../dotnet/multiset-rbegin-stl-clr.md)