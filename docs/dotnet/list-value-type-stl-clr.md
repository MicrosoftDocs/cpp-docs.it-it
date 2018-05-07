---
title: 'List:: value_type (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::list::value_type
dev_langs:
- C++
helpviewer_keywords:
- value_type member [STL/CLR]
ms.assetid: 7013f92e-8ceb-4c99-bb44-6ba13b0d3ef3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 7e190fa32bd6a5b9cf48d65080db4a429a6c3ee0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="listvaluetype-stlclr"></a>list::value_type (STL/CLR)
Tipo di un elemento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef Value value_type;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Value`.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_list_value_type.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c" using value_type   
    for (cliext::list<wchar_t>::iterator it = c1.begin();   
        it != c1.end(); ++it)   
        {   // store element in value_type object   
        cliext::list<wchar_t>::value_type val = *it;   
  
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
 **Intestazione:** \<cliext/list >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [List:: const_reference (STL/CLR)](../dotnet/list-const-reference-stl-clr.md)   
 [list::reference (STL/CLR)](../dotnet/list-reference-stl-clr.md)