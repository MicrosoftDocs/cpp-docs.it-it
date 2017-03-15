---
title: "list::remove_if (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::list::remove_if"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "remove_if (membro) [STL/CLR]"
ms.assetid: cbc66192-751b-41c5-b557-d5d7bbc2a840
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# list::remove_if (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rimuove gli elementi che superano un determinato test.  
  
## Sintassi  
  
```  
template<typename Pred1>  
    void remove_if(Pred1 pred);  
```  
  
#### Parametri  
 pred  
 Test affinché rimuovano elementi.  
  
## Note  
 La funzione membro rimuove dalla sequenza selezionata \(erases\) che ogni elemento `X` per il quale `pred``(X)` è true.  Utilizzarla per rimuovere tutti gli elementi che soddisfano una condizione specificata come una funzione o un delegato.  
  
## Esempio  
  
```  
// cliext_list_remove_if.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'b');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b b b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// fail to remove and redisplay   
    c1.remove_if(cliext::binder2nd<cliext::equal_to<wchar_t> >(   
        cliext::equal_to<wchar_t>(), L'd'));   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// remove and redisplay   
    c1.remove_if(cliext::binder2nd<cliext::not_equal_to<wchar_t> >(   
        cliext::not_equal_to<wchar_t>(), L'b'));   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b b b c**  
 **a b b b c**  
 **b b b**   
## Requisiti  
 **Intestazione:**\<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [list::clear](../dotnet/list-clear-stl-clr.md)   
 [list::erase](../dotnet/list-erase-stl-clr.md)   
 [list::remove](../dotnet/list-remove-stl-clr.md)   
 [list::unique](../dotnet/list-unique-stl-clr.md)