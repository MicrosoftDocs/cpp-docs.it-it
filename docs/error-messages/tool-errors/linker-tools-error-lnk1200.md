---
title: Strumenti del linker LNK1200 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1200
dev_langs:
- C++
helpviewer_keywords:
- LNK1200
ms.assetid: 55771145-915e-4006-ac6c-ac702041eb2f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 03ecd51142bf30230b6b177a36e007345e93bf2c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46059316"
---
# <a name="linker-tools-error-lnk1200"></a>Errore degli strumenti del linker LNK1200

Errore durante la lettura del database di programma 'filename'

Non è stato possibile leggere il database di programma (PDB).

Questo errore può essere causato dal danneggiamento dei file.

Se `filename` è il file PDB per un file di oggetti, ricompilare il file oggetto usando [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).

Se `filename` è il file PDB per il file di output principale, e questo errore si verifica durante un collegamento incrementale, eliminare il file PDB e ricollegare.