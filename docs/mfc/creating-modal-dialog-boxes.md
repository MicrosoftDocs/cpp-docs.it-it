---
title: "Creazione di finestre di dialogo modali | Microsoft Docs"
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
  - "MFC (finestre di dialogo), creazione"
  - "MFC (finestre di dialogo), modali"
  - "finestre di dialogo modali, creazione"
ms.assetid: 26c7a68c-79f6-4862-a5a8-6024984644d2
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione di finestre di dialogo modali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per creare una finestra di dialogo modale, chiamare uno dei due costruttori pubblici dichiarati in [CDialog](../mfc/reference/cdialog-class.md).  Successivamente, chiamare la funzione membro [DoModal](../Topic/CDialog::DoModal.md) dell'oggetto finestra di dialogo per visualizzare la finestra di dialogo e gestire l'interazione con finché l'utente non scegliere OK o annulla.  La gestione di `DoModal` rende la finestra di dialogo modale.  Per le finestre di dialogo modali, `DoModal` carica la finestra di dialogo.  
  
## Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)