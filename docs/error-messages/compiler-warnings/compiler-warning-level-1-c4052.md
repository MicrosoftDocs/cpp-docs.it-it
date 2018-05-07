---
title: Compilatore avviso (livello 1) C4052 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4052
dev_langs:
- C++
helpviewer_keywords:
- C4052
ms.assetid: f9955421-16ab-46e5-8f9d-bf1639a519ef
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c5c937e602f14789419f6b124034503c127f6dc2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4052"></a>Avviso del compilatore (livello 1) C4052
dichiarazioni di funzione differenti. Una delle due contiene argomenti variabili  
  
 Una dichiarazione delle funzione non contiene gli argomenti della variabile. Ignorato.  
  
 L'esempio seguente genera l'errore C4052:  
  
```  
// C4052.c  
// compile with: /W4 /c  
int f();  
int f(int i, ...);   // C4052  
```