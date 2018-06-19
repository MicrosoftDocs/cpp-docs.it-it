---
title: 'multiset:: rbegin (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::multiset::rbegin
dev_langs:
- C++
helpviewer_keywords:
- rbegin member [STL/CLR]
ms.assetid: beec0024-9565-4809-86f9-8b2c4e533923
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: c79a2b7b33c9f781aca1e2e09131b09f5657d7a1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33138387"
---
# <a name="multisetrbegin-stlclr"></a>multiset::rbegin (STL/CLR)
Indica l'inizio della sequenza controllata inversa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
reverse_iterator rbegin();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce un iteratore inverso che definisce l'ultimo elemento della sequenza controllata o appena oltre l'inizio di una sequenza vuota. Di conseguenza, indica il `beginning` della sequenza inversa. È utilizzato per ottenere un iteratore che definisce il `current` inizio della sequenza controllata considerata in ordine inverso, ma il cui stato è possibile modificare se viene modificata la lunghezza della sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_multiset_rbegin.cpp   
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
  
// inspect first two items in reversed sequence   
    Mymultiset::reverse_iterator rit = c1.rbegin();   
    System::Console::WriteLine("*rbegin() = {0}", *rit);   
    System::Console::WriteLine("*++rbegin() = {0}", *++rit);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
*rbegin() = c  
*++rbegin() = b  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [multiset:: Begin (STL/CLR)](../dotnet/multiset-begin-stl-clr.md)   
 [multiset:: end (STL/CLR)](../dotnet/multiset-end-stl-clr.md)   
 [multiset::rend (STL/CLR)](../dotnet/multiset-rend-stl-clr.md)