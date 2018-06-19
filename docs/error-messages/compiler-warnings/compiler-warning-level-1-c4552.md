---
title: Compilatore avviso (livello 1) C4552 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4552
dev_langs:
- C++
helpviewer_keywords:
- C4552
ms.assetid: ebbbb5ee-1c19-45bd-b386-41a19630fc76
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a3b58d33286163050db533fed00d27abe8903e9f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33281128"
---
# <a name="compiler-warning-level-1-c4552"></a>Avviso del compilatore (livello 1) C4552
'operator': operatore non ha effetto. Previsto operatore con effetto collaterale  
  
 Se un'istruzione di espressione ha un operatore senza effetti collaterali di inizio dell'espressione, si tratta probabilmente di un errore.  
  
 Per eseguire l'override di questo avviso, inserire l'espressione tra parentesi.  
  
 L'esempio seguente genera l'errore C4552:  
  
```  
// C4552.cpp  
// compile with: /W1  
int main() {  
   int i, j;  
   i + j;   // C4552  
   // try the following line instead  
   // (i + j);  
}  
```