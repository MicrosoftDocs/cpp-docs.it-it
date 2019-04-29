---
title: Errore irreversibile C1307
ms.date: 11/04/2016
f1_keywords:
- C1307
helpviewer_keywords:
- C1307
ms.assetid: 6f77d3d4-ba8a-476c-b540-aff19eb4efc4
ms.openlocfilehash: 1acdda77ac9cbf8d99752de3b78ab9c32bbb4cbc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62338532"
---
# <a name="fatal-error-c1307"></a>Errore irreversibile C1307

programma modificato dopo la raccolta dei dati di profilo

Quando si usa [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md), il linker ha rilevato un modulo di input ricompilato dopo /LTCG: PGINSTRUMENT e che il modulo sia stato modificato il punto in cui i dati del profilo esistenti non sono più rilevanti. Ad esempio, se il grafico delle chiamate è stato modificato nel modulo ricompilato, il compilatore genererà C1307.

Per risolvere questo errore, eseguire /LTCG: PGINSTRUMENT, ripristinare tutte le esecuzioni di test e l'esecuzione di /LTCG: PGOPTIMIZE. Se non viene eseguito è possibile eseguire /LTCG: PGINSTRUMENT e Ripristina che tutti i test, usare /LTCG: PGUPDATE invece di /LTCG: PGOPTIMIZE per creare l'immagine ottimizzata.