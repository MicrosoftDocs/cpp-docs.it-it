---
title: "Avviso del compilatore (livello 4) C4611 | Microsoft Docs"
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
  - "C4611"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4611"
ms.assetid: bd90d0a6-75f9-4e97-968d-dda6773e9fd8
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4611
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'interazione tra 'funzione' e l'eliminazione di oggetti C\+\+ potrebbe non essere supportata da tutte le piattaforme  
  
 Su alcune piattaforme, è possibile che le funzioni che includono **catch** non supportino la semantica di eliminazione degli oggetti C\+\+ quando sono esterne all'ambito.  
  
 Per evitare comportamenti inattesi, evitare l'uso di **catch** nelle funzioni con costruttori e distruttori.  
  
 L'avviso viene generato una sola volta. Vedere [pragma warning](../../preprocessor/warning.md).