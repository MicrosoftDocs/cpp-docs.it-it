---
title: 'hash_multimap:: const_reference (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::hash_multimap::const_reference
dev_langs:
- C++
helpviewer_keywords:
- const_reference member [STL/CLR]
ms.assetid: c8e461bb-64cd-4868-a63e-77c197084431
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f47a4eccee6ae570f6de265a5f96254b40bcdf3d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33108234"
---
# <a name="hashmultimapconstreference-stlclr"></a>hash_multimap::const_reference (STL/CLR)
Tipo di un riferimento costante a un elemento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef value_type% const_reference;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo descrive un riferimento costante a un elemento.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_multimap_const_reference.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_multimap<wchar_t, int> Myhash_multimap;   
int main()   
    {   
    Myhash_multimap c1;   
    c1.insert(Myhash_multimap::make_value(L'a', 1));   
    c1.insert(Myhash_multimap::make_value(L'b', 2));   
    c1.insert(Myhash_multimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    Myhash_multimap::const_iterator cit = c1.begin();   
    for (; cit != c1.end(); ++cit)   
        {   // get a const reference to an element   
        Myhash_multimap::const_reference cref = *cit;   
        System::Console::Write(" [{0} {1}]", cref->first, cref->second);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
[a 1] [b 2] [c 3]  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/hash_map >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_multimap (STL/CLR)](../dotnet/hash-multimap-stl-clr.md)   
 [hash_multimap:: Reference (STL/CLR)](../dotnet/hash-multimap-reference-stl-clr.md)   
 [hash_multimap::value_type (STL/CLR)](../dotnet/hash-multimap-value-type-stl-clr.md)