---
title: Tipi di funzioni
ms.date: 11/04/2016
ms.assetid: 7e33d5f4-dabb-406d-afb3-13777b995028
ms.openlocfilehash: 22778f3eaefa6dbcf5f85e54c0940867ef52ab72
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50526381"
---
# <a name="function-types"></a>Tipi di funzioni

Esistono essenzialmente due tipi di funzioni. Una funzione che richiede uno stack frame viene chiamata una funzione di frame. Una funzione foglia viene chiamata una funzione che non richiede uno stack frame.

Una funzione di frame è una funzione che alloca lo spazio dello stack, chiama altre funzioni, consente di salvare i registri non volatili o Usa la gestione delle eccezioni. Richiede inoltre una voce della tabella (funzione). Una funzione di frame richiede un prologo e da un epilogo. Una funzione di frame in modo dinamico può allocare lo spazio dello stack e può usare un puntatore ai frame. Una funzione di frame ha le funzionalità complete di questa chiamata standard a sua disposizione.

Se una funzione di frame non chiama un'altra funzione, non è necessario per l'allineamento dello stack (fa riferimento nella sezione [allocazione nello Stack](../build/stack-allocation.md)).

Una funzione foglia è quello che non richiede una voce della tabella (funzione). È possibile apportare modifiche a tutti i registri non volatili, tra cui RSP, che significa che non può chiamare le funzioni o allocare lo spazio dello stack. È consentito per lasciare non allineati dello stack durante l'esecuzione.

## <a name="see-also"></a>Vedere anche

[Uso dello stack](../build/stack-usage.md)
