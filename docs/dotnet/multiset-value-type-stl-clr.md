---
title: 'multiset:: value_type (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::multiset::value_type
dev_langs:
- C++
helpviewer_keywords:
- value_type member [STL/CLR]
ms.assetid: 6a88ee7a-27a1-4fbb-a56c-9c8d7abc4471
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: db7850cf6984d645e5f60045d236222c82bf632c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33138016"
---
# <a name="multisetvaluetype-stlclr"></a>multiset::value_type (STL/CLR)
Tipo di un elemento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef generic_value value_type;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo è sinonimo di `generic_value`.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_multiset_value_type.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
int main()   
    {   
    Mymultiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" using value_type   
    for (Mymultiset::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in value_type object   
        Mymultiset::value_type val = *it;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [multiset:: const_reference (STL/CLR)](../dotnet/multiset-const-reference-stl-clr.md)   
 [multiset:: KEY_TYPE (STL/CLR)](../dotnet/multiset-key-type-stl-clr.md)   
 [multiset::reference (STL/CLR)](../dotnet/multiset-reference-stl-clr.md)