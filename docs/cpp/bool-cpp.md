---
title: bool (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2af648b2b93d2d01eaf66f5b642b6514063577d6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="bool-c"></a>bool (C++)

Questa parola chiave è un tipo incorporato. Una variabile di questo tipo può avere valori [true](../cpp/true-cpp.md) e [false](../cpp/false-cpp.md). Le espressioni condizionali dispongono del tipo `bool` e hanno pertanto valori di tipo `bool`. Ad esempio, `i!=0` dispone ora di **true** o **false** a seconda del valore di `i`.  

**Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): l'operando di un suffisso o prefisso incremento o decremento operatore potrebbe non essere di tipo **bool**. Condizione in altre parole, una variabile **b** di tipo **bool**, queste espressioni non sono più consentite:

```cpp
    b++;
    ++b;
    b--;
    --b;
```
  
I valori **true** e **false** hanno la relazione seguente:  
  
```cpp  
!false == true  
!true == false  
```  
  
Nell'istruzione seguente:  
  
```cpp  
if (condexpr1) statement1;   
```  
  
Se `condexpr1` è **true**, `statement1` viene sempre eseguita; se `condexpr1` è **false**, `statement1` non viene mai eseguito.  
  
Quando un suffisso o prefisso **++** operatore viene applicato a una variabile di tipo **bool**, la variabile è impostata su **true**. 
**Visual Studio 2017 15.3 e versioni successive**: operatore + + per **bool** è stato rimosso dal linguaggio e non è più supportata.

Il prefisso o suffisso **--** operatore non può essere applicato a una variabile di questo tipo.  
  
 Il **bool** tipo contribuisce alle promozioni integrali. Un r-value di tipo **bool** può essere convertito in un r-value di tipo **int**, con **false** che diventa zero e **true** che diventa uno. Come un tipo distinto **bool** partecipa alla risoluzione dell'overload.  
  
## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Tipi fondamentali](../cpp/fundamental-types-cpp.md)<br/>
