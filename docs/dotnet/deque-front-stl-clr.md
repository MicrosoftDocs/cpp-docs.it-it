---
title: 'deque:: front (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::deque::front
dev_langs:
- C++
helpviewer_keywords:
- front member [STL/CLR]
ms.assetid: eb8cb5f2-346d-4d7a-bb7b-cf67fe4318e8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: aac8eda38b442f0169e7cc27a6228c7668c43634
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33111737"
---
# <a name="dequefront-stlclr"></a>deque::front (STL/CLR)
Accede al primo elemento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
reference front();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce un riferimento al primo elemento della sequenza controllata, che deve essere non vuoto. Utilizzarla per leggere o scrivere il primo elemento, quando si è certi che esista.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_deque_front.cpp   
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
    System::Console::WriteLine("front() = {0}", c1.front());   
  
// alter first item and reinspect   
    c1.front() = L'x';   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
front() = a  
 x b c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/deque >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [deque:: back (STL/CLR)](../dotnet/deque-back-stl-clr.md)   
 [deque:: back_item (STL/CLR)](../dotnet/deque-back-item-stl-clr.md)   
 [deque::front_item (STL/CLR)](../dotnet/deque-front-item-stl-clr.md)