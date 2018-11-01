---
title: Avviso del compilatore (livello 1) C4951
ms.date: 08/27/2018
f1_keywords:
- C4951
helpviewer_keywords:
- C4951
ms.assetid: 669d8bb7-5efa-4ba9-99db-4e65addbf054
ms.openlocfilehash: 73e048aeaa044c35e09539b07d51398829a0fdfd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50617863"
---
# <a name="compiler-warning-level-1-c4951"></a>Avviso del compilatore (livello 1) C4951

> «*funzione*' è stato modificato dopo la raccolta dei dati, profilo dati di profilo di funzione non utilizzati

Una funzione è stata modificata in un modulo di input per [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), di conseguenza, i dati del profilo non sono più validi. Il modulo di input è stato ricompilato dopo l'operazione **/LTCG:PGINSTRUMENT** e ha una funzione (*funzione*) con un flusso di controllo diverso da quello presente nel modulo al momento dell'operazione **/LTCG:PGINSTRUMENT** .

Si tratta di un avviso informativo. Per risolvere il problema, eseguire **/LTCG:PGINSTRUMENT**, ripetere tutte le esecuzioni dei test ed eseguire **/LTCG:PGOPTIMIZE**.

Se fosse stata usata **/LTCG:PGOPTIMIZE** , al posto di questo avviso sarebbe comparso un errore.