---
title: "multiset::multiset (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multiset::multiset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "multiset (membro) [STL/CLR]"
ms.assetid: a6ddb2df-d7cd-4b12-aee7-81da1f67f57f
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# multiset::multiset (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto contenitore.  
  
## Sintassi  
  
```  
multiset();  
explicit multiset(key_compare^ pred);  
multiset(multiset<Key>% right);  
multiset(multiset<Key>^ right);  
template<typename InIter>  
    multisetmultiset(InIter first, InIter last);  
template<typename InIter>  
    multiset(InIter first, InIter last,  
        key_compare^ pred);  
multiset(System::Collections::Generic::IEnumerable<GValue>^ right);  
multiset(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred);  
```  
  
#### Parametri  
 innanzitutto  
 Avvio dell'intervallo da inserire.  
  
 last  
 Fine di intervalli da inserire.  
  
 pred  
 Predicato utilizzato per ordinare la sequenza selezionata.  
  
 right  
 Oggetto o intervallo da inserire.  
  
## Note  
 Il costruttore:  
  
 `multiset();`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato predefinito `key_compare()`dell'ordine.  È possibile utilizzarlo per specificare una sequenza iniziale controllata vuota, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `explicit multiset(key_compare^ pred);`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato `pred`dell'ordine.  È possibile utilizzarlo per specificare una sequenza iniziale controllata vuota, con il predicato specificato dell'ordine.  
  
 Il costruttore:  
  
 `multiset(multiset<Key>% right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``.`[multiset::begin](../dotnet/multiset-begin-stl-clr.md)`(),` `right``.`[multiset::end](../dotnet/multiset-end-stl-clr.md)`())`, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right`di multi\-insieme, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `multiset(multiset<Key>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``->`[multiset::begin](../dotnet/multiset-begin-stl-clr.md)`(),` `right``->`[multiset::end](../dotnet/multiset-end-stl-clr.md)`())`, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right`di multi\-insieme, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `template<typename InIter>`  
  
 `multiset(InIter first, InIter last);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per rendere sequenza selezionata una copia di un'altra sequenza, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `template<typename InIter>`  
  
 `multiset(InIter first, InIter last,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato `pred`dell'ordine.  È possibile utilizzarlo per rendere sequenza selezionata una copia di un'altra sequenza, con il predicato specificato dell'ordine.  
  
 Il costruttore:  
  
 `multiset(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per rendere sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `multiset(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato `pred`dell'ordine.  È possibile utilizzarlo per rendere sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato specificato dell'ordine.  
  
## Esempio  
  
```  
// cliext_multiset_construct.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
int main()   
    {   
// construct an empty container   
    Mymultiset c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Mymultiset c2 = cliext::greater_equal<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    c2.insert(c1.begin(), c1.end());   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Mymultiset c3(c1.begin(), c1.end());   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Mymultiset c4(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    Mymultiset c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);   
    for each (wchar_t elem in c5)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule   
    Mymultiset c6(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,   
            cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c6)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct from a generic container   
    Mymultiset c7(c4);   
    for each (wchar_t elem in c7)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Mymultiset c8(%c3);   
    for each (wchar_t elem in c8)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **size\(\) \= 0**  
 **a b c**  
**size\(\) \= 0**  
 **c a b**  
 **a b c**  
 **c a b**  
 **a b c**  
 **c a b**  
 **c a b**  
 **a b c**   
## Requisiti  
 **Intestazione:**\<cliext\/set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [multiset](../dotnet/multiset-stl-clr.md)   
 [multiset::generic\_container](../dotnet/multiset-generic-container-stl-clr.md)   
 [multiset::operator\=](../dotnet/multiset-operator-assign-stl-clr.md)