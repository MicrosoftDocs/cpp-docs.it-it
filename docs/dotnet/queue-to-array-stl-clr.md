---
title: Queue::to_array (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::queue::to_array
dev_langs: C++
helpviewer_keywords: to_array member [STL/CLR]
ms.assetid: a76a9add-659c-4dcc-a342-de7263946496
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 69cd8861affaa17924214c39bebe2abf9d09c421
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="queuetoarray-stlclr"></a>queue::to_array (STL/CLR)
La sequenza controllata viene copiata in una nuova matrice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
cli::array<Value>^ to_array();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce una matrice che contiene la sequenza controllata. È utilizzato per ottenere una copia della sequenza controllata in forma di matrice.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_queue_to_array.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// copy the container and modify it   
    cli::array<wchar_t>^ a1 = c1.to_array();   
  
    c1.push(L'd');   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display the earlier array copy   
    for each (wchar_t elem in a1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c d  
a b c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/code >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [queue (STL/CLR)](../dotnet/queue-stl-clr.md)