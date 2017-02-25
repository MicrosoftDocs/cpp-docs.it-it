---
title: "list::erase (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::list::erase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "erase (membro) [STL/CLR]"
ms.assetid: 78705058-1e83-441d-b267-d4fb56451c0b
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# list::erase (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rimuove gli elementi alle posizioni specificate.  
  
## Sintassi  
  
```  
iterator erase(iterator where);  
iterator erase(iterator first, iterator last);  
```  
  
#### Parametri  
 innanzitutto  
 Avvio dell'intervallo da cancellare.  
  
 last  
 Fine di intervallo da cancellare.  
  
 where  
 Elemento da cancellare.  
  
## Note  
 La prima funzione membro rimuovi elemento della sequenza selezionata indicata da `where`.  Utilizzarla per rimuovere un singolo elemento.  
  
 La seconda funzione membro rimuove gli elementi della sequenza selezionata nell'intervallo `[``first``,` `last``)`.  Utilizzarla per rimuovere elementi zero o più adiacenti.  
  
 Entrambe le funzioni membro restituiscono un iteratore che definisce il primo elemento che rimane oltre tutti gli elementi eliminati, o [list::end](../dotnet/list-end-stl-clr.md)`()` se tale elemento non esiste.  
  
 In cancellare gli elementi, il numero di copie dell'elemento è lineare il numero di elementi tra la fine di cancellatura e la fine più vicina della sequenza. \(Quando cancella uno o più elementi alla fine della sequenza, alcuna copia dell'elemento si verifica.\)  
  
## Esempio  
  
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
  
  **a b c**  
**erase\(begin\(\)\) \= b**  
 **b e c d**  
**erase\(begin\(\), end\(\)\-1\) \= e**  
**size\(\) \= 1**   
## Requisiti  
 **Intestazione:**\<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [list::clear](../dotnet/list-clear-stl-clr.md)