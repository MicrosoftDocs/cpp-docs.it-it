---
title: 'set:: Empty (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::set::empty
dev_langs:
- C++
helpviewer_keywords:
- empty member [STL/CLR]
ms.assetid: af10279f-e9e8-4599-b59b-5b8d92b619eb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 6e5b89c8c8e14bed1ffa891e779680efa22e6ac3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33163367"
---
# <a name="setempty-stlclr"></a>set::empty (STL/CLR)
Verifica se sono presenti o meno degli elementi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
bool empty();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce true per una sequenza controllata vuota. È equivalente a [set:: Size (STL/CLR)](../dotnet/set-size-stl-clr.md)`() == 0`. Utilizzarla per verificare se il set è vuoto.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_set_empty.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
    Myset c1;   
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
 **Intestazione:** \<cliext/set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [set::size (STL/CLR)](../dotnet/set-size-stl-clr.md)