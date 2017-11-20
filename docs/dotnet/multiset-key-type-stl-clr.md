---
title: 'multiset:: KEY_TYPE (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::multiset::key_type
dev_langs: C++
helpviewer_keywords: key_type member [STL/CLR]
ms.assetid: 8b243eb3-889b-405c-a2bd-2c2c5dfaafcd
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 8eb1a69cc0022b0e3fb1d49ec0033c7357f8921b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="multisetkeytype-stlclr"></a>multiset::key_type (STL/CLR)
Tipo di una chiave di ordinamento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef Key key_type;  
```  
  
## <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Key`.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_multiset_key_type.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
int main()   
    {   
    Mymultiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" using key_type   
    for (Mymultiset::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in key_type object   
        Mymultiset::key_type val = *it;   
  
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
 **Intestazione:** \<cliext/set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [multiset:: key_compare (STL/CLR)](../dotnet/multiset-key-compare-stl-clr.md)   
 [multiset::value_type (STL/CLR)](../dotnet/multiset-value-type-stl-clr.md)