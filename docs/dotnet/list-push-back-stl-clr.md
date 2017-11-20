---
title: 'List:: push_back (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::list::push_back
dev_langs: C++
helpviewer_keywords: push_back member [STL/CLR]
ms.assetid: f2c70470-a899-4e5f-8f3e-b55d6a8bff0e
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 47f77ec3bec84c1df1a63aee93297424fb5e534f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="listpushback-stlclr"></a>list::push_back (STL/CLR)
Aggiunge un nuovo ultimo elemento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void push_back(value_type val);  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro inserisce un elemento con valore `val` alla fine della sequenza controllata. Utilizzarla per aggiungere un altro elemento all'elenco.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_list_push_back.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/list >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [List:: pop_back (STL/CLR)](../dotnet/list-pop-back-stl-clr.md)   
 [List:: pop_front (STL/CLR)](../dotnet/list-pop-front-stl-clr.md)   
 [list::push_front (STL/CLR)](../dotnet/list-push-front-stl-clr.md)