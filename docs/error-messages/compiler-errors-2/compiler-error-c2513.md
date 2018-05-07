---
title: Errore del compilatore C2513 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2513
dev_langs:
- C++
helpviewer_keywords:
- C2513
ms.assetid: ab5b21d3-61e2-4df7-8eea-6f14d6ba8620
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 704e5d71301886d46c8a2ce08d7ea34ef1f8275a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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