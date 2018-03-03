---
title: Strumenti del linker LNK1200 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK1200
dev_langs:
- C++
helpviewer_keywords:
- LNK1200
ms.assetid: 55771145-915e-4006-ac6c-ac702041eb2f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 70bf262d4f99c807e3488c1f9b2ed9e73b1eb715
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1200"></a>Errore degli strumenti del linker LNK1200
Errore durante la lettura del database di programma 'nomefile'  
  
 Non è stato possibile leggere il database di programma (PDB).  
  
 Questo errore può essere causato dal danneggiamento dei file.  
  
 Se `filename` è il file PDB per un file oggetto, ricompilare il file oggetto utilizzando [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
 Se `filename` è il file PDB per il file di output principale e si è verificato l'errore durante un collegamento incrementale, eliminare il file PDB e ripetere il collegamento.