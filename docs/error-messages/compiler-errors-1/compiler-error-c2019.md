---
title: Errore del compilatore C2019 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2019
dev_langs:
- C++
helpviewer_keywords:
- C2019
ms.assetid: 4f37b1e1-9eca-418f-a4c3-141e8512d7b6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b8f9f36bef278edc4c40c732b86c012180535f74
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2019"></a>Errore del compilatore C2019
prevista direttiva per il preprocessore, trovato 'character'  
  
 Il carattere segue un `#` accesso ma non è la prima lettera di una direttiva del preprocessore.  
  
 L'esempio seguente genera l'errore C2019:  
  
```  
// C2019.cpp  
#!define TRUE 1   // C2019  
```  
  
 Possibile soluzione:  
  
```  
// C2019b.cpp  
// compile with: /c  
#define TRUE 1  
```