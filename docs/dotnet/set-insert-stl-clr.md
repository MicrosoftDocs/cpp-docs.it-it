---
title: "set::insert (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::set::insert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "insert (membro) [STL/CLR]"
ms.assetid: 40472869-5c28-4658-b1d3-3ede4d8b8921
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# set::insert (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Aggiunge elementi.  
  
## Sintassi  
  
```  
cliext::pair<iterator, bool> insert(value_type val);  
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
  
 La prima funzione membro tenta di inserire un elemento con valore `val` e restituisce una coppia di valori `X`.  Se `X.second` è true, `X.first` definisce l'elemento appena inserito; in caso contrario `X.first` definisce un elemento con l'ordine equivalente che esiste già e non nuovo elemento viene inserito.  Viene utilizzato per inserire un singolo elemento.  
  
 La seconda funzione membro inserire un elemento con valore `val`, utilizzando `where` come suggerimento \(per migliorare le prestazioni\) e restituisce un iteratore che definisce l'elemento appena inserito.  Utilizzarla per inserire un singolo elemento che può essere adiacenti a un elemento valido.  
  
 La terza funzione membro incollare la sequenza `[``first``,` `last``)`.  Utilizzarla per inserire zero o più elementi copiati da un'altra sequenza.  
  
 La quarta funzione membro incollare la sequenza definita da `right`.  Utilizzarla per inserire una sequenza descritta da un enumeratore.  
  
 Ogni inserimento di elementi richiede tempo proporzionale al logaritmo del numero di elementi della sequenza selezionata.  L'inserimento può verificarsi nel tempo costante ammortizzato, tuttavia, dato un suggerimento che definisce un elemento accanto al punto di inserimento.  
  
## Esempio  
  
```  
// cliext_set_insert.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
typedef Myset::pair_iter_bool Pairib;   
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
  
// insert a single value, unique and duplicate   
    Pairib pair1 = c1.insert(L'x');   
    System::Console::WriteLine("insert(L'x') = [{0} {1}]",   
        *pair1.first, pair1.second);   
  
    pair1 = c1.insert(L'b');   
    System::Console::WriteLine("insert(L'b') = [{0} {1}]",   
        *pair1.first, pair1.second);   
  
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
    Myset c2;   
    Myset::iterator it = c1.end();   
    c2.insert(c1.begin(), --it);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an enumeration   
    Myset c3;   
    c3.insert(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**insert \(L'x\) \= \[x\] True**  
**insert \(L'b\) \= \[False di b\]**  
 **a b c x**  
**insert\(begin\(\), L'y\) \= y**  
 **a b c x\-y**  
 **a b c x**  
 **a b c x\-y**   
## Requisiti  
 **Intestazione:**\<cliext\/set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [set](../dotnet/set-stl-clr.md)