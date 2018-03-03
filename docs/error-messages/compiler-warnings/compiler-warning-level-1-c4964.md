---
title: Compilatore avviso (livello 1) C4964 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4964
dev_langs:
- C++
helpviewer_keywords:
- C4964
ms.assetid: b89c9274-8a92-4b7c-aa30-3fbb1b68ac73
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b1c7483b82c363898bc16ed5fc7d48f9cf0b35c7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4964"></a>Avviso del compilatore (livello 1) C4964
Nessuna opzione di ottimizzazione specificata; informazioni sul profilo non verranno raccolti  
  
 [/GL](../../build/reference/gl-whole-program-optimization.md) e [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) sono state specificate, ma non le ottimizzazioni sono stati richiesti in modo che non verranno generati alcun file. pgc e, pertanto, non saranno possibile eseguire alcuna ottimizzazione PGO.  
  
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