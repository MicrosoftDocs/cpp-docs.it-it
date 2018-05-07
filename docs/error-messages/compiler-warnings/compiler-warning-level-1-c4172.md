---
title: Compilatore (livello 1) Avviso C4172 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4172
dev_langs:
- C++
helpviewer_keywords:
- C4172
ms.assetid: a8d2bf65-d8b1-4fe3-8340-a223d7e7fde6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 746442638820d0c81144611a678996dc4c8483b0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4172"></a>Compilatore (livello 1) Avviso C4172
Restituisce l'indirizzo della variabile locale o temporanei  
  
 Una funzione restituisce l'indirizzo di un oggetto temporaneo o di variabile locale. Le variabili locali e gli oggetti temporanei vengono eliminati definitivamente quando una funzione viene restituito, pertanto l'indirizzo restituito non è valido.  
  
 Riprogettare la funzione in modo che restituisca l'indirizzo di un oggetto locale.  
  
 L'esempio seguente genera l'errore C4172:  
  
```  
// C4172.cpp  
// compile with: /W1 /LD  
float f = 10;  
  
const double& bar() {  
// try the following line instead  
// const float& bar() {  
   return f;   // C4172  
}  
```