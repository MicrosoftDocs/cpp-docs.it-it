---
title: operatore&gt;= (set) (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::set::operator>=
dev_langs:
- C++
helpviewer_keywords:
- operator>= member [STL/CLR]
ms.assetid: d08a0fc9-02e4-4e05-b469-bac325c38370
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 6d88a06b2277d4ef1ff74bb5f40b45139130c68d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33135144"
---
# <a name="operatorgt-set-stlclr"></a>operatore&gt;= (set) (STL/CLR)
Elenco maggiore o uguale a confronto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Key>  
    bool operator>=(set<Key>% left,  
        set<Key>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 left  
 Contenitore sinistro da confrontare.  
  
 right  
 Contenitore destro da confrontare.  
  
## <a name="remarks"></a>Note  
 La funzione di operatore restituisce `!(left < right)`. Utilizzati per verificare se `left` non viene ordinato prima `right` quando i due set vengono confrontato elemento per elemento.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_set_operator_ge.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
    Myset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myset c2;   
    c2.insert(L'a');   
    c2.insert(L'b');   
    c2.insert(L'd');   
  
// display contents " a b d"   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] >= [a b c] is {0}",   
        c1 >= c1);   
    System::Console::WriteLine("[a b c] >= [a b d] is {0}",   
        c1 >= c2);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
 a b d  
[a b c] >= [a b c] is True  
[a b c] >= [a b d] is False  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [operatore = = (set) (STL/CLR)](../dotnet/operator-equality-set-stl-clr.md)   
 [operatore! = (set) (STL/CLR)](../dotnet/operator-inequality-set-stl-clr.md)   
 [operatore\< (set) (STL/CLR)](../dotnet/operator-less-than-set-stl-clr.md)   
 [operatore > (set) (STL/CLR)](../dotnet/operator-greater-than-set-stl-clr.md)   
 [operator<= (set) (STL/CLR)](../dotnet/operator-less-or-equal-set-stl-clr.md)