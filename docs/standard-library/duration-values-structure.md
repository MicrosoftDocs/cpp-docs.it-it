---
title: Struttura duration_values | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- chrono/std::chrono::duration_values
- chrono/std::chrono::duration_values::max
- chrono/std::chrono::duration_values::min
- chrono/std::chrono::duration_values::zero
dev_langs: C++
ms.assetid: 7f66d2e3-1faf-47c3-b47e-08f2a87f20e8
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 52c88e0b536eba6265e2f968adef8096ea4ab17e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
|[max](#max)|Statico. Specifica il limite superiore per un valore di tipo `Rep`.|  
|[min](#min)|Statico. Specifica il limite inferiore per un valore di tipo `Rep`.|  
|[zero](#zero)|Statico. Restituisce `Rep(0)`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<chrono >  
  
 **Spazio dei nomi:**std::chrono  
  
##  <a name="max"></a>  duration_values::max  
 Metodo statico che restituisce il limite superiore dei valori di tipo `Ref`.  
  
```  
static constexpr Rep max();
```  
  
### <a name="return-value"></a>Valore restituito  
 In effetti, restituisce `numeric_limits<Rep>::max()`.  
  
### <a name="remarks"></a>Note  
 Quando `Rep` è un tipo definito dall'utente, il valore restituito deve essere maggiore di [duration_values::zero](#zero).  
  
##  <a name="min"></a>  duration_values::min  
 Metodo statico che restituisce il limite inferiore dei valori di tipo `Ref`.  
  
```  
static constexpr Rep min();
```  
  
### <a name="return-value"></a>Valore restituito  
 In effetti, restituisce `numeric_limits<Rep>::lowest()`.  
  
### <a name="remarks"></a>Note  
 Quando `Rep` è un tipo definito dall'utente, il valore restituito deve essere inferiore o uguale a [duration_values::zero](#zero).  
  
##  <a name="zero"></a>  duration_values::zero  
 Restituisce `Rep(0)`.  
  
```  
static constexpr Rep zero();
```  
  
### <a name="remarks"></a>Note  
 Quando `Rep` è un tipo definito dall'utente, il valore restituito deve rappresentare l’infinito additivo.  
  
## <a name="see-also"></a>Vedere anche  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)  (Riferimento file di intestazione)  
 [\<chrono>](../standard-library/chrono.md)

