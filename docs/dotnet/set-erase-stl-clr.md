---
title: "set::erase (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::set::erase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "erase (membro) [STL/CLR]"
ms.assetid: 0596514b-d4cd-4d2d-8223-3bee6980261c
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# set::erase (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rimuove gli elementi alle posizioni specificate.  
  
## Sintassi  
  
```  
iterator erase(iterator where);  
iterator erase(iterator first, iterator last);  
size_type erase(key_type key)  
```  
  
#### Parametri  
 first  
 Inizio dell'intervallo da cancellare.  
  
 chiave  
 Valore chiave da cancellare.  
  
 last  
 Fine dell'intervallo da cancellare.  
  
 where  
 Elemento da cancellare.  
  
## Note  
 La prima funzione membro rimuove l'elemento della sequenza controllata puntata da `where` e restituisce un iteratore che definisce il primo elemento che rimane oltre l'elemento rimosso o [set::end](../dotnet/set-end-stl-clr.md)`()` se tale elemento non esiste.  Viene utilizzato per rimuovere un singolo elemento.  
  
 La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo `[``first``,` `last``)` e restituisce un iteratore che definisce il primo elemento che rimane oltre tutti gli elementi eliminati o `end()` se tale elemento non esiste.  Utilizzarla per rimuovere zero o più elementi adiacenti.  
  
 La terza funzione membro elimina qualsiasi elemento della sequenza controllata la cui chiave ha ordinamento equivalente a `key` e restituisce un conteggio del numero di elementi rimossi.  Utilizzarla per eliminare e contare tutti gli elementi che soddisfano una chiave specificata.  
  
 Ogni cancellazione di elemento richiede un tempo proporzionale al logaritmo del numero di elementi della sequenza controllata.  
  
## Esempio  
  
```  
// cliext_set_erase.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
    Myset c1;   
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
    Myset::iterator it = c1.end();   
    System::Console::WriteLine("erase(begin(), end()-1) = {0}",   
        *c1.erase(c1.begin(), --it));   
    System::Console::WriteLine("size() = {0}", c1.size());   
    return (0);   
    }  
  
```  
  
  **a b c**  
**erase\(begin\(\)\) \= b**  
 **b c d e**  
**erase\(begin\(\), end\(\)\-1\) \= e**  
**size\(\) \= 1**   
## Requisiti  
 **Intestazione:** \<cliext\/set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [set](../dotnet/set-stl-clr.md)   
 [set::clear](../dotnet/set-clear-stl-clr.md)