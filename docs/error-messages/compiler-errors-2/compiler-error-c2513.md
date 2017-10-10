---
title: Errore del compilatore C2513 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2513
dev_langs:
- C++
helpviewer_keywords:
- C2513
ms.assetid: ab5b21d3-61e2-4df7-8eea-6f14d6ba8620
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 7eb4e7c63821f449bf9677cb5fe03c448bbbc6ee
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2513"></a>Errore del compilatore C2513
'type': nessuna variabile dichiarata prima '='  
  
 L'identificatore di tipo presente nella dichiarazione senza identificatore della variabile.  
  
 L'esempio seguente genera l'errore C2513:  
  
```  
// C2513.cpp  
int main() {  
   int = 9;   // C2513  
   int i = 9;   // OK  
}  
```  
  
 Questo errore può anche essere generato in seguito a operazioni di conformità eseguite per Visual Studio .NET 2003: inizializzazione di un typedef non è più consentito. L'inizializzazione di un typedef non è consentita dallo standard e ora genera un errore del compilatore.  
  
```  
// C2513b.cpp  
// compile with: /c  
typedef struct S {  
   int m_i;  
} S = { 1 };   // C2513  
// try the following line instead  
// } S;  
```  
  
 In alternativa, è possibile eliminare `typedef` per definire una variabile con un elenco di inizializzatori di aggregazione, ma questo non è consigliabile perché determinerà la creazione di una variabile con lo stesso nome del tipo e nascondere il nome del tipo.
