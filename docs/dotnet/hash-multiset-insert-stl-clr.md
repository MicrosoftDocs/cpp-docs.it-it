---
title: 'hash_multiset:: Insert (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::hash_multiset::insert
dev_langs:
- C++
helpviewer_keywords:
- insert member [STL/CLR]
ms.assetid: e7254f30-a514-4ddc-bf53-38aafbe9e8eb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 243c07eae12026115f12e042b9fbe49b97cdb1b9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="hashmultisetinsert-stlclr"></a>hash_multiset::insert (STL/CLR)
Aggiunge elementi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
iterator insert(value_type val);  
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
  
 La prima funzione membro inserisce un elemento con valore `val`e restituisce un iteratore che definisce l'elemento appena inserito. Utilizzarla per inserire un singolo elemento.  
  
 La seconda funzione membro inserisce un elemento con valore `val`, utilizzando `where` come un suggerimento (per migliorare le prestazioni) e restituisce un iteratore che definisce l'elemento appena inserito. Utilizzarla per inserire un singolo elemento che può essere adiacente a un elemento a cui che si è certi.  
  
 La terza funzione membro inserisce la sequenza [`first`, `last`). Utilizzarla per l'inserimento di zero o più elementi copiati da un'altra sequenza.  
  
 La quarta funzione membro inserisce la sequenza designata dal `right`. Utilizzarla per inserire una sequenza descritta dall'enumeratore.  
  
 Ogni inserimento di elementi tempo proporzionale al logaritmo del numero di elementi nella sequenza controllata. Inserimento può avvenire in tempo costante ammortizzato, tuttavia, dato un suggerimento che designa un elemento adiacente al punto di inserimento.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_multiset_insert.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_multiset<wchar_t> Myhash_multiset;   
int main()   
    {   
    Myhash_multiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert a single value, unique and duplicate   
    System::Console::WriteLine("insert(L'x') = {0}",   
        *c1.insert(L'x'));   
  
    System::Console::WriteLine("insert(L'b') = {0}",   
        *c1.insert(L'b'));   
  
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert a single value with hint   
    System::Console::WriteLine("insert(begin(), L'y') = {0}",   
        *c1.insert(c1.begin(), L'y'));   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an iterator range   
    Myhash_multiset c2;   
    Myhash_multiset::iterator it = c1.end();   
    c2.insert(c1.begin(), --it);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an enumeration   
    Myhash_multiset c3;   
    c3.insert(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
insert(L'x') = x  
insert(L'b') = b  
 a b b c x  
insert(begin(), L'y') = y  
 a b b c x y  
 a b b c x  
 a b b c x y  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/hash_set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)