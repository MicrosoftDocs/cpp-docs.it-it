---
title: "Errore degli strumenti del linker LNK1158 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1158"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1158"
ms.assetid: 45febf16-d9e1-42db-af91-532e2717fd6a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore degli strumenti del linker LNK1158
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile eseguire 'nomefile'  
  
 Il file eseguibile dato, denominato da [LINK](../../build/reference/linker-command-line-syntax.md), non si trova nella directory che contiene LINK né in una directory specificata nella variabile di ambiente PATH.  
  
 Questo errore può verificarsi, ad esempio, se si tenta di utilizzare il parametro PGOPTIMIZE nell'opzione del linker [\/LTCG](../../build/reference/ltcg-link-time-code-generation.md) su un computer con sistema operativo a 32 bit.