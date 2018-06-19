---
title: Compilatore avviso (livello 1) C4237 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4237
dev_langs:
- C++
helpviewer_keywords:
- C4237
ms.assetid: f2e86c4b-80d8-460e-9429-83c5f3f5d7ca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3dfefb2dc7dd04f2334b2b7d222153d5ee351ae2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33277579"
---
# <a name="compiler-warning-level-1-c4237"></a>Avviso del compilatore (livello 1) C4237
parola chiave' keyword ' non è ancora supportato è riservato per utilizzi futuri  
  
 Una parola chiave della specifica C++ non è implementata nel compilatore Visual C++, ma la parola chiave non è disponibile come un simbolo definito dall'utente.  
  
 L'esempio seguente genera l'errore C4237:  
  
```  
// C4237.cpp  
// compile with: /W1 /c  
int export;   // C4237  
```