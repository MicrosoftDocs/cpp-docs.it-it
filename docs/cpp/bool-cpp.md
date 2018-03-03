---
title: bool (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- bool_cpp
- __BOOL_DEFINED
dev_langs:
- C++
helpviewer_keywords:
- bool keyword [C++]
- __BOOL_DEFINED macro
ms.assetid: 9abed3f2-d21c-4eb4-97c5-716342e613d8
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 564d2f4849d1725d46d92562e2ce75b2ea2e2d44
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="bool-c"></a>bool (C++)
Questa parola chiave è un tipo incorporato. Una variabile di questo tipo può avere valori [true](../cpp/true-cpp.md) e [false](../cpp/false-cpp.md). Le espressioni condizionali dispongono del tipo `bool` e hanno pertanto valori di tipo `bool`. Ad esempio, `i!=0` dispone ora di **true** o **false** a seconda del valore di `i`.  

**Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): l'operando di un suffisso o prefisso incremento o decremento operatore non può essere di tipo `bool`. 
  
 I valori **true** e **false** hanno la relazione seguente:  
  
```  
!false == true  
!true == false  
```  
  
 Nell'istruzione seguente:  
  
```  
if (condexpr1) statement1;   
```  
  
 Se `condexpr1` è **true**, `statement1` viene sempre eseguita; se `condexpr1` è **false**, `statement1` non viene mai eseguito.  
  
 Quando un suffisso o prefisso `++` operatore viene applicato a una variabile di tipo `bool`, la variabile è impostata su **true**. 
**Visual Studio 2017 15.3 e versioni successive**: operatore + + per bool è stato rimosso dal linguaggio e non è più supportata.

L'operatore di suffisso o prefisso `--` non può essere applicato a una variabile di questo tipo.  
  
 Il tipo `bool` contribuisce alle promozioni integrali. Un r-value di tipo `bool` può essere convertito in un r-value di tipo `int`, con **false** diventa zero e **true** diventa uno. Come tipo distinto, `bool` partecipa alla risoluzione dell'overload.  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Tipi fondamentali](../cpp/fundamental-types-cpp.md)