---
title: Errore degli strumenti del linker LNK1200
ms.date: 11/04/2016
f1_keywords:
- LNK1200
helpviewer_keywords:
- LNK1200
ms.assetid: 55771145-915e-4006-ac6c-ac702041eb2f
ms.openlocfilehash: 9dcc37bd74a25e29726529346b1578bb8b18ac3e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195136"
---
# <a name="linker-tools-error-lnk1200"></a>Errore degli strumenti del linker LNK1200

errore durante la lettura del database di programma ' filename '

Impossibile leggere il database di programma (PDB).

Questo errore può essere causato da un danneggiamento del file.

Se `filename` è il PDB per un file oggetto, ricompilare il file oggetto utilizzando [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).

Se `filename` è il PDB per il file di output principale e questo errore si è verificato durante un collegamento incrementale, eliminare il PDB e ricollegarlo.
