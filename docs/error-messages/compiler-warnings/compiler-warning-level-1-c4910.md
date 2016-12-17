---
title: "Avviso del compilatore (livello 1) C4910 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4910"
ms.assetid: 67963560-fbca-4ca7-93db-06beaf7055f0
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4910
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'\<identicatore\>': '\_\_declspec\(dllexport\)' e 'extern' sono incompatibili in una creazione esplicita di istanza  
  
 La creazione dell'istanza di modello esplicita denominata *\<identificatore\>* viene modificata da entrambe le parole chiave `__declspec(dllexport)` e `extern`. Tuttavia, queste parole chiave si escludono reciprocamente. La parola chiave `__declspec(dllexport)` indica la creazione di un'istanza della classe di modello, mentre la parola chiave `extern` indica che l'istanza della classe di modello non viene creata automaticamente.  
  
## Vedere anche  
 [Creazione di un'istanza esplicita](../../cpp/explicit-instantiation.md)   
 [dllexport, dllimport](../../cpp/dllexport-dllimport.md)   
 [Regole e limitazioni generali](../../cpp/general-rules-and-limitations.md)