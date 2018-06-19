---
title: 'stack:: container_type (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::stack::container_type
dev_langs:
- C++
helpviewer_keywords:
- container_type member [STL/CLR]
ms.assetid: ca0e862d-e57d-4638-b0ba-b4c206de38ed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: b75ed28fa112ed721863a6c0302e8e9d8e59e0b3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33165935"
---
# <a name="stackcontainertype-stlclr"></a>stack::container_type (STL/CLR)
Tipo del contenitore sottostante.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef Container value_type;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Container`.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_stack_container_type.cpp   
// compile with: /clr   
#include <cliext/stack>   
  
typedef cliext::stack<wchar_t> Mystack;   
int main()   
    {   
    Mystack c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c" using container_type   
    Mystack::container_type wc1 = c1.get_container();   
    for each (wchar_t elem in wc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/stack >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [stack::get_container (STL/CLR)](../dotnet/stack-get-container-stl-clr.md)