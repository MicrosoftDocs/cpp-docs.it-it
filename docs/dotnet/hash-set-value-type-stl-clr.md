---
title: 'hash_set:: value_type (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::hash_set::value_type
dev_langs: C++
helpviewer_keywords: value_type member [STL/CLR]
ms.assetid: a83724eb-496a-43ef-b969-b441f258e3be
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a840c5c2a5e4c8ebbde75f8def485b126f7d9ca4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hashsetvaluetype-stlclr"></a>hash_set::value_type (STL/CLR)
Tipo di un elemento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef generic_value value_type;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo è sinonimo di `generic_value`.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_set_value_type.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" using value_type   
    for (Myhash_set::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in value_type object   
        Myhash_set::value_type val = *it;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/hash_set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [hash_set:: const_reference (STL/CLR)](../dotnet/hash-set-const-reference-stl-clr.md)   
 [hash_set:: KEY_TYPE (STL/CLR)](../dotnet/hash-set-key-type-stl-clr.md)   
 [hash_set::reference (STL/CLR)](../dotnet/hash-set-reference-stl-clr.md)