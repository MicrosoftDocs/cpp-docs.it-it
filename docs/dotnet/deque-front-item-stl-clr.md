---
title: 'deque:: front_item (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::deque::front_item
dev_langs:
- C++
helpviewer_keywords:
- front_item member [STL/CLR]
ms.assetid: 6243e52d-47fb-45d8-ade8-70debd97887d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 99b8d770bfb2dcbae4ce483fae446b66880d998c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="dequefrontitem-stlclr"></a>deque::front_item (STL/CLR)
Accede al primo elemento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
property value_type front_item;  
```  
  
## <a name="remarks"></a>Note  
 La proprietà accede al primo elemento della sequenza controllata, che deve essere non vuoto. Utilizzarla per leggere o scrivere il primo elemento, quando si è certi che esista.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_deque_front_item.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first item   
    System::Console::WriteLine("front_item = {0}", c1.front_item);   
  
// alter first item and reinspect   
    c1.front_item = L'x';   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
front_item = a  
 x b c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/deque >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [deque:: back (STL/CLR)](../dotnet/deque-back-stl-clr.md)   
 [deque:: back_item (STL/CLR)](../dotnet/deque-back-item-stl-clr.md)   
 [deque::front (STL/CLR)](../dotnet/deque-front-stl-clr.md)