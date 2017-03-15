---
title: "multimap::multimap (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multimap::multimap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "multimap (membro) [STL/CLR]"
ms.assetid: cdf9c5dc-774c-424e-aeea-7554643e401c
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# multimap::multimap (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto contenitore.  
  
## Sintassi  
  
```  
multimap();  
explicit multimap(key_compare^ pred);  
multimap(multimap<Key, Mapped>% right);  
multimap(multimap<Key, Mapped>^ right);  
template<typename InIter>  
    multimapmultimap(InIter first, InIter last);  
template<typename InIter>  
    multimap(InIter first, InIter last,  
        key_compare^ pred);  
multimap(System::Collections::Generic::IEnumerable<GValue>^ right);  
multimap(System::Collections::Generic::IEnumerable<GValue>^ right,  
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
  
 `multimap();`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato predefinito `key_compare()`dell'ordine.  È possibile utilizzarlo per specificare una sequenza iniziale controllata vuota, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `explicit multimap(key_compare^ pred);`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato `pred`dell'ordine.  È possibile utilizzarlo per specificare una sequenza iniziale controllata vuota, con il predicato specificato dell'ordine.  
  
 Il costruttore:  
  
 `multimap(multimap<Key, Mapped>% right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``.`[multimap::begin](../dotnet/multimap-begin-stl-clr.md)`(),` `right``.`[multimap::end](../dotnet/multimap-end-stl-clr.md)`())`, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right`di multimap, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `multimap(multimap<Key, Mapped>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``->`[multimap::begin](../dotnet/multimap-begin-stl-clr.md)`(),` `right``->`[multimap::end](../dotnet/multimap-end-stl-clr.md)`())`, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right`di multimap, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `template<typename InIter>`  
  
 `multimap(InIter first, InIter last);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per rendere sequenza selezionata una copia di un'altra sequenza, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `template<typename InIter>`  
  
 `multimap(InIter first, InIter last,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato `pred`dell'ordine.  È possibile utilizzarlo per rendere sequenza selezionata una copia di un'altra sequenza, con il predicato specificato dell'ordine.  
  
 Il costruttore:  
  
 `multimap(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per rendere sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `multimap(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato `pred`dell'ordine.  È possibile utilizzarlo per rendere sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato specificato dell'ordine.  
  
## Esempio  
  
```  
// cliext_multimap_construct.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::multimap<wchar_t, int> Mymultimap;   
int main()   
    {   
// construct an empty container   
    Mymultimap c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(Mymultimap::make_value(L'a', 1));   
    c1.insert(Mymultimap::make_value(L'b', 2));   
    c1.insert(Mymultimap::make_value(L'c', 3));   
    for each (Mymultimap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Mymultimap c2 = cliext::greater_equal<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    c2.insert(c1.begin(), c1.end());   
    for each (Mymultimap::value_type elem in c2)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Mymultimap c3(c1.begin(), c1.end());   
    for each (Mymultimap::value_type elem in c3)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Mymultimap c4(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>());   
    for each (Mymultimap::value_type elem in c4)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    Mymultimap c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Mymultimap::value_type>^)%c3);   
    for each (Mymultimap::value_type elem in c5)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule   
    Mymultimap c6(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Mymultimap::value_type>^)%c3,   
                cliext::greater_equal<wchar_t>());   
    for each (Mymultimap::value_type elem in c6)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Mymultimap c7(c4);   
    for each (Mymultimap::value_type elem in c7)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    Mymultimap c8(%c3);   
    for each (Mymultimap::value_type elem in c8)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **size\(\) \= 0**  
 **un \[1\] \[b \[2\]c 3\]**  
**size\(\) \= 0**  
 **\[c 3\] \[b \[2\]un 1\]**  
 **un \[1\] \[b \[2\]c 3\]**  
 **\[c 3\] \[b \[2\]un 1\]**  
 **un \[1\] \[b \[2\]c 3\]**  
 **\[c 3\] \[b \[2\]un 1\]**  
 **\[c 3\] \[b \[2\]un 1\]**  
 **un \[1\] \[b \[2\]c 3\]**   
## Requisiti  
 **Intestazione:**\<cliext\/map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [multimap](../dotnet/multimap-stl-clr.md)   
 [multimap::generic\_container](../dotnet/multimap-generic-container-stl-clr.md)   
 [multimap::operator\=](../dotnet/multimap-operator-assign-stl-clr.md)