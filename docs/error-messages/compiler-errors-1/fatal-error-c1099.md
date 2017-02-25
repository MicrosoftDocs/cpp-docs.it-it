---
title: "Errore irreversibile C1099 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1099"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1099"
ms.assetid: c050b074-a06a-4026-9e10-569029cc0739
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore irreversibile C1099
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il motore di Modifica e continuazione terminerà la compilazione  
  
 Modifica e continuazione ha caricato un file di intestazione precompilata in preparazione della compilazione di modifiche al codice, ma le azioni successive \(ad esempio le modifiche al codice precedenti alla dichiarazione `#include` dell'intestazione precompilata o l'arresto del debugger\) hanno impedito a Modifica e continuazione di terminare la compilazione con tale processo. Non è necessario intraprendere alcuna azione per correggere l'errore.