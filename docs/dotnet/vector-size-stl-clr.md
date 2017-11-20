---
title: 'Vector:: Size (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::vector::size
dev_langs: C++
helpviewer_keywords: size member [STL/CLR]
ms.assetid: 3d2a156e-5871-4441-9307-21a20cd1430f
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 091d0d220ae11a09cc7e9da35626ac2d750666b7
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="vectorsize-stlclr"></a>vector::size (STL/CLR)
Conta il numero di elementi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_type size();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce la lunghezza della sequenza controllata. Utilizzarla per determinare il numero di elementi attualmente presenti nella sequenza controllata. Se invece è rilevante se la sequenza è diverso da zero dimensioni, vedere [Vector:: Empty (STL/CLR)](../dotnet/vector-empty-stl-clr.md)`()`.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_vector_size.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine("size() = {0} starting with 3", c1.size());   
  
// clear the container and reinspect   
    c1.clear();   
    System::Console::WriteLine("size() = {0} after clearing", c1.size());   
  
// add elements and clear again   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    System::Console::WriteLine("size() = {0} after adding 2", c1.size());   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
size() = 3 starting with 3  
size() = 0 after clearing  
size() = 2 after adding 2  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/vettore >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [Vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [vector::empty (STL/CLR)](../dotnet/vector-empty-stl-clr.md)