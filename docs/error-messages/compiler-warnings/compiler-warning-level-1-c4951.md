---
title: Compilatore avviso (livello 1) C4951 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4951
dev_langs:
- C++
helpviewer_keywords:
- C4951
ms.assetid: 669d8bb7-5efa-4ba9-99db-4e65addbf054
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 199df135d5d2c00255037e5a1b31db80e2683d4f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4951"></a>Avviso del compilatore (livello 1) C4951
'function' è stato modificato dopo la raccolta dei dati di profilo, dati di profilo della funzione non utilizzati  
  
 Una funzione è stata modificata in un modulo di input per [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), di conseguenza, i dati del profilo non sono più validi. Il modulo di input è stato ricompilato dopo l'operazione **/LTCG:PGINSTRUMENT** e ha una funzione (***funzione***) con un flusso di controllo diverso da quello presente nel modulo al momento dell'operazione **/LTCG:PGINSTRUMENT** .  
  
 Si tratta di un avviso informativo. Per risolvere il problema, eseguire **/LTCG:PGINSTRUMENT**, ripetere tutte le esecuzioni dei test ed eseguire **/LTCG:PGOPTIMIZE**.  
  
 Se fosse stata usata **/LTCG:PGOPTIMIZE** , al posto di questo avviso sarebbe comparso un errore.