---
title: "map::key_comp (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::map::key_comp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "key_comp (membro) [STL/CLR]"
ms.assetid: 42607057-d0d7-48b9-aadf-f3336fcc50b4
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# map::key_comp (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Copiare il delegato dell'ordine per due chiavi.  
  
## Sintassi  
  
```  
key_compare^key_comp();  
```  
  
## Note  
 La funzione membro restituisce il delegato dell'ordine utilizzato per ordinare la sequenza selezionata.  Viene utilizzato per confrontare due chiavi.  
  
## Esempio  
  
```  
// cliext_map_key_comp.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
int main()   
    {   
    Mymap c1;   
    Mymap::key_compare^ kcomp = c1.key_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    System::Console::WriteLine();   
  
// test a different ordering rule   
    Mymap c2 = cliext::greater<wchar_t>();   
    kcomp = c2.key_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    return (0);   
    }  
  
```  
  
  **confronta \(L'a, L'a\) \= False**  
**confronta \(L'a, L'b\) \= True**  
**confronta \(L'b, L'a\) \= False**  
**confronta \(L'a, L'a\) \= False**  
**confronta \(L'a, L'b\) \= False**  
**confronta \(L'b, L'a\) \= True**   
## Requisiti  
 **Intestazione:**\<cliext\/map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [map](../dotnet/map-stl-clr.md)   
 [map::key\_compare](../dotnet/map-key-compare-stl-clr.md)   
 [map::key\_type](../dotnet/map-key-type-stl-clr.md)