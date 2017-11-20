---
title: 'multiset:: multiset (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::multiset::multiset
dev_langs: C++
helpviewer_keywords: multiset member [STL/CLR]
ms.assetid: a6ddb2df-d7cd-4b12-aee7-81da1f67f57f
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 43101507218ebc2ab938ee23a12bc2524af81d85
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="multisetmultiset-stlclr"></a>multiset::multiset (STL/CLR)
Costruisce un oggetto contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 primo  
 Inizio dell'intervallo da inserire.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 pred  
 Ordinamento di predicato per la sequenza controllata.  
  
 right  
 Oggetto o un intervallo da inserire.  
  
## <a name="remarks"></a>Note  
 Il costruttore:  
  
 `multiset();`  
  
 Inizializza la sequenza controllata con alcun elemento, con il predicato dell'ordinamento predefinito `key_compare()`. È utilizzata per specificare una sequenza controllata iniziale vuota, con il predicato dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `explicit multiset(key_compare^ pred);`  
  
 Inizializza la sequenza controllata con alcun elemento, con il predicato ordinamento `pred`. È utilizzata per specificare una sequenza controllata iniziale vuota, con il predicato di ordinamento specificato.  
  
 Il costruttore:  
  
 `multiset(multiset<Key>% right);`  
  
 Inizializza la sequenza controllata con la sequenza [`right.begin()`, `right.end()`), con il predicato dell'ordinamento predefinito. Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata per l'oggetto multiset `right`, con il predicato dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `multiset(multiset<Key>^ right);`  
  
 Inizializza la sequenza controllata con la sequenza [`right->begin()`, `right->end()`), con il predicato dell'ordinamento predefinito. Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata per l'oggetto multiset `right`, con il predicato dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `template<typename InIter> multiset(InIter first, InIter last);`  
  
 Inizializza la sequenza controllata con la sequenza [`first`, `last`), con il predicato dell'ordinamento predefinito. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza, con il predicato dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `template<typename InIter> multiset(InIter first, InIter last, key_compare^ pred);`  
  
 Inizializza la sequenza controllata con la sequenza [`first`, `last`), con il predicato ordinamento `pred`. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza, con il predicato di ordinamento specificato.  
  
 Il costruttore:  
  
 `multiset(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 Inizializza la sequenza controllata con la sequenza designata dall'enumeratore `right`, con il predicato dell'ordinamento predefinito. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore, con il predicato dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `multiset(System::Collections::Generic::IEnumerable<Key>^ right, key_compare^ pred);`  
  
 Inizializza la sequenza controllata con la sequenza designata dall'enumeratore `right`, con il predicato ordinamento `pred`. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento specificato.  
  
## <a name="example"></a>Esempio  
  
```cpp  
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
  
```Output  
size() = 0  
 a b c  
size() = 0  
 c b a  
 a b c  
 c b a  
 a b c  
 c b a  
 c b a  
 a b c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [multiset::generic_container (STL/CLR)](../dotnet/multiset-generic-container-stl-clr.md)   
 [multiset::operator= (STL/CLR)](../dotnet/multiset-operator-assign-stl-clr.md)