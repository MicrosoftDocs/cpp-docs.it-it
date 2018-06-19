---
title: 'Vector:: const_reverse_iterator (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::vector::const_reverse_iterator
dev_langs:
- C++
helpviewer_keywords:
- const_reverse_iterator member [STL/CLR]
ms.assetid: 5e0a8597-7da4-4545-8826-446a8ee6412d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a5c66e8e244db3a6b871dfd859ce92a8cd2037dd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33165035"
---
# <a name="vectorconstreverseiterator-stlclr"></a>vector::const_reverse_iterator (STL/CLR)
Il tipo di un iteratore inverso costante per la sequenza controllata...  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef T4 const_reverse_iterator;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T4` che può essere utilizzato come un iteratore inverso costante per la sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_vector_const_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c" reversed   
    cliext::vector<wchar_t>::const_reverse_iterator crit = c1.rbegin();   
    cliext::vector<wchar_t>::const_reverse_iterator crend = c1.rend();   
    for (; crit != crend; ++crit)   
        System::Console::Write(" {0}", *crit);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
c b a  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/vector >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [Vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [vector::reverse_iterator (STL/CLR)](../dotnet/vector-reverse-iterator-stl-clr.md)