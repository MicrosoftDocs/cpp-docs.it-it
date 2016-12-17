---
title: "hash_set::erase (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_set::erase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "erase (membro) [STL/CLR]"
ms.assetid: 620998a0-00c9-4be6-899b-2d71661375b6
caps.latest.revision: 16
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_set::erase (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rimuove gli elementi alle posizioni specificate.  
  
## Sintassi  
  
```  
iterator erase(iterator where);  
iterator erase(iterator first, iterator last);  
bool erase(key_type key)  
```  
  
#### Parametri  
 innanzitutto  
 Avvio dell'intervallo da cancellare.  
  
 chiave  
 Valore della chiave da cancellare.  
  
 last  
 Fine di intervallo da cancellare.  
  
 where  
 Elemento da cancellare.  
  
## Note  
 La prima funzione membro rimuovi elemento della sequenza selezionata indicata da `where` e restituisce un iteratore che definisce il primo elemento che rimane oltre l'elemento rimosso, o [hash\_set::end](../dotnet/hash-set-end-stl-clr.md)`()` se tale elemento non esiste.  Utilizzarla per rimuovere un singolo elemento.  
  
 La seconda funzione membro rimuove gli elementi della sequenza selezionata nell'intervallo `[``first``,` `last``)` e restituisce un iteratore che definisce il primo elemento che rimane oltre tutti gli elementi eliminati, o `end()` se tale elemento non esiste.  Utilizzarla per rimuovere elementi zero o più adiacenti.  
  
 La terza funzione membro elimina qualsiasi elemento della sequenza selezionata della chiave è equivalente a ordine `key` e restituisce un conteggio del numero di elementi rimosso.  Utilizzarla per eliminare e contare tutti gli elementi che soddisfano una chiave specificata.  
  
 Ogni cancellatura dell'elemento richiede tempo proporzionale al logaritmo del numero di elementi della sequenza selezionata.  
  
## Esempio  
  
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
  
  **a b c**  
**erase\(begin\(\)\) \= b**  
 **b e c d**  
**erase\(begin\(\), end\(\)\-1\) \= e**  
**size\(\) \= 1**   
## Requisiti  
 **Intestazione:**\<cliext\/hash\_set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [hash\_set::clear](../dotnet/hash-set-clear-stl-clr.md)