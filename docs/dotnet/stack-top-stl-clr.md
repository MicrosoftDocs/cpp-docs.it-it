---
title: 'stack:: Top (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::stack::top
dev_langs:
- C++
helpviewer_keywords:
- top member [STL/CLR]
ms.assetid: 5d8b7b69-336e-4d01-8b91-413a17aa2533
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: d6380734e456db587c06bd273ecec0a5987eaed1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33163331"
---
# <a name="stacktop-stlclr"></a>stack::top (STL/CLR)
Accede all'ultimo elemento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
reference top();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce un riferimento all'ultimo elemento della sequenza controllata, che deve essere non vuoto. Usarlo per accedere all'ultimo elemento quando si è certi che esista.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_stack_top.cpp   
// compile with: /clr   
#include <cliext/stack>   
  
typedef cliext::stack<wchar_t> Mystack;   
int main()   
    {   
    Mystack c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect last item   
    System::Console::WriteLine("top() = {0}", c1.top());   
  
// alter last item and reinspect   
    c1.top() = L'x';   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
top() = c  
 a b x  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/stack >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [stack::top_item (STL/CLR)](../dotnet/stack-top-item-stl-clr.md)