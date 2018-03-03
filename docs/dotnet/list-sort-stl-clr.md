---
title: 'List:: Sort (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- cliext::list::sort
dev_langs:
- C++
helpviewer_keywords:
- sort member [STL/CLR]
ms.assetid: f811d5f4-a19e-4194-8765-1e68097c52f0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 159391bc7d362c755c194f478692b2a271d779ed
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="listsort-stlclr"></a>list::sort (STL/CLR)
Ordina la sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void sort();  
template<typename Pred2>  
    void sort(Pred2 pred);  
```  
  
#### <a name="parameters"></a>Parametri  
 pred  
 Operatore di confronto per le coppie di elementi.  
  
## <a name="remarks"></a>Note  
 La prima funzione membro Riordina gli elementi nella sequenza controllata in modo che vengono ordinati da `operator<` -elementi non diminuiscono nel valore come lo stato di avanzamento tramite la sequenza. Utilizzare questa funzione membro per ordinare la sequenza in ordine crescente.  
  
 La seconda funzione membro si comporta come la prima, ad eccezione del fatto che la sequenza viene ordinata in base `pred`  --  `pred(X, Y)` è false per qualsiasi elemento `X` che segue l'elemento `Y` nella sequenza risulta. Utilizzarla per ordinare la sequenza in un ordine specificato da una funzione di predicato o di un delegato.  
  
 Le funzioni consentono di eseguire un ordinamento stabile - nessuna coppia di elementi nella sequenza controllata originale viene invertita nella sequenza controllata risulta.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_list_sort.cpp   
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
  
// sort descending and redisplay   
    c1.sort(cliext::greater<wchar_t>());   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// sort ascending and redisplay   
    c1.sort();   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
c b a  
a b c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/list >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [List:: Merge (STL/CLR)](../dotnet/list-merge-stl-clr.md)   
 [List:: reverse (STL/CLR)](../dotnet/list-reverse-stl-clr.md)   
 [List:: splice (STL/CLR)](../dotnet/list-splice-stl-clr.md)   
 [list::unique (STL/CLR)](../dotnet/list-unique-stl-clr.md)