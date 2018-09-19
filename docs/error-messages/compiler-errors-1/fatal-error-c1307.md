---
title: Errore irreversibile C1307 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1307
dev_langs:
- C++
helpviewer_keywords:
- C1307
ms.assetid: 6f77d3d4-ba8a-476c-b540-aff19eb4efc4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 65f398dd9885c571ea0d66171889f20d3321a3b9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46085862"
---
# <a name="fatal-error-c1307"></a>Errore irreversibile C1307

programma modificato dopo la raccolta dei dati di profilo

Quando si usa [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md), il linker ha rilevato un modulo di input ricompilato dopo /LTCG: PGINSTRUMENT e che il modulo sia stato modificato il punto in cui i dati del profilo esistenti non sono più rilevanti. Ad esempio, se il grafico delle chiamate è stato modificato nel modulo ricompilato, il compilatore genererà C1307.

Per risolvere questo errore, eseguire /LTCG: PGINSTRUMENT, ripristinare tutte le esecuzioni di test e l'esecuzione di /LTCG: PGOPTIMIZE. Se non viene eseguito è possibile eseguire /LTCG: PGINSTRUMENT e Ripristina che tutti i test, usare /LTCG: PGUPDATE invece di /LTCG: PGOPTIMIZE per creare l'immagine ottimizzata.