---
title: Compilatore avviso (livello 1) C4717 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4717
dev_langs: C++
helpviewer_keywords: C4717
ms.assetid: 5ef3c6c7-8599-4714-a973-0f5b69cdab3c
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 63c67ff3bc00a62c94f82a0cf90f50ddfb9571b3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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