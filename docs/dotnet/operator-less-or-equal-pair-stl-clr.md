---
title: operatore&lt;= (coppia) (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::pair::operator<=
dev_langs:
- C++
helpviewer_keywords:
- operator<= member [STL/CLR]
ms.assetid: 94a4cc0a-cef4-4050-bd59-f826bd318e7b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f3e74b6f11cf54d694ac726670d92cb4e02aa563
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33133662"
---
# <a name="operatorlt-pair-stlclr"></a>operatore&lt;= (coppia) (STL/CLR)
Coppia minore o uguale confronto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value1,  
    typename Value2>  
    bool operator<=(pair<Value1, Value2>% left,  
        pair<Value1, Value2>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 left  
 Coppia a sinistra da confrontare.  
  
 right  
 Coppia di destra da confrontare.  
  
## <a name="remarks"></a>Note  
 La funzione di operatore restituisce `!(right < left)`. Utilizzati per verificare se `left` non viene ordinato dopo `right` quando due coppie vengono confrontato elemento per elemento.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_pair_operator_le.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    cliext::pair<wchar_t, int> c2(L'x', 4);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
    System::Console::WriteLine("[x 3] <= [x 3] is {0}",   
        c1 <= c1);   
    System::Console::WriteLine("[x 4] <= [x 3] is {0}",   
        c2 <= c1);   
    return (0);   
    }  
  
```  
  
```Output  
[x, 3]  
[x, 4]  
[x 3] <= [x 3] is True  
[x 4] <= [x 3] is False  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/utilità >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [Pair (STL/CLR)](../dotnet/pair-stl-clr.md)   
 [operatore = = (coppia) (STL/CLR)](../dotnet/operator-equality-pair-stl-clr.md)   
 [operatore! = (coppia) (STL/CLR)](../dotnet/operator-inequality-pair-stl-clr.md)   
 [operatore\< (coppia) (STL/CLR)](../dotnet/operator-less-than-pair-stl-clr.md)   
 [operatore > = (coppia) (STL/CLR)](../dotnet/operator-greater-or-equal-pair-stl-clr.md)   
 [operator> (pair) (STL/CLR)](../dotnet/operator-greater-than-pair-stl-clr.md)