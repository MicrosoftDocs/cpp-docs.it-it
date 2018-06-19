---
title: 'List:: Iterator (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::list::iterator
dev_langs:
- C++
helpviewer_keywords:
- iterator member [STL/CLR]
ms.assetid: a62893c5-a53c-48ca-9f95-1eb3306b5ddf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 2560e47014bb008dfa7ea3b2fbe111168646190e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33131683"
---
# <a name="listiterator-stlclr"></a>list::iterator (STL/CLR)
Tipo di un iteratore per la sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef T1 iterator;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T1` che può essere usato come iteratore ad accesso casuale per la sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_list_iterator.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    cliext::list<wchar_t>::iterator it = c1.begin();   
    for (; it != c1.end(); ++it)   
        System::Console::Write(" {0}", *it);   
    System::Console::WriteLine();   
  
// alter first element and redisplay   
    it = c1.begin();   
    *it = L'x';   
    for (; it != c1.end(); ++it)   
        System::Console::Write(" {0}", *it);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
x b c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/list >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [list::const_iterator (STL/CLR)](../dotnet/list-const-iterator-stl-clr.md)