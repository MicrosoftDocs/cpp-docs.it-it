---
title: "multiset::insert (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multiset::insert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "insert (membro) [STL/CLR]"
ms.assetid: 7a3b1cc8-ec60-4ed0-ace5-46cb5872e6e7
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# multiset::insert (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Aggiunge elementi.  
  
## Sintassi  
  
```  
iterator insert(value_type val);  
iterator insert(iterator where, value_type val);  
template<typename InIter>  
    void insert(InIter first, InIter last);  
void insert(System::Collections::Generic::IEnumerable<value_type>^ right);  
```  
  
#### Parametri  
 innanzitutto  
 Avvio dell'intervallo da inserire.  
  
 last  
 Fine di intervalli da inserire.  
  
 right  
 Enumerazione da inserire.  
  
 val  
 Valore della chiave da inserire.  
  
 where  
 Dove inserire nel contenitore \(suggerimento solo\).  
  
## Note  
 Ognuna delle funzioni membro inserire una sequenza specificata dagli operandi rimanenti.  
  
 La prima funzione membro inserire un elemento con valore `val` e restituisce un iteratore che definisce l'elemento appena inserito.  Viene utilizzato per inserire un singolo elemento.  
  
 La seconda funzione membro inserire un elemento con valore `val`, utilizzando `where` come suggerimento \(per migliorare le prestazioni\) e restituisce un iteratore che definisce l'elemento appena inserito.  Utilizzarla per inserire un singolo elemento che può essere adiacenti a un elemento valido.  
  
 La terza funzione membro incollare la sequenza `[``first``,` `last``)`.  Utilizzarla per inserire zero o più elementi copiati da un'altra sequenza.  
  
 La quarta funzione membro incollare la sequenza definita da `right`.  Utilizzarla per inserire una sequenza descritta da un enumeratore.  
  
 Ogni inserimento di elementi richiede tempo proporzionale al logaritmo del numero di elementi della sequenza selezionata.  L'inserimento può verificarsi nel tempo costante ammortizzato, tuttavia, dato un suggerimento che definisce un elemento accanto al punto di inserimento.  
  
## Esempio  
  
```  
// cliext_multiset_insert.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
int main()   
    {   
    Mymultiset c1;   
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
    Mymultiset c2;   
    Mymultiset::iterator it = c1.end();   
    c2.insert(c1.begin(), --it);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an enumeration   
    Mymultiset c3;   
    c3.insert(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**insert \(L'x\) \= x**  
**insert \(L'b\) \= b**  
 **a b b c x**  
**insert\(begin\(\), L'y\) \= y**  
 **a b b c x\-y**  
 **a b b c x**  
 **a b b c x\-y**   
## Requisiti  
 **Intestazione:**\<cliext\/set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [multiset](../dotnet/multiset-stl-clr.md)