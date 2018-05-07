---
title: Strumenti del linker LNK1200 errore | Documenti Microsoft
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
ms.openlocfilehash: ab32939c55dce5e27f907f3d23e639b24741cdc3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk1200"></a>Errore degli strumenti del linker LNK1200
Errore durante la lettura del database di programma 'nomefile'  
  
 Non è stato possibile leggere il database di programma (PDB).  
  
 Questo errore può essere causato dal danneggiamento dei file.  
  
 Se `filename` è il file PDB per un file oggetto, ricompilare il file oggetto utilizzando [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
 Se `filename` è il file PDB per il file di output principale e si è verificato l'errore durante un collegamento incrementale, eliminare il file PDB e ripetere il collegamento.