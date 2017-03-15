---
title: "Errore della riga di comando D8037 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "D8037"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D8037"
ms.assetid: acddaaa0-bd84-426f-a37b-8f680b379c9d
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 3
---
# Errore della riga di comando D8037
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile creare il file temporaneo. Svuotare la directory temporanea dei file il precedenti  
  
 Non c'è spazio sufficiente per creare file intermedi del compilatore temporanei.  Per risolvere questo errore, rimuovere i file MSIL obsoleti nella directory specificata dalla variabile di ambiente **TMP**.  Questi file hanno il formato \_CL\_hhhhhhhh.ss, dove h rappresenta una cifra esadecimale casuale e ss rappresenta il tipo di file IL.  Assicurarsi inoltre di aggiornare il computer con le più recenti patch per il sistema operativo.  
  
## Vedere anche  
 [Errori della riga di comando da D8000 a D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)