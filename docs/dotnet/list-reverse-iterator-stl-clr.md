---
title: 'List:: reverse_iterator (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::list::reverse_iterator
dev_langs:
- C++
helpviewer_keywords:
- reverse_iterator member [STL/CLR]
ms.assetid: 56853ed8-cb12-41d7-98b2-c511cd77945d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f3f071165e6b52ea7220487f2182849c1fc87359
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33133285"
---
# <a name="listreverseiterator-stlclr"></a>list::reverse_iterator (STL/CLR)
Tipo di un iteratore inverso della sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef T3 reverse_iterator;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T3` che può essere utilizzato come iteratore inverso per la sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_list_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c" reversed   
    cliext::list<wchar_t>::reverse_iterator rit = c1.rbegin();   
    for (; rit != c1.rend(); ++rit)   
        System::Console::Write(" {0}", *rit);   
    System::Console::WriteLine();   
  
// alter first element and redisplay   
    rit = c1.rbegin();   
    *rit = L'x';   
    for (; rit != c1.rend(); ++rit)   
        System::Console::Write(" {0}", *rit);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
c b a  
x b a  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/list >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [List:: const_iterator (STL/CLR)](../dotnet/list-const-iterator-stl-clr.md)   
 [List:: const_reverse_iterator (STL/CLR)](../dotnet/list-const-reverse-iterator-stl-clr.md)   
 [list::iterator (STL/CLR)](../dotnet/list-iterator-stl-clr.md)