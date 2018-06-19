---
title: Compilatore avviso (livello 1) C4717 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4717
dev_langs:
- C++
helpviewer_keywords:
- C4717
ms.assetid: 5ef3c6c7-8599-4714-a973-0f5b69cdab3c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fa953d8d41003ff53e721671845c1ddee26da640
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33282428"
---
# <a name="compiler-warning-level-1-c4717"></a>Avviso del compilatore (livello 1) C4717
'function': funzione ricorsiva su tutti i percorsi di controllo, provocherà un overflow dello stack di runtime  
  
 Ogni percorso di una funzione contiene una chiamata alla funzione. Poiché non è possibile terminare la funzione senza prima chiamare se stesso in modo ricorsivo, la funzione non terminerà mai.  
  
 L'esempio seguente genera l'errore C4717:  
  
```  
// C4717.cpp  
// compile with: /W1 /c  
// C4717 expected  
int func(int x) {  
   if (x > 1)  
      return func(x - 1); // recursive call  
   else {  
      int y = func(0) + 1; // recursive call  
      return y;  
   }  
}  
  
int main(){  
   func(1);  
}  
```