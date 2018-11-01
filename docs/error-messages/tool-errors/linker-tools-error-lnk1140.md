---
title: Errore degli strumenti del linker LNK1140
ms.date: 11/04/2016
f1_keywords:
- LNK1140
helpviewer_keywords:
- LNK1140
ms.assetid: 468d7651-a7cd-47b9-aead-5bb2fab56121
ms.openlocfilehash: 48c735f29918c4d1caeb15123f7376276d116fb4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50482467"
---
# <a name="linker-tools-error-lnk1140"></a>Errore degli strumenti del linker LNK1140

Troppi moduli per database di programma. il collegamento con /PDB: NONE

Il progetto contiene più di 4096 moduli.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Ricollegare usando [/PDB: NONE](../../build/reference/pdb-use-program-database.md).

1. Compilare alcuni moduli senza le informazioni di debug.

1. Ridurre il numero dei moduli.