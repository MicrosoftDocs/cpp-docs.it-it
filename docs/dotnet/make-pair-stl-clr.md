---
title: make_pair (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::make_pair
dev_langs: C++
helpviewer_keywords: make_pair function [STL/CLR]
ms.assetid: 74733f2c-97b0-4d69-b431-5ab8f0de9e3e
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 8fba63cb9e10fcdccba8ed5c6a8a405184a4bca5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="makepair-stlclr"></a>make_pair (STL/CLR)
Rendere un `pair` da una coppia di valori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value1,  
    typename Value2>  
    pair<Value1, Value2> make_pair(Value1 first, Value2 second);  
```  
  
#### <a name="parameters"></a>Parametri  
 `Value1`  
 Il tipo del primo valore sottoposto a wrapping.  
  
 `Value2`  
 Il tipo del secondo valore sottoposto a wrapping.  
  
 `first`  
 Primo valore per eseguire il wrapping.  
  
 `second`  
 Secondo valore da cui eseguire il wrapping.  
  
## <a name="remarks"></a>Note  
 La funzione modello restituisce `pair<Value1, Value2>(first, second)`. Utilizzato per costruire un `pair<Value1, Value2>` oggetto da una coppia di valori.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// cliext_make_pair.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
  
    c1 = cliext::make_pair(L'y', 4);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    return (0);   
    }  
  
```  
  
```Output  
[x, 3]  
[y, 4]  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/utilità >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [range_adapter (STL/CLR)](../dotnet/range-adapter-stl-clr.md)