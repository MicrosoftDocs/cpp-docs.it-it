---
title: "hash_multiset::hash_multiset (STL/CLR) | Microsoft Docs"
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
  - "cliext::hash_multiset::hash_multiset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_multiset (membro) [STL/CLR]"
ms.assetid: 1b224c60-b714-4ed5-9234-79b61b92a953
caps.latest.revision: 15
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_multiset::hash_multiset (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto contenitore.  
  
## Sintassi  
  
```  
hash_multiset();  
explicit hash_multiset(key_compare^ pred);  
hash_multiset(key_compare^ pred, hasher^ hashfn);  
hash_multiset(hash_multiset<Key>% right);  
hash_multiset(hash_multiset<Key>^ right);  
template<typename InIter>  
    hash_multiset(InIter first, InIter last);  
template<typename InIter>  
    hash_multiset(InIter first, InIter last,  
        key_compare^ pred);  
template<typename InIter>  
    hash_multiset(InIter first, InIter last,  
        key_compare^ pred, hasher^ hashfn);  
hash_multiset(System::Collections::Generic::IEnumerable<GValue>^ right);  
hash_multiset(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred);  
hash_multiset(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred, hasher^ hashfn);  
```  
  
#### Parametri  
 first  
 Inizio dell'intervallo da inserire.  
  
 hashfn  
 Funzione hash per eseguire il mapping delle chiavi in bucket.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 pred  
 Predicato di ordinamento per la sequenza controllata.  
  
 right  
 Oggetto o intervallo da inserire.  
  
## Note  
 Costruttore:  
  
 `hash_multiset();`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato predefinito `key_compare()` di ordine e con la funzione hash predefinita.  Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato di ordinamento e la funzione hash predefiniti.  
  
 Costruttore:  
  
 `explicit hash_multiset(key_compare^ pred);`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato predefinito `pred` di ordinamento e con la funzione hash predefinita.  Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato di ordinamento specificato e la funzione hash predefinita.  
  
 Costruttore:  
  
 `hash_multiset(key_compare^ pred, hasher^ hashfn);`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato predefinito `pred` di ordinamento e con la funzione hash `hashfn`.  Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato di ordinamento e la funzione hash specificati.  
  
 Costruttore:  
  
 `hash_multiset(hash_multiset<Key>% right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``.`[hash\_multiset::begin](../dotnet/hash-multiset-begin-stl-clr.md)`(),` `right``.`[hash\_multiset::end](../dotnet/hash-multiset-end-stl-clr.md)`())`, con il predicato di ordinamento e con la funzione hash predefiniti.  Utilizzare nello specifico una sequenza controllata iniziale che è una copia di una sequenza controllata da un oggetto hash\_multiset `right`, con il predicato di ordinamento e con la funzione hash predefiniti.  
  
 Costruttore:  
  
 `hash_multiset(hash_multiset<Key>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``->`[hash\_multiset::begin](../dotnet/hash-multiset-begin-stl-clr.md)`(),` `right``->`[hash\_multiset::end](../dotnet/hash-multiset-end-stl-clr.md)`())`, con il predicato di ordinamento e con la funzione hash predefiniti.  Utilizzare nello specifica una sequenza controllata iniziale che è una copia di una sequenza controllata da un oggetto hash\_multiset `right`, con il predicato di ordinamento e con la funzione hash predefiniti.  
  
 Costruttore:  
  
 `template<typename InIter>`  
  
 `hash_multiset(InIter first, InIter last);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato di ordinamento e con la funzione hash predefiniti.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza, con il predicato di ordinamento e la funzione hash predefiniti.  
  
 Costruttore:  
  
 `template<typename InIter>`  
  
 `hash_multiset(InIter first, InIter last,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato di ordinamento `pred` e con la funzione hash predefinita.  Utilizzarla per rendere la sequenza selezionata una copia di un'altra sequenza, con il predicato di ordinamento specificato e la funzione hash predefinita.  
  
 Costruttore:  
  
 `template<typename InIter>`  
  
 `hash_multiset(InIter first, InIter last,`  
  
 `key_compare^ pred, hasher^ hashfn);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato di ordinamento `pred` e con la funzione hash `hashfn`.  Utilizzarla per rendere la sequenza selezionata una copia di un'altra sequenza, con il predicato di ordinamento e la funzione hash specificati.  
  
 Costruttore:  
  
 `hash_multiset(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato di ordinamento predefinito e con la funzione hash predefinita.  Utilizzarla per rendere la sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento e la funzione hash predefiniti.  
  
 Costruttore:  
  
 `hash_multiset(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato di ordinamento `pred`, e con la funzione hash predefinita.  Utilizzarla per rendere la sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento specificato e la funzione hash predefinita.  
  
 Costruttore:  
  
 `hash_multiset(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred, hasher^ hashfn);`  
  
 inizializza la sequenza controllata con la sequenza designata dall'enumeratore `right`, con il predicato di ordinamento `pred`, e con la funzione hash `hashfn`.  Utilizzarla per rendere la sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento e la funzione hash specificati.  
  
## Esempio  
  
```  
// cliext_hash_multiset_construct.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
int myfun(wchar_t key)   
    { // hash a key   
    return (key ^ 0xdeadbeef);   
    }   
  
typedef cliext::hash_multiset<wchar_t> Myhash_multiset;   
int main()   
    {   
// construct an empty container   
    Myhash_multiset c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Myhash_multiset c2 = cliext::greater_equal<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    c2.insert(c1.begin(), c1.end());   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule and hash function   
    Myhash_multiset c2h(cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_multiset::hasher(&myfun));   
    System::Console::WriteLine("size() = {0}", c2h.size());   
  
    c2h.insert(c1.begin(), c1.end());   
    for each (wchar_t elem in c2h)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Myhash_multiset c3(c1.begin(), c1.end());   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Myhash_multiset c4(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule and hash function   
    Myhash_multiset c4h(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_multiset::hasher(&myfun));   
    for each (wchar_t elem in c4h)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    Myhash_multiset c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);   
    for each (wchar_t elem in c5)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule   
    Myhash_multiset c6(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,   
            cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c6)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule and hash function   
    Myhash_multiset c6h(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,   
            cliext::greater_equal<wchar_t>(),   
                gcnew Myhash_multiset::hasher(&myfun));   
    for each (wchar_t elem in c6h)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct from a generic container   
    Myhash_multiset c7(c4);   
    for each (wchar_t elem in c7)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Myhash_multiset c8(%c3);   
    for each (wchar_t elem in c8)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **size\(\) \= 0**  
 **a b c**  
**size\(\) \= 0**  
 **a b c**  
**size\(\) \= 0**  
 **c b a**  
 **a b c**  
 **a b c**  
 **c b a**  
 **a b c**  
 **a b c**  
 **c b a**  
 **a b c**  
 **a b c**   
## Requisiti  
 **Intestazione:** \<cliext\/hash\_set\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [hash\_multiset](../dotnet/hash-multiset-stl-clr.md)   
 [hash\_multiset::generic\_container](../dotnet/hash-multiset-generic-container-stl-clr.md)   
 [hash\_multiset::operator\=](../dotnet/hash-multiset-operator-assign-stl-clr.md)