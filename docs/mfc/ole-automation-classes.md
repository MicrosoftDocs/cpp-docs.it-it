---
title: "Classi di automazione OLE | Microsoft Docs"
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
  - "vc.classes.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi di automazione"
  - "classi di automazione, classi OLE"
  - "automazione, classi"
  - "automazione OLE"
  - "automazione OLE, classi"
ms.assetid: 96e5372b-ff8a-4da1-933b-4d9bbf4dceb3
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi di automazione OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste classi supportano i client di automazione \(applicazioni che controllano altre applicazioni\).  I server di automazione \(applicazioni che possono essere controllati da altre applicazioni\) sono supportati con [mappe di invio](../mfc/reference/dispatch-maps.md).  
  
 [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md)  
 Utilizzato per chiamare i server di automazione dal client di automazione.  Nell'aggiungere una classe, la classe viene utilizzata per creare classi indipendenti dai tipi per i server di automazione che forniscono una libreria dei tipi.  
  
 [COleDispatchException](../mfc/reference/coledispatchexception-class.md)  
 Un'eccezione derivazione da un errore durante automazione OLE.  Le eccezioni di automazione sono generate dai server di automazione e vengono intercettate dai client di automazione.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)