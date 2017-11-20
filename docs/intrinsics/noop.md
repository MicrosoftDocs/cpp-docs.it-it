---
title: NOOP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- __noop_cpp
- __noop
dev_langs: C++
helpviewer_keywords: __noop keyword [C++]
ms.assetid: 81ac6e97-7bf8-496b-b3c4-fd02837573e5
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7bdd595ac7fb70ef00865485a38e9d11cfd0181c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="noop"></a>__noop
**Sezione specifica Microsoft**  
  
 Il `__noop` intrinseco specifica che una funzione deve essere ignorata e analizzare l'elenco di argomenti, ma nessun codice generato per gli argomenti. Serve per l'utilizzo nelle funzioni globali di debug che accettano un numero variabile di argomenti.  
  
 Il compilatore converte il `__noop` intrinseci su 0 in fase di compilazione.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato come è possibile usare `__noop`.  
  
```  
// compiler_intrinsics__noop.cpp  
// compile with or without /DDEBUG  
#include <stdio.h>  
  
#if DEBUG  
   #define PRINT   printf_s  
#else  
   #define PRINT   __noop  
#endif  
  
int main() {  
   PRINT("\nhello\n");  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave](../cpp/keywords-cpp.md)