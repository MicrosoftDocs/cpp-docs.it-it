---
title: "multimap::erase (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multimap::erase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "erase (membro) [STL/CLR]"
ms.assetid: 94623cfc-4464-44a6-afd4-90a36828ac2b
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# multimap::erase (STL/CLR)
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
 La prima funzione membro rimuovi elemento della sequenza selezionata indicata da `where` e restituisce un iteratore che definisce il primo elemento che rimane oltre l'elemento rimosso, o [multimap::end](../dotnet/multimap-end-stl-clr.md)`()` se tale elemento non esiste.  Utilizzarla per rimuovere un singolo elemento.  
  
 La seconda funzione membro rimuove gli elementi della sequenza selezionata nell'intervallo `[``first``,` `last``)` e restituisce un iteratore che definisce il primo elemento che rimane oltre tutti gli elementi eliminati, o `end()` se tale elemento non esiste.  Utilizzarla per rimuovere elementi zero o più adiacenti.  
  
 La terza funzione membro elimina qualsiasi elemento della sequenza selezionata della chiave è equivalente a ordine `key` e restituisce un conteggio del numero di elementi rimosso.  Utilizzarla per eliminare e contare tutti gli elementi che soddisfano una chiave specificata.  
  
 Ogni cancellatura dell'elemento richiede tempo proporzionale al logaritmo del numero di elementi della sequenza selezionata.  
  
## Esempio  
  
```  
// cliext_multimap_erase.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::multimap<wchar_t, int> Mymultimap;   
int main()   
    {   
    cliext::multimap<wchar_t, int> c1;   
    c1.insert(cliext::multimap<wchar_t, int>::make_value(L'a', 1));   
    c1.insert(cliext::multimap<wchar_t, int>::make_value(L'b', 2));   
    c1.insert(cliext::multimap<wchar_t, int>::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (cliext::multimap<wchar_t, int>::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// erase an element and reinspect   
    cliext::multimap<wchar_t, int>::iterator it =   
        c1.erase(c1.begin());   
    System::Console::WriteLine("erase(begin()) = [{0} {1}]",   
        it->first, it->second);   
  
// add elements and display " b c d e"   
    c1.insert(cliext::multimap<wchar_t, int>::make_value(L'd', 4));   
    c1.insert(cliext::multimap<wchar_t, int>::make_value(L'e', 5));   
    for each (cliext::multimap<wchar_t, int>::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// erase all but end   
    it = c1.end();   
    it = c1.erase(c1.begin(), --it);   
    System::Console::WriteLine("erase(begin(), end()-1) = [{0} {1}]",   
        it->first, it->second);   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// erase end   
    System::Console::WriteLine("erase(L'x') = {0}", c1.erase(L'x'));   
    System::Console::WriteLine("erase(L'e') = {0}", c1.erase(L'e'));   
    return (0);   
    }  
  
```  
  
  **un \[1\] \[b \[2\]c 3\]**  
**erase\(begin\(\)\) \= \[b 2\]**  
 **b \[2\] \[c 3\] \[d'4 \[\]e 5\]**  
**erase\(begin\(\), end\(\)\-1\) \= \[e 5\]**  
**size\(\) \= 1**  
**cancellare definitivamente sia \(L'x\) \= 0**  
**cancellare definitivamente sia \(L'e\) \= 1**   
## Requisiti  
 **Intestazione:**\<cliext\/map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [multimap](../dotnet/multimap-stl-clr.md)   
 [multimap::clear](../dotnet/multimap-clear-stl-clr.md)