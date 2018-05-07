---
title: Compilatore avviso (livello 1) C4964 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4964
dev_langs:
- C++
helpviewer_keywords:
- C4964
ms.assetid: b89c9274-8a92-4b7c-aa30-3fbb1b68ac73
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 98226b2da465d2301356939273d370d76edcb64e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4964"></a>Avviso del compilatore (livello 1) C4964
Nessuna opzione di ottimizzazione specificata; informazioni sul profilo non verranno raccolti  
  
 [/GL](../../build/reference/gl-whole-program-optimization.md) e [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) sono state specificate, ma non le ottimizzazioni sono stati richiesti in modo che non verranno generati alcun file. pgc e, pertanto, non sarà possibile alcun le ottimizzazioni PGO.  
  
 Se si desidera che il file. pgc da generare quando si esegue l'applicazione, specificare uno del [/O](../../build/reference/o-options-optimize-code.md) opzioni del compilatore.  
  
 L'esempio seguente genera l'errore C4964:  
  
```  
// C4964.cpp  
// compile with: /W1 /GL /link /ltcg:pgi  
// C4964 expected  
// Add /O2, for example, to the command line to resolve this warning.  
int main() {  
   int i;  
}  
```