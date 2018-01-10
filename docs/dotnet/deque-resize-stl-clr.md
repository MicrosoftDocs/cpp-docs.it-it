---
title: 'deque:: resize (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::deque::resize
dev_langs: C++
helpviewer_keywords: resize member [STL/CLR]
ms.assetid: c83f3c57-38b3-4706-a124-59bafbf88484
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: fac11adade64d03696cbe73b09d1c35dfdd026b4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dequeresize-stlclr"></a>deque::resize (STL/CLR)
Modifica il numero di elementi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void resize(size_type new_size);  
void resize(size_type new_size, value_type val);  
```  
  
#### <a name="parameters"></a>Parametri  
 NEW_SIZE  
 Nuova dimensione della sequenza controllata.  
  
 Val  
 Valore dell'elemento di spaziatura.  
  
## <a name="remarks"></a>Note  
 Funzioni membro di entrambi affinché [deque:: Size (STL/CLR)](../dotnet/deque-size-stl-clr.md) `()` ormai restituisce `new_size`. Se la sequenza controllata deve essere allungata, la prima funzione membro accoda elementi con valore `value_type()`, mentre la seconda funzione membro accoda elementi con valore `val`. Per rendere la sequenza controllata più breve, entrambe le funzioni membro cancellare in modo efficace l'ultimo elemento [deque:: Size (STL/CLR)](../dotnet/deque-size-stl-clr.md) `() -` `new_size` volte. Utilizzato per verificare che la sequenza controllata è di dimensioni `new_size`, trimming o riempimento corrente sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_deque_resize.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
// construct an empty container and pad with default values   
    cliext::deque<wchar_t> c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
    c1.resize(4);   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", (int)elem);   
    System::Console::WriteLine();   
  
// resize to empty   
    c1.resize(0);   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// resize and pad   
    c1.resize(5, L'x');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
size() = 0  
 0 0 0 0  
size() = 0  
 x x x x x  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/deque >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [deque:: Clear (STL/CLR)](../dotnet/deque-clear-stl-clr.md)   
 [deque:: Erase (STL/CLR)](../dotnet/deque-erase-stl-clr.md)   
 [deque::insert (STL/CLR)](../dotnet/deque-insert-stl-clr.md)