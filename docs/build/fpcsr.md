---
title: FpCsr | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: dff95d5d-7589-4432-82db-64b459c24352
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9defb41a026b32acb4375185f14c903788b91a23
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fpcsr"></a>FpCsr
Lo stato del registro include anche il x87 parola di controllo FPU. La convenzione di chiamata determina il registro non volatile per.  
  
 Il x87 registro parola di controllo FPU è impostata su valori standard seguenti all'inizio dell'esecuzione del programma:  
  
```  
FPCSR[0:6]: Exception masks all 1's (all exceptions masked)  
FPCSR[7]: Reserved - 0  
FPCSR[8:9]: Precision Control - 10B (double precision)  
FPCSR[10:11]: Rounding  control - 0 (round to nearest)  
FPCSR[12]: Infinity control - 0 (not used)  
```  
  
 Un oggetto chiamato che modifica i campi all'interno di FPCSR necessario ripristinarli prima di restituire al chiamante. Inoltre, un chiamante che ha modificato uno qualsiasi di questi campi è necessario eseguirne il ripristino in base ai valori standard prima di richiamare un oggetto chiamato a meno che per contratto chiamato prevede che i valori modificati.  
  
 Esistono due eccezioni alle regole relative alla non volatilità dei flag di controllo:  
  
1.  Funzioni in cui lo scopo della funzione specificata documentato consiste nella modifica FpCsr non volatili flag.  
  
2.  Quando è corretto probabilmente che la violazione di queste regole di un programma che ha lo stesso come un programma in cui queste regole non vengono violate, ad esempio, tramite l'analisi intero programma.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)