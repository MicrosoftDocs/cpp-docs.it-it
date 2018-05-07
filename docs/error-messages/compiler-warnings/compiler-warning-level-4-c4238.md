---
title: Compilatore avviso (livello 4) C4238 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4238
dev_langs:
- C++
helpviewer_keywords:
- C4238
ms.assetid: 5d4051d3-7b0f-43ea-8c8d-d194bfdceb71
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 06dbec01da8d1b47cb7b93c90a22ae5266e9b4c8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4238"></a>Avviso del compilatore (livello 4) C4238
utilizzata estensione non standard: rvalue di classe utilizzato come lvalue  
  
 Per garantire la compatibilità con le versioni precedenti di Visual C++, le estensioni Microsoft (**/Ze**) consentono di utilizzare un tipo di classe come rvalue in un contesto che in modo implicito o esplicito ne accetta l'indirizzo. In alcuni casi, come nell'esempio seguente, questo può essere pericoloso.  
  
## <a name="example"></a>Esempio  
  
```  
// C4238.cpp  
// compile with: /W4 /c  
struct C {  
   C() {}  
};  
  
C * pC = &C();   // C4238  
```  
  
 Questa procedura genera un errore in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).