---
title: 'hash_map:: Insert (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- cliext::hash_map::insert
dev_langs:
- C++
helpviewer_keywords:
- insert member [STL/CLR]
ms.assetid: 52926ec7-ad4e-4791-a043-46136ee40a69
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 52ffd7ba33c72036cf79a557f0caeaa755400dbe
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hashmapinsert-stlclr"></a>hash_map::insert (STL/CLR)
Aggiunge elementi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
cliext::pair<iterator, bool> insert(value_type val);  
iterator insert(iterator where, value_type val);  
template<typename InIter>  
    void insert(InIter first, InIter last);  
void insert(System::Collections::Generic::IEnumerable<value_type>^ right);  
```  
  
#### <a name="parameters"></a>Parametri  
 primo  
 Inizio dell'intervallo da inserire.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 right  
 Enumerazione da inserire.  
  
 Val  
 Valore della chiave da inserire.  
  
 dove  
 Posizione in cui nel contenitore per inserire (solo hint).  
  
## <a name="remarks"></a>Note  
 Tutte le funzioni membro inserisce una sequenza specificata dagli operandi rimanenti.  
  
 La prima funzione membro incentrati inserire un elemento con valore `val`e restituisce una coppia di valori `X`. Se `X.second` è true, `X.first` definisce l'elemento appena inserito; in caso contrario `X.first` definisce un elemento con l'equivalente di ordinamento che già esiste e non viene inserito alcun nuovo elemento. Utilizzarla per inserire un singolo elemento.  
  
 La seconda funzione membro inserisce un elemento con valore `val`, utilizzando `where` come un suggerimento (per migliorare le prestazioni) e restituisce un iteratore che definisce l'elemento appena inserito. Utilizzarla per inserire un singolo elemento che può essere adiacente a un elemento a cui che si è certi.  
  
 La terza funzione membro inserisce la sequenza [`first`, `last`). Utilizzarla per l'inserimento di zero o più elementi copiati da un'altra sequenza.  
  
 La quarta funzione membro inserisce la sequenza designata dal `right`. Utilizzarla per inserire una sequenza descritta dall'enumeratore.  
  
 Ogni inserimento di elementi tempo proporzionale al logaritmo del numero di elementi nella sequenza controllata. Inserimento può avvenire in tempo costante ammortizzato, tuttavia, dato un suggerimento che designa un elemento adiacente al punto di inserimento.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_map_insert.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_map<wchar_t, int> Myhash_map;   
typedef Myhash_map::pair_iter_bool Pairib;   
int main()   
    {   
    Myhash_map c1;   
    c1.insert(Myhash_map::make_value(L'a', 1));   
    c1.insert(Myhash_map::make_value(L'b', 2));   
    c1.insert(Myhash_map::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Myhash_map::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// insert a single value, unique and duplicate   
    Pairib pair1 =   
        c1.insert(Myhash_map::make_value(L'x', 24));   
    System::Console::WriteLine("insert([L'x' 24]) = [{0} {1}] {2}",   
        pair1.first->first, pair1.first->second, pair1.second);   
  
    pair1 = c1.insert(Myhash_map::make_value(L'b', 2));   
    System::Console::WriteLine("insert([L'b' 2]) = [{0} {1}] {2}",   
        pair1.first->first, pair1.first->second, pair1.second);   
  
    for each (Myhash_map::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// insert a single value with hint   
    Myhash_map::iterator it =   
        c1.insert(c1.begin(), Myhash_map::make_value(L'y', 25));   
    System::Console::WriteLine("insert(begin(), [L'y' 25]) = [{0} {1}]",   
        it->first, it->second);   
    for each (Myhash_map::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// insert an iterator range   
    Myhash_map c2;   
    it = c1.end();   
    c2.insert(c1.begin(), --it);   
    for each (Myhash_map::value_type elem in c2)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// insert an enumeration   
    Myhash_map c3;   
    c3.insert(   // NOTE: cast is not needed   
        (System::Collections::Generic::   
            IEnumerable<Myhash_map::value_type>^)%c1);   
    for each (Myhash_map::value_type elem in c3)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 [a 1] [b 2] [c 3]  
insert([L'x' 24]) = [x 24] True  
insert([L'b' 2]) = [b 2] False  
 [a 1] [b 2] [c 3] [x 24]  
insert(begin(), [L'y' 25]) = [y 25]  
 [a 1] [b 2] [c 3] [x 24] [y 25]  
 [a 1] [b 2] [c 3] [x 24]  
 [a 1] [b 2] [c 3] [x 24] [y 25]  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/hash_map >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)