---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1200'
title: Errore degli strumenti del linker LNK1200
ms.date: 11/04/2016
f1_keywords:
- LNK1200
helpviewer_keywords:
- LNK1200
ms.assetid: 55771145-915e-4006-ac6c-ac702041eb2f
ms.openlocfilehash: b8c380b16cef47a4b340e4a48853d58d1ab203e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341646"
---
# <a name="linker-tools-error-lnk1200"></a>Errore degli strumenti del linker LNK1200

errore durante la lettura del database di programma ' filename '

Impossibile leggere il database di programma (PDB).

Questo errore può essere causato da un danneggiamento del file.

Se `filename` è il PDB per un file oggetto, ricompilare il file oggetto utilizzando [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).

Se `filename` è il PDB per il file di output principale e questo errore si è verificato durante un collegamento incrementale, eliminare il PDB e ricollegarlo.
