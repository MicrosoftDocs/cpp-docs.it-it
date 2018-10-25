---
title: Strumenti del linker LNK1106 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1106
dev_langs:
- C++
helpviewer_keywords:
- LNK1106
ms.assetid: 528f7e65-04be-4966-b8af-9276837c7cda
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ce6a8b2ef9ac807e48cff42186453666cebda5ee
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50055984"
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