---
title: "Derivare nuove classi da CObject? | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CObject (classe), quando utilizzare"
  - "classi derivate, da CObject"
ms.assetid: 26021031-feaf-424c-80d1-9547c4409d6a
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Derivare nuove classi da CObject?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

No.  
  
 Derivare la classe da [CObject](../mfc/reference/cobject-class.md) quando sono necessarie le funzionalità che offre, ad esempio la serializzazione o creatability dinamico.  Molte classi di dati devono essere serializzate ai file, pertanto è spesso opportuno derivare da `CObject`.  Per un esempio di una classe derivata da `CObject`, vedere [Esempio Scribble](../top/visual-cpp-samples.md).  
  
## Vedere anche  
 [Classe CObject: domande frequenti](../mfc/cobject-class-frequently-asked-questions.md)