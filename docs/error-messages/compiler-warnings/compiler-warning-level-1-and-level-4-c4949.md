---
title: Compilatore avviso (livello 1 e livello 4) C4949 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4949
dev_langs:
- C++
helpviewer_keywords:
- C4949
ms.assetid: 34f45a05-c115-49cb-9f67-0bd4f0735d9b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3dbf80f85db7334d4bcb46402851cac601d258f2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-and-level-4-c4949"></a>Avviso del compilatore (livelli 1 e 4) C4949
pragma 'managed' e 'unmanaged' sono significativi solo se compilati con ' / /CLR [: opzione]'  
  
 Il compilatore ignora la [gestiti](../../preprocessor/managed-unmanaged.md) e non gestita di direttive pragma se il codice sorgente non è stato compilato con [/clr](../../build/reference/clr-common-language-runtime-compilation.md). Si tratta di un avviso informativo.  
  
 L'esempio seguente genera l'errore C4949:  
  
```  
// C4949.cpp  
// compile with: /LD /W1  
#pragma managed   // C4949  
```  
  
 Quando **#pragma non gestita** viene usato senza **/clr**, C4949 è un avviso di livello 4.  
  
 L'esempio seguente genera l'errore C4949:  
  
```  
// C4949b.cpp  
// compile with: /LD /W4  
#pragma unmanaged   // C4949  
```