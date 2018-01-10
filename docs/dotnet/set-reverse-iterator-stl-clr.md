---
title: 'set:: reverse_iterator (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::set::reverse_iterator
dev_langs: C++
helpviewer_keywords: reverse_iterator member [STL/CLR]
ms.assetid: 40337a62-991c-424e-9559-a9040c07657a
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 7c95ca772cb342b77890ccabcb1941e409c5c917
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="setreverseiterator-stlclr"></a>set::reverse_iterator (STL/CLR)
Tipo di un iteratore inverso della sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef T3 reverse_iterator;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T3` che può essere utilizzato come iteratore inverso per la sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_set_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
    Myset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" reversed   
    Myset::reverse_iterator rit = c1.rbegin();   
    for (; rit != c1.rend(); ++rit)   
        System::Console::Write(" {0}", *rit);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
c b a  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [set:: const_iterator (STL/CLR)](../dotnet/set-const-iterator-stl-clr.md)   
 [set:: const_reverse_iterator (STL/CLR)](../dotnet/set-const-reverse-iterator-stl-clr.md)   
 [set::iterator (STL/CLR)](../dotnet/set-iterator-stl-clr.md)