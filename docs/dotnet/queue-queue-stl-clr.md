---
title: 'Queue:: Queue (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::queue::queue
dev_langs: C++
helpviewer_keywords: queue member [STL/CLR]
ms.assetid: 6106c07f-d5eb-4f0b-82df-ee4e2e751047
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f2e454f1a8922f5fa4af26c166c4b0b683123871
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="queuequeue-stlclr"></a>queue::queue (STL/CLR)
Costruisce un oggetto adattatore di contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
queue();  
queue(queue<Value, Container>% right);  
queue(queue<Value, Container>^ right);  
explicit queue(container_type% wrapped);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Oggetto da copiare.  
  
 il wrapping  
 Sottoposta a wrapping contenitore da usare.  
  
## <a name="remarks"></a>Note  
 Il costruttore:  
  
 `queue();`  
  
 Crea un contenitore vuoto sottoposta a wrapping. È utilizzata per specificare una sequenza controllata iniziale vuota.  
  
 Il costruttore:  
  
 `queue(queue<Value, Container>% right);`  
  
 Crea un contenitore incluso che è una copia di `right.get_container()`. Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto coda `right`.  
  
 Il costruttore:  
  
 `queue(queue<Value, Container>^ right);`  
  
 Crea un contenitore incluso che è una copia di `right->get_container()`. Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto coda `*right`.  
  
 Il costruttore:  
  
 `explicit queue(container_type wrapped);`  
  
 Usa il contenitore esistente `wrapped` come contenitore sottoposto a wrapping. È utilizzato per costruire una coda da un contenitore esistente.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_queue_construct.cpp   
// compile with: /clr   
#include <cliext/queue>   
#include <cliext/list>   
  
typedef cliext::queue<wchar_t> Myqueue;   
typedef cliext::list<wchar_t> Mylist;   
typedef cliext::queue<wchar_t, Mylist> Myqueue_list;   
int main()   
    {   
// construct an empty container   
    Myqueue c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// construct from an underlying container   
    Mylist v2(5, L'x');   
    Myqueue_list c2(v2);       
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Myqueue_list c3(c2);   
    for each (wchar_t elem in c3.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container through handle   
    Myqueue_list c4(%c2);   
    for each (wchar_t elem in c4.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
size() = 0  
 x x x x x  
 x x x x x  
 x x x x x  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/code >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [coda (STL/CLR)](../dotnet/queue-stl-clr.md)   
 [Queue:: Assign (STL/CLR)](../dotnet/queue-assign-stl-clr.md)   
 [Queue::generic_container (STL/CLR)](../dotnet/queue-generic-container-stl-clr.md)   
 [queue::operator= (STL/CLR)](../dotnet/queue-operator-assign-stl-clr.md)