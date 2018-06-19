---
title: 'multimap:: end (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::multimap::end
dev_langs:
- C++
helpviewer_keywords:
- end member [STL/CLR]
ms.assetid: 8d3f9347-794d-4bd3-9bd1-50534fcf4ffe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 4ccc19cdbd7a903a3fc76fdfae61f6b950be65c3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33138176"
---
# <a name="multimapend-stlclr"></a>multimap::end (STL/CLR)
Designa la fine della sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
iterator end();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce un iteratore bidirezionale che punta appena oltre la fine della sequenza controllata. È utilizzato per ottenere un iteratore che definisce la fine della sequenza controllata. il relativo stato modifica se viene modificata la lunghezza della sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_multimap_end.cpp   
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
  
// inspect last two items   
    Mymultimap::iterator it = c1.end();   
    --it;   
    --it;   
    System::Console::WriteLine("*-- --end() = [{0} {1}]",   
        it->first, it->second);   
    ++it;   
    System::Console::WriteLine("*--end() = [{0} {1}]",   
        it->first, it->second);   
    return (0);   
    }  
  
```  
  
```Output  
 [a 1] [b 2] [c 3]  
*-- --end() = [b 2]  
*--end() = [c 3]  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/mappa >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [multimap (STL/CLR)](../dotnet/multimap-stl-clr.md)   
 [multimap::begin (STL/CLR)](../dotnet/multimap-begin-stl-clr.md)