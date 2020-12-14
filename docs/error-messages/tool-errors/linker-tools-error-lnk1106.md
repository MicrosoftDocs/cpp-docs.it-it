---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1106'
title: Errore degli strumenti del linker LNK1106
ms.date: 11/04/2016
f1_keywords:
- LNK1106
helpviewer_keywords:
- LNK1106
ms.assetid: 528f7e65-04be-4966-b8af-9276837c7cda
ms.openlocfilehash: 85f353b6424cdd9ad12a99b29fec4f6119472cdb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281405"
---
# <a name="linker-tools-error-lnk1106"></a>Errore degli strumenti del linker LNK1106

il file o il disco non è pieno: non è possibile cercare nel percorso

Lo strumento non è in grado di leggere o scrivere `location` in un file mappato alla memoria.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Disco pieno.

   Liberare spazio e collegarsi nuovamente.

1. Tentativo di collegamento su una rete.

   Alcune reti non supportano completamente i file mappati alla memoria utilizzati dal linker. Provare a collegare il disco locale.

1. Blocco errato sul disco.

   Sebbene il sistema operativo e l'hardware del disco debbano rilevare tale errore, potrebbe essere necessario eseguire un programma di controllo del disco.

1. Spazio heap esaurito.

   Per ulteriori informazioni, vedere [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) .
