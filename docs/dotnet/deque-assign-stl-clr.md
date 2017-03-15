---
title: "deque::assign (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::deque::assign"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "assign (membro) [STL/CLR]"
ms.assetid: 03fafdbb-6b10-4464-b3dc-0cc5cb8ac980
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# deque::assign (STL/CLR)
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
  
 first  
 Inizio dell'intervallo da inserire.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 right  
 Enumerazione da inserire.  
  
 val  
 Valore dell'elemento da inserire.  
  
## Note  
 La prima funzione membro sostituisce la sequenza controllata con una ripetizione di elementi `count` di valore `val`.  Utilizzarla per riempire il contenitore con elementi aventi tutti lo stesso valore.  
  
 Se `InIt` è un tipo integer, la seconda funzione membro si comporta come `assign((size_type)``first``, (value_type)``last``)`.  Altrimenti, essa sostituisce la sequenza controllata con la sequenza `[``first``,` `last``)`.  Utilizzarla per rendere la sequenza selezionata una copia di un'altra sequenza.  
  
 La terza funzione membro sostituisce la sequenza selezionata con la sequenza definita dall'enumeratore `right`.  Utilizzarla per rendere la sequenza controllata una copia di una sequenza descritta da un enumeratore.  
  
## Esempio  
  
```  
// cliext_deque_assign.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// assign a repetition of values   
    cliext::deque<wchar_t> c2;   
    c2.assign(6, L'x');   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign an iterator range   
    c2.assign(c1.begin(), c1.end() - 1);   
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
 **Intestazione:** \<cliext\/deque\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [deque](../dotnet/deque-stl-clr.md)   
 [operator\= \(deque\)](../dotnet/operator-assign-deque-stl-clr.md)