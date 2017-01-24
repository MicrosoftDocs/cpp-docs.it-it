---
title: "Utilizzo di descrizioni comandi in un oggetto CStatusBarCtrl | Microsoft Docs"
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
  - "CStatusBarCtrl (classe), descrizioni comandi"
  - "barre di stato, descrizioni comandi"
  - "descrizioni comandi [C++], utilizzo nelle barre di stato"
ms.assetid: a77597a7-43ef-4b8f-87bc-a8ea1dc63dc3
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di descrizioni comandi in un oggetto CStatusBarCtrl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per attivare le descrizioni comandi della barra di stato controlli, creare l'oggetto di `CStatusBarCtrl` con lo stile di **SBT\_TOOLTIPS**.  
  
> [!NOTE]
>  Se si utilizza un oggetto di `CStatusBar` per implementare la barra di stato, utilizzare la funzione di `CStatusBar::CreateEx`.  Consente di specificare gli stili aggiuntivi per l'oggetto incorporato di **CStatusBarCtrl** .  
  
 Una volta che l'oggetto di `CStatusBarCtrl` è stato creato correttamente, utilizzare [CStatusBarCtrl::SetTipText](../Topic/CStatusBarCtrl::SetTipText.md) e [CStatusBarCtrl::GetTipText](../Topic/CStatusBarCtrl::GetTipText.md) impostare e recuperare il testo del suggerimento per un riquadro specifico.  
  
 Una volta che la descrizione comandi è stata impostata, viene visualizzato solo se la parte non presenta un'icona e testo o, se tutto il testo non può essere visualizzato nella parte.  Le descrizioni comandi non sono supportate in modo semplice.  
  
## Vedere anche  
 [Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)