---
title: Struttura duration_values | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- chrono/std::chrono::duration_values
dev_langs:
- C++
ms.assetid: 7f66d2e3-1faf-47c3-b47e-08f2a87f20e8
caps.latest.revision: 13
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
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 8b0c02d4edc3a460f166cb65b312ef78337d403f
ms.lasthandoff: 02/24/2017

---
# <a name="durationvalues-structure"></a>Struttura duration_values
Offre valori specifici per `Rep` parametro di modello [duration](../standard-library/duration-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Rep>  
struct duration_values;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[duration_values::max](#duration_values__max_method)|Statico. Specifica il limite superiore per un valore di tipo `Rep`.|  
|[duration_values::min](#duration_values__min_method)|Statico. Specifica il limite inferiore per un valore di tipo `Rep`.|  
|[duration_values::zero](#duration_values__zero_method)|Statico. Restituisce `Rep(0)`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** chrono  
  
 **Spazio dei nomi:**std::chrono  
  
##  <a name="a-namedurationvaluesmaxmethoda--durationvaluesmax"></a><a name="duration_values__max_method"></a>  duration_values::max  
 Metodo statico che restituisce il limite superiore dei valori di tipo `Ref`.  
  
```  
static constexpr Rep max();
```  
  
### <a name="return-value"></a>Valore restituito  
 In effetti, restituisce `numeric_limits<Rep>::max()`.  
  
### <a name="remarks"></a>Note  
 Quando `Rep` è un tipo definito dall'utente, il valore restituito deve essere maggiore di [duration_values::zero](#duration_values__zero_method).  
  
##  <a name="a-namedurationvaluesminmethoda--durationvaluesmin"></a><a name="duration_values__min_method"></a>  duration_values::min  
 Metodo statico che restituisce il limite inferiore dei valori di tipo `Ref`.  
  
```  
static constexpr Rep min();
```  
  
### <a name="return-value"></a>Valore restituito  
 In effetti, restituisce `numeric_limits<Rep>::lowest()`.  
  
### <a name="remarks"></a>Note  
 Quando `Rep` è un tipo definito dall'utente, il valore restituito deve essere inferiore o uguale a [duration_values::zero](#duration_values__zero_method).  
  
##  <a name="a-namedurationvalueszeromethoda--durationvalueszero"></a><a name="duration_values__zero_method"></a>  duration_values::zero  
 Restituisce `Rep(0)`.  
  
```  
static constexpr Rep zero();
```  
  
### <a name="remarks"></a>Note  
 Quando `Rep` è un tipo definito dall'utente, il valore restituito deve rappresentare l’infinito additivo.  
  
## <a name="see-also"></a>Vedere anche  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)  (Riferimento file di intestazione)  
 [\<chrono>](../standard-library/chrono.md)


