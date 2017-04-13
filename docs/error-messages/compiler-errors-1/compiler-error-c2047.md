---
title: Errore del compilatore C2047 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2047
dev_langs:
- C++
helpviewer_keywords:
- C2047
ms.assetid: 686a5a81-3857-4753-84a0-5c2e7149cbee
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
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: a32d4d9e9d7082b2d32a8b67bd3996b312f42556
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2047"></a>Errore del compilatore C2047
default non valido  
  
 La parola chiave `default` può trovarsi solo all'interno di un'istruzione `switch` .  
  
 L'esempio seguente genera l'errore C2047:  
  
```  
// C2047.cpp  
int main() {  
   int i = 0;  
   default:   // C2047  
   switch(i) {  
      case 0:  
      break;  
   }  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2047b.cpp  
int main() {  
   int i = 0;  
   switch(i) {  
      case 0:  
      break;  
      default:  
      break;  
   }  
}  
```
