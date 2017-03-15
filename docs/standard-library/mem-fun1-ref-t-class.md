---
title: Classe mem_fun1_ref_t | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- xfunctional/std::mem_fun1_ref_t
- std::mem_fun1_ref_t
- mem_fun1_ref_t
- std.mem_fun1_ref_t
dev_langs:
- C++
helpviewer_keywords:
- mem_fun1_ref_t class
ms.assetid: 7d6742f6-19ba-4523-b3c8-0e5b8f11464f
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
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
translationtype: Machine Translation
ms.sourcegitcommit: 2d05749ba2837a3879c91886b9266de47dd2ece6
ms.openlocfilehash: 32430ca2b66fc9772c01a29451986403c8d1d4b0
ms.lasthandoff: 02/24/2017

---
# <a name="memfun1reft-class"></a>Classe mem_fun1_ref_t
Classe di adattatori che consente a una funzione membro **non_const** che accetta un singolo argomento di essere chiamata come oggetto funzione binaria se inizializzata con un argomento di riferimento.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Result, class Type, class Arg>
class mem_fun1_ref_t : public binary_function<Type, Arg, Result> {
    explicit mem_fun1_ref_t(
    Result (Type::* _Pm)(Arg));

    Result operator()(
    Type& left,
    Arg right) const;

 };
```  
  
#### <a name="parameters"></a>Parametri  
 `_Pm`  
 Puntatore alla funzione membro della classe **Type** da convertire in un oggetto funzione.  
  
 `left`  
 Oggetto su cui viene chiamata la funzione membro `_Pm`.  
  
 `right`  
 Argomento assegnato a `_Pm`.  
  
## <a name="return-value"></a>Valore restituito  
 Funzione binaria adattabile.  
  
## <a name="remarks"></a>Note  
 La classe modello archivia una copia di `_Pm`, che deve essere un puntatore a una funzione membro della classe **Type**, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce ( **left**.\* `_Pm`)( **right**).  
  
## <a name="example"></a>Esempio  
 Il costruttore di `mem_fun1_ref_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun_ref`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref_function).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<functional>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)  (Sicurezza dei thread nella libreria standard C++)  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




