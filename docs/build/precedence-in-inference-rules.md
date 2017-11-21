---
title: Precedenza nelle regole di inferenza | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- inference rules in NMAKE
- rules, inference
- precedence, inference rule
ms.assetid: 69e3dc02-0815-4c3a-b02b-1cb85fceaf24
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: d22db9de1fc1941798c73c3c1c05a8ccd8571525
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="precedence-in-inference-rules"></a>Precedenza nelle regole di inferenza
Se una regola di inferenza non è stata definita più volte, viene utilizzata la definizione di precedenza più alta. Nell'elenco seguente viene illustrato l'ordine di precedenza dalla più alta alla più bassa:  
  
1.  Una regola di inferenza definita in un makefile. le definizioni più recenti hanno la precedenza.  
  
2.  Una regola di inferenza definita in Tools.ini; le definizioni più recenti hanno la precedenza.  
  
3.  Una regola di inferenza predefiniti.  
  
## <a name="see-also"></a>Vedere anche  
 [Regole di inferenza](../build/inference-rules.md)