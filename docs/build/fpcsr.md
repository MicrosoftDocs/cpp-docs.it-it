---
title: FpCsr | Microsoft Docs
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
ms.openlocfilehash: a6ed0500d0382563878d0751ba5386e4cc637fdb
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45718289"
---
# <a name="fpcsr"></a>FpCsr

Lo stato del registro include anche x87 parola di controllo FPU. La convenzione di chiamata determina questo registro per essere non volatile.

X87 FPU controllo word registro viene impostato sui valori standard seguenti all'inizio di esecuzione del programma:

```
FPCSR[0:6]: Exception masks all 1's (all exceptions masked)
FPCSR[7]: Reserved - 0
FPCSR[8:9]: Precision Control - 10B (double precision)
FPCSR[10:11]: Rounding  control - 0 (round to nearest)
FPCSR[12]: Infinity control - 0 (not used)
```

Un oggetto chiamato che consente di modificare i campi all'interno di FPCSR necessario ripristinarli prima di restituire al chiamante. Inoltre, un chiamante che ha modificato uno qualsiasi di questi campi deve ripristinare i relativi valori standard prima di richiamare una chiamata a meno che non dal contratto il chiamato si aspetta che i valori modificati.

Esistono due eccezioni alle regole relative alla non volatilità dei flag di controllo:

1. Funzioni in cui lo scopo della funzione specificata documentato consiste nel modificare il FpCsr nonvolatile flag.

1. Quando è probabilmente corretto che la violazione di queste regole di un programma che ha lo stesso come un programma in cui queste regole non vengono violate, ad esempio, tramite analisi dell'intero programma.

## <a name="see-also"></a>Vedere anche

[Convenzione di chiamata](../build/calling-convention.md)