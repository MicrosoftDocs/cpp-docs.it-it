---
title: "list::list (STL/CLR) | Microsoft Docs"
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
  - "cliext::list::list"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "elenco membri [STL/CLR]"
ms.assetid: 51b58f63-c65a-4d54-b746-0c10635b123b
caps.latest.revision: 17
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# list::list (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto contenitore.  
  
## Sintassi  
  
```  
list();  
list(list<Value>% right);  
list(list<Value>^ right);  
explicit list(size_type count);  
list(size_type count, value_type val);  
template<typename InIt>  
    list(InIt first, InIt last);  
list(System::Collections::Generic::IEnumerable<Value>^ right);  
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
  
 `list();`  
  
 inizializza la sequenza selezionata senza alcun elemento.  Utilizzarla per specificare una sequenza iniziale controllata vuota.  
  
 Il costruttore:  
  
 `list(list<Value>% right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``.`[list::begin](../dotnet/list-begin-stl-clr.md)`(),` `right``.`[list::end](../dotnet/list-end-stl-clr.md)`())`.  Utilizzarla per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto elenco `right`.  
  
 Il costruttore:  
  
 `list(list<Value>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``->`[list::begin](../dotnet/list-begin-stl-clr.md)`(),` `right``->`[list::end](../dotnet/list-end-stl-clr.md)`())`.  Utilizzarla per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto elenco degli elementi che l'handle venga `right`.  
  
 Il costruttore:  
  
 `explicit list(size_type count);`  
  
 inizializza la sequenza selezionata con gli elementi di `count` ognuna con valore `value_type()`.  Viene utilizzato per riempire il contenitore di elementi tutto con il valore predefinito.  
  
 Il costruttore:  
  
 `list(size_type count, value_type val);`  
  
 inizializza la sequenza selezionata con gli elementi di `count` ognuna con valore `val`.  Utilizzarla per riempire il contenitore di elementi tutto con lo stesso valore.  
  
 Il costruttore:  
  
 `template<typename InIt>`  
  
 `list(InIt first, InIt last);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza.  
  
 Il costruttore:  
  
 `list(System::Collections::Generic::IEnumerable<Value>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore.  
  
## Esempio  
  
```  
// cliext_list_construct.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
// construct an empty container   
    cliext::list<wchar_t> c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// construct with a repetition of default values   
    cliext::list<wchar_t> c2(3);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", (int)elem);   
    System::Console::WriteLine();   
  
// construct with a repetition of values   
    cliext::list<wchar_t> c3(6, L'x');   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    cliext::list<wchar_t>::iterator it = c3.end();   
    cliext::list<wchar_t> c4(c3.begin(), --it);   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    cliext::list<wchar_t> c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);   
    for each (wchar_t elem in c5)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    cliext::list<wchar_t> c7(c3);   
    for each (wchar_t elem in c7)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    cliext::list<wchar_t> c8(%c3);   
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
 **Intestazione:**\<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [list::assign](../dotnet/list-assign-stl-clr.md)   
 [list::generic\_container](../dotnet/list-generic-container-stl-clr.md)   
 [list::operator\=](../dotnet/list-operator-assign-stl-clr.md)