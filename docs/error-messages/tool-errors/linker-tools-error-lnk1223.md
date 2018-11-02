---
title: Errore degli strumenti del linker LNK1223
ms.date: 11/04/2016
f1_keywords:
- LNK1223
helpviewer_keywords:
- LNK1223
ms.assetid: c4728c36-daee-462f-a1c7-8733dcdec88e
ms.openlocfilehash: 331521c357389c2f7c1aa786969154a2b747ffe5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50537969"
---
# <a name="linker-tools-error-lnk1223"></a>Errore degli strumenti del linker LNK1223

file danneggiato o non valido: il file contiene contributi pdata non validi

Per le piattaforme RISC che usano pdata, questo errore si verifica se il compilatore ha generato una sezione pdata con voci non ordinate.

Per risolvere questo problema, provare a ricompilare senza [/GL (Ottimizzazione intero programma)](../../error-messages/tool-errors/linker-tools-error-lnk1223.md) abilitata. Corpi di funzione vuota possono inoltre causare questo errore in alcuni casi.