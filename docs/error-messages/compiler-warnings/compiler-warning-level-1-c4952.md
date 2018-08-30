---
title: Compilatore avviso (livello 1) C4952 | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
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
ms.openlocfilehash: f62f4c18380d89eb516a5fa49ef63e92ab79a6f2
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43207151"
---
# <a name="compiler-warning-level-1-c4952"></a>Avviso del compilatore (livello 1) C4952

> «*funzione*': nessun dato di profilo trovati nel database di programma '*pgd_file*»

Quando si usa [/LTCG: PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), il compilatore ha rilevato un modulo di input ricompilato dopo `/LTCG:PGINSTRUMENT` e dispone di una nuova funzione (*funzione*) presente.

Si tratta di un avviso informativo. Per risolvere il problema, eseguire `/LTCG:PGINSTRUMENT`, ripetere tutte le esecuzioni dei test ed eseguire `/LTCG:PGOPTIMIZE`.

Se fosse stata usata `/LTCG:PGOPTIMIZE` , al posto di questo avviso sarebbe comparso un errore.