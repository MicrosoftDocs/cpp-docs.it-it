---
title: Compilatore avviso (livello 1) C4952 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4952
dev_langs:
- C++
helpviewer_keywords:
- C4952
ms.assetid: 593324f0-5cfe-42fb-b221-2f71308765dd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 42696dfae816742c958bca23e25e311e834dd62a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4952"></a>Avviso del compilatore (livello 1) C4952
'function': dati di profilo non trovati nel database 'pgd_file' del programma  
  
 Durante l'uso di [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md)il compilatore ha rilevato un modulo di input ricompilato dopo `/LTCG:PGINSTRUMENT` e contenente una nuova funzione (***function***).  
  
 Si tratta di un avviso informativo. Per risolvere il problema, eseguire `/LTCG:PGINSTRUMENT`, ripetere tutte le esecuzioni dei test ed eseguire `/LTCG:PGOPTIMIZE`.  
  
 Se fosse stata usata `/LTCG:PGOPTIMIZE` , al posto di questo avviso sarebbe comparso un errore.