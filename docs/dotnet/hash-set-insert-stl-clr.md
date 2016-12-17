---
title: "hash_set::insert (STL/CLR) | Microsoft Docs"
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
  - "cliext::hash_set::insert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "insert (membro) [STL/CLR]"
ms.assetid: 0a9bc9aa-012e-4101-9e8c-f1f4b6b76af7
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_set::insert (STL/CLR)
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
 first  
 Inizio dell'intervallo da inserire.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 right  
 Enumerazione da inserire.  
  
 val  
 Valore di chiave da inserire.  
  
 where  
 Dove effettuare l'inserimento nel contenitore \(solo suggerimento\).  
  
## Note  
 Ogni funzione membro inserisce una sequenza specificata dagli operandi rimanenti.  
  
 La prima funzione membro tenta di inserire un elemento con valore `val` e restituisce una coppia di valori `X`.  Se `X.second` è true, `X.first` definisce l'elemento appena inserito; in caso contrario `X.first` definisce un elemento con ordinamento equivalente che già esiste e non viene inserito alcun nuovo elemento.  Viene utilizzata per inserire un singolo elemento.  
  
 La seconda funzione membro inserisce un elemento con valore `val`, utilizzando `where` come suggerimento \(per migliorare le prestazioni\) e restituisce un iteratore che definisce l'elemento appena inserito.  Viene utilizzata per inserire un singolo elemento che potrebbe essere adiacente a un elemento noto.  
  
 La terza funzione membro inserisce la sequenza `[``first``,` `last``)`.  Viene utilizzata per inserire zero o più elementi copiati da un'altra sequenza.  
  
 La quarta funzione membro inserisce la sequenza definita da `right`.  Viene utilizzata per inserire una sequenza descritta da un enumeratore.  
  
 Ogni inserimento di elementi richiede un tempo proporzionale al logaritmo del numero di elementi della sequenza controllata.  L'inserimento può verificarsi in tempo costante ammortizzato, dato però un suggerimento che definisce un elemento accanto al punto di inserimento.  
  
## Esempio  
  
```  
// cliext_hash_set_insert.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
typedef Myhash_set::pair_iter_bool Pairib;   
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
    Myhash_set c2;   
    Myhash_set::iterator it = c1.end();   
    c2.insert(c1.begin(), --it);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an enumeration   
    Myhash_set c3;   
    c3.insert(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**insert\(L'x'\) \= \[x True\]**  
**insert\(L'b'\) \= \[b False\]**  
 **a b c x**  
**insert\(begin\(\), L'y'\) \= y**  
 **a b c x y**  
 **a b c x**  
 **a b c x y**   
## Requisiti  
 **Intestazione:** \<cliext\/hash\_set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_set](../dotnet/hash-set-stl-clr.md)