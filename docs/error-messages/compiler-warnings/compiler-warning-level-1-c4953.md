---
title: Compilatore avviso (livello 1) C4953 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4953
dev_langs:
- C++
helpviewer_keywords:
- C4953
ms.assetid: 3c4f6ac6-3976-41ab-8a27-3c41d7472ea7
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c330076e7c0b4ff6daded94ef5fc038bd9dad759
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4953"></a>Avviso del compilatore (livello 1) C4953
'function' inline modificata dopo la raccolta dei dati di profilo. Dati di profilo non utilizzati  
  
 Durante l'uso di [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md)il compilatore ha rilevato un modulo di input che è stato ricompilato dopo `/LTCG:PGINSTRUMENT` e ha una funzione (***function***) che è stata modificata e in cui le esecuzioni di test esistenti hanno identificato la funzione come candidato per l'incorporamento. A seguito della ricompilazione del modulo, però, la funzione non sarà più un candidato per l'incorporamento.  
  
 Si tratta di un avviso informativo. Per risolvere il problema, eseguire `/LTCG:PGINSTRUMENT`, ripetere tutte le esecuzioni dei test ed eseguire `/LTCG:PGOPTIMIZE`.  
  
 Se fosse stata usata `/LTCG:PGOPTIMIZE` , al posto di questo avviso sarebbe comparso un errore.