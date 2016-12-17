---
title: "Classi di eccezioni e debug | Microsoft Docs"
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
  - "vc.classes.debug"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "debug [MFC], classi per il debug"
  - "debug [MFC], classi di eccezione"
ms.assetid: 0d158efd-2e62-452e-9d2a-d3c30dfee7f9
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi di eccezioni e debug
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste classi forniscono supporto per il debug dell'allocazione dinamica della memoria e per il passaggio delle informazioni sull'eccezione dalla funzione in cui l'eccezione viene generata alla funzione in cui viene intercettata.  
  
 Utilizzare le classi [CDumpContext](../mfc/reference/cdumpcontext-class.md) e [CMemoryState](../mfc/reference/cmemorystate-structure.md) durante lo sviluppo per semplificare il debug, come descritto in [Debug di applicazioni MFC](../Topic/MFC%20Debugging%20Techniques.md).  Utilizzare [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) per determinare la classe di qualsiasi oggetto in fase di esecuzione, come descritto nell'articolo [Accesso alle informazioni sulle classi in fase di esecuzione](../mfc/accessing-run-time-class-information.md).  Il framework utilizza `CRuntimeClass` per creare dinamicamente gli oggetti di una classe particolare.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)