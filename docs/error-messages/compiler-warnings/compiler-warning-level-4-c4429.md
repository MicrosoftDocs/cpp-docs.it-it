---
title: Compilatore avviso (livello 4) C4429 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4429
dev_langs:
- C++
helpviewer_keywords:
- C4429
ms.assetid: a3e4cf1f-a869-4e47-834a-850c21eb5297
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 00d4812fb1eefdd4364376288f063a6bf8b5dddf
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33293715"
---
# <a name="compiler-warning-level-4-c4429"></a>Avviso del compilatore (livello 4) C4429
possibili incompleto o formato non corretto a nomi di caratteri universali  
  
 Il compilatore ha rilevato una sequenza di caratteri che può essere un nome di carattere universale non corretto. È un nome di carattere universale `\u` seguito da quattro cifre esadecimali, o `\U` seguiti da otto cifre esadecimali.  
  
 L'esempio seguente genera l'errore C4429:  
  
```  
// C4429.cpp  
// compile with: /W4 /WX  
int \ug0e4 = 0;   // C4429  
// Try the following line instead:  
// int \u00e4 = 0;   // OK, a well-formed universal character name.  
```