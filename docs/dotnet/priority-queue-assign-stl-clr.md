---
title: priority_queue::Assign (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::priority_queue::assign
dev_langs:
- C++
helpviewer_keywords:
- assign member [STL/CLR]
ms.assetid: 00cd3623-ecd0-4dde-ba5c-777c1c0bc0b5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 35ac71368877fc900ef19d01777652f3b80c9112
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33159535"
---
# <a name="priorityqueueassign-stlclr"></a>priority_queue::assign (STL/CLR)
Sostituisce tutti gli elementi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void assign(priority_queue<Value, Container>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Scheda contenitore da inserire.  
  
## <a name="remarks"></a>Note  
 La funzione membro assegna `right.get_container()` al contenitore sottostante. Utilizzarla per modificare l'intero contenuto della coda.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_priority_queue_assign.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign a repetition of values   
    Mypriority_queue c2;   
    c2.assign(c1);   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
c a b  
c a b  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/code >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)   
 [priority_queue::operator= (STL/CLR)](../dotnet/priority-queue-operator-assign-stl-clr.md)