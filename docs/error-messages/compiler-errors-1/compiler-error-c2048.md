---
title: Errore del compilatore C2048 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2048
dev_langs:
- C++
helpviewer_keywords:
- C2048
ms.assetid: 44704726-85fc-42f0-afb9-194df8c4ca7c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 33d99b54300d3676039b2f2bda24b9bab302027e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33166091"
---
# <a name="compiler-error-c2048"></a>Errore del compilatore C2048
più di un valore predefinito  
  
 Un'istruzione `switch` contiene più etichette `default` . Eliminare una delle etichette `default` per risolvere l'errore.  
  
 L'esempio seguente genera l'errore C2048:  
  
```  
// C2048.cpp  
int main() {  
   int a = 1;  
   switch (a) {  
      case 1:  
         a = 0;  
      default:  
         a = 2;  
      default:   // C2048  
         a = 3;  
   }  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2048b.cpp  
int main() {  
   int a = 1;  
   switch (a) {  
      case 1:  
         a = 0;  
      default:  
         a = 2;  
   }  
}  
```