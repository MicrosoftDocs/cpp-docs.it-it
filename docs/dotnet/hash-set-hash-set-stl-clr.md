---
title: "hash_set::hash_set (STL/CLR) | Microsoft Docs"
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
  - "cliext::hash_set::hash_set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_set (membro) [STL/CLR]"
ms.assetid: 006414ed-db5a-4c08-ac81-4a8ae57d0aad
caps.latest.revision: 18
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_set::hash_set (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto contenitore.  
  
## Sintassi  
  
```  
hash_set();  
explicit hash_set(key_compare^ pred);  
hash_set(key_compare^ pred, hasher^ hashfn);  
hash_set(hash_set<Key>% right);  
hash_set(hash_set<Key>^ right);  
template<typename InIter>  
    hash_sethash_set(InIter first, InIter last);  
template<typename InIter>  
    hash_set(InIter first, InIter last,  
        key_compare^ pred);  
template<typename InIter>  
    hash_set(InIter first, InIter last,  
        key_compare^ pred, hasher^ hashfn);  
hash_set(System::Collections::Generic::IEnumerable<GValue>^ right);  
hash_set(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred);  
hash_set(System::Collections::Generic::IEnumerable<GValue>^ right,  
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
 Predicato utilizzato per ordinare la sequenza selezionata.  
  
 right  
 Oggetto o intervallo da inserire.  
  
## Note  
 Costruttore:  
  
 `hash_set();`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato predefinito `key_compare()` di ordine e con la funzione hash predefinita.  Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato di ordinamento e la funzione hash predefiniti.  
  
 Costruttore:  
  
 `explicit hash_set(key_compare^ pred);`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato predefinito `pred` di ordinamento e con la funzione hash predefinita.  Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato di ordinamento specificato e la funzione hash predefinita.  
  
 Costruttore:  
  
 `hash_set(key_compare^ pred, hasher^ hashfn);`  
  
 inizializza la sequenza selezionata senza elementi, con il predicato predefinito `pred` di ordinamento e con la funzione hash `hashfn`.  Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato di ordinamento e la funzione hash specificati.  
  
 Costruttore:  
  
 `hash_set(hash_set<Key>% right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``.`[hash\_set::begin](../dotnet/hash-set-begin-stl-clr.md)`(),` `right``.`[hash\_set::end](../dotnet/hash-set-end-stl-clr.md)`())`, con il predicato di ordinamento e con la funzione hash predefiniti.  Utilizzarla per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right` hash\_set, con il predicato di ordinamento la funzione hash predefiniti.  
  
 Costruttore:  
  
 `hash_set(hash_set<Key>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``->`[hash\_set::begin](../dotnet/hash-set-begin-stl-clr.md)`(),` `right``->`[hash\_set::end](../dotnet/hash-set-end-stl-clr.md)`())`, con il predicato di ordinamento e con la funzione hash predefiniti.  Utilizzarla per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right` hash\_set, con il predicato di ordinamento la funzione hash predefiniti.  
  
 Costruttore:  
  
 `template<typename InIter>`  
  
 `hash_set(InIter first, InIter last);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato di ordinamento e con la funzione hash predefiniti.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza, con il predicato di ordinamento e la funzione hash predefiniti.  
  
 Costruttore:  
  
 `template<typename InIter>`  
  
 `hash_set(InIter first, InIter last,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato di ordinamento `pred` e con la funzione hash predefinita.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza, con il predicato di ordinamento specificato e la funzione hash predefinita.  
  
 Costruttore:  
  
 `template<typename InIter>`  
  
 `hash_set(InIter first, InIter last,`  
  
 `key_compare^ pred, hasher^ hashfn);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`, con il predicato di ordinamento `pred` e con la funzione hash `hashfn`.  Utilizzarla per rendere la sequenza selezionata una copia di un'altra sequenza, con il predicato di ordinamento e la funzione hash specificati.  
  
 Costruttore:  
  
 `hash_set(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato di ordinamento predefinito e con la funzione hash predefinita.  Utilizzarla per rendere la sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento e la funzione hash predefiniti.  
  
 Costruttore:  
  
 `hash_set(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato di ordinamento `pred`, e con la funzione hash predefinita.  Utilizzarla per rendere la sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento specificato e la funzione hash predefinita.  
  
 Costruttore:  
  
 `hash_set(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred, hasher^ hashfn);`  
  
 \-inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`, con il predicato di ordinamento `pred`, e con la funzione hash `hashfn`.  Utilizzarla per rendere la sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento e la funzione hash specificati.  
  
## Esempio  
  
```  
// cliext_hash_set_construct.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
int myfun(wchar_t key)   
    { // hash a key   
    return (key ^ 0xdeadbeef);   
    }   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
// construct an empty container   
    Myhash_set c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Myhash_set c2 = cliext::greater_equal<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    c2.insert(c1.begin(), c1.end());   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule and hash function   
    Myhash_set c2h(cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_set::hasher(&myfun));   
    System::Console::WriteLine("size() = {0}", c2h.size());   
  
    c2h.insert(c1.begin(), c1.end());   
    for each (wchar_t elem in c2h)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Myhash_set c3(c1.begin(), c1.end());   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Myhash_set c4(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule and hash function   
    Myhash_set c4h(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_set::hasher(&myfun));   
    for each (wchar_t elem in c4h)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    Myhash_set c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);   
    for each (wchar_t elem in c5)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule   
    Myhash_set c6(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,   
            cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c6)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule and hash function   
    Myhash_set c6h(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,   
            cliext::greater_equal<wchar_t>(),   
                gcnew Myhash_set::hasher(&myfun));   
    for each (wchar_t elem in c6h)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct from a generic container   
    Myhash_set c7(c4);   
    for each (wchar_t elem in c7)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Myhash_set c8(%c3);   
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
 [hash\_set](../dotnet/hash-set-stl-clr.md)   
 [hash\_set::generic\_container](../dotnet/hash-set-generic-container-stl-clr.md)   
 [hash\_set::operator\=](../dotnet/hash-set-operator-assign-stl-clr.md)