---
title: 'stack:: POP (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::stack::pop
dev_langs: C++
helpviewer_keywords: pop member [STL/CLR]
ms.assetid: b7565385-9e6b-432d-8c71-c62c9c6ad90d
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1e461a312c75cdb6c9d33a1bfd59925372f60d5f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="stackpop-stlclr"></a>stack::pop (STL/CLR)
Rimuove l'ultimo elemento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void pop();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro rimuove l'ultimo elemento della sequenza controllata, che deve essere non vuoto. Utilizzarla per ridurre lo stack di un elemento sul retro.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_stack_pop.cpp   
// compile with: /clr   
#include <cliext/stack>   
  
typedef cliext::stack<wchar_t> Mystack;   
int main()   
    {   
    Mystack c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// pop an element and redisplay   
    c1.pop();   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/stack >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [stack::push (STL/CLR)](../dotnet/stack-push-stl-clr.md)