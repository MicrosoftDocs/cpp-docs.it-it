---
title: 'hash_multiset:: Erase (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::hash_multiset::erase
dev_langs:
- C++
helpviewer_keywords:
- erase member [STL/CLR]
ms.assetid: bddd329d-aece-4b93-8355-005351c3aa45
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 4652c4e09dbcb646888d2e4973eb982357015e7c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="hashmultiseterase-stlclr"></a>hash_multiset::erase (STL/CLR)
Rimuove gli elementi in corrispondenza delle posizioni specificate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
iterator erase(iterator where);  
iterator erase(iterator first, iterator last);  
bool erase(key_type key)  
```  
  
#### <a name="parameters"></a>Parametri  
 primo  
 Inizio dell'intervallo da cancellare.  
  
 key  
 Valore della chiave da cancellare.  
  
 last  
 Fine dell'intervallo da cancellare.  
  
 dove  
 Elemento da cancellare.  
  
## <a name="remarks"></a>Note  
 La prima funzione membro rimuove l'elemento della sequenza controllata a cui puntata `where`e restituisce un iteratore che definisce il primo elemento rimanente oltre l'elemento rimosso, o [hash_multiset:: end (STL/CLR)](../dotnet/hash-multiset-end-stl-clr.md) `()` se tale elemento non esiste. Utilizzarlo per rimuovere un singolo elemento.  
  
 La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo [`first`, `last`) e restituisce un iteratore che definisce il primo elemento rimanente successivo a tutti gli elementi eliminati, o `end()` se tale elemento non è presente... Utilizzarlo per rimuovere zero o più elementi adiacenti.  
  
 La terza funzione membro rimuove qualsiasi elemento della sequenza controllata la cui chiave ha un ordinamento equivalente a `key`e restituisce un conteggio del numero di elementi rimossi. Utilizzarla per rimuovere e il conteggio di tutti gli elementi che corrispondono a una chiave specificata.  
  
 La cancellazione di ogni elemento richiede tempo proporzionale al logaritmo del numero di elementi nella sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_multiset_erase.cpp   
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
  
// erase an element and reinspect   
    System::Console::WriteLine("erase(begin()) = {0}",   
        *c1.erase(c1.begin()));   
  
// add elements and display " b c d e"   
    c1.insert(L'd');   
    c1.insert(L'e');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// erase all but end   
    Myhash_multiset::iterator it = c1.end();   
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
 **Intestazione:** \<cliext/hash_set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)   
 [hash_multiset::clear (STL/CLR)](../dotnet/hash-multiset-clear-stl-clr.md)