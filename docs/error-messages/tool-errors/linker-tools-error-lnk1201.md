---
title: Errore degli strumenti del linker LNK1201
ms.date: 11/04/2016
f1_keywords:
- LNK1201
helpviewer_keywords:
- LNK1201
ms.assetid: 64c3f496-a428-4b54-981e-faa82ef9c8a1
ms.openlocfilehash: c5cbb9a7159a976ad0f96f46462669cff7b19f26
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62213265"
---
# <a name="linker-tools-error-lnk1201"></a>Errore degli strumenti del linker LNK1201

Errore durante la scrittura nel database di programma 'filename'; Verificare la presenza di spazio su disco insufficiente, percorso non valido o i privilegi sono insufficienti

COLLEGAMENTO non è stato possibile scrivere nel database di programma (PDB) per il file di output.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. File è danneggiato. Eliminare il file PDB e ricollegare.

1. Spazio su disco insufficiente per la scrittura del file.

1. Unità non è disponibile, probabilmente a causa di un problema di rete.

1. Il debugger è attivo sul programma che si desidera collegare.

1. Spazio dell'heap insufficiente.  Visualizzare [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) per altre informazioni.