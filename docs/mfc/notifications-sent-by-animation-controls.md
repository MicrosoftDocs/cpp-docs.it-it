---
title: "Notifiche inviate mediante controlli Animation | Microsoft Docs"
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
  - "controlli animazione [C++], notifiche"
  - "CAnimateCtrl (classe), notifiche"
  - "controlli [MFC], animazione"
  - "notifiche, controlli animazione"
ms.assetid: 584f5824-446b-4a1a-85f7-ef61842c8186
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Notifiche inviate mediante controlli Animation
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un controllo animazione \([CAnimateCtrl](../mfc/reference/canimatectrl-class.md)\) invia due diversi tipi di messaggi di notifica.  Le notifiche vengono inviati sotto forma di messaggi di [WM\_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591).  
  
 Il messaggio di [ACN\_START](http://msdn.microsoft.com/library/windows/desktop/bb761891) viene inviato al controllo animazione ha avviato riprodurre un clip.  Il messaggio di [ACN\_STOP](http://msdn.microsoft.com/library/windows/desktop/bb761893) viene inviato quando il controllo animazione ha completato o si shutdown riprodurre un clip.  
  
## Vedere anche  
 [Utilizzo di CAnimateCtrl](../mfc/using-canimatectrl.md)   
 [Controlli](../mfc/controls-mfc.md)