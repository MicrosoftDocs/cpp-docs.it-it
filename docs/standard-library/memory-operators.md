---
title: Operatori &lt;memory&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- memory/std::operator!=
- memory/std::operator>
- memory/std::operator>=
- memory/std::operator<
- memory/std::operator<=
- memory/std::operator<<
- memory/std::operator==
dev_langs:
- C++
ms.assetid: 257e3ba9-c4c2-4ae8-9b11-b156ba9c28de
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 95563f5eeb70d33e3ebba4de0aead276a2230669
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="ltmemorygt-operators"></a>Operatori &lt;memory&gt;
||||  
|-|-|-|  
|[operator!=](#op_neq)|[operator&gt;](#op_gt)|[operator&gt;=](#op_gt_eq)|  
|[operator&lt;](#op_lt)|[operator&lt;&lt;](#op_lt_lt)|[operator&lt;=](#op_lt_eq)|  
|[operator==](#op_eq_eq)|  
  
##  <a name="op_neq"></a>  operator!=  
 Verifica la disuguaglianza tra oggetti.  
  
```  
template <class Type, class Other>  
bool operator!=(
    const allocator<Type>& left,  
    const allocator<Other>& right) throw();

template <class T, class Del1, class U, class Del2>  
bool operator!=(
    const unique_ptr<T, Del1>& left,  
    const unique_ptr<U&, Del2>& right);

template <class Ty1, class Ty2>  
bool operator!=(
    const shared_ptr<Ty1>& left,  
    const shared_ptr<Ty2>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Uno degli oggetti di cui verificare la disuguaglianza.  
  
 `right`  
 Uno degli oggetti di cui verificare la disuguaglianza.  
  
 `Ty1`  
 Tipo controllato dal puntatore condiviso sinistro.  
  
 `Ty2`  
 Tipo controllato dal puntatore condiviso destro.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se gli oggetti non sono uguali; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il primo operatore modello restituisce false Tutti gli allocatori predefiniti sono uguali.  
  
 Il secondo e il terzo operatore modello restituiscono `!(left == right)`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// memory_op_me.cpp  
// compile with: /EHsc  
#include <memory>  
#include <iostream>  
#include <vector>  
  
using namespace std;  
  
int main( )   
{  
   allocator<double> Alloc;  
   vector <char>:: allocator_type v1Alloc;  
  
   if ( Alloc != v1Alloc )  
      cout << "The allocator objects Alloc & v1Alloc not are equal."  
           << endl;  
   else  
      cout << "The allocator objects Alloc & v1Alloc are equal."  
           << endl;  
}  
```  
  
```Output  
The allocator objects Alloc & v1Alloc are equal.  
```  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__operator_ne.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
int main()   
    {   
    std::shared_ptr<int> sp0(new int(0));   
    std::shared_ptr<int> sp1(new int(0));   
  
    std::cout << "sp0 != sp0 == " << std::boolalpha   
        << (sp0 != sp0) << std::endl;   
    std::cout << "sp0 != sp1 == " << std::boolalpha   
        << (sp0 != sp1) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
sp0 != sp0 == false  
sp0 != sp1 == true  
```  
  
##  <a name="op_eq_eq"></a>  operator==  
 Verifica l'uguaglianza tra oggetti.  
  
```  
template <class Type, class Other>  
bool operator==(
    const allocator<Type>& left,  
    const allocator<Other>& right) throw();

template <class Ty1, class Del1, class Ty2, class Del2>  
bool operator==(
    const unique_ptr<Ty1, Del1>& left,  
    const unique_ptr<Ty2, Del2>& right);

template <class Ty1, class Ty2>  
bool operator==(
    const shared_ptr<Ty1>& left;,  
    const shared_ptr<Ty2>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Uno degli oggetti di cui verificare l'uguaglianza.  
  
 `right`  
 Uno degli oggetti di cui verificare l'uguaglianza.  
  
 `Ty1`  
 Tipo controllato dal puntatore condiviso sinistro.  
  
 `Ty2`  
 Tipo controllato dal puntatore condiviso destro.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se gli oggetti sono uguali, `false` se gli oggetti non sono uguali.  
  
### <a name="remarks"></a>Note  
 Il primo operatore modello restituisce true Tutti gli allocatori predefiniti sono uguali.  
  
 Il secondo e il terzo operatore modello restituiscono ` left.get() ==  right.get()`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// memory_op_eq.cpp  
// compile with: /EHsc  
#include <memory>  
#include <iostream>  
#include <vector>  
  
using namespace std;  
  
int main( )   
{  
   allocator<char> Alloc;  
   vector <int>:: allocator_type v1Alloc;  
  
   allocator<char> cAlloc(Alloc);   
   allocator<int> cv1Alloc(v1Alloc);  
  
   if ( cv1Alloc == v1Alloc )  
      cout << "The allocator objects cv1Alloc & v1Alloc are equal."  
           << endl;  
   else  
      cout << "The allocator objects cv1Alloc & v1Alloc are not equal."  
           << endl;  
  
   if ( cAlloc == Alloc )  
      cout << "The allocator objects cAlloc & Alloc are equal."  
           << endl;  
   else  
      cout << "The allocator objects cAlloc & Alloc are not equal."  
           << endl;  
}  
```  
  
```Output  
The allocator objects cv1Alloc & v1Alloc are equal.  
The allocator objects cAlloc & Alloc are equal.  
```  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__operator_eq.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
int main()   
    {   
    std::shared_ptr<int> sp0(new int(0));   
    std::shared_ptr<int> sp1(new int(0));   
  
    std::cout << "sp0 == sp0 == " << std::boolalpha   
        << (sp0 == sp0) << std::endl;   
    std::cout << "sp0 == sp1 == " << std::boolalpha   
        << (sp0 == sp1) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
sp0 == sp0 == true  
sp0 == sp1 == false  
```  
  
##  <a name="op_gt_eq"></a>  operator&gt;=  
 Verifica se un oggetto è maggiore o uguale a un secondo oggetto.  
  
```  
template <class T, class Del1, class U, class Del2>  
bool operator>=(
    const unique_ptr<T, Del1>& left,  
    const unique_ptr<U, Del2>& right);

template <class Ty1, class Ty2>  
bool operator>=(
    const shared_ptr<Ty1>& left,  
    const shared_ptr<Ty2>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Uno degli oggetti da confrontare.  
  
 `right`  
 Uno degli oggetti da confrontare.  
  
 `Ty1`  
 Tipo controllato dal puntatore condiviso sinistro.  
  
 `Ty2`  
 Tipo controllato dal puntatore condiviso destro.  
  
### <a name="remarks"></a>Note  
 Gli operatori di modello restituiscono `left.get() >= right.get()`.  
  
##  <a name="op_lt"></a>  operator&lt;  
 Verifica se un oggetto è minore di un secondo oggetto.  
  
```  
template <class T, class Del1, class U, class Del2>  
bool operator<(
    const unique_ptr<T, Del1>& left,  
    const unique_ptr<U&, Del2>& right);

template <class Ty1, class Ty2>  
bool operator<(
    const shared_ptr<Ty1>& left,  
    const shared_ptr<Ty2>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Uno degli oggetti da confrontare.  
  
 `right`  
 Uno degli oggetti da confrontare.  
  
 `Ty1`  
 Tipo controllato dal puntatore sinistro.  
  
 `Ty2`  
 Tipo controllato dal puntatore destro.  
  
##  <a name="op_lt_eq"></a>  operator&lt;=  
 Verifica se un oggetto è minore o uguale a un secondo oggetto.  
  
```  
template <class T, class Del1, class U, class Del2>  
bool operator<=(
    const unique_ptr<T, Del1>& left,  
    const unique_ptr<U&, Del2>& right);

template <class Ty1, class Ty2>  
bool operator<=(
    const shared_ptr<Ty1>& left,  
    const shared_ptr<Ty2>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Uno degli oggetti da confrontare.  
  
 `right`  
 Uno degli oggetti da confrontare.  
  
 `Ty1`  
 Tipo controllato dal puntatore condiviso sinistro.  
  
 `Ty2`  
 Tipo controllato dal puntatore condiviso destro.  
  
### <a name="remarks"></a>Note  
 Gli operatori di modello restituiscono`left.get() <= right.get()`  
  
##  <a name="op_gt"></a>  operator&gt;  
 Verifica se un oggetto è maggiore di un secondo oggetto.  
  
```  
template <class Ty1, class Del1, class Ty2, class Del2>  
bool operator>(
    const unique_ptr<Ty1, Del1>& left,  
    const unique_ptr<Ty2&, Del2gt;& right);

template <class Ty1, class Ty2>  
bool operator>(
    const shared_ptr<Ty1>& left,  
    const shared_ptr<Ty2>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Uno degli oggetti da confrontare.  
  
 `right`  
 Uno degli oggetti da confrontare.  
  
 `Ty1`  
 Tipo controllato dal puntatore condiviso sinistro.  
  
 `Ty2`  
 Tipo controllato dal puntatore condiviso destro.  
  
##  <a name="op_lt_lt"></a>  operator&lt;&lt;  
Scrive il puntatore condiviso nel flusso.  
  
```  
template <class Elem, class Tr, class Ty>  
std::basic_ostream<Elem, Tr>& operator<<(std::basic_ostream<Elem, Tr>& out,  
    shared_ptr<Ty>& sp);
```  
  
### <a name="parameters"></a>Parametri  
 `Elem`  
 Tipo dell'elemento flusso.  
  
 `Tr`  
 Tipo dei tratti dell'elemento flusso.  
  
 `Ty`  
 Tipo controllato dal puntatore condiviso.  
  
 `out`  
 Flusso di output.  
  
 `sp`  
 Puntatore condiviso.  
  
### <a name="remarks"></a>Note  
 La funzione modello restituisce `out << sp.get()`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__operator_sl.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
int main()   
    {   
    std::shared_ptr<int> sp0(new int(5));   
  
    std::cout << "sp0 == " << sp0 << " (varies)" << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
sp0 == 3f3040 (varies)  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<memory>](../standard-library/memory.md)

