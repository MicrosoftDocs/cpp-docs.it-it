---
title: Avviso del compilatore (livello 1) C4953
ms.date: 08/27/2018
f1_keywords:
- C4953
helpviewer_keywords:
- C4953
ms.assetid: 3c4f6ac6-3976-41ab-8a27-3c41d7472ea7
ms.openlocfilehash: 1948342e1ff97c38ca3a44694dc7e7d399d96825
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50568041"
---
# <a name="compiler-warning-level-1-c4953"></a>Avviso del compilatore (livello 1) C4953

> Entità incorporata '*funzione*' è stato modificato dopo la raccolta dei dati, profilo dati di profilo non utilizzati

Durante l'uso di [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md)il compilatore ha rilevato un modulo di input che è stato ricompilato dopo `/LTCG:PGINSTRUMENT` e ha una funzione (*function*) che è stata modificata e in cui le esecuzioni di test esistenti hanno identificato la funzione come candidato per l'incorporamento. A seguito della ricompilazione del modulo, però, la funzione non sarà più un candidato per l'incorporamento.

Si tratta di un avviso informativo. Per risolvere il problema, eseguire `/LTCG:PGINSTRUMENT`, ripetere tutte le esecuzioni dei test ed eseguire `/LTCG:PGOPTIMIZE`.

Se fosse stata usata `/LTCG:PGOPTIMIZE` , al posto di questo avviso sarebbe comparso un errore.