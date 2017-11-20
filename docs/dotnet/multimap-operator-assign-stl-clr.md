---
title: multimap::operator = (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::multimap::operator=
dev_langs: C++
helpviewer_keywords: operator= member [STL/CLR]
ms.assetid: 9bef7dc5-591d-443b-88b1-e68286422fe6
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: eafafa245e9de81ce21f0be01b43795a78ef0ba5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="multimapoperator-stlclr"></a>multimap::operator= (STL/CLR)
Sostituisce la sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
multimap<Key, Mapped>% operator=(multimap<Key, Mapped>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Contenitore da copiare.  
  
## <a name="remarks"></a>Note  
 Le copie di operatore membro `right` all'oggetto, quindi restituisce `*this`. Viene usato per sostituire la sequenza controllata con una copia della sequenza controllata in `right`.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_multimap_operator_as.cpp   
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
  
// assign to a new container   
    Mymultimap c2;   
    c2 = c1;   
// display contents " [a 1] [b 2] [c 3]"   
    for each (Mymultimap::value_type elem in c2)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
[a 1] [b 2] [c 3]  
[a 1] [b 2] [c 3]  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/mappa >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [multimap (STL/CLR)](../dotnet/multimap-stl-clr.md)