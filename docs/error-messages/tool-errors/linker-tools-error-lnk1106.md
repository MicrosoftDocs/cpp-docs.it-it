---
title: Errore degli strumenti del linker LNK1106
ms.date: 11/04/2016
f1_keywords:
- LNK1106
helpviewer_keywords:
- LNK1106
ms.assetid: 528f7e65-04be-4966-b8af-9276837c7cda
ms.openlocfilehash: 091d4e173bfb2eff8ffee2b5c30647f4d5e3bc04
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195370"
---
# <a name="linker-tools-error-lnk1106"></a>Errore degli strumenti del linker LNK1106

il file o il disco non è pieno: non è possibile cercare nel percorso

Lo strumento non è in grado di leggere o scrivere in `location` in un file mappato alla memoria.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Disco pieno.

   Liberare spazio e collegarsi nuovamente.

1. Tentativo di collegamento su una rete.

   Alcune reti non supportano completamente i file mappati alla memoria utilizzati dal linker. Provare a collegare il disco locale.

1. Blocco errato sul disco.

   Sebbene il sistema operativo e l'hardware del disco debbano rilevare tale errore, potrebbe essere necessario eseguire un programma di controllo del disco.

1. Spazio heap esaurito.

   Per ulteriori informazioni, vedere [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) .
