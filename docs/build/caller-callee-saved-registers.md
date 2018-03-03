---
title: Registri salvati dal chiamante-chiamato | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 0533bd4b-d6bb-4ce1-8201-495e16870cbb
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 61e8d57c177ded8102f257cf84adedc0de0e312a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="callercallee-saved-registers"></a>Registri salvati dal chiamante o dal chiamato
I registri RAX, ovvero RCX, RDX, R8, R9, R10, R11 sono considerati volatili e deve essere considerato distrutti su chiamate di funzione (a meno che in caso contrario quindi dall'analisi, ad esempio Ottimizzazione intero programma).  
  
 I registri RBX, RBP, RDI, RSI, RSP, R12, R13, R14 e R15 sono considerati non volatili e devono essere salvati e ripristinato da una funzione che li utilizza.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)