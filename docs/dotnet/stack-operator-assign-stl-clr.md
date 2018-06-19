---
title: 'stack:: operator = (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::stack::operator=
dev_langs:
- C++
helpviewer_keywords:
- operator= member [STL/CLR]
ms.assetid: 6f23b5fc-667e-4c6c-b43a-88b30da2ecac
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 30e7a905837fe01c8a3e518233692a26a916aaaa
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33165558"
---
# <a name="stackoperator-stlclr"></a>stack::operator= (STL/CLR)
Sostituisce la sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
stack <Value, Container>% operator=(stack <Value, Container>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Scheda contenitore da copiare.  
  
## <a name="remarks"></a>Note  
 Le copie di operatore membro `right` all'oggetto, quindi restituisce `*this`. Viene usato per sostituire la sequenza controllata con una copia della sequenza controllata in `right`.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_stack_operator_as.cpp   
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
  
// assign to a new container   
    Mystack c2;   
    c2 = c1;   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/stack >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [stack::assign (STL/CLR)](../dotnet/stack-assign-stl-clr.md)