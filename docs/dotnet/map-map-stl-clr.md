---
title: "map::map (STL/CLR) | Microsoft Docs"
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
  - "cliext::map::map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "map (membro) [STL/CLR]"
ms.assetid: c91f699a-4742-4859-b2b3-c2a01a750bea
caps.latest.revision: 15
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# map::map (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto contenitore.  
  
## Sintassi  
  
```  
map();  
explicit map(key_compare^ pred);  
map(map<Key, Mapped>% right);  
map(map<Key, Mapped>^ right);  
template<typename InIter>  
    mapmap(InIter first, InIter last);  
template<typename InIter>  
    map(InIter first, InIter last,  
        key_compare^ pred);  
map(System::Collections::Generic::IEnumerable<GValue>^ right);  
map(System::Collections::Generic::IEnumerable<GValue>^ right,  
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
  
 `map();`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato predefinito `key_compare()`dell'ordine.  È possibile utilizzarlo per specificare una sequenza iniziale controllata vuota, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `explicit map(key_compare^ pred);`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato `pred`dell'ordine.  È possibile utilizzarlo per specificare una sequenza iniziale controllata vuota, con il predicato specificato dell'ordine.  
  
 Il costruttore:  
  
 `map(map<Key, Mapped>% right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``.`[map::begin](../dotnet/map-begin-stl-clr.md)`(),` `right``.`[map::end](../dotnet/map-end-stl-clr.md)`())`, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right`della mappa, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `map(map<Key, Mapped>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``->`[map::begin](../dotnet/map-begin-stl-clr.md)`(),` `right``->`[map::end](../dotnet/map-end-stl-clr.md)`())`, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right`della mappa, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `template<typename InIter>`  
  
 `map(InIter first, InIter last);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per rendere sequenza selezionata una copia di un'altra sequenza, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `template<typename InIter>`  
  
 `map(InIter first, InIter last,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato `pred`dell'ordine.  È possibile utilizzarlo per rendere sequenza selezionata una copia di un'altra sequenza, con il predicato specificato dell'ordine.  
  
 Il costruttore:  
  
 `map(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato predefinito dell'ordine.  È possibile utilizzarlo per rendere sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato predefinito dell'ordine.  
  
 Il costruttore:  
  
 `map(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato `pred`dell'ordine.  È possibile utilizzarlo per rendere sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato specificato dell'ordine.  
  
## Esempio  
  
```  
// cliext_map_construct.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
int main()   
    {   
// construct an empty container   
    Mymap c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(Mymap::make_value(L'a', 1));   
    c1.insert(Mymap::make_value(L'b', 2));   
    c1.insert(Mymap::make_value(L'c', 3));   
    for each (Mymap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Mymap c2 = cliext::greater_equal<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    c2.insert(c1.begin(), c1.end());   
    for each (Mymap::value_type elem in c2)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Mymap c3(c1.begin(), c1.end());   
    for each (Mymap::value_type elem in c3)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Mymap c4(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>());   
    for each (Mymap::value_type elem in c4)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    Mymap c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Mymap::value_type>^)%c3);   
    for each (Mymap::value_type elem in c5)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule   
    Mymap c6(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Mymap::value_type>^)%c3,   
                cliext::greater_equal<wchar_t>());   
    for each (Mymap::value_type elem in c6)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Mymap c7(c4);   
    for each (Mymap::value_type elem in c7)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    Mymap c8(%c3);   
    for each (Mymap::value_type elem in c8)   
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
 [map](../dotnet/map-stl-clr.md)   
 [map::generic\_container](../dotnet/map-generic-container-stl-clr.md)   
 [map::operator\=](../dotnet/map-operator-assign-stl-clr.md)