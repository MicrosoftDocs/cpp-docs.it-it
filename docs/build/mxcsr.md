---
title: MxCsr | Documenti Microsoft
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
ms.assetid: 4f3c229d-0862-4733-acc7-9ed7a0b870ce
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7794cea8906440c0adca94791d08e3ced6af747e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mxcsr"></a>MxCsr
Lo stato del registro include anche MxCsr. La convenzione di chiamata divide questo registro in una parte volatile e una parte non volatile. La parte volatile è costituita da 6 flag di stato, MXCSR [0:5], mentre il resto del registro, MXCSR [6:15] è considerato non volatile.  
  
 La parte non volatile è impostata su valori standard seguenti all'inizio dell'esecuzione del programma:  
  
```  
MXCSR[6]         : Denormals are zeros - 0  
MXCSR[7:12]      : Exception masks all 1's (all exceptions masked)  
MXCSR[13:14]   : Rounding  control - 0 (round to nearest)  
MXCSR[15]      : Flush to zero for masked underflow - 0 (off)  
```  
  
 Un oggetto chiamato che modifica uno qualsiasi dei campi non volatili in MXCSR necessario ripristinarli prima di restituire al chiamante. Inoltre, un chiamante che ha modificato uno qualsiasi di questi campi è necessario eseguirne il ripristino in base ai valori standard prima di richiamare un oggetto chiamato a meno che per contratto chiamato prevede che i valori modificati.  
  
 Esistono due eccezioni alle regole relative alla non volatilità dei flag di controllo:  
  
-   Funzioni in cui lo scopo della funzione specificata documentato consiste nella modifica MxCsr non volatili flag.  
  
-   Quando è corretto probabilmente che la violazione di queste regole di un programma che ha lo stesso come un programma in cui queste regole non vengono violate, ad esempio, tramite l'analisi intero programma.  
  
 Non possono fare ipotesi sullo stato di parte volatile di MXCSR attraverso il confine di una funzione, a meno che specificamente descritto nella documentazione relativa a una funzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)