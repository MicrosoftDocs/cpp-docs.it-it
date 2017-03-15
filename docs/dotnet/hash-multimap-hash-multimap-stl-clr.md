---
title: "hash_multimap::hash_multimap (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multimap::hash_multimap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_multimap (membro) [STL/CLR]"
ms.assetid: a1d576a7-5dc7-4ad9-abef-ee7a13caaec3
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# hash_multimap::hash_multimap (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto contenitore.  
  
## Sintassi  
  
```  
hash_multimap();  
explicit hash_multimap(key_compare^ pred);  
hash_multimap(key_compare^ pred, hasher^ hashfn);  
hash_multimap(hash_multimap<Key, Mapped>% right);  
hash_multimap(hash_multimap<Key, Mapped>^ right);  
template<typename InIter>  
    hash_multimaphash_multimap(InIter first, InIter last);  
template<typename InIter>  
    hash_multimap(InIter first, InIter last,  
        key_compare^ pred);  
template<typename InIter>  
    hash_multimap(InIter first, InIter last,  
        key_compare^ pred, hasher^ hashfn);  
hash_multimap(System::Collections::Generic::IEnumerable<GValue>^ right);  
hash_multimap(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred);  
hash_multimap(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred, hasher^ hashfn);  
```  
  
#### Parametri  
 innanzitutto  
 Avvio dell'intervallo da inserire.  
  
 hashfn  
 Funzione hash per eseguire il mapping delle chiavi in bucket.  
  
 last  
 Fine di intervalli da inserire.  
  
 pred  
 Predicato utilizzato per ordinare la sequenza selezionata.  
  
 right  
 Oggetto o intervallo da inserire.  
  
## Note  
 Il costruttore:  
  
 `hash_multimap();`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato predefinito `key_compare()`di ordine e con la funzione hash predefinita.  Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato la funzione hash predefiniti dell'ordine.  
  
 Il costruttore:  
  
 `explicit hash_multimap(key_compare^ pred);`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato `pred`di ordine e con la funzione hash predefinita.  Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato specificato di ordinamento e la funzione hash predefinita.  
  
 Il costruttore:  
  
 `hash_multimap(key_compare^ pred, hasher^ hashfn);`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato `pred`di ordine e con la funzione hash `hashfn`.  Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato la funzione hash dell'ordine specificato.  
  
 Il costruttore:  
  
 `hash_multimap(hash_multimap<Key, Mapped>% right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``.`[hash\_multimap::begin](../dotnet/hash-multimap-begin-stl-clr.md)`(),` `right``.`[hash\_multimap::end](../dotnet/hash-multimap-end-stl-clr.md)`())`, con il predicato predefinito dell'ordine e con la funzione hash predefinita.  Utilizzarla per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right`di hash\_multimap, con il predicato la funzione hash predefiniti dell'ordine.  
  
 Il costruttore:  
  
 `hash_multimap(hash_multimap<Key, Mapped>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``->`[hash\_multimap::begin](../dotnet/hash-multimap-begin-stl-clr.md)`(),` `right``->`[hash\_multimap::end](../dotnet/hash-multimap-end-stl-clr.md)`())`, con il predicato predefinito dell'ordine e con la funzione hash predefinita.  Utilizzarla per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right`di hash\_multimap, con il predicato la funzione hash predefiniti dell'ordine.  
  
 Il costruttore:  
  
 `template<typename InIter>`  
  
 `hash_multimap(InIter first, InIter last);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato predefinito dell'ordine e con la funzione hash predefinita.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza, con il predicato la funzione hash predefiniti dell'ordine.  
  
 Il costruttore:  
  
 `template<typename InIter>`  
  
 `hash_multimap(InIter first, InIter last,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato `pred`di ordine e con la funzione hash predefinita.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza, con il predicato specificato di ordinamento e la funzione hash predefinita.  
  
 Il costruttore:  
  
 `template<typename InIter>`  
  
 `hash_multimap(InIter first, InIter last,`  
  
 `key_compare^ pred, hasher^ hashfn);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato `pred`di ordine e con la funzione hash `hashfn`.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza, con il predicato la funzione hash dell'ordine specificato.  
  
 Il costruttore:  
  
 `hash_multimap(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato predefinito dell'ordine e con la funzione hash predefinita.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato la funzione hash predefiniti dell'ordine.  
  
 Il costruttore:  
  
 `hash_multimap(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato `pred`di ordine e con la funzione hash predefinita.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento e la funzione hash specificati di impostazione predefinita.  
  
 Il costruttore:  
  
 `hash_multimap(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred, hasher^ hashfn);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato `pred`di ordine e con la funzione hash `hashfn`.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato la funzione hash dell'ordine specificato.  
  
## Esempio  
  
```  
// cliext_hash_multimap_construct.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
int myfun(wchar_t key)   
    { // hash a key   
    return (key ^ 0xdeadbeef);   
    }   
  
typedef cliext::hash_multimap<wchar_t, int> Myhash_multimap;   
int main()   
    {   
// construct an empty container   
    Myhash_multimap c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(Myhash_multimap::make_value(L'a', 1));   
    c1.insert(Myhash_multimap::make_value(L'b', 2));   
    c1.insert(Myhash_multimap::make_value(L'c', 3));   
    for each (Myhash_multimap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Myhash_multimap c2 = cliext::greater_equal<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    c2.insert(c1.begin(), c1.end());   
    for each (Myhash_multimap::value_type elem in c2)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an ordering rule and hash function   
    Myhash_multimap c2h(cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_multimap::hasher(&myfun));   
    System::Console::WriteLine("size() = {0}", c2h.size());   
  
    c2h.insert(c1.begin(), c1.end());   
    for each (Myhash_multimap::value_type elem in c2h)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Myhash_multimap c3(c1.begin(), c1.end());   
    for each (Myhash_multimap::value_type elem in c3)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Myhash_multimap c4(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>());   
    for each (Myhash_multimap::value_type elem in c4)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule and hash function   
    Myhash_multimap c4h(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_multimap::hasher(&myfun));   
    for each (Myhash_multimap::value_type elem in c4h)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    Myhash_multimap c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Myhash_multimap::value_type>^)%c3);   
    for each (Myhash_multimap::value_type elem in c5)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule   
    Myhash_multimap c6(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Myhash_multimap::value_type>^)%c3,   
                cliext::greater_equal<wchar_t>());   
    for each (Myhash_multimap::value_type elem in c6)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule and hash function   
    Myhash_multimap c6h(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Myhash_multimap::value_type>^)%c3,   
                cliext::greater_equal<wchar_t>(),   
                gcnew Myhash_multimap::hasher(&myfun));   
    for each (Myhash_multimap::value_type elem in c6h)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Myhash_multimap c7(c4);   
    for each (Myhash_multimap::value_type elem in c7)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    Myhash_multimap c8(%c3);   
    for each (Myhash_multimap::value_type elem in c8)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **size\(\) \= 0**  
 **un \[1\] \[b \[2\]c 3\]**  
**size\(\) \= 0**  
 **un \[1\] \[b \[2\]c 3\]**  
**size\(\) \= 0**  
 **\[c 3\] \[b \[2\]un 1\]**  
 **un \[1\] \[b \[2\]c 3\]**  
 **un \[1\] \[b \[2\]c 3\]**  
 **\[c 3\] \[b \[2\]un 1\]**  
 **un \[1\] \[b \[2\]c 3\]**  
 **un \[1\] \[b \[2\]c 3\]**  
 **\[c 3\] \[b \[2\]un 1\]**  
 **un \[1\] \[b \[2\]c 3\]**  
 **un \[1\] \[b \[2\]c 3\]**   
## Requisiti  
 **Intestazione:**\<cliext\/hash\_map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_multimap](../dotnet/hash-multimap-stl-clr.md)   
 [hash\_multimap::generic\_container](../dotnet/hash-multimap-generic-container-stl-clr.md)   
 [hash\_multimap::operator\=](../dotnet/hash-multimap-operator-assign-stl-clr.md)