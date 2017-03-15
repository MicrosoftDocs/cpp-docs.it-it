---
title: "Errore degli strumenti del linker LNK1200 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1200"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1200"
ms.assetid: 55771145-915e-4006-ac6c-ac702041eb2f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore degli strumenti del linker LNK1200
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore di lettura del database di programma 'nomefile'  
  
 È impossibile leggere il database di programma \(PDB\).  
  
 Questo errore può essere dovuto al danneggiamento del file.  
  
 Se `filename` è il file pdb di un file oggetto, ricompilare quest'ultimo utilizzando [\/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
 Se `filename` è il file pdb del file di output principale e questo errore si verifica durante un collegamento incrementale, eliminare il file pdb e ripetere il collegamento.