---
title: Errore del compilatore C2232 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2232
dev_langs:
- C++
helpviewer_keywords:
- C2232
ms.assetid: 76f302b7-30a7-4a81-9a39-b4edde33b54c
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 570d543c5dfa81fda3d520d2614c708e97c4bc2e
ms.lasthandoff: 04/01/2017

---
# <a name="compiler-error-c2232"></a>Errore del compilatore C2232
'->': operando sinistro ha 'il tipo class-key'. utilizzare  
  
 L'operando a sinistra dell'operatore `->` non è un puntatore. Utilizzare l'operatore punto (.) per una classe, struttura o unione.  
  
 L'esempio seguente genera l'errore C2232:  
  
```  
// C2232.c  
struct X {  
    int member;  
} x, *px;  
int main() {  
    x->member = 0;   // C2232, x is not a pointer  
  
    px->member = 0;  
    x.member = 0;  
}  
```
