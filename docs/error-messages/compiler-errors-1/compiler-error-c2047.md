---
title: Errore del compilatore C2047 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2047
dev_langs:
- C++
helpviewer_keywords:
- C2047
ms.assetid: 686a5a81-3857-4753-84a0-5c2e7149cbee
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 16aed5b8100a3591fcdfbb4451a76db51a5f3b4d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33164479"
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