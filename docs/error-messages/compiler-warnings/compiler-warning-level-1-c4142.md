---
title: Compilatore (livello 1) Avviso C4142 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4142
dev_langs:
- C++
helpviewer_keywords:
- C4142
ms.assetid: 1fdfc3dc-60a2-4f00-b133-20e400f9b7a6
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 73d3ad63aaf040b83622720040adf3a291d354e3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4142"></a>Compilatore (livello 1) Avviso C4142
ridefinizione di tipo  
  
 Un tipo viene ridefinito in modo che non ha alcun effetto sul codice generato.  
  
 Per risolvere il problema, verificare le seguenti cause possibili:  
  
-   Una funzione membro di una classe derivata presenta un tipo restituito diverso da una funzione membro corrispondente della classe di base.  
  
-   Un tipo definito con il `typedef` comando viene ridefinito utilizzando una sintassi diversa.  
  
 L'esempio seguente genera l'errore C4142:  
  
```  
// C4142.c  
// compile with: /W1  
float X2;  
X2 = 2.0 + 1.0;   // C4142  
  
int main() {  
   float X2;  
   X2 = 2.0 + 1.0;   // OK  
}  
```