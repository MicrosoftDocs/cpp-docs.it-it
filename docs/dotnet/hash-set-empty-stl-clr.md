---
title: 'hash_set:: Empty (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::hash_set::empty
dev_langs:
- C++
helpviewer_keywords:
- empty member [STL/CLR]
ms.assetid: 7843eb9a-067b-4339-8637-5401b637c6d0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: c94ce396ffaadb2374c34cb224ecbe6d0692a735
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33127279"
---
# <a name="hashsetempty-stlclr"></a>hash_set::empty (STL/CLR)
Verifica se sono presenti o meno degli elementi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
bool empty();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce true per una sequenza controllata vuota. È equivalente a [hash_set:: Size (STL/CLR)](../dotnet/hash-set-size-stl-clr.md)`() == 0`. Utilizzarla per verificare se l'hash_set è vuoto.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_set_empty.cpp   
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
    System::Console::WriteLine("size() = {0}", c1.size());   
    System::Console::WriteLine("empty() = {0}", c1.empty());   
  
// clear the container and reinspect   
    c1.clear();   
    System::Console::WriteLine("size() = {0}", c1.size());   
    System::Console::WriteLine("empty() = {0}", c1.empty());   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
size() = 3  
empty() = False  
size() = 0  
empty() = True  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/hash_set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [hash_set::size (STL/CLR)](../dotnet/hash-set-size-stl-clr.md)