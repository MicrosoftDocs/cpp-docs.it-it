---
title: 'Map:: upper_bound (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::map::upper_bound
dev_langs: C++
helpviewer_keywords: upper_bound member [STL/CLR]
ms.assetid: d772b4a8-d0dc-439a-8b5b-3c91836d9256
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: cc82213acbc0fa2e6871b9a08119b37186652628
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="mapupperbound-stlclr"></a>map::upper_bound (STL/CLR)
Trova fine dell'intervallo che corrisponde a una chiave specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
iterator upper_bound(key_type key);  
```  
  
#### <a name="parameters"></a>Parametri  
 key  
 Valore della chiave da cercare.  
  
## <a name="remarks"></a>Note  
 La funzione membro determina l'ultimo elemento `X` nella sequenza controllata che ha un ordinamento equivalente a `key`. Se tale elemento non esiste o se `X` è l'ultimo elemento nella sequenza controllata, restituisce [Map:: end (STL/CLR)](../dotnet/map-end-stl-clr.md)`()`; in caso contrario restituisce un iteratore che definisce il primo elemento oltre `X`. Utilizzarla per individuare la fine di una sequenza di elementi attualmente nella sequenza controllata che corrispondono a una chiave specificata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_map_upper_bound.cpp   
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
  
    System::Console::WriteLine("upper_bound(L'x')==end() = {0}",   
        c1.upper_bound(L'x') == c1.end());   
  
    Mymap::iterator it = c1.upper_bound(L'a');   
    System::Console::WriteLine("*upper_bound(L'a') = [{0} {1}]",   
        it->first, it->second);   
    it = c1.upper_bound(L'b');   
    System::Console::WriteLine("*upper_bound(L'b') = [{0} {1}]",   
        it->first, it->second);   
    return (0);   
    }  
  
```  
  
```Output  
 [a 1] [b 2] [c 3]  
upper_bound(L'x')==end() = True  
*upper_bound(L'a') = [b 2]  
*upper_bound(L'b') = [c 3]  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/mappa >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [eseguire il mapping (STL/CLR)](../dotnet/map-stl-clr.md)   
 [Map:: Count (STL/CLR)](../dotnet/map-count-stl-clr.md)   
 [Map:: equal_range (STL/CLR)](../dotnet/map-equal-range-stl-clr.md)   
 [Map:: Find (STL/CLR)](../dotnet/map-find-stl-clr.md)   
 [map::lower_bound (STL/CLR)](../dotnet/map-lower-bound-stl-clr.md)