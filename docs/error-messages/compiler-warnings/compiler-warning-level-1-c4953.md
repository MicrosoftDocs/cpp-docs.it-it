---
title: Compilatore avviso (livello 1) C4953 | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4953
dev_langs:
- C++
helpviewer_keywords:
- C4953
ms.assetid: 3c4f6ac6-3976-41ab-8a27-3c41d7472ea7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9e53808d4ad97bad4eccdf81b0a863277f8f7796
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43194632"
---
# <a name="compiler-warning-level-1-c4953"></a>Avviso del compilatore (livello 1) C4953

> Entità incorporata '*funzione*' è stato modificato dopo la raccolta dei dati, profilo dati di profilo non utilizzati

Quando si usa [/LTCG: PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), il compilatore ha rilevato un modulo di input ricompilato dopo `/LTCG:PGINSTRUMENT` e ha una funzione (*funzione*) che è stata modificata e in cui viene eseguito identificato test esistente di funzione come candidato per l'incorporamento. A seguito della ricompilazione del modulo, però, la funzione non sarà più un candidato per l'incorporamento.

Si tratta di un avviso informativo. Per risolvere il problema, eseguire `/LTCG:PGINSTRUMENT`, ripetere tutte le esecuzioni dei test ed eseguire `/LTCG:PGOPTIMIZE`.

Se fosse stata usata `/LTCG:PGOPTIMIZE` , al posto di questo avviso sarebbe comparso un errore.