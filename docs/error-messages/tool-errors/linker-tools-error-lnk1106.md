---
title: Errore degli strumenti del linker LNK1106
ms.date: 11/04/2016
f1_keywords:
- LNK1106
helpviewer_keywords:
- LNK1106
ms.assetid: 528f7e65-04be-4966-b8af-9276837c7cda
ms.openlocfilehash: 7551e2f3f1efc90913981feb674f48aadb9ace51
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62255319"
---
# <a name="linker-tools-error-lnk1106"></a>Errore degli strumenti del linker LNK1106

file non valido o disco pieno: Impossibile raggiungere la posizione

Lo strumento non è stato possibile leggere o scrivere in `location` in un file mappato alla memoria.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Disco pieno.

   Liberare spazio e collegare nuovamente.

1. È stato effettuato un tentativo di collegamento in rete.

   Alcune reti non supportano completamente i file mappati alla memoria utilizzati dal linker. Provare il collegamento sul disco locale.

1. Blocco danneggiato sul disco.

   Anche se il sistema operativo e hardware del disco avrebbe dovuto rilevare questo errore, è possibile eseguire un programma di controllo del disco.

1. Spazio dell'heap insufficiente.

   Visualizzare [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) per altre informazioni.