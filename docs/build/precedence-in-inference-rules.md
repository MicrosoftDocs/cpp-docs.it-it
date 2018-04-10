---
title: Precedenza nelle regole di inferenza | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- inference rules in NMAKE
- rules, inference
- precedence, inference rule
ms.assetid: 69e3dc02-0815-4c3a-b02b-1cb85fceaf24
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f7374da0541fc66464947af5a7b2ea7ea7b5c1d3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="precedence-in-inference-rules"></a>Precedenza nelle regole di inferenza
Se una regola di inferenza non è stata definita più volte, viene utilizzata la definizione di precedenza più alta. Nell'elenco seguente viene illustrato l'ordine di precedenza dalla più alta alla più bassa:  
  
1.  Una regola di inferenza definita in un makefile. le definizioni più recenti hanno la precedenza.  
  
2.  Una regola di inferenza definita in Tools.ini; le definizioni più recenti hanno la precedenza.  
  
3.  Una regola di inferenza predefiniti.  
  
## <a name="see-also"></a>Vedere anche  
 [Regole di inferenza](../build/inference-rules.md)