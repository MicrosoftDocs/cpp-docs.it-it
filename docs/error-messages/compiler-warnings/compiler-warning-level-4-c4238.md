---
title: Compilatore avviso (livello 4) C4238 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4238
dev_langs:
- C++
helpviewer_keywords:
- C4238
ms.assetid: 5d4051d3-7b0f-43ea-8c8d-d194bfdceb71
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8e8e52868d97d31243f92307e9bfd158c818c2f8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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