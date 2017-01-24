---
title: "Errore degli strumenti del linker LNK1223 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1223"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1223"
ms.assetid: c4728c36-daee-462f-a1c7-8733dcdec88e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1223
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

file danneggiato o non valido: il file contiene contributi pdata non validi  
  
 Per le piattaforme RISC che usano pdata, questo errore si verifica se il compilatore ha generato una sezione pdata con voci non ordinate.  
  
 Per risolvere il problema, provare a ricompilare senza abilitare l'opzione [\/GL \(Whole Program Optimization\)](../../error-messages/tool-errors/linker-tools-error-lnk1223.md).  Corpi di funzione vuota possono inoltre causare questo errore in alcuni casi.