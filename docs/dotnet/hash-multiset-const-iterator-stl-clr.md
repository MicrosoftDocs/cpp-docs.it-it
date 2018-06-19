---
title: 'hash_multiset:: const_iterator (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::hash_multiset::const_iterator
dev_langs:
- C++
helpviewer_keywords:
- const_iterator member [STL/CLR]
ms.assetid: a923b3f2-37c7-4e30-9b45-82ee2588f072
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 5311e2ec241260f2afc540173f9f5de5e57f6682
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33130838"
---
# <a name="hashmultisetconstiterator-stlclr"></a>hash_multiset::const_iterator (STL/CLR)
Tipo di un iteratore costante per la sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef T2 const_iterator;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T2` che può essere utilizzato come un iteratore costante bidirezionale per la sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_multiset_const_iterator.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_multiset<wchar_t> Myhash_multiset;   
int main()   
    {   
    Myhash_multiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c"   
    Myhash_multiset::const_iterator cit = c1.begin();   
    for (; cit != c1.end(); ++cit)   
        System::Console::Write(" {0}", *cit);   
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
 [hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)   
 [hash_multiset::iterator (STL/CLR)](../dotnet/hash-multiset-iterator-stl-clr.md)