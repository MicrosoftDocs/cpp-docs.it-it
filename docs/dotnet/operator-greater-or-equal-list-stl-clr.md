---
title: operatore&gt;= (elenco) (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::list::operator>=
dev_langs:
- C++
helpviewer_keywords:
- operator>= member [STL/CLR]
ms.assetid: c6142241-8e85-4759-98fd-4f2b7d37b255
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f1eff6977b5929fec58b4ec9ed3b9ffe20f2d584
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33135846"
---
# <a name="operatorgt-list-stlclr"></a>operatore&gt;= (elenco) (STL/CLR)
Elenco maggiore o uguale a confronto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value>  
    bool operator>=(list<Value>% left,  
        list<Value>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 left  
 Contenitore sinistro da confrontare.  
  
 right  
 Contenitore destro da confrontare.  
  
## <a name="remarks"></a>Note  
 La funzione di operatore restituisce `!(left` `<` `right)`. Utilizzati per verificare se `left` non viene ordinato prima `right` quando due elenchi vengono confrontato elemento per elemento.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_list_operator_ge.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    cliext::list<wchar_t> c2;   
    c2.push_back(L'a');   
    c2.push_back(L'b');   
    c2.push_back(L'd');   
  
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
 **Intestazione:** \<cliext/list >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [operatore = = (elenco) (STL/CLR)](../dotnet/operator-equality-list-stl-clr.md)   
 [operatore! = (elenco) (STL/CLR)](../dotnet/operator-inequality-list-stl-clr.md)   
 [operatore\< (elenco) (STL/CLR)](../dotnet/operator-less-than-list-stl-clr.md)   
 [operatore > (elenco) (STL/CLR)](../dotnet/operator-greater-than-list-stl-clr.md)   
 [operator<= (list) (STL/CLR)](../dotnet/operator-less-or-equal-list-stl-clr.md)