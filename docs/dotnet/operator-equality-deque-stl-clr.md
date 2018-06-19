---
title: operatore = = (deque) (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::deque::operator==
dev_langs:
- C++
helpviewer_keywords:
- operator== member [STL/CLR]
ms.assetid: b97de473-8a30-4278-b25f-79429f55a764
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 728e00f913001b68f14402f05c6e2a97a6b7ddbc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33138764"
---
# <a name="operator-deque-stlclr"></a>operator== (deque) (STL/CLR)
Confronto equal deque.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value>  
    bool operator==(deque<Value>% left,  
        deque<Value>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 left  
 Contenitore sinistro da confrontare.  
  
 right  
 Contenitore destro da confrontare.  
  
## <a name="remarks"></a>Note  
 La funzione di operatore restituisce true solo se le sequenze controllate da `left` e `right` hanno la stessa lunghezza e, per ogni posizione `i`, `left[i] ==` `right[i]`. Utilizzati per verificare se `left` viene ordinato identico `right` quando due deque vengono confrontato elemento per elemento.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_deque_operator_eq.cpp   
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
  
    System::Console::WriteLine("[a b c] == [a b c] is {0}",   
        c1 == c1);   
    System::Console::WriteLine("[a b c] == [a b d] is {0}",   
        c1 == c2);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
 a b d  
[a b c] == [a b c] is True  
[a b c] == [a b d] is False  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/deque >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [deque:: operator! = (STL/CLR)](../dotnet/deque-operator-inequality-stl-clr.md)   
 [operatore\< (deque) (STL/CLR)](../dotnet/operator-less-than-deque-stl-clr.md)   
 [operatore > = (deque) (STL/CLR)](../dotnet/operator-greater-or-equal-deque-stl-clr.md)   
 [operatore > (deque) (STL/CLR)](../dotnet/operator-greater-than-deque-stl-clr.md)   
 [operator<= (deque) (STL/CLR)](../dotnet/operator-less-or-equal-deque-stl-clr.md)