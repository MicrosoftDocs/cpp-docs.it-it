---
title: Strumenti del linker LNK1200 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1200
dev_langs: C++
helpviewer_keywords: LNK1200
ms.assetid: 55771145-915e-4006-ac6c-ac702041eb2f
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 792c81e36b99bbac6c0417f0230bb1ea2bb1787c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="linker-tools-error-lnk1200"></a>Errore degli strumenti del linker LNK1200
Errore durante la lettura del database di programma 'nomefile'  
  
 Non è stato possibile leggere il database di programma (PDB).  
  
 Questo errore può essere causato dal danneggiamento dei file.  
  
 Se `filename` è il file PDB per un file oggetto, ricompilare il file oggetto utilizzando [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
 Se `filename` è il file PDB per il file di output principale e si è verificato l'errore durante un collegamento incrementale, eliminare il file PDB e ripetere il collegamento.