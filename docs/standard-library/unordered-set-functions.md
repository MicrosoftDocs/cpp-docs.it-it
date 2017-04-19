---
title: Funzioni &lt;unordered_set&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- unordered_set/std::swap (set)
- unordered_set/std::swap (unordered_multiset)
ms.assetid: 66b35671-4023-4411-ad50-83786580d8ee
caps.latest.revision: 10
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 3d2d2d2f281fa6bdb19a48fdf22ae1ddadabfd0a
ms.lasthandoff: 02/24/2017

---
# <a name="ltunorderedsetgt-functions"></a>Funzioni &lt;unordered_set&gt;
|||  
|-|-|  
|[swap (set)](#swap)|[swap (unordered_multiset)](#swap_unordered_multiset)|  
  
##  <a name="swap"></a>  swap (unordered_set)  
 Scambia il contenuto di due contenitori.  
  
```  
 
template <class Key, class Hash, class Pred, class Alloc>  
void swap(
   unordered_set <Key, Hash, Pred, Alloc>& left,  
   unordered_set <Key, Hash, Pred, Alloc>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `Key`  
 Tipo di chiave.  
  
 `Hash`  
 Tipo di oggetto della funzione hash.  
  
 `Pred`  
 Tipo di oggetto della funzione di confronto di uguaglianza.  
  
 `Alloc`  
 Classe Allocator.  
  
 `left`  
 Primo contenitore da scambiare.  
  
 `right`  
 Secondo contenitore da scambiare.  
  
### <a name="remarks"></a>Note  
 La funzione modello esegue `left.`[unordered_set::swap](../standard-library/unordered-set-class.md#unordered_set__swap)`(right)`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
Myset c2;  
  
c2.insert('d');  
c2.insert('e');  
c2.insert('f');  
  
c1.swap(c2);  
  
// display contents " [f] [e] [d]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
swap(c1, c2);  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
[f] [e] [d]  
[c] [b] [a]  
  
```  
  
##  <a name="swap_unordered_multiset"></a>  swap (unordered_multiset) 
 Scambia il contenuto di due contenitori.  
  
```  
 
template <class Key, class Hash, class Pred, class Alloc>  
void swap(
   unordered_multiset <Key, Hash, Pred, Alloc>& left,  
   unordered_multiset <Key, Hash, Pred, Alloc>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `Key`  
 Tipo di chiave.  
  
 `Hash`  
 Tipo di oggetto della funzione hash.  
  
 `Pred`  
 Tipo di oggetto della funzione di confronto di uguaglianza.  
  
 `Alloc`  
 Classe Allocator.  
  
 `left`  
 Primo contenitore da scambiare.  
  
 `right`  
 Secondo contenitore da scambiare.  
  
### <a name="remarks"></a>Note  
 La funzione modello esegue `left.`[unordered_multiset::swap](../standard-library/unordered-multiset-class.md#unordered_multiset__swap)`(right)`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__unordered_set__u_ms_swap.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_multiset<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents " [c] [b] [a]"  
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << *it << "]";
    std::cout << std::endl;

    Myset c2;

    c2.insert('d');
    c2.insert('e');
    c2.insert('f');

    c1.swap(c2);

    // display contents " [f] [e] [d]"  
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << *it << "]";
    std::cout << std::endl;

    swap(c1, c2);

    // display contents " [c] [b] [a]"  
    for (Myset::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << *it << "]";
    std::cout << std::endl;

    return (0);
}
  
```  
  
```Output  
  
[c] [b] [a]  
[f] [e] [d]  
[c] [b] [a]  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [<unordered_set>](../standard-library/unordered-set.md)


