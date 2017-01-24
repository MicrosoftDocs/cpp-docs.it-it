---
title: "hash_map::insert (STL/CLR) | Microsoft Docs"
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
  - "cliext::hash_map::insert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "insert (membro) [STL/CLR]"
ms.assetid: 52926ec7-ad4e-4791-a043-46136ee40a69
caps.latest.revision: 17
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_map::insert (STL/CLR)
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
// cliext_hash_map_insert.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_map<wchar_t, int> Myhash_map;   
typedef Myhash_map::pair_iter_bool Pairib;   
int main()   
    {   
    Myhash_map c1;   
    c1.insert(Myhash_map::make_value(L'a', 1));   
    c1.insert(Myhash_map::make_value(L'b', 2));   
    c1.insert(Myhash_map::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Myhash_map::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// insert a single value, unique and duplicate   
    Pairib pair1 =   
        c1.insert(Myhash_map::make_value(L'x', 24));   
    System::Console::WriteLine("insert([L'x' 24]) = [{0} {1}] {2}",   
        pair1.first->first, pair1.first->second, pair1.second);   
  
    pair1 = c1.insert(Myhash_map::make_value(L'b', 2));   
    System::Console::WriteLine("insert([L'b' 2]) = [{0} {1}] {2}",   
        pair1.first->first, pair1.first->second, pair1.second);   
  
    for each (Myhash_map::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// insert a single value with hint   
    Myhash_map::iterator it =   
        c1.insert(c1.begin(), Myhash_map::make_value(L'y', 25));   
    System::Console::WriteLine("insert(begin(), [L'y' 25]) = [{0} {1}]",   
        it->first, it->second);   
    for each (Myhash_map::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// insert an iterator range   
    Myhash_map c2;   
    it = c1.end();   
    c2.insert(c1.begin(), --it);   
    for each (Myhash_map::value_type elem in c2)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// insert an enumeration   
    Myhash_map c3;   
    c3.insert(   // NOTE: cast is not needed   
        (System::Collections::Generic::   
            IEnumerable<Myhash_map::value_type>^)%c1);   
    for each (Myhash_map::value_type elem in c3)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **un \[1\] \[b \[2\]c 3\]**  
**insert \(L'x \[24\]\) \= \[x 24\] True**  
**inserimento L'b \(\[2\]\) \= b \[2\] False**  
 **\[a 1\] \[b 2\] \[c 3\] \[x 24\]**  
**insert\(begin\(\), L'y \[25\]\) \= \[y 25\]**  
 **\[a 1\] \[b 2\] \[c 3\] \[x 24\] \[y 25\]**  
 **\[a 1\] \[b 2\] \[c 3\] \[x 24\]**  
 **\[a 1\] \[b 2\] \[c 3\] \[x 24\] \[y 25\]**   
## Requisiti  
 **Intestazione:**\<cliext\/hash\_map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_map](../dotnet/hash-map-stl-clr.md)