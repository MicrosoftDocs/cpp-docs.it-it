---
title: "Inizializzazione delle parti di un oggetto CStatusBarCtrl | Microsoft Docs"
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
  - "CStatusBarCtrl (classe), dichiarazione di parti di"
  - "CStatusBarCtrl (classe), modalità semplice"
  - "icone, utilizzo nelle barre di stato"
  - "barre di stato semplici"
  - "barre di stato, dichiarazione di parti di"
  - "barre di stato, icone"
  - "barre di stato, modalità semplice"
ms.assetid: 60e8f285-d2d8-424a-a6ea-2fc548370303
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Inizializzazione delle parti di un oggetto CStatusBarCtrl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per impostazione predefinita, una barra di stato vengono visualizzate le informazioni sullo stato utilizzando i riquadri separati.  Questi riquadri disponibili anche noti come parti\) può contenere una stringa di testo, un'icona, entrambi.  
  
 Utilizzare [SetParts](../Topic/CStatusBarCtrl::SetParts.md) per definire le parti e la lunghezza, la barra di stato sarà.  Dopo avere creato le parti della barra di stato, fare chiamate a [SetText](../Topic/CStatusBarCtrl::SetText.md) e a [SetIcon](../Topic/CStatusBarCtrl::SetIcon.md) per impostare il testo o l'icona di un punto specifico della barra di stato.  Una volta che la parte è stato correttamente impostata, il controllo automaticamente viene ridisegnato.  
  
 Nell'esempio inizializza un oggetto esistente di `CStatusBarCtrl` \(`m_StatusBarCtrl`\) con quattro riquadri quindi imposta un'icona \(IDI\_ICON1\) e il testo nella seconda parte.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#31](../mfc/codesnippet/CPP/initializing-the-parts-of-a-cstatusbarctrl-object_1.cpp)]  
  
 Per ulteriori informazioni sull'impostazione della modalità di un oggetto di `CStatusBarCtrl` a semplice, vedere [Impostare la modalità di un oggetto di CStatusBarCtrl](../mfc/setting-the-mode-of-a-cstatusbarctrl-object.md).  
  
## Vedere anche  
 [Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)