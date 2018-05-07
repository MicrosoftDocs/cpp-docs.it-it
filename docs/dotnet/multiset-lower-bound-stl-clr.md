---
title: 'multiset:: lower_bound (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::multiset::lower_bound
dev_langs:
- C++
helpviewer_keywords:
- lower_bound member [STL/CLR]
ms.assetid: 5e3d1ba0-8b03-436e-b502-dbdb764f452b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 0142f9bce223808016787b7dc7d0212f28e79a1f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="multisetlowerbound-stlclr"></a>multiset::lower_bound (STL/CLR)
Consente di trovare l'inizio dell'intervallo che corrisponde a una chiave specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
iterator lower_bound(key_type key);  
```  
  
#### <a name="parameters"></a>Parametri  
 key  
 Valore della chiave da cercare.  
  
## <a name="remarks"></a>Note  
 La funzione membro determina il primo elemento `X` nella sequenza controllata che ha un ordinamento equivalente a `key`. Se tale elemento non esiste, restituisce [multiset:: end (STL/CLR)](../dotnet/multiset-end-stl-clr.md)`()`; in caso contrario restituisce un iteratore che definisce `X`. Utilizzarla per individuare l'inizio di una sequenza di elementi attualmente nella sequenza controllata che corrispondono a una chiave specificata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_multiset_lower_bound.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
int main()   
    {   
    Mymultiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("lower_bound(L'x')==end() = {0}",   
        c1.lower_bound(L'x') == c1.end());   
  
    System::Console::WriteLine("*lower_bound(L'a') = {0}",   
        *c1.lower_bound(L'a'));   
    System::Console::WriteLine("*lower_bound(L'b') = {0}",   
        *c1.lower_bound(L'b'));   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
lower_bound(L'x')==end() = True  
*lower_bound(L'a') = a  
*lower_bound(L'b') = b  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [multiset:: Count (STL/CLR)](../dotnet/multiset-count-stl-clr.md)   
 [multiset:: equal_range (STL/CLR)](../dotnet/multiset-equal-range-stl-clr.md)   
 [multiset:: Find (STL/CLR)](../dotnet/multiset-find-stl-clr.md)   
 [multiset::upper_bound (STL/CLR)](../dotnet/multiset-upper-bound-stl-clr.md)