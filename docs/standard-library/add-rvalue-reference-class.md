---
title: Classe add_rvalue_reference | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- type_traits/std::add_rvalue_reference
- add_rvalue_reference
dev_langs:
- C++
helpviewer_keywords:
- add_rvalue_reference Class
ms.assetid: 76b0cb7c-1031-45d0-b409-f03ab0297580
caps.latest.revision: 11
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
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: faa8014788d12841df6a0822ec7fe379198f06d1
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="addrvaluereference-class"></a>Classe add_rvalue_reference
Crea un tipo di riferimento rvalue del parametro del modello, se si tratta di un tipo di oggetto o funzione. In caso contrario, a causa della semantica di compressione dei riferimenti, il tipo è lo stesso del parametro di modello.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <class T>
struct add_rvalue_reference;

template <class T>
using add_rvalue_reference_t = typename add_rvalue_reference<T>::type;
```  
  
#### <a name="parameters"></a>Parametri  
 T  
 Tipo da modificare.  
  
## <a name="remarks"></a>Note  
 La classe `add_rvalue_reference` ha un membro denominato `type` che è un alias del tipo di un riferimento rvalue al parametro di modello `T`. La semantica di compressione dei riferimenti implica che, per i tipi non oggetto e non funzione `T`, `T&&` è `T`. Ad esempio, quando `T` è un tipo di riferimento lvalue, `add_rvalue_reference<T>::type` è il tipo di riferimento lvalue, non un riferimento rvalue.  
  
 Per comodità, <type_traits> definisce un modello di helper, `add_rvalue_reference_t`, che è alias del membro `type` di `add_rvalue_reference`.  
  
## <a name="example"></a>Esempio  
 Questo esempio di codice usa static_assert per mostrare come i tipi di riferimento rvalue vengono creati usando `add_rvalue_reference` e `add_rvalue_reference_t` e come il risultato di `add_rvalue_reference` in un tipo di riferimento lvalue non è un riferimento rvalue, ma viene compresso nel tipo di riferimento lvalue.  
  
```cpp  
// ex_add_rvalue_reference.cpp  
// Build by using: cl /EHsc /W4 ex_add_rvalue_reference.cpp  
#include <type_traits>   
#include <iostream>   
#include <string>  
  
using namespace std;  
int main()  
{  
    static_assert(is_same<add_rvalue_reference<string>::type, string&&>::value,   
        "Expected add_rvalue_reference_t<string> to be string&&");  
    static_assert(is_same<add_rvalue_reference_t<string*>, string*&&>::value,   
        "Expected add_rvalue_reference_t<string*> to be string*&&");  
    static_assert(is_same<add_rvalue_reference<string&>::type, string&>::value,   
        "Expected add_rvalue_reference_t<string&> to be string&");  
    static_assert(is_same<add_rvalue_reference_t<string&&>, string&&>::value,   
        "Expected add_rvalue_reference_t<string&&> to be string&&");  
    cout << "All static_assert tests of add_rvalue_reference passed." << endl;  
    return 0;  
}  
  
/*Output:  
All static_assert tests of add_rvalue_reference passed.  
*/  
```  
  
## <a name="requirements"></a>Requisiti  
 Intestazione: <type_traits> Spazio dei nomi: std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Classe add_lvalue_reference](../standard-library/add-lvalue-reference-class.md)   
 [Classe is_rvalue_reference](../standard-library/is-rvalue-reference-class.md)

