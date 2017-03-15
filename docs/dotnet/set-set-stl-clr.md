---
title: "set::set (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::set::set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set (membro) [STL/CLR]"
ms.assetid: 0cce8501-92ed-431c-b711-14e0b7be7375
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# set::set (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto contenitore.  
  
## Sintassi  
  
```  
set();  
explicit set(key_compare^ pred);  
set(set<Key>% right);  
set(set<Key>^ right);  
template<typename InIter>  
    setset(InIter first, InIter last);  
template<typename InIter>  
    set(InIter first, InIter last,  
        key_compare^ pred);  
set(System::Collections::Generic::IEnumerable<GValue>^ right);  
set(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred);  
```  
  
#### Parametri  
 first  
 Inizio dell'intervallo da inserire.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 pred  
 Predicato di ordinamento per la sequenza controllata.  
  
 right  
 Oggetto o intervallo da inserire.  
  
## Note  
 Il costruttore:  
  
 `set();`  
  
 inizializza la sequenza controllata senza elementi, con il predicato di ordinamento predefinito `key_compare()`.  Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato di ordinamento predefinito.  
  
 Il costruttore:  
  
 `explicit set(key_compare^ pred);`  
  
 inizializza la sequenza controllata senza elementi, con il predicato di ordinamento `pred`.  Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato di ordinamento specificato.  
  
 Il costruttore:  
  
 `set(set<Key>% right);`  
  
 inizializza la sequenza controllata con la sequenza `[``right``.`[set::begin](../dotnet/set-begin-stl-clr.md)`(),` `right``.`[set::end](../dotnet/set-end-stl-clr.md)`())`, con il predicato di ordinamento predefinito.  Utilizzarla per specificare una sequenza controllata iniziale che rappresenta una copia della sequenza controllata dall'oggetto impostato `right`, con il predicato di ordinamento predefinito.  
  
 Il costruttore:  
  
 `set(set<Key>^ right);`  
  
 inizializza la sequenza controllata con la sequenza `[``right``->`[set::begin](../dotnet/set-begin-stl-clr.md)`(),` `right``->`[set::end](../dotnet/set-end-stl-clr.md)`())`, con il predicato di ordinamento predefinito.  Utilizzarla per specificare una sequenza controllata iniziale che rappresenta una copia della sequenza controllata dall'oggetto impostato `right`, con il predicato di ordinamento predefinito.  
  
 Il costruttore:  
  
 `template<typename InIter>`  
  
 `set(InIter first, InIter last);`  
  
 inizializza la sequenza controllata con la sequenza `[``first``,` `last``)`, con il predicato di ordinamento predefinito.  Utilizzarla per rendere la sequenza controllata una copia di un'altra sequenza, con il predicato di ordinamento predefinito.  
  
 Il costruttore:  
  
 `template<typename InIter>`  
  
 `set(InIter first, InIter last,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza controllata con la sequenza `[``first``,` `last``)`, con il predicato di ordinamento `pred`.  Utilizzarla per rendere la sequenza controllata una copia di un'altra sequenza, con il predicato di ordinamento specificato.  
  
 Il costruttore:  
  
 `set(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato predefinito dell'ordine.  Utilizzarla per rendere la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento predefinito.  
  
 Il costruttore:  
  
 `set(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato di ordinamento `pred`.  Utilizzarla per rendere la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento specificato.  
  
## Esempio  
  
```  
// cliext_set_construct.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
// construct an empty container   
    Myset c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Myset c2 = cliext::greater_equal<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    c2.insert(c1.begin(), c1.end());   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Myset c3(c1.begin(), c1.end());   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Myset c4(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    Myset c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);   
    for each (wchar_t elem in c5)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule   
    Myset c6(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,   
            cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c6)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct from a generic container   
    Myset c7(c4);   
    for each (wchar_t elem in c7)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Myset c8(%c3);   
    for each (wchar_t elem in c8)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **size\(\) \= 0**  
 **a b c**  
**size\(\) \= 0**  
 **c b a**  
 **a b c**  
 **c b a**  
 **a b c**  
 **c b a**  
 **c b a**  
 **a b c**   
## Requisiti  
 **Intestazione:** \<cliext\/set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [set](../dotnet/set-stl-clr.md)   
 [set::generic\_container](../dotnet/set-generic-container-stl-clr.md)   
 [set::operator\=](../dotnet/set-operator-assign-stl-clr.md)