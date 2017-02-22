---
title: "list::assign (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::list::assign"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "assign (membro) [STL/CLR]"
ms.assetid: c5f2b131-d0e1-4188-9d4b-d617280e4032
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# list::assign (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sostituisce tutti gli elementi.  
  
## Sintassi  
  
```  
void assign(size_type count, value_type val);  
template<typename InIt>  
    void assign(InIt first, InIt last);  
void assign(System::Collections::Generic::IEnumerable<Value>^ right);  
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
  
## Note  
 La prima funzione membro sostituisce la sequenza selezionata con una ripetizione degli elementi di `count` di valore `val`.  Utilizzarla per riempire il contenitore di elementi tutto con lo stesso valore.  
  
 Se `InIt` è un tipo intero, la seconda funzione membro si comporta lo stesso di `assign((size_type)``first``, (value_type)``last``)`.  In caso contrario, sostituisce la sequenza selezionata con la sequenza `[``first``,` `last``)`.  Utilizzarla per rendere sequenza selezionata una copia un'altra sequenza.  
  
 La terza funzione membro sostituisce la sequenza selezionata con la sequenza definita dall'enumeratore `right`.  Utilizzarla per rendere sequenza selezionata una copia di una sequenza descritta da un enumeratore.  
  
## Esempio  
  
```  
// cliext_list_assign.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// assign a repetition of values   
    cliext::list<wchar_t> c2;   
    c2.assign(6, L'x');   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign an iterator range   
    cliext::list<wchar_t>::iterator it = c1.end();   
    c2.assign(c1.begin(), --it);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign an enumeration   
    c2.assign(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **x x x x x x**  
 **a b**  
 **a b c**   
## Requisiti  
 **Intestazione:**\<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [list::operator\=](../dotnet/list-operator-assign-stl-clr.md)