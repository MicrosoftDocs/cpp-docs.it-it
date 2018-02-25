---
title: Operatori &lt;tuple&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- tuple/std::operator!=
- tuple/std::operator>
- tuple/std::operator>=
- tuple/std::operator<
- tuple/std::operator<=
- tuple/std::operator==
dev_langs:
- C++
ms.assetid: f25752dc-d3e2-4e12-b5ac-9a8682ca60ed
caps.latest.revision: 
manager: ghogen
ms.openlocfilehash: b397aa72bff4c2f1f46b7faf32030c21683f1e51
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="lttuplegt-operators"></a>Operatori &lt;tuple&gt;
||||  
|-|-|-|  
|[operator!=](#op_neq)|[operator&gt;](#op_gt)|[operator&gt;=](#op_gt_eq)|  
|[operator&lt;](#op_lt)|[operator&lt;=](#op_lt_eq)|[operator==](#op_eq_eq)|  
  
##  <a name="op_neq"></a>  operator!=  
 Confronta oggetti `tuple` per verificarne la disuguaglianza.  
  
```  
template <class T1, class T2, ..., class TN,  
    class U1, class U2, ..., class UN>  
bool operator!=(const tuple<T1, T2, ..., TN>& tpl1,  
    const tuple<U1, U2, ..., UN>& tpl2);
```  
  
### <a name="parameters"></a>Parametri  
 `TN`  
 Tipo dell'ennesimo elemento tupla.  
  
### <a name="remarks"></a>Note  
 La funzione restituisce false quando `N` è 0; in caso contrario, restituisce `get<0>(tpl1) != get<0>(tpl2) || get<1>(tpl1) != get<1>(tpl2) || ... || get<N - 1>(tpl1) == get<N - 1>(tpl2)`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__tuple__operator_ne.cpp   
// compile with: /EHsc   
#include <tuple>   
#include <iostream>   
  
typedef std::tuple<int, double, int, double> Mytuple;   
int main() {   
    Mytuple c0(0, 1, 2, 3);   
  
// display contents " 0 1 2 3"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
    Mytuple c1 = std::make_tuple(4, 5, 6, 7);   
  
// display contents " 4 5 6 7"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
// display results of comparisons   
    std::cout << std::boolalpha << " " << (c0 != c0);   
    std::cout << std::endl;   
    std::cout << std::boolalpha << " " << (c0 != c1);   
    std::cout << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
0 1 2 3  
0 1 2 3  
false  
true  
```  
  
##  <a name="op_lt"></a>  operator&lt;  
 Confronta oggetti `tuple` per verificare se sono minori di un certo valore.  
  
```  
template <class T1, class T2, ..., class TN,  
    class U1, class U2, ..., class UN>  
bool operator<(const tuple<T1, T2, ..., TN>& tpl1,  
    const tuple<U1, U2, ..., UN>& tpl2);
```  
  
### <a name="parameters"></a>Parametri  
 `TN`  
 Tipo dell'ennesimo elemento tupla.  
  
### <a name="remarks"></a>Note  
 La funzione restituisce true quando `N` è maggiore di 0 e il primo valore differente in `tpl1` è minore del corrispondente valore in `tpl2`; in caso contrario, restituisce false.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__tuple__operator_lt.cpp   
// compile with: /EHsc   
#include <tuple>   
#include <iostream>   
  
typedef std::tuple<int, double, int, double> Mytuple;   
int main() {   
    Mytuple c0(0, 1, 2, 3);   
  
// display contents " 0 1 2 3"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
    Mytuple c1 = std::make_tuple(4, 5, 6, 7);   
  
// display contents " 4 5 6 7"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
// display results of comparisons   
    std::cout << std::boolalpha << " " << (c0 < c0);   
    std::cout << std::endl;   
    std::cout << std::boolalpha << " " << (c0 < c1);   
    std::cout << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
0 1 2 3  
0 1 2 3  
false  
true  
```  
  
##  <a name="op_lt_eq"></a>  operator&lt;=  
 Confronta oggetti `tuple` per verificare se sono minori o uguali a un certo valore.  
  
```  
template <class T1, class T2, ..., class TN,  
    class U1, class U2, ..., class UN>  
bool operator<=(const tuple<T1, T2, ..., TN>& tpl1,  
    const tuple<U1, U2, ..., UN>& tpl2);
```  
  
### <a name="parameters"></a>Parametri  
 `TN`  
 Tipo dell'ennesimo elemento tupla.  
  
### <a name="remarks"></a>Note  
 La funzione restituisce `!(tpl2 < tpl1)`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__tuple__operator_le.cpp   
// compile with: /EHsc   
#include <tuple>   
#include <iostream>   
  
typedef std::tuple<int, double, int, double> Mytuple;   
int main() {   
    Mytuple c0(0, 1, 2, 3);   
  
// display contents " 0 1 2 3"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
    Mytuple c1 = std::make_tuple(4, 5, 6, 7);   
  
// display contents " 4 5 6 7"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
// display results of comparisons   
    std::cout << std::boolalpha << " " << (c0 <= c0);   
    std::cout << std::endl;   
    std::cout << std::boolalpha << " " << (c1 <= c0);   
    std::cout << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
0 1 2 3  
0 1 2 3  
true  
false  
```  
  
##  <a name="op_eq_eq"></a>  operator==  
 Confronta oggetti `tuple` per verificarne l'uguaglianza.  
  
```  
template <class T1, class T2, ..., class TN,  
    class U1, class U2, ..., class UN>  
bool operator==(const tuple<T1, T2, ..., TN>& tpl1,  
    const tuple<U1, U2, ..., UN>& tpl2);
```  
  
### <a name="parameters"></a>Parametri  
 `TN`  
 Tipo dell'ennesimo elemento tupla.  
  
### <a name="remarks"></a>Note  
 La funzione restituisce true quando `N` è 0; in caso contrario, restituisce `get<0>(tpl1) == get<0>(tpl2) && get<1>(tpl1) == get<1>(tpl2) && ... && get<N - 1>(tpl1) == get<N - 1>(tpl2)`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__tuple__operator_eq.cpp   
// compile with: /EHsc   
#include <tuple>   
#include <iostream>   
  
typedef std::tuple<int, double, int, double> Mytuple;   
int main() {   
    Mytuple c0(0, 1, 2, 3);   
  
// display contents " 0 1 2 3"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
    Mytuple c1 = std::make_tuple(4, 5, 6, 7);   
  
// display contents " 4 5 6 7"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
// display results of comparisons   
    std::cout << std::boolalpha << " " << (c0 == c0);   
    std::cout << std::endl;   
    std::cout << std::boolalpha << " " << (c0 == c1);   
    std::cout << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
0 1 2 3  
0 1 2 3  
true  
false  
```  
  
##  <a name="op_gt"></a>  operator&gt;  
 Confronta oggetti `tuple` per verificare qual è il maggiore.  
  
```  
template <class T1, class T2, ..., class TN,  
    class U1, class U2, ..., class UN>  
bool operator>(const tuple<T1, T2, ..., TN>& tpl1,  
    const tuple<U1, U2, ..., UN>& tpl2);
```  
  
### <a name="parameters"></a>Parametri  
 `TN`  
 Tipo dell'ennesimo elemento tupla.  
  
### <a name="remarks"></a>Note  
 La funzione restituisce `tpl2 < tpl1`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__tuple__operator_gt.cpp   
// compile with: /EHsc   
#include <tuple>   
#include <iostream>   
  
typedef std::tuple<int, double, int, double> Mytuple;   
int main() {   
    Mytuple c0(0, 1, 2, 3);   
  
// display contents " 0 1 2 3"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
    Mytuple c1 = std::make_tuple(4, 5, 6, 7);   
  
// display contents " 4 5 6 7"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
// display results of comparisons   
    std::cout << std::boolalpha << " " << (c0 > c0);   
    std::cout << std::endl;   
    std::cout << std::boolalpha << " " << (c1 > c0);   
    std::cout << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
0 1 2 3  
0 1 2 3  
false  
true  
```  
  
##  <a name="op_gt_eq"></a>  operator&gt;=  
 Confronta oggetti `tuple` per verificare se sono uguali o stabilire qual è il maggiore.  
  
```  
template <class T1, class T2, ..., class TN,  
    class U1, class U2, ..., class UN>  
bool operator>=(const tuple<T1, T2, ..., TN>& tpl1,  
    const tuple<U1, U2, ..., UN>& tpl2);
```  
  
### <a name="parameters"></a>Parametri  
 `TN`  
 Tipo dell'ennesimo elemento tupla.  
  
### <a name="remarks"></a>Note  
 La funzione restituisce `!(tpl1 < tpl2)`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__tuple__operator_ge.cpp   
// compile with: /EHsc   
#include <tuple>   
#include <iostream>   
  
typedef std::tuple<int, double, int, double> Mytuple;   
int main() {   
    Mytuple c0(0, 1, 2, 3);   
  
// display contents " 0 1 2 3"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
    Mytuple c1 = std::make_tuple(4, 5, 6, 7);   
  
// display contents " 4 5 6 7"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
// display results of comparisons   
    std::cout << std::boolalpha << " " << (c0 >= c0);   
    std::cout << std::endl;   
    std::cout << std::boolalpha << " " << (c0 >= c1);   
    std::cout << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
0 1 2 3  
0 1 2 3  
true  
false  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<tuple>](../standard-library/tuple.md)

