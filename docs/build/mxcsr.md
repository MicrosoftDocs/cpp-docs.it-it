---
title: Registro MxCsr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 4f3c229d-0862-4733-acc7-9ed7a0b870ce
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0d18a4247d36e6894230d74322d52cd5854e42fb
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45726505"
---
# <a name="mxcsr"></a>MxCsr

Lo stato del registro include anche registro MxCsr. La convenzione di chiamata divide questo registro in una parte volatile e una parte non volatile. La parte volatile è costituito da 6 flag di stato, MXCSR [0:5], mentre il resto del registro MXCSR [15:6], viene considerato non volatile.

La parte non volatile è impostata su valori standard seguenti all'inizio dell'esecuzione del programma:

```
MXCSR[6]         : Denormals are zeros - 0
MXCSR[7:12]      : Exception masks all 1's (all exceptions masked)
MXCSR[13:14]   : Rounding  control - 0 (round to nearest)
MXCSR[15]      : Flush to zero for masked underflow - 0 (off)
```

Un oggetto chiamato che consente di modificare i campi non volatili all'interno di registro MXCSR necessario ripristinarli prima di restituire al chiamante. Inoltre, un chiamante che ha modificato uno qualsiasi di questi campi deve ripristinare i relativi valori standard prima di richiamare una chiamata a meno che non dal contratto il chiamato si aspetta che i valori modificati.

Esistono due eccezioni alle regole relative alla non volatilità dei flag di controllo:

- Funzioni in cui lo scopo della funzione specificata documentato consiste nel modificare registro MxCsr nonvolatile flag.

- Quando è probabilmente corretto che la violazione di queste regole di un programma che ha lo stesso come un programma in cui queste regole non vengono violate, ad esempio, tramite analisi dell'intero programma.

Non possono accadere alcuna ipotesi sullo stato della parte volatile di registro MXCSR attraverso un limite di funzione, a meno che specificamente descritti nella documentazione della funzione.

## <a name="see-also"></a>Vedere anche

[Convenzione di chiamata](../build/calling-convention.md)