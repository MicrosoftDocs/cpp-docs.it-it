---
title: 'Pair:: Pair (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::pair::pair
dev_langs: C++
helpviewer_keywords: pair member [STL/CLR]
ms.assetid: 188035f3-bd37-4b46-96dd-5ceb9a16df79
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 6b2382161ae1a4acf8cb79f017a39daf51826b4d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="pairpair-stlclr"></a>pair::pair (STL/CLR)
Costruisce un oggetto della coppia.  
  
## <a name="syntax"></a>Sintassi  
  
```  
pair();  
pair(pair<Coll>% right);  
pair(pair<Coll>^ right);  
pair(Value1 val1, Value2 val2);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Coppia da archiviare.  
  
 val1  
 Primo valore da archiviare.  
  
 val2  
 Secondo valore da archiviare.  
  
## <a name="remarks"></a>Note  
 Il costruttore:  
  
 `pair();`  
  
 Inizializza la coppia archiviata con i valori predefiniti costruito.  
  
 Il costruttore:  
  
 `pair(pair<Value1, Value2>% right);`  
  
 Inizializza la coppia archiviata con `right.` [Pair:: First (STL/CLR)](../dotnet/pair-first-stl-clr.md) e `right.` [Pair:: Second (STL/CLR)](../dotnet/pair-second-stl-clr.md).  
  
 `pair(pair<Value1, Value2>^ right);`  
  
 Inizializza la coppia archiviata con `right->` [Pair:: First (STL/CLR)](../dotnet/pair-first-stl-clr.md) e `right>` [Pair:: Second (STL/CLR)](../dotnet/pair-second-stl-clr.md).  
  
 Il costruttore:  
  
 `pair(Value1 val1, Value2 val2);`  
  
 Inizializza la coppia archiviata con con `val1` e `val2`.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_pair_construct.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
// construct an empty container   
    cliext::pair<wchar_t, int> c1;   
    System::Console::WriteLine("[{0}, {1}]",   
        c1.first == L'\0' ? "\\0" : "??", c1.second);   
  
// construct with a pair of values   
    cliext::pair<wchar_t, int> c2(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
// construct by copying another pair   
    cliext::pair<wchar_t, int> c3(c2);   
    System::Console::WriteLine("[{0}, {1}]", c3.first, c3.second);   
  
// construct by copying a pair handle   
    cliext::pair<wchar_t, int> c4(%c3);   
    System::Console::WriteLine("[{0}, {1}]", c4.first, c4.second);   
  
    return (0);   
    }  
  
```  
  
```Output  
[\0, 0]  
[x, 3]  
[x, 3]  
[x, 3]  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/utilità >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [pair (STL/CLR)](../dotnet/pair-stl-clr.md)