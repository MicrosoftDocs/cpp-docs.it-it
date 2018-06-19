---
title: 'hash_set:: KEY_TYPE (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::hash_set::key_type
dev_langs:
- C++
helpviewer_keywords:
- key_type member [STL/CLR]
ms.assetid: e79180b5-4fea-4884-93a7-1738d15c6126
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: e8844f2ee9527b4bfb450276a578398da6d101f0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33126746"
---
# <a name="hashsetkeytype-stlclr"></a>hash_set::key_type (STL/CLR)
Tipo di una chiave di ordinamento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef Key key_type;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Key`.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_set_key_type.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" using key_type   
    for (Myhash_set::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in key_type object   
        Myhash_set::key_type val = *it;   
  
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
 [hash_set:: key_compare (STL/CLR)](../dotnet/hash-set-key-compare-stl-clr.md)   
 [hash_set::value_type (STL/CLR)](../dotnet/hash-set-value-type-stl-clr.md)