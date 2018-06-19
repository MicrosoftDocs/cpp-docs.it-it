---
title: 'hash_set:: size_type (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::hash_set::size_type
dev_langs:
- C++
helpviewer_keywords:
- size_type member [STL/CLR]
ms.assetid: 700ce851-d081-4887-a855-8d98d2eadb81
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 37d560f4c59d55014d2238a3d8c3c263f11c6ac3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33127327"
---
# <a name="hashsetsizetype-stlclr"></a>hash_set::size_type (STL/CLR)
Il tipo di una distanza signed tra due elementi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef int size_type;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo descrive un conteggio di elementi non negativo.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_set_size_type.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// compute positive difference   
    Myhash_set::size_type diff = 0;   
    for (Myhash_set::iterator it = c1.begin(); it != c1.end(); ++it)   
        ++diff;   
    System::Console::WriteLine("end()-begin() = {0}", diff);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
end()-begin() = 3  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/hash_set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [hash_set::empty (STL/CLR)](../dotnet/hash-set-empty-stl-clr.md)