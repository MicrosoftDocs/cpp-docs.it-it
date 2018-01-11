---
title: 'hash_set:: Erase (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::hash_set::erase
dev_langs: C++
helpviewer_keywords: erase member [STL/CLR]
ms.assetid: 620998a0-00c9-4be6-899b-2d71661375b6
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 47848599b844eb45da0d30c9b410e06f51ccb63e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hashseterase-stlclr"></a>hash_set::erase (STL/CLR)
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
 La prima funzione membro rimuove l'elemento della sequenza controllata a cui puntata `where`e restituisce un iteratore che definisce il primo elemento rimanente oltre l'elemento rimosso, o [hash_set:: end (STL/CLR)](../dotnet/hash-set-end-stl-clr.md) `()` se tale elemento non esiste. Utilizzarlo per rimuovere un singolo elemento.  
  
 La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo [`first`, `last`) e restituisce un iteratore che definisce il primo elemento rimanente successivo a tutti gli elementi eliminati, o `end()` se tale elemento non è presente... Utilizzarlo per rimuovere zero o più elementi adiacenti.  
  
 La terza funzione membro rimuove qualsiasi elemento della sequenza controllata la cui chiave ha un ordinamento equivalente a `key`e restituisce un conteggio del numero di elementi rimossi. Utilizzarla per rimuovere e il conteggio di tutti gli elementi che corrispondono a una chiave specificata.  
  
 La cancellazione di ogni elemento richiede tempo proporzionale al logaritmo del numero di elementi nella sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_set_erase.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
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
    Myhash_set::iterator it = c1.end();   
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
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [hash_set::clear (STL/CLR)](../dotnet/hash-set-clear-stl-clr.md)