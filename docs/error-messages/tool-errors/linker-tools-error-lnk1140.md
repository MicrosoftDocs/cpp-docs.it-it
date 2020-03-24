---
title: Errore degli strumenti del linker LNK1140
ms.date: 11/04/2016
f1_keywords:
- LNK1140
helpviewer_keywords:
- LNK1140
ms.assetid: 468d7651-a7cd-47b9-aead-5bb2fab56121
ms.openlocfilehash: 845c796ee9611e921e2fd1707b9bb956ab62a5ac
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195266"
---
# <a name="linker-tools-error-lnk1140"></a>Errore degli strumenti del linker LNK1140

troppi moduli per il database di programma; collegamento con/PDB: NONE

Il progetto contiene più di 4096 moduli.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Ricollegare con [/PDB: None](../../build/reference/pdb-use-program-database.md).

1. Compilare alcuni moduli senza informazioni di debug.

1. Ridurre il numero di moduli.
