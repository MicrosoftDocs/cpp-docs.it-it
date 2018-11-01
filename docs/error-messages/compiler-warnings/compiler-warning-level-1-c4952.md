---
title: Avviso del compilatore (livello 1) C4952
ms.date: 08/27/2018
f1_keywords:
- C4952
helpviewer_keywords:
- C4952
ms.assetid: 593324f0-5cfe-42fb-b221-2f71308765dd
ms.openlocfilehash: c2e9b88125655d9ea0abe3e65500b149289ba83b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50537579"
---
# <a name="compiler-warning-level-1-c4952"></a>Avviso del compilatore (livello 1) C4952

> «*funzione*': nessun dato di profilo trovati nel database di programma '*pgd_file*»

Durante l'uso di [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md)il compilatore ha rilevato un modulo di input ricompilato dopo `/LTCG:PGINSTRUMENT` e contenente una nuova funzione (*function*).

Si tratta di un avviso informativo. Per risolvere il problema, eseguire `/LTCG:PGINSTRUMENT`, ripetere tutte le esecuzioni dei test ed eseguire `/LTCG:PGOPTIMIZE`.

Se fosse stata usata `/LTCG:PGOPTIMIZE` , al posto di questo avviso sarebbe comparso un errore.