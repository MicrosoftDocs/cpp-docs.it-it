---
title: Errore degli strumenti del linker LNK1201
ms.date: 11/04/2016
f1_keywords:
- LNK1201
helpviewer_keywords:
- LNK1201
ms.assetid: 64c3f496-a428-4b54-981e-faa82ef9c8a1
ms.openlocfilehash: 8d02743333c02c7cdff3b75e4a16bfecda442fa9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195110"
---
# <a name="linker-tools-error-lnk1201"></a>Errore degli strumenti del linker LNK1201

errore durante la scrittura nel database di programma ' filename '; verificare la presenza di spazio su disco insufficiente, percorso non valido o privilegi insufficienti

Il collegamento non è riuscito a scrivere nel database di programma (PDB) per il file di output.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Il file è danneggiato. Eliminare il file PDB e ricollegarlo.

1. Spazio su disco insufficiente per la scrittura del file.

1. L'unità non è disponibile, probabilmente a causa di un problema di rete.

1. Il debugger è attivo sul programma che si sta tentando di collegare.

1. Spazio heap esaurito.  Per ulteriori informazioni, vedere [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) .
