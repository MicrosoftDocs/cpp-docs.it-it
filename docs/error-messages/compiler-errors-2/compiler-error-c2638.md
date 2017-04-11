---
title: Errore del compilatore C2638 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2638
dev_langs:
- C++
helpviewer_keywords:
- C2638
ms.assetid: 9d4275e8-406d-455e-afee-3a37799230e0
caps.latest.revision: 8
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
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: f99b518b19c884177bee363edd126011b1fe1293
ms.lasthandoff: 04/04/2017

---
# <a name="compiler-error-c2638"></a>Errore del compilatore C2638
'identifier': based non valido di modificatore su un puntatore a membro  
  
 Il `__based` modificatore non può essere utilizzato per i puntatori ai membri.  
  
 L'esempio seguente genera l'errore C2638:  
  
```  
// C2638.cpp  
void *a;  
  
class C {  
public:  
   int i;  
   int j;  
   int func();  
};  
int __based (a) C::* cpi = &C::i;  // C2638  
int (__based (a) C::* cpf)() = &C::func; // c2638  
```
