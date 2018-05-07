---
title: Compilatore avviso (livello 4) C4212 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4212
dev_langs:
- C++
helpviewer_keywords:
- C4212
ms.assetid: df781ea1-182d-4f9f-9a31-55b6ce80c711
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cb70cf045a1cc563e4eb009ed00ffe82be812b0b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4212"></a>Avviso del compilatore (livello 4) C4212
utilizzata estensione non standard: dichiarazione di funzione utilizzato i puntini di sospensione  
  
 Il prototipo di funzione è un numero variabile di argomenti. Non è la definizione di funzione.  
  
 L'esempio seguente genera l'errore C4212:  
  
```  
// C4212.c  
// compile with: /W4 /Ze /c  
void f(int , ...);  
void f(int i, int j) {}  
```