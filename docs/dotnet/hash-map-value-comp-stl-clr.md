---
title: 'hash_map:: value_comp (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::hash_map::value_comp
dev_langs: C++
helpviewer_keywords: value_comp member [STL/CLR]
ms.assetid: b11a2dee-07e8-450c-8f85-979c0a15ae64
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 9ce47b23e3db1b7194f80cb2ef4ce1fda21b10e6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="hashmapvaluecomp-stlclr"></a>hash_map::value_comp (STL/CLR)
Copia il delegato di ordinamento per valori di due elementi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
value_compare^ value_comp();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce il delegato di ordinamento utilizzato per ordinare la sequenza controllata. È utilizzato per confrontare due valori di elemento.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_map_value_comp.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_map<wchar_t, int> Myhash_map;   
int main()   
    {   
    Myhash_map c1;   
    Myhash_map::value_compare^ kcomp = c1.value_comp();   
  
    System::Console::WriteLine("compare([L'a', 1], [L'a', 1]) = {0}",   
        kcomp(Myhash_map::make_value(L'a', 1),   
            Myhash_map::make_value(L'a', 1)));   
    System::Console::WriteLine("compare([L'a', 1], [L'b', 2]) = {0}",   
        kcomp(Myhash_map::make_value(L'a', 1),   
            Myhash_map::make_value(L'b', 2)));   
    System::Console::WriteLine("compare([L'b', 2], [L'a', 1]) = {0}",   
        kcomp(Myhash_map::make_value(L'b', 2),   
            Myhash_map::make_value(L'a', 1)));   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
compare([L'a', 1], [L'a', 1]) = True  
compare([L'a', 1], [L'b', 2]) = True  
compare([L'b', 2], [L'a', 1]) = False  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/hash_map >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)   
 [hash_map::value_compare (STL/CLR)](../dotnet/hash-map-value-compare-stl-clr.md)   
 [hash_map::value_type (STL/CLR)](../dotnet/hash-map-value-type-stl-clr.md)