---
title: "Dipendenti dedotti | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dipendenti, dedotti"
  - "dipendenti dedotti in NMAKE"
ms.assetid: 9303045c-69b3-4f35-bffc-19d5cd6ea3c3
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Dipendenti dedotti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I dipendenti dedotti sono derivati da una regola di inferenza e vengono valutati prima dei dipendenti espliciti.  Se la destinazione di un dipendente dedotto non è aggiornata, viene richiamato il blocco di comandi della dipendenza.  Se un dipendente dedotto non è presente o i relativi dipendenti non sono aggiornati, ne viene innanzitutto eseguito l'aggiornamento.  Per ulteriori informazioni sui dipendenti dedotti, vedere [Regole di inferenza](../build/inference-rules.md).  
  
## Vedere anche  
 [Dipendenti](../build/dependents.md)