---
title: "Utilizzo di CStatusBarCtrl per creare un oggetto CStatusBarCtrl | Microsoft Docs"
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
  - "CStatusBarCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStatusBarCtrl (classe), creazione"
  - "controlli della barra di stato, creazione"
ms.assetid: 365c2b65-12de-49e6-9a2e-416c6ee10d60
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di CStatusBarCtrl per creare un oggetto CStatusBarCtrl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Di seguito è riportato un esempio di un utilizzo tipico di [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md):  
  
### Per utilizzare un controllo barra di stato con parti  
  
1.  Costruire l'oggetto `CStatusBarCtrl`.  
  
2.  Chiamare [SetMinHeight](../Topic/CStatusBarCtrl::SetMinHeight.md) se si desidera impostare l'altezza minima dell'area di disegno del controllo barra di stato.  
  
3.  Chiamare [SetBkColor](../Topic/CStatusBarCtrl::SetBkColor.md) per impostare il colore di sfondo del controllo barra di stato.  
  
4.  Chiamare [SetParts](../Topic/CStatusBarCtrl::SetParts.md) per impostare il numero delle parti in un controllo barra di stato e la coordinata del bordo destro di ogni parte.  
  
5.  Chiamare [SetText](../Topic/CStatusBarCtrl::SetText.md) per impostare il testo in una parte del controllo barra di stato.  Il messaggio invalida la parte del controllo che è stata modificata, causando la visualizzazione del nuovo testo dopo che il controllo riceve il messaggio `WM_PAINT`.  
  
 In alcuni casi, la barra di stato richiede solo di visualizzare una riga di testo.  In questo caso, eseguire una chiamata a [SetSimple](../Topic/CStatusBarCtrl::SetSimple.md).  Questo pone il controllo barra di stato in modalità "semplice", che visualizza una sola riga di testo.  
  
## Vedere anche  
 [Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)