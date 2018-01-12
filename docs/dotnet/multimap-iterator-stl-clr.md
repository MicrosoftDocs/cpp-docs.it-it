---
title: 'multimap:: Iterator (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::multimap::iterator
dev_langs: C++
helpviewer_keywords: iterator member [STL/CLR]
ms.assetid: 2923f4bc-b216-477b-b10e-22bf15847c67
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 1d9401017d59f2c7d02c4c67dedd361552e54f82
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="multimapiterator-stlclr"></a>multimap::iterator (STL/CLR)
Tipo di un iteratore per la sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef T1 iterator;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T1` che può essere utilizzato come un iteratore bidirezionale per la sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_multimap_iterator.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::multimap<wchar_t, int> Mymultimap;   
int main()   
    {   
    Mymultimap c1;   
    c1.insert(Mymultimap::make_value(L'a', 1));   
    c1.insert(Mymultimap::make_value(L'b', 2));   
    c1.insert(Mymultimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    Mymultimap::iterator it = c1.begin();   
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
 [multimap (STL/CLR)](../dotnet/multimap-stl-clr.md)   
 [multimap::const_iterator (STL/CLR)](../dotnet/multimap-const-iterator-stl-clr.md)