---
title: Errore del compilatore C2046 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2046
dev_langs:
- C++
helpviewer_keywords:
- C2046
ms.assetid: f0c8f9dd-dbd7-4c4a-8838-fde54208ec71
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 2c68f3e67fff8353fe5e4ca9881532343180a8e1
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2046"></a>Errore del compilatore C2046
case non valido  
  
 La parola chiave `case` può trovarsi solo all'interno di un'istruzione `switch` .  
  
 L'esempio seguente genera l'errore C2046:  
  
```  
// C2046.cpp  
int main() {  
   case 0:   // C2046  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2046b.cpp  
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
