---
title: Compilatore avviso (livello 1) C4951 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4951
dev_langs:
- C++
helpviewer_keywords:
- C4951
ms.assetid: 669d8bb7-5efa-4ba9-99db-4e65addbf054
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c3ebf012338bdf6b90cc943e754056335c6751a4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33290465"
---
# <a name="compiler-warning-level-1-c4951"></a>Avviso del compilatore (livello 1) C4951
'function' è stato modificato dopo la raccolta dei dati di profilo, dati di profilo della funzione non utilizzati  
  
 Una funzione è stata modificata in un modulo di input per [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), di conseguenza, i dati del profilo non sono più validi. Il modulo di input è stato ricompilato dopo l'operazione **/LTCG:PGINSTRUMENT** e ha una funzione (***funzione***) con un flusso di controllo diverso da quello presente nel modulo al momento dell'operazione **/LTCG:PGINSTRUMENT** .  
  
 Si tratta di un avviso informativo. Per risolvere il problema, eseguire **/LTCG:PGINSTRUMENT**, ripetere tutte le esecuzioni dei test ed eseguire **/LTCG:PGOPTIMIZE**.  
  
 Se fosse stata usata **/LTCG:PGOPTIMIZE** , al posto di questo avviso sarebbe comparso un errore.