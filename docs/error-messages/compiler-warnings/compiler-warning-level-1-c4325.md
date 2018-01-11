---
title: Compilatore avviso (livello 1) C4325 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4325
dev_langs: C++
helpviewer_keywords: C4325
ms.assetid: 8127a08c-d626-481b-aa7b-04a3fdc9a9ec
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ab31150efc02601d7392470198e162e979ac4917
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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