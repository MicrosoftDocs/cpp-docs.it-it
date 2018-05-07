---
title: 'multimap:: equal_range (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::multimap::equal_range
dev_langs:
- C++
helpviewer_keywords:
- equal_range member [STL/CLR]
ms.assetid: f1008d89-7442-429b-9eca-4ef7ee704766
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 13dfde60504809b3f949119bfab27178411f1a76
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="multimapequalrange-stlclr"></a>multimap::equal_range (STL/CLR)
Trova un intervallo che corrisponde a una chiave specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
pair_iter_iter equal_range(key_type _Keyval);  
```  
  
#### <a name="parameters"></a>Parametri  
 `_Keyval`  
 Valore della chiave da cercare.  
  
## <a name="remarks"></a>Note  
 Il metodo restituisce una coppia di iteratori `-` [multimap:: lower_bound (STL/CLR)](../dotnet/multimap-lower-bound-stl-clr.md) `(_Keyval),` [multimap:: upper_bound (STL/CLR)](../dotnet/multimap-upper-bound-stl-clr.md)`(_Keyval)`. Utilizzarla per determinare l'intervallo di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_multimap_equal_range.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::multimap<wchar_t, int> Mymultimap;   
typedef Mymultimap::pair_iter_iter Pairii;   
int main()   
    {   
    Mymultimap c1;   
    c1.insert(Mymultimap::make_value(L'a', 1));   
    c1.insert(Mymultimap::make_value(L'b', 2));   
    c1.insert(Mymultimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Mymultimap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// display results of failed search   
    Pairii pair1 = c1.equal_range(L'x');   
    System::Console::WriteLine("equal_range(L'x') empty = {0}",   
        pair1.first == pair1.second);   
  
// display results of successful search   
    pair1 = c1.equal_range(L'b');   
    for (; pair1.first != pair1.second; ++pair1.first)   
        System::Console::Write(" [{0} {1}]",   
            pair1.first->first, pair1.first->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 [a 1] [b 2] [c 3]  
equal_range(L'x') empty = True  
 [b 2]  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/mappa >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [multimap (STL/CLR)](../dotnet/multimap-stl-clr.md)   
 [multimap:: Count (STL/CLR)](../dotnet/multimap-count-stl-clr.md)   
 [multimap:: Find (STL/CLR)](../dotnet/multimap-find-stl-clr.md)   
 [multimap:: lower_bound (STL/CLR)](../dotnet/multimap-lower-bound-stl-clr.md)   
 [multimap::upper_bound (STL/CLR)](../dotnet/multimap-upper-bound-stl-clr.md)