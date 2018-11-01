---
title: setjmp longjump
ms.date: 11/04/2016
ms.assetid: b0e21902-095d-4198-8f9a-b6326525721a
ms.openlocfilehash: 765cef3f02bed09bed0278aaeecdcdbd55d86b67
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50427898"
---
# <a name="setjmplongjump"></a>setjmp/longjump

Quando si include setjmp. h o setjmpex, tutte le chiamate a [setjmp](../c-runtime-library/reference/setjmp.md) oppure [longjmp](../c-runtime-library/reference/longjmp.md) comporterà un'operazione di rimozione che richiama i distruttori e infine viene chiamato.  Questo comportamento è diverso da x86, in cui ad esempio i risultati di setjmp. h in clausole finally e i distruttori non richiamati.

Una chiamata a `setjmp` mantiene il puntatore dello stack corrente, registri non volatili e registri MxCsr.  Le chiamate a `longjmp` tornare al più recente `setjmp` chiamare sito e reimposta il puntatore dello stack, i registri non volatili e MxCsr registra, lo stato come mantenuto dal più recente `setjmp` chiamare.

## <a name="see-also"></a>Vedere anche

[Convenzione di chiamata](../build/calling-convention.md)