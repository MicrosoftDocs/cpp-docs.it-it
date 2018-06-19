---
title: 'List:: rend (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::list::rend
dev_langs:
- C++
helpviewer_keywords:
- rend member [STL/CLR]
ms.assetid: b51030ad-1bca-42b0-b890-db47111d2921
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 19b3a1f7b6483bcf8fa839c8b20d1f261f096c2c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33131712"
---
# <a name="listrend-stlclr"></a>list::rend (STL/CLR)
Indica la fine della sequenza controllata inversa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
reverse_iterator rend();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce un iteratore inverso che punta appena oltre l'inizio della sequenza controllata. Di conseguenza, indica il `end` della sequenza inversa. È utilizzato per ottenere un iteratore che definisce il `current` fine della sequenza controllata considerata in ordine inverso, ma il cui stato è possibile modificare se viene modificata la lunghezza della sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_list_rend.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first two items   
    cliext::list<wchar_t>::reverse_iterator rit = c1.rend();   
    --rit;   
    System::Console::WriteLine("*-- --rend() = {0}", *--rit);   
    System::Console::WriteLine("*--rend() = {0}", *++rit);   
  
// alter first two items and reinspect   
    *--rit = L'x';   
    *++rit = L'y';   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
*-- --rend() = b  
*--rend() = a  
 y x c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/list >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [List:: Begin (STL/CLR)](../dotnet/list-begin-stl-clr.md)   
 [List:: end (STL/CLR)](../dotnet/list-end-stl-clr.md)   
 [list::rbegin (STL/CLR)](../dotnet/list-rbegin-stl-clr.md)