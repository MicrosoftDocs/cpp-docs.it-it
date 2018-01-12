---
title: 'deque:: operator! = (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::deque::operator!=
dev_langs: C++
helpviewer_keywords: operator!= member [STL/CLR]
ms.assetid: c23c7bd1-813e-4518-9947-eb13d1176a13
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 17a5fb91f77e1b0a83e63bf498568690001acebd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dequeoperator-stlclr"></a>deque::operator!= (STL/CLR)
Deque diverso di confronto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value>  
    bool operator!=(deque<Value>% left,  
        deque<Value>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 `left`  
 Contenitore sinistro da confrontare.  
  
 `right`  
 Contenitore destro da confrontare.  
  
## <a name="remarks"></a>Note  
 La funzione di operatore restituisce `!(left == right)`. Utilizzati per verificare se `left` non viene ordinato identico `right` quando due deque vengono confrontato elemento per elemento.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// cliext_deque_operator_ne.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    cliext::deque<wchar_t> c2;   
    c2.push_back(L'a');   
    c2.push_back(L'b');   
    c2.push_back(L'd');   
  
// display contents " a b d"   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] != [a b c] is {0}",   
        c1 != c1);   
    System::Console::WriteLine("[a b c] != [a b d] is {0}",   
        c1 != c2);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
 a b d  
[a b c] != [a b c] is False  
[a b c] != [a b d] is True  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/deque >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [operatore = = (deque) (STL/CLR)](../dotnet/operator-equality-deque-stl-clr.md)   
 [operatore\< (deque) (STL/CLR)](../dotnet/operator-less-than-deque-stl-clr.md)   
 [operatore > = (deque) (STL/CLR)](../dotnet/operator-greater-or-equal-deque-stl-clr.md)   
 [operatore > (deque) (STL/CLR)](../dotnet/operator-greater-than-deque-stl-clr.md)   
 [operator<= (deque) (STL/CLR)](../dotnet/operator-less-or-equal-deque-stl-clr.md)