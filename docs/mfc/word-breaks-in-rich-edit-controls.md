---
title: "Interruzioni di parola in controlli Rich Edit | Microsoft Docs"
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
  - "interruzione delle parole in CRichEditCtrl"
  - "CRichEditCtrl (classe), interruzioni di parola in"
  - "Rich Edit (controlli), interruzioni di parola in"
  - "interruzioni di parola"
ms.assetid: 641dcf9e-7b40-4dc0-85f7-575a8c142f73
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Interruzioni di parola in controlli Rich Edit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un controllo Rich Edit \([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)\) chiama una funzione denominata "una routine dell'interruzione di parola" per trovare le interruzioni tra le parole e determinare dove può interruzioni di riga.  Il controllo utilizza queste informazioni quando si eseguono operazioni a capo automatico e quando elabora le combinazioni di tasti DESTRA e CTRL\+FRECCIA SINISTRA.  Un'applicazione può inviare messaggi a un controllo Rich Edit per sostituire la routine predefinita di interruzione viene riportata a capo automaticamente, recuperare informazioni di interruzione viene riportata a capo automaticamente e per determinare la riga un carattere specificato cade.  
  
## Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)