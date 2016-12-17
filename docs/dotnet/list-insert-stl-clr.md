---
title: "list::insert (STL/CLR) | Microsoft Docs"
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
  - "cliext::list::insert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "insert (membro) [STL/CLR]"
ms.assetid: 399ed30f-6b76-41a8-b180-6070e3ca1c68
caps.latest.revision: 16
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# list::insert (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Aggiunge elementi in una posizione specificata.  
  
## Sintassi  
  
```  
iterator insert(iterator where, value_type val);  
void insert(iterator where, size_type count, value_type val);  
template<typename InIt>  
    void insert(iterator where, InIt first, InIt last);  
void insert(iterator where,  
    System::Collections::Generic::IEnumerable<Value>^ right);  
```  
  
#### Parametri  
 Conteggio  
 Numero di elementi da inserire.  
  
 first  
 Inizio dell'intervallo da inserire.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 right  
 Enumerazione da inserire.  
  
 val  
 Valore dell'elemento da inserire.  
  
 where  
 Dove inserire prima nel contenitore.  
  
## Note  
 Ciascuna funzione membro inserisce una sequenza specificata dagli operandi rimanenti prima dell'elemento puntato da `where` nella sequenza controllata.  
  
 La prima funzione membro inserisce un elemento con il valore `val` e restituisce un iteratore che definisce l'elemento appena inserito.  Utilizzarla per inserire un singolo elemento prima di una posizione definita da un iteratore.  
  
 La seconda funzione inserisce una ripetizione di elementi `count` di valore `val`.  Utilizzarla per inserire zero o più elementi contigui che sono tutte copie dello stesso valore.  
  
 Se `InIt` è un tipo intero, la terza funzione membro si comporta come `insert(``where``, (size_type)``first``, (value_type)``last``)`.  Altrimenti, essa inserisce la sequenza `[``first``,` `last``)`.  Utilizzarla per inserire zero o più elementi contigui copiati da un'altra sequenza.  
  
 La quarta funzione membro inserisce la sequenza definita da `right`.  Viene utilizzata per inserire una sequenza descritta da un enumeratore.  
  
 Quando si inserisce un singolo elemento, il numero di copie dell'elemento è lineare rispetto al numero di elementi tra il punto di inserimento e la fine della sequenza più vicina. \(Quando si inseriscono uno o più elementi ad entrambe le estremità della sequenza, non si presenta alcuna copia dell'elemento.\) Se `InIt` è un iteratore di input, la terza funzione membro esegue effettivamente un singolo inserimento per ogni elemento della sequenza.  Altrimenti, quando si inseriscono `N` elementi, il numero di copie dell'elemento è lineare rispetto ad `N` più il numero di elementi tra il punto di inserimento e la fine della sequenza più vicina.  
  
## Esempio  
  
```  
// cliext_list_insert.cpp   
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
  
// insert a single value using iterator   
    cliext::list<wchar_t>::iterator it = c1.begin();   
    System::Console::WriteLine("insert(begin()+1, L'x') = {0}",   
        *c1.insert(++it, L'x'));   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert a repetition of values   
    cliext::list<wchar_t> c2;   
    c2.insert(c2.begin(), 2, L'y');   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an iterator range   
    it = c1.end();   
    c2.insert(c2.end(), c1.begin(), --it);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an enumeration   
    c2.insert(c2.begin(),   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert a single value using index   
    it = c2.begin();   
    ++it, ++it, ++it;   
    c2.insert(it, L'z');   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    return (0);   
    }  
  
```  
  
  **a b c**  
**insert\(begin\(\)\+1, L'x'\) \= x**  
 **a x b c**  
 **y y**  
 **y y a x b**  
 **a x b c y y a x b**   
## Requisiti  
 **Intestazione:** \<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [list::assign](../dotnet/list-assign-stl-clr.md)