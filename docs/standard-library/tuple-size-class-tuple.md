---
title: Classe tuple_size | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- tuple_size
- std::tuple_size
- utility/std::tuple_size
dev_langs:
- C++
helpviewer_keywords:
- tuple_size Class
ms.assetid: 73852fc5-eb68-41f1-8379-465cedc2314a
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 41b445ceeeb1f37ee9873cb55f62d30d480d8718
ms.openlocfilehash: f0ae102852f1db46b68d86438e20ce9645535d19
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="tuplesize-class"></a>Classe tuple_size
Restituisce il numero di elementi contenuti in un `tuple` .  
  
## <a name="syntax"></a>Sintassi  
  
```  
// TEMPLATE STRUCT tuple_size  
template <class Tuple>  
   struct tuple_size;  
  
// number of elements in array  
template <class Elem, size_t Size>  
   struct tuple_size<array<Elem, Size>>  
      : integral_constant<size_t, Size>; 
  
// size of pair
template <class T1, class T2>
   struct tuple_size<pair<T1, T2>> 
      : integral_constant<size_t, 2>

// size of tuple  
template <class... Types>  
   struct tuple_size<tuple<Types...>>  
      : integral_constant<size_t, sizeof...(Types)>;  
  
// size of const tuple  
template <class Tuple>  
   struct tuple_size<const Tuple>;  
  
// size of volatile tuple  
template <class Tuple>  
   struct tuple_size<volatile Tuple>;  
  
// size of const volatile tuple  
template <class Tuple>  
   struct tuple_size<const volatile Tuple>;   
```  
  
#### <a name="parameters"></a>Parametri  
*Tuple*  
Tipo della tupla. 
  
*Elem*  
Tipo degli elementi della matrice. 
  
*Size*  
Dimensione della matrice. 
  
*T1*  
Tipo del primo membro della coppia. 
  
*T2*  
Tipo del secondo membro della coppia. 
  
*Tipi*  
Tipo degli elementi della tupla. 
  
  
## <a name="remarks"></a>Note  
La classe modello include un membro `value` che è un'espressione costante integrale il cui valore è l'estensione del tipo di tupla `Tuple`.  
  
La specializzazione modello per le matrici include un membro `value` che è un'espressione costante integrale di valore `Size`, corrispondente alla dimensione della matrice.  
  
La specializzazione modello per la coppia include un membro `value` che è un'espressione costante integrale di valore 2.  
  
## <a name="example"></a>Esempio  
  
```cpp  
#include <tuple>   
#include <iostream>  
  
using namespace std;  
  
typedef tuple<int, double, int, double> MyTuple;  
int main()  
{  
    MyTuple c0(0, 1.5, 2, 3.7);  
  
    // display contents " 0 1 2 3"   
    cout << " " << get<0>(c0);  
    cout << " " << get<1>(c0);  
    cout << " " << get<2>(c0);  
    cout << " " << get<3>(c0) << endl;  
  
    // display size " 4"   
    cout << " " << tuple_size<MyTuple>::value << endl;  
}  
```  
  
```Output  
 0 1.5 2 3.7  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<tuple>  
 **Intestazione:** \<array> (per la specializzazione di matrice)  
 **Intestazione:** \<utility> (per la specializzazione di coppia)  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [\<tuple>](../standard-library/tuple.md)   
 [tuple](../standard-library/tuple-class.md)  
 [Classe tuple_element](../standard-library/tuple-element-class-tuple.md)

