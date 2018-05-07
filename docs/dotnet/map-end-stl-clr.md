---
title: 'Map:: end (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::map::end
dev_langs:
- C++
helpviewer_keywords:
- end member [STL/CLR]
ms.assetid: 547a34f0-af66-45be-9b55-1e60ab3a1d6e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 80d27ac3bed9856fdb30988aa53b6087e7abcc0b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mapend-stlclr"></a>map::end (STL/CLR)
Designa la fine della sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
iterator end();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce un iteratore bidirezionale che punta appena oltre la fine della sequenza controllata. È utilizzato per ottenere un iteratore che definisce la fine della sequenza controllata. il relativo stato modifica se viene modificata la lunghezza della sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_map_end.cpp   
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
  
// inspect last two items   
    Mymap::iterator it = c1.end();   
    --it;   
    --it;   
    System::Console::WriteLine("*-- --end() = [{0} {1}]",   
        it->first, it->second);   
    ++it;   
    System::Console::WriteLine("*--end() = [{0} {1}]",   
        it->first, it->second);   
    return (0);   
    }  
  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/mappa >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [eseguire il mapping (STL/CLR)](../dotnet/map-stl-clr.md)   
 [map::begin (STL/CLR)](../dotnet/map-begin-stl-clr.md)