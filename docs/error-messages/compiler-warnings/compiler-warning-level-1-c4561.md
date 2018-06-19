---
title: Compilatore avviso (livello 1) C4561 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4561
dev_langs:
- C++
helpviewer_keywords:
- C4561
ms.assetid: 3a10c12c-601b-4b6c-9861-331fd022e021
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d4862d7f570faea3e362a505e67bddaf504b32de
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33280531"
---
# <a name="compiler-warning-level-1-c4561"></a>Avviso del compilatore (livello 1) C4561
fastcall' incompatibile con il ' o clr' opzione: la conversione in '\_stdcall '  
  
 Il [fastcall](../../cpp/fastcall.md) convenzione di chiamata di funzione non può essere utilizzato con il [/clr](../../build/reference/clr-common-language-runtime-compilation.md) l'opzione del compilatore. Il compilatore ignora le chiamate a `__fastcall`. Per risolvere questo problema, rimuovere le chiamate a **fastcall** o compilare senza **/clr**.  
  
 L'esempio seguente genera l'errore C4561:  
  
```  
// C4561.cpp  
// compile with: /clr /W1 /c  
// processor: x86  
void __fastcall Func(void *p);   // C4561, remove __fastcall to resolve  
```