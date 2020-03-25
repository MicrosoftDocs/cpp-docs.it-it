---
title: Avviso del compilatore (livello 1) C4951
ms.date: 08/27/2018
f1_keywords:
- C4951
helpviewer_keywords:
- C4951
ms.assetid: 669d8bb7-5efa-4ba9-99db-4e65addbf054
ms.openlocfilehash: d94347df17bac01334cfd85c2bd9f6c8a98b5fc0
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80174596"
---
# <a name="compiler-warning-level-1-c4951"></a>Avviso del compilatore (livello 1) C4951

> '*Function*' è stato modificato dopo la raccolta dei dati di profilo, dati di profilo della funzione non utilizzati

Una funzione è stata modificata in un modulo di input per [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), di conseguenza, i dati del profilo non sono più validi. Il modulo di input è stato ricompilato dopo l'operazione **/LTCG:PGINSTRUMENT** e ha una funzione (*funzione*) con un flusso di controllo diverso da quello presente nel modulo al momento dell'operazione **/LTCG:PGINSTRUMENT** .

Si tratta di un avviso informativo. Per risolvere il problema, eseguire **/LTCG:PGINSTRUMENT**, ripetere tutte le esecuzioni dei test ed eseguire **/LTCG:PGOPTIMIZE**.

Se fosse stata usata **/LTCG:PGOPTIMIZE** , al posto di questo avviso sarebbe comparso un errore.
