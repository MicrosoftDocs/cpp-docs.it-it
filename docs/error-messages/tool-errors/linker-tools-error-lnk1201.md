---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1201'
title: Errore degli strumenti del linker LNK1201
ms.date: 11/04/2016
f1_keywords:
- LNK1201
helpviewer_keywords:
- LNK1201
ms.assetid: 64c3f496-a428-4b54-981e-faa82ef9c8a1
ms.openlocfilehash: 2817e8f84d0a5d28aa012de5459eb7e09f383172
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341633"
---
# <a name="linker-tools-error-lnk1201"></a>Errore degli strumenti del linker LNK1201

errore durante la scrittura nel database di programma ' filename '; verificare la presenza di spazio su disco insufficiente, percorso non valido o privilegi insufficienti

Il collegamento non è riuscito a scrivere nel database di programma (PDB) per il file di output.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Il file è danneggiato. Eliminare il file PDB e ricollegarlo.

1. Spazio su disco insufficiente per la scrittura del file.

1. L'unità non è disponibile, probabilmente a causa di un problema di rete.

1. Il debugger è attivo sul programma che si sta tentando di collegare.

1. Spazio heap esaurito.  Per ulteriori informazioni, vedere [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) .
