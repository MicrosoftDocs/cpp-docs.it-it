---
title: "set::value_comp (STL/CLR) | Microsoft Docs"
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
  - "cliext::set::value_comp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value_comp (membro) [STL/CLR]"
ms.assetid: 3b7e469d-ca73-415b-bd20-24968c51107c
caps.latest.revision: 8
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# set::value_comp (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Copiare il delegato dell'ordine per due valori degli elementi.  
  
## Sintassi  
  
```  
value_compare^ value_comp();  
```  
  
## Note  
 La funzione membro restituisce il delegato dell'ordine utilizzato per ordinare la sequenza selezionata.  Utilizzarla per confrontare due valori degli elementi.  
  
## Esempio  
  
```  
// cliext_set_value_comp.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
    Myset c1;   
    Myset::value_compare^ kcomp = c1.value_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **confronta \(L'a, L'a\) \= False**  
**confronta \(L'a, L'b\) \= True**  
**confronta \(L'b, L'a\) \= False**   
## Requisiti  
 **Intestazione:**\<cliext\/set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [set](../dotnet/set-stl-clr.md)   
 [set::value\_compare](../dotnet/set-value-compare-stl-clr.md)   
 [set::value\_type](../dotnet/set-value-type-stl-clr.md)