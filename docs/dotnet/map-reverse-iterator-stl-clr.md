---
title: 'Map:: reverse_iterator (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::map::reverse_iterator
dev_langs:
- C++
helpviewer_keywords:
- reverse_iterator member [STL/CLR]
ms.assetid: 50e461a5-61d1-455f-9c66-e0a8d88d54db
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 09dd76510289be522e2df71946c493ad6367ddd8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mapreverseiterator-stlclr"></a>map::reverse_iterator (STL/CLR)
Tipo di un iteratore inverso della sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef T3 reverse_iterator;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T3` che può essere utilizzato come iteratore inverso per la sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_map_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
int main()   
    {   
    Mymap c1;   
    c1.insert(Mymap::make_value(L'a', 1));   
    c1.insert(Mymap::make_value(L'b', 2));   
    c1.insert(Mymap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]" reversed   
    Mymap::reverse_iterator rit = c1.rbegin();   
    for (; rit != c1.rend(); ++rit)   
        System::Console::Write(" [{0} {1}]", rit->first, rit->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
[c 3] [b 2] [a 1]  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/mappa >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [eseguire il mapping (STL/CLR)](../dotnet/map-stl-clr.md)   
 [Map:: const_iterator (STL/CLR)](../dotnet/map-const-iterator-stl-clr.md)   
 [Map:: const_reverse_iterator (STL/CLR)](../dotnet/map-const-reverse-iterator-stl-clr.md)   
 [map::iterator (STL/CLR)](../dotnet/map-iterator-stl-clr.md)