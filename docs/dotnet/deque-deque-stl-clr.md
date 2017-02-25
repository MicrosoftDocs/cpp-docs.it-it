---
title: "deque::deque (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::deque::deque"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "deque (membro) [STL/CLR]"
ms.assetid: e5bc9511-619e-469c-b50a-e06858e7fce7
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# deque::deque (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto contenitore.  
  
## Sintassi  
  
```  
deque();  
deque(deque<Value>% right);  
deque(deque<Value>^ right);  
explicit deque(size_type count);  
deque(size_type count, value_type val);  
template<typename InIt>  
    deque(InIt first, InIt last);  
deque(System::Collections::Generic::IEnumerable<Value>^ right);  
```  
  
#### Parametri  
 Conteggio  
 Numero di elementi da inserire.  
  
 innanzitutto  
 Avvio dell'intervallo da inserire.  
  
 last  
 Fine di intervalli da inserire.  
  
 right  
 Oggetto o intervallo da inserire.  
  
 val  
 Valore dell'elemento da inserire.  
  
## Note  
 Il costruttore:  
  
 `deque();`  
  
 inizializza la sequenza selezionata senza alcun elemento.  Utilizzarla per specificare una sequenza iniziale controllata vuota.  
  
 Il costruttore:  
  
 `deque(deque<Value>% right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``.`[deque::begin](../dotnet/deque-begin-stl-clr.md)`(),` `right``.`[deque::end](../dotnet/deque-end-stl-clr.md)`())`.  Utilizzarla per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right`di deque.  
  
 Il costruttore:  
  
 `deque(deque<Value>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``->`[deque::begin](../dotnet/deque-begin-stl-clr.md)`(),` `right``->`[deque::end](../dotnet/deque-end-stl-clr.md)`())`.  Utilizzarla per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto di deque di cui l'handle venga `right`.  
  
 Il costruttore:  
  
 `explicit deque(size_type count);`  
  
 inizializza la sequenza selezionata con gli elementi di `count` ognuna con valore `value_type()`.  Viene utilizzato per riempire il contenitore di elementi tutto con il valore predefinito.  
  
 Il costruttore:  
  
 `deque(size_type count, value_type val);`  
  
 inizializza la sequenza selezionata con gli elementi di `count` ognuna con valore `val`.  Utilizzarla per riempire il contenitore di elementi tutto con lo stesso valore.  
  
 Il costruttore:  
  
 `template<typename InIt>`  
  
 `deque(InIt first, InIt last);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza.  
  
 Il costruttore:  
  
 `deque(System::Collections::Generic::IEnumerable<Value>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore.  
  
## Esempio  
  
```  
// cliext_deque_construct.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
// construct an empty container   
    cliext::deque<wchar_t> c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// construct with a repetition of default values   
    cliext::deque<wchar_t> c2(3);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", (int)elem);   
    System::Console::WriteLine();   
  
// construct with a repetition of values   
    cliext::deque<wchar_t> c3(6, L'x');   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    cliext::deque<wchar_t>::iterator it = c3.end();   
    cliext::deque<wchar_t> c4(c3.begin(), --it);   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    cliext::deque<wchar_t> c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);   
    for each (wchar_t elem in c5)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    cliext::deque<wchar_t> c7(c3);   
    for each (wchar_t elem in c7)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    cliext::deque<wchar_t> c8(%c3);   
    for each (wchar_t elem in c8)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    return (0);   
    }  
  
```  
  
  **size\(\) \= 0**  
 **0 0 0**  
 **x x x x x x**  
 **x x x x x**  
 **x x x x x x**  
 **x x x x x x**  
 **x x x x x x**   
## Requisiti  
 **Intestazione:** \<cliext\/deque\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [deque](../dotnet/deque-stl-clr.md)   
 [deque::assign](../dotnet/deque-assign-stl-clr.md)   
 [deque::generic\_container](../dotnet/deque-generic-container-stl-clr.md)   
 [operator\= \(deque\)](../dotnet/operator-assign-deque-stl-clr.md)