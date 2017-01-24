---
title: "Quanto costa derivare una classe da CObject? | Microsoft Docs"
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
  - "CObject (classe), sovraccarico di classi derivate"
ms.assetid: 9b92c98b-b3dd-48a7-9d24-c3b8554edf90
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Quanto costa derivare una classe da CObject?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il sovraccarico nel derivare dalla classe [CObject](../mfc/reference/cobject-class.md) è minimo.  La classe derivata eredita solo quattro funzioni virtuali e un singolo oggetto di [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md).  
  
## Vedere anche  
 [Classe CObject: domande frequenti](../mfc/cobject-class-frequently-asked-questions.md)