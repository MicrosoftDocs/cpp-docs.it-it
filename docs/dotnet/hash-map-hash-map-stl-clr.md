---
title: 'hash_map:: hash_map (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::hash_map::hash_map
dev_langs:
- C++
helpviewer_keywords:
- hash_map member [STL/CLR]
ms.assetid: d65eb3fa-4bf9-4186-95f8-5517c90ef1fa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: be0eedeea8aceabbb6726f27a5cd488beeee50f8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="hashmaphashmap-stlclr"></a>hash_map::hash_map (STL/CLR)
Costruisce un oggetto contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
hash_map();  
explicit hash_map(key_compare^ pred);  
hash_map(key_compare^ pred, hasher^ hashfn);  
hash_map(hash_map<Key, Mapped>% right);  
hash_map(hash_map<Key, Mapped>^ right);  
template<typename InIter>  
    hash_maphash_map(InIter first, InIter last);  
template<typename InIter>  
    hash_map(InIter first, InIter last,  
        key_compare^ pred);  
template<typename InIter>  
    hash_map(InIter first, InIter last,  
        key_compare^ pred, hasher^ hashfn);  
hash_map(System::Collections::Generic::IEnumerable<GValue>^ right);  
hash_map(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred);  
hash_map(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred, hasher^ hashfn);  
```  
  
#### <a name="parameters"></a>Parametri  
 primo  
 Inizio dell'intervallo da inserire.  
  
 hashfn  
 Funzione per le chiavi di mapping a bucket di hash.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 pred  
 Ordinamento di predicato per la sequenza controllata.  
  
 right  
 Oggetto o un intervallo da inserire.  
  
## <a name="remarks"></a>Note  
 Il costruttore:  
  
 `hash_map();`  
  
 Inizializza la sequenza controllata con alcun elemento, con il predicato dell'ordinamento predefinito `key_compare()`e con la funzione hash predefinita. È utilizzata per specificare una sequenza controllata iniziale vuota, con il funzione di predicato e hash dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `explicit hash_map(key_compare^ pred);`  
  
 Inizializza la sequenza controllata con alcun elemento, con il predicato ordinamento `pred`e con la funzione hash predefinita. È utilizzata per specificare una sequenza controllata iniziale vuota, con il predicato di ordinamento specificato e la funzione hash predefinita.  
  
 Il costruttore:  
  
 `hash_map(key_compare^ pred, hasher^ hashfn);`  
  
 Inizializza la sequenza controllata con alcun elemento, con il predicato ordinamento `pred`e con la funzione hash `hashfn`. È utilizzata per specificare una sequenza controllata iniziale vuota, con la funzione di predicato e hash ordinamento specificata.  
  
 Il costruttore:  
  
 `hash_map(hash_map<Key, Mapped>% right);`  
  
 Inizializza la sequenza controllata con la sequenza [`right.begin()`, `right.end()`), con il predicato dell'ordinamento predefinito e con la funzione hash predefinita. Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto hash_map `right`, con il predicato di ordinamento predefinito e una funzione hash.  
  
 Il costruttore:  
  
 `hash_map(hash_map<Key, Mapped>^ right);`  
  
 Inizializza la sequenza controllata con la sequenza [`right->begin()`, `right->end()`), con il predicato dell'ordinamento predefinito e con la funzione hash predefinita. Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto hash_map `right`, con il predicato di ordinamento predefinito e una funzione hash.  
  
 Il costruttore:  
  
 `template<typename InIter> hash_map(InIter first, InIter last);`  
  
 Inizializza la sequenza controllata con la sequenza [`first`, `last`), con il predicato dell'ordinamento predefinito e con la funzione hash predefinita. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza, con il funzione di predicato e hash dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `template<typename InIter> hash_map(InIter first, InIter last, key_compare^ pred);`  
  
 Inizializza la sequenza controllata con la sequenza [`first`, `last`), con il predicato ordinamento `pred`e con la funzione hash predefinita. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza, con il predicato di ordinamento specificato e la funzione hash predefinita.  
  
 Il costruttore:  
  
 `template<typename InIter> hash_map(InIter first, InIter last, key_compare^ pred, hasher^ hashfn);`  
  
 Inizializza la sequenza controllata con la sequenza [`first`, `last`), con il predicato ordinamento `pred`e con la funzione hash `hashfn`. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza, con la funzione di predicato e hash ordinamento specificata.  
  
 Il costruttore:  
  
 `hash_map(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 Inizializza la sequenza controllata con la sequenza designata dall'enumeratore `right`, con il predicato dell'ordinamento predefinito e con la funzione hash predefinita. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore, con il funzione di predicato e hash dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `hash_map(System::Collections::Generic::IEnumerable<Key>^ right, key_compare^ pred);`  
  
 Inizializza la sequenza controllata con la sequenza designata dall'enumeratore `right`, con il predicato ordinamento `pred`e con la funzione hash predefinita. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore, con la funzione di hash di predicato e predefinito ordinamento specificato.  
  
 Il costruttore:  
  
 `hash_map(System::Collections::Generic::IEnumerable<Key>^ right, key_compare^ pred, hasher^ hashfn);`  
  
 Inizializza la sequenza controllata con la sequenza designata dall'enumeratore `right`, con il predicato ordinamento `pred`e con la funzione hash `hashfn`. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore, con la funzione di predicato e hash ordinamento specificato.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_map_construct.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
int myfun(wchar_t key)   
    { // hash a key   
    return (key ^ 0xdeadbeef);   
    }   
  
typedef cliext::hash_map<wchar_t, int> Myhash_map;   
int main()   
    {   
// construct an empty container   
    Myhash_map c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(Myhash_map::make_value(L'a', 1));   
    c1.insert(Myhash_map::make_value(L'b', 2));   
    c1.insert(Myhash_map::make_value(L'c', 3));   
    for each (Myhash_map::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Myhash_map c2 = cliext::greater_equal<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    c2.insert(c1.begin(), c1.end());   
    for each (Myhash_map::value_type elem in c2)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an ordering rule and hash function   
    Myhash_map c2h(cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_map::hasher(&myfun));   
    System::Console::WriteLine("size() = {0}", c2h.size());   
  
    c2h.insert(c1.begin(), c1.end());   
    for each (Myhash_map::value_type elem in c2h)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Myhash_map c3(c1.begin(), c1.end());   
    for each (Myhash_map::value_type elem in c3)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Myhash_map c4(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>());   
    for each (Myhash_map::value_type elem in c4)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule and hash function   
    Myhash_map c4h(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_map::hasher(&myfun));   
    for each (Myhash_map::value_type elem in c4h)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    Myhash_map c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Myhash_map::value_type>^)%c3);   
    for each (Myhash_map::value_type elem in c5)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule   
    Myhash_map c6(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Myhash_map::value_type>^)%c3,   
                cliext::greater_equal<wchar_t>());   
    for each (Myhash_map::value_type elem in c6)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule and hash function   
    Myhash_map c6h(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Myhash_map::value_type>^)%c3,   
                cliext::greater_equal<wchar_t>(),   
                gcnew Myhash_map::hasher(&myfun));   
    for each (Myhash_map::value_type elem in c6h)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Myhash_map c7(c4);   
    for each (Myhash_map::value_type elem in c7)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    Myhash_map c8(%c3);   
    for each (Myhash_map::value_type elem in c8)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
size() = 0  
 [a 1] [b 2] [c 3]  
size() = 0  
 [a 1] [b 2] [c 3]  
size() = 0  
 [c 3] [b 2] [a 1]  
  
 [a 1] [b 2] [c 3]  
 [a 1] [b 2] [c 3]  
 [c 3] [b 2] [a 1]  
  
 [a 1] [b 2] [c 3]  
 [a 1] [b 2] [c 3]  
 [c 3] [b 2] [a 1]  
  
 [a 1] [b 2] [c 3]  
 [a 1] [b 2] [c 3]  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/hash_map >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)   
 [hash_map::generic_container (STL/CLR)](../dotnet/hash-map-generic-container-stl-clr.md)   
 [hash_map::operator= (STL/CLR)](../dotnet/hash-map-operator-assign-stl-clr.md)