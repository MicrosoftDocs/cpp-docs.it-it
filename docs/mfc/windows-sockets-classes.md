---
title: "Classi Windows Sockets | Microsoft Docs"
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
  - "vc.classes.net"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi socket"
  - "Windows Sockets [C++], classi"
ms.assetid: 58b9ab8d-9e44-4db3-8265-e04e713d2e9a
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi Windows Sockets
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Windows Sockets fornisce una modalità di protocollo indipendente di rete comunicare tra due computer.  Questi socket possono essere sincroni \(le attese del programma fino alla comunicazione\) o asincroni \(il programma continua mentre la comunicazione in corso\).  
  
 [CAsyncSocket](../mfc/reference/casyncsocket-class.md)  
 Incapsula Windows Sockets API in un thin wrapper.  
  
 [CSocket](../mfc/reference/csocket-class.md)  
 Astrazione di livello superiore derivata da `CAsyncSocket`.  Funziona in modo sincrono.  
  
 [CSocketFile](../mfc/reference/csocketfile-class.md)  
 Fornisce un'interfaccia di `CFile` a un socket di windows.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)