---
title: 'multiset:: Clear (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::multiset::clear
dev_langs: C++
helpviewer_keywords: clear member [STL/CLR]
ms.assetid: 63c21716-fa08-47b9-b457-0b76052c5079
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 9879169973987be35b46b363cf903d407d4fea17
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="multisetclear-stlclr"></a>multiset::clear (STL/CLR)
Rimuove tutti gli elementi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void clear();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro chiama in modo efficace [multiset:: Erase (STL/CLR)](../dotnet/multiset-erase-stl-clr.md) `(` [multiset:: Begin (STL/CLR)](../dotnet/multiset-begin-stl-clr.md) `(),` [multiset:: end (STL/CLR)](../dotnet/multiset-end-stl-clr.md) `())`. Utilizzarla per garantire che la sequenza controllata vuota.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_multiset_clear.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
int main()   
    {   
    Mymultiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// clear the container and reinspect   
    c1.clear();   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// add elements and clear again   
    c1.insert(L'a');   
    c1.insert(L'b');   
  
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    c1.clear();   
    System::Console::WriteLine("size() = {0}", c1.size());   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
size() = 0  
 a b  
size() = 0  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [multiset::erase (STL/CLR)](../dotnet/multiset-erase-stl-clr.md)