---
title: Compilatore avviso (livello 1) C4325 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4325
dev_langs:
- C++
helpviewer_keywords:
- C4325
ms.assetid: 8127a08c-d626-481b-aa7b-04a3fdc9a9ec
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 936433987f823ae7d5d22cfd075f188dd5d4b1e4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4325"></a>Avviso del compilatore (livello 1) C4325
**gli attributi per la sezione standard '**   
 ***sezione* ' ignorato**  
  
 Non è possibile modificare gli attributi di una sezione standard. Ad esempio:  
  
```  
#pragma section(".sdata", long)  
```  
  
 Questo sovrascriverebbe il `.sdata` sezione standard che utilizza il **breve** del tipo di dati con il **lungo** tipo di dati.  
  
 Includono i cui attributi non è possibile modificare le sezioni standard,  
  
-   . Data  
  
-   sdata  
  
-   BSS  
  
-   sbss  
  
-   . Text  
  
-   .const  
  
-   .sconst  
  
-   rdata  
  
-   .srdata  
  
 Le sezioni aggiuntive possono essere aggiunti in un secondo momento.  
  
## <a name="see-also"></a>Vedere anche  
 [section](../../preprocessor/section.md)