---
title: 'Map:: Iterator (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::map::iterator
dev_langs:
- C++
helpviewer_keywords:
- iterator member [STL/CLR]
ms.assetid: b2953b9b-0e6d-49f3-a28f-47d04d16d5f6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 4be5843c079cca7e85b4d6305b8aeca2bd4ce525
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33131621"
---
# <a name="mapiterator-stlclr"></a>map::iterator (STL/CLR)
Tipo di un iteratore per la sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef T1 iterator;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T1` che può essere utilizzato come un iteratore bidirezionale per la sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_map_iterator.cpp   
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
    Mymap::iterator it = c1.begin();   
    for (; it != c1.end(); ++it)   
        System::Console::Write(" [{0} {1}]", it->first, it->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
[a 1] [b 2] [c 3]  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/mappa >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [eseguire il mapping (STL/CLR)](../dotnet/map-stl-clr.md)   
 [map::const_iterator (STL/CLR)](../dotnet/map-const-iterator-stl-clr.md)