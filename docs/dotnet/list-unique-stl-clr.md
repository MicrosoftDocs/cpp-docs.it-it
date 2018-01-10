---
title: 'List:: unique (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::list::unique
dev_langs: C++
helpviewer_keywords: unique member [STL/CLR]
ms.assetid: c3a29e4e-0ec1-4472-b050-7a9511037132
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 056f15dc0e7808a7f0ada7267a60e13d4c75d83b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="listunique-stlclr"></a>list::unique (STL/CLR)
Rimuove gli elementi adiacenti che superano un test specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void unique();  
template<typename Pred2>  
    void unique(Pred2 pred);  
```  
  
#### <a name="parameters"></a>Parametri  
 pred  
 Operatore di confronto per le coppie di elementi.  
  
## <a name="remarks"></a>Note  
 La prima funzione membro rimuove la sequenza controllata (Cancella) confronta ogni elemento è uguale all'elemento precedente, se elemento `X` precede l'elemento `Y` e `X == Y`, la funzione membro rimuove `Y`. Utilizzarlo per rimuovere tutte tranne una copia di ogni sottosequenza degli elementi adiacenti che risultano uguali. Si noti che se viene ordinato la sequenza controllata, ad esempio chiamando come [List:: Sort (STL/CLR)](../dotnet/list-sort-stl-clr.md)`()`, la funzione membro lascia solo gli elementi con valori univoci. come indicato dal nome.  
  
 La seconda funzione membro si comporta come la prima, ad eccezione del fatto che rimuove ogni elemento `Y` che segue un elemento `X` per il quale `pred(X, Y)`. Utilizzarlo per rimuovere tutte tranne una copia di ogni sottosequenza degli elementi adiacenti che soddisfano una funzione di predicato o il delegato specificato. Si noti che se viene ordinato la sequenza controllata, ad esempio chiamando come `sort(pred)`, la funzione membro lascia solo gli elementi che non dispongono di un ordinamento equivalente a tutti gli altri elementi.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_list_unique.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display contents after unique   
    cliext::list<wchar_t> c2(c1);   
    c2.unique();   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display contents after unique(not_equal_to)   
    c2 = c1;   
    c2.unique(cliext::not_equal_to<wchar_t>());   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a a b c  
a b c  
a a  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/list >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [List:: Remove (STL/CLR)](../dotnet/list-remove-stl-clr.md)   
 [List:: remove_if (STL/CLR)](../dotnet/list-remove-if-stl-clr.md)   
 [list::sort (STL/CLR)](../dotnet/list-sort-stl-clr.md)