---
title: "Tecnologia Active e DLL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tecnologia Active [C++]"
  - "automazione [C++], DLL"
  - "DLL [C++], tecnologia Active"
  - "server in-process (DLL)"
  - "DLL MFC [C++], tecnologia Active"
ms.assetid: 3ed27f8d-164a-4562-ad61-9f2333404cc7
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Tecnologia Active e DLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La tecnologia Active consente la completa implementazione dei server degli oggetti in una DLL.  Questo tipo di server è definito server in\-process.  MFC non supporta completamente i server di questo tipo per tutte le funzionalità di modifica visiva, soprattutto perché la tecnologia Active non consente l'associazione di un server al ciclo di messaggi principale del contenitore.  MFC richiede l'accesso al ciclo di messaggi dell'applicazione contenitore per gestire i tasti di scelta rapida e l'elaborazione in fase di inattività.  
  
 Se si scrive un server di automazione che non dispone di interfaccia utente, è possibile trasformarlo in un server in\-process e inserirlo completamente in una DLL.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Server di automazione](../mfc/automation-servers.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)