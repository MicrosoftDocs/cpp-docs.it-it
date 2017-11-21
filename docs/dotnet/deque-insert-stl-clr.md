---
title: 'deque:: Insert (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::deque::insert
dev_langs: C++
helpviewer_keywords: insert member [STL/CLR]
ms.assetid: a3b86c46-e6a8-42d0-b642-5a8f05ddd68c
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 814d6669092b6cabe4ef52cb64a6888b8143e310
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="dequeinsert-stlclr"></a>deque::insert (STL/CLR)
Aggiunge gli elementi in una posizione specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
iterator insert(iterator where, value_type val);  
void insert(iterator where, size_type count, value_type val);  
template<typename InIt>  
    void insert(iterator where, InIt first, InIt last);  
void insert(iterator where,  
    System::Collections::Generic::IEnumerable<Value>^ right);  
```  
  
#### <a name="parameters"></a>Parametri  
 `count`  
 Numero di elementi da inserire.  
  
 `first`  
 Inizio dell'intervallo da inserire.  
  
 `last`  
 Fine dell'intervallo da inserire.  
  
 `right`  
 Enumerazione da inserire.  
  
 `val`  
 Valore dell'elemento da inserire.  
  
 `where`  
 Posizione in cui nel contenitore da inserire prima.  
  
## <a name="remarks"></a>Note  
 Ogni membro funzioni inserimenti, prima dell'elemento a cui puntata `where` nella sequenza controllata, una sequenza specificata dagli operandi rimanenti.  
  
 La prima funzione membro inserisce un elemento con valore `val` e restituisce un iteratore che definisce l'elemento appena inserito. Utilizzarla per inserire un singolo elemento prima di una posizione definita da un iteratore.  
  
 La seconda funzione membro inserisce una ripetizione di `count` elementi con valore `val`. Utilizzarla per l'inserimento di zero o più elementi adiacenti che sono tutte le copie dello stesso valore.  
  
 Se `InIt` è di tipo Integer, la terza funzione membro si comporta come `insert(where, (size_type)first, (value_type)last)`. In caso contrario, inserisce la sequenza [`first`, `last`). Utilizzarla per l'inserimento di zero o più elementi contigui copiati da un'altra sequenza.  
  
 La quarta funzione membro inserisce la sequenza designata dal `right`. Utilizzarla per inserire una sequenza descritta dall'enumeratore.  
  
 Quando si inserisce un singolo elemento, il numero di copie di elementi è lineare nel numero di elementi tra il punto di inserimento e la fine della sequenza più vicini. (Quando si inserisce uno o più elementi in delle estremità della sequenza, nessuna copia elemento verificarsi.) Se `InIt` è un iteratore di input, la terza funzione membro esegue in modo efficace un inserimento singolo per ogni elemento nella sequenza. In caso contrario, quando si inseriscono `N` elementi, il numero di copie di elementi è lineare nel `N` più il numero di elementi tra il punto di inserimento e la fine della sequenza più vicini.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// cliext_deque_insert.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert a single value using iterator   
    cliext::deque<wchar_t>::iterator it = c1.begin();   
    System::Console::WriteLine("insert(begin()+1, L'x') = {0}",   
        *c1.insert(++it, L'x'));   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert a repetition of values   
    cliext::deque<wchar_t> c2;   
    c2.insert(c2.begin(), 2, L'y');   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an iterator range   
    it = c1.end();   
    c2.insert(c2.end(), c1.begin(), --it);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an enumeration   
    c2.insert(c2.begin(),   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
insert(begin()+1, L'x') = x  
 a x b c  
 y y  
 y y a x b  
 a x b c y y a x b  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/deque >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [deque::assign (STL/CLR)](../dotnet/deque-assign-stl-clr.md)