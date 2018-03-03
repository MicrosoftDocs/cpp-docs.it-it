---
title: Compilatore (livello 1) Avviso C4090 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4090
dev_langs:
- C++
helpviewer_keywords:
- C4090
ms.assetid: baad469d-23d4-45aa-ad9c-305b32d61e9a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 81506e59243cd8ec17087af6a06391ff097ab05d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4090"></a>Compilatore (livello 1) Avviso C4090
'operation': qualificatori 'modificatore' differenti  
  
 Una variabile utilizzata in un'operazione è definita con un modificatore di tipo specificato che ne impedisce la modifica senza rilevamento dal compilatore. L'espressione viene compilato senza modifiche.  
  
 Questo avviso può essere generato quando un puntatore a un **const** o `volatile` elemento è assegnato a un puntatore non è dichiarato come puntatore a **const** o `volatile`.  
  
 Questo avviso viene generato per i programmi C. In un programma C++, il compilatore genera un errore: [C2440](../../error-messages/compiler-errors-1/compiler-error-c2440.md).  
  
 L'esempio seguente genera l'errore C4090:  
  
```  
// C4090.c  
// compile with: /W1  
int *volatile *p;  
int *const *q;  
int **r;  
  
int main() {  
   p = q;   // C4090  
   p = r;  
   q = p;   // C4090  
   q = r;  
   r = p;   // C4090  
   r = q;   // C4090  
}  
```