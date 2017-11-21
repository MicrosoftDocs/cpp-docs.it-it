---
title: 'multiset:: Begin (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::multiset::begin
dev_langs: C++
helpviewer_keywords: begin member [STL/CLR]
ms.assetid: 592a6331-0de5-484a-9962-0beda7082589
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f8e7b09d3ecd86393ced44c742f5bae5e7dec8d3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="multisetbegin-stlclr"></a>multiset::begin (STL/CLR)
Indica l'inizio della sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
iterator begin();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce un iteratore bidirezionale che definisce il primo elemento della sequenza controllata o appena oltre la fine di una sequenza vuota. È utilizzato per ottenere un iteratore che definisce il `current` inizio della sequenza controllata, ma il cui stato è possibile modificare se viene modificata la lunghezza della sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_multiset_begin.cpp   
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
    Mymultiset::iterator it = c1.begin();   
    System::Console::WriteLine("*begin() = {0}", *it);   
    System::Console::WriteLine("*++begin() = {0}", *++it);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
*begin() = a  
*++begin() = b  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [multiset::end (STL/CLR)](../dotnet/multiset-end-stl-clr.md)