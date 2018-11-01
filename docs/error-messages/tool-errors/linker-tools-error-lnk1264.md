---
title: Errore degli strumenti del linker LNK1264
ms.date: 11/04/2016
f1_keywords:
- LNK1264
helpviewer_keywords:
- LNK1264
ms.assetid: 23b1aad7-d382-42c1-bae8-db68575c57a8
ms.openlocfilehash: ca17b6946b9e988507af2786825223e042356d0e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50505092"
---
# <a name="linker-tools-error-lnk1264"></a>Errore degli strumenti del linker LNK1264

/LTCG: PGINSTRUMENT specificato ma non richiesta; la generazione di codice strumentazione non è riuscita

**/LTCG: PGINSTRUMENT** è stato specificato ma non sono stati trovati file non obj compilati con [/GL](../../build/reference/gl-whole-program-optimization.md). Strumentazione non può accettare sul posto e il collegamento non è riuscita. Deve esistere almeno un file con estensione obj nella riga di comando che viene compilato con **/GL** in modo che possa essere eseguita la strumentazione.

Ottimizzazione PGO (PGO) è disponibile solo per i compilatori a 64 bit.