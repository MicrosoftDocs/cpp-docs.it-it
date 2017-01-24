---
title: "vector::insert (STL/CLR) | Microsoft Docs"
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
  - "cliext::vector::insert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "insert (membro) [STL/CLR]"
ms.assetid: f240cabf-f9d1-40c1-9cfb-975a90955546
caps.latest.revision: 15
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# vector::insert (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Aggiunge elementi a una posizione specificata.  
  
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
  
 innanzitutto  
 Avvio dell'intervallo da inserire.  
  
 last  
 Fine di intervalli da inserire.  
  
 right  
 Enumerazione da inserire.  
  
 val  
 Valore dell'elemento da inserire.  
  
 where  
 Nel contenitore in cui inserire prima.  
  
## Note  
 Ognuna delle funzioni membro inserimento, prima dell'operazione da `where` sequenza selezionata, una sequenza specificata dagli operandi rimanenti.  
  
 La prima funzione membro inserire un elemento con valore `val` e restituisce un iteratore che definisce l'elemento appena inserito.  Utilizzarla per inserire un singolo elemento prima di un percorso definito da un iteratore.  
  
 La seconda funzione inserisce una ripetizione di elementi `count` di valore `val`.  Viene utilizzato per inserire elementi zero o più adiacenti presenti tutte le copie dello stesso valore.  
  
 Se `InIt` è un tipo intero, la terza funzione membro si comporta lo stesso di `insert(``where``, (size_type)``first``, (value_type)``last``)`.  Altrimenti, inserire la sequenza `[``first``,` `last``)`.  Utilizzarla per inserire elementi zero o più contigui copiati da un'altra sequenza.  
  
 La quarta funzione membro incollare la sequenza definita da `right`.  Utilizzarla per inserire una sequenza descritta da un enumeratore.  
  
 Nell'inserire un singolo elemento, il numero di copie dell'elemento è lineare il numero di elementi tra il punto di inserimento e la fine più vicina della sequenza. \(Quando viene inserito uno o più elementi alla fine della sequenza, alcuna copia dell'elemento si verifica.\) Se `InIt` è un iteratore di input, la terza funzione membro effettivamente esegue un singolo comando incolla per ogni elemento della sequenza.  In caso contrario quando si inserisce gli elementi di `N`, il numero di copie dell'elemento viene disegnato in `N` più il numero di elementi tra il punto di inserimento e la fine più vicina della sequenza.  
  
## Esempio  
  
```  
// cliext_vector_insert.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert a single value using iterator   
    cliext::vector<wchar_t>::iterator it = c1.begin();   
    System::Console::WriteLine("insert(begin()+1, L'x') = {0}",   
        *c1.insert(++it, L'x'));   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert a repetition of values   
    cliext::vector<wchar_t> c2;   
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
    return (0);   
    }  
  
```  
  
  **a b c**  
**insert\(begin\(\)\+1, L'x\) \= x**  
 **una x b c**  
 **y y**  
 **y y una x b**  
 **una x b c y y una x b**   
## Requisiti  
 **Intestazione:**\<cliext\/vector\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [vettore](../dotnet/vector-stl-clr.md)   
 [vector::assign](../dotnet/vector-assign-stl-clr.md)