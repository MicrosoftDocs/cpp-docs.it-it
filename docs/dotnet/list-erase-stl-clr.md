---
title: 'List:: Erase (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::list::erase
dev_langs:
- C++
helpviewer_keywords:
- erase member [STL/CLR]
ms.assetid: 78705058-1e83-441d-b267-d4fb56451c0b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 080cfbca2a69db9e277e080f5c34206b08e89c69
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="listerase-stlclr"></a>list::erase (STL/CLR)
Rimuove gli elementi in corrispondenza delle posizioni specificate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
iterator erase(iterator where);  
iterator erase(iterator first, iterator last);  
```  
  
#### <a name="parameters"></a>Parametri  
 primo  
 Inizio dell'intervallo da cancellare.  
  
 last  
 Fine dell'intervallo da cancellare.  
  
 dove  
 Elemento da cancellare.  
  
## <a name="remarks"></a>Note  
 Tramite la prima funzione membro viene rimosso l'elemento della sequenza controllata puntata da `where`. Utilizzarlo per rimuovere un singolo elemento.  
  
 La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo [`first`, `last`). Utilizzarlo per rimuovere zero o più elementi adiacenti.  
  
 Entrambe le funzioni membro restituiscono un iteratore che definisce il primo elemento rimanente successivo a tutti gli elementi eliminati, o [List:: end (STL/CLR)](../dotnet/list-end-stl-clr.md) `()` se tale elemento non esiste.  
  
 Quando si cancellano elementi, il numero di copie di elementi è lineare nel numero di elementi tra la fine della cancellazione e la fine della sequenza più vicini. (Quando la cancellazione di uno o più elementi in delle estremità della sequenza, nessuna copia elemento si verifica.)  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_list_erase.cpp   
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
  
// erase an element and reinspect   
    System::Console::WriteLine("erase(begin()) = {0}",   
        *c1.erase(c1.begin()));   
  
// add elements and display " b c d e"   
    c1.push_back(L'd');   
    c1.push_back(L'e');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// erase all but end   
    cliext::list<wchar_t>::iterator it = c1.end();   
    System::Console::WriteLine("erase(begin(), end()-1) = {0}",   
        *c1.erase(c1.begin(), --it));   
    System::Console::WriteLine("size() = {0}", c1.size());   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
erase(begin()) = b  
 b c d e  
erase(begin(), end()-1) = e  
size() = 1  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/list >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [list::clear (STL/CLR)](../dotnet/list-clear-stl-clr.md)