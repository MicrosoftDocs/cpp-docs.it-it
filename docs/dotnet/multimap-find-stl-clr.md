---
title: 'multimap:: Find (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::multimap::find
dev_langs:
- C++
helpviewer_keywords:
- find member [STL/CLR]
ms.assetid: 94b42497-3be4-448c-8de9-0a072ae14fbf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9ca6ee82246256c6bbc605e67dee5079f6eded04
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33138242"
---
# <a name="multimapfind-stlclr"></a>multimap::find (STL/CLR)
Trova un elemento che corrisponde a una chiave specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
iterator find(key_type key);  
```  
  
#### <a name="parameters"></a>Parametri  
 key  
 Valore della chiave da cercare.  
  
## <a name="remarks"></a>Note  
 Se almeno un elemento nella sequenza controllata ha un ordinamento equivalente con `key`, la funzione membro restituisce un iteratore che definisce uno di questi elementi; in caso contrario restituisce [multimap:: end (STL/CLR)](../dotnet/multimap-end-stl-clr.md) `()`. Utilizzarla per individuare un elemento attualmente nella sequenza controllata che corrisponde a una chiave specificata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_multimap_find.cpp   
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
    for each (Mymultimap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("find {0} = {1}",   
        L'A', c1.find(L'A') != c1.end());   
  
    Mymultimap::iterator it = c1.find(L'b');   
    System::Console::WriteLine("find {0} = [{1} {2}]",   
        L'b', it->first, it->second);   
  
    System::Console::WriteLine("find {0} = {1}",   
        L'C', c1.find(L'C') != c1.end());   
    return (0);   
    }  
  
```  
  
```Output  
 [a 1] [b 2] [c 3]  
find A = False  
find b = [b 2]  
find C = False  
```  
  
## <a name="description"></a>Descrizione  
 Si noti che `find` non garantisce che l'elemento più rileva.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/mappa >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [multimap (STL/CLR)](../dotnet/multimap-stl-clr.md)   
 [multimap:: equal_range (STL/CLR)](../dotnet/multimap-equal-range-stl-clr.md)   
 [multimap:: lower_bound (STL/CLR)](../dotnet/multimap-lower-bound-stl-clr.md)   
 [multimap::upper_bound (STL/CLR)](../dotnet/multimap-upper-bound-stl-clr.md)