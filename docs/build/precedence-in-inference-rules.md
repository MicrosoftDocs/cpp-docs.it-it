---
title: Precedenza nelle regole di inferenza | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inference rules in NMAKE
- rules, inference
- precedence, inference rule
ms.assetid: 69e3dc02-0815-4c3a-b02b-1cb85fceaf24
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 36d462d4222cbfc143dd7487d4cb6b1b8bb3ba3b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32368486"
---
# <a name="precedence-in-inference-rules"></a>Precedenza nelle regole di inferenza
Se una regola di inferenza non è stata definita più volte, viene utilizzata la definizione di precedenza più alta. Nell'elenco seguente viene illustrato l'ordine di precedenza dalla più alta alla più bassa:  
  
1.  Una regola di inferenza definita in un makefile. le definizioni più recenti hanno la precedenza.  
  
2.  Una regola di inferenza definita in Tools.ini; le definizioni più recenti hanno la precedenza.  
  
3.  Una regola di inferenza predefiniti.  
  
## <a name="see-also"></a>Vedere anche  
 [Regole di inferenza](../build/inference-rules.md)