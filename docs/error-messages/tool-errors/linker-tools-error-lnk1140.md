---
title: Errore degli strumenti del linker LNK1140
ms.date: 11/04/2016
f1_keywords:
- LNK1140
helpviewer_keywords:
- LNK1140
ms.assetid: 468d7651-a7cd-47b9-aead-5bb2fab56121
ms.openlocfilehash: 48c735f29918c4d1caeb15123f7376276d116fb4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62255066"
---
# <a name="linker-tools-error-lnk1140"></a>Errore degli strumenti del linker LNK1140

Troppi moduli per database di programma. il collegamento con /PDB: NONE

Il progetto contiene più di 4096 moduli.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Ricollegare usando [/PDB: NONE](../../build/reference/pdb-use-program-database.md).

1. Compilare alcuni moduli senza le informazioni di debug.

1. Ridurre il numero dei moduli.