---
title: Errore degli strumenti del linker LNK1200
ms.date: 11/04/2016
f1_keywords:
- LNK1200
helpviewer_keywords:
- LNK1200
ms.assetid: 55771145-915e-4006-ac6c-ac702041eb2f
ms.openlocfilehash: c99b25a83836f1ee0bc6ba622e42ea382c377172
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62213550"
---
# <a name="linker-tools-error-lnk1200"></a>Errore degli strumenti del linker LNK1200

Errore durante la lettura del database di programma 'filename'

Non è stato possibile leggere il database di programma (PDB).

Questo errore può essere causato dal danneggiamento dei file.

Se `filename` è il file PDB per un file di oggetti, ricompilare il file oggetto usando [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).

Se `filename` è il file PDB per il file di output principale, e questo errore si verifica durante un collegamento incrementale, eliminare il file PDB e ricollegare.