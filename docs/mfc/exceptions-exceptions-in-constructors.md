---
title: "Eccezioni: eccezioni nei costruttori | Microsoft Docs"
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
  - "costruttori [C++], eccezioni"
  - "eccezioni, in costruttori"
  - "generazione di eccezioni, in costruttori"
ms.assetid: a78eae5a-5821-4b27-9478-1436320ed1e1
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Eccezioni: eccezioni nei costruttori
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nel generare un'eccezione in un costruttore, pulire eventuali oggetti e allocazioni di memoria sono state apportate prima di generare l'eccezione, come illustrato in [Eccezioni: Generare eccezioni dalle funzioni personalizzate](../mfc/exceptions-throwing-exceptions-from-your-own-functions.md).  
  
 Nel generare un'eccezione in un costruttore, la memoria per l'oggetto stessa è già stata allocata prima del costruttore viene chiamato.  Pertanto, il compilatore rilasciato automaticamente la memoria occupata dall'oggetto dopo la generazione dell'eccezione.  
  
 Per ulteriori informazioni, vedere [Eccezioni: Versione degli oggetti delle eccezioni](../mfc/exceptions-freeing-objects-in-exceptions.md).  
  
## Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)