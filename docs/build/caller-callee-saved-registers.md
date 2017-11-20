---
title: Registri salvati dal chiamante-chiamato | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 0533bd4b-d6bb-4ce1-8201-495e16870cbb
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: ebdcf30ea56587b71015a04b5e514dd9ff21aeba
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="callercallee-saved-registers"></a>Registri salvati dal chiamante o dal chiamato
I registri RAX, ovvero RCX, RDX, R8, R9, R10, R11 sono considerati volatili e deve essere considerato distrutti su chiamate di funzione (a meno che in caso contrario quindi dall'analisi, ad esempio Ottimizzazione intero programma).  
  
 I registri RBX, RBP, RDI, RSI, RSP, R12, R13, R14 e R15 sono considerati non volatili e devono essere salvati e ripristinato da una funzione che li utilizza.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)