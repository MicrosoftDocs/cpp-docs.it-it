---
title: 'Map:: swap (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::map::swap
dev_langs: C++
helpviewer_keywords: swap member [STL/CLR]
ms.assetid: b36ed982-21ce-40e5-9636-ecdbaf1b7eec
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f82ac0547b58d3e85afdf8fe1c951ed8cec1f742
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mapswap-stlclr"></a>map::swap (STL/CLR)
Scambia il contenuto di due contenitori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void swap(map<Key, Mapped>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Contenitore con cui scambiare il contenuto.  
  
## <a name="remarks"></a>Note  
 La funzione membro scambia le sequenze controllate tra `this` e `right`. Esegue l'operazione in un tempo costante e non genera alcuna eccezione. Utilizzato come un modo rapido per scambiare il contenuto di due contenitori.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_map_swap.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
int main()   
    {   
    Mymap c1;   
    c1.insert(Mymap::make_value(L'a', 1));   
    c1.insert(Mymap::make_value(L'b', 2));   
    c1.insert(Mymap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Mymap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct another container with repetition of values   
    Mymap c2;   
    c2.insert(Mymap::make_value(L'd', 4));   
    c2.insert(Mymap::make_value(L'e', 5));   
    c2.insert(Mymap::make_value(L'f', 6));   
    for each (Mymap::value_type elem in c2)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// swap and redisplay   
    c1.swap(c2);   
    for each (Mymap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
    for each (Mymap::value_type elem in c2)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
[a 1] [b 2] [c 3]  
[d 4] [e 5] [f 6]  
[d 4] [e 5] [f 6]  
[a 1] [b 2] [c 3]  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/mappa >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [eseguire il mapping (STL/CLR)](../dotnet/map-stl-clr.md)   
 [map::operator= (STL/CLR)](../dotnet/map-operator-assign-stl-clr.md)