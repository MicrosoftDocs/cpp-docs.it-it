---
title: "Aggiunta di schede a un controllo Tab | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "CTabCtrl (classe), aggiunta di schede"
  - "inserimento schede in CTabCtrls"
  - "controlli delle schede, aggiunta di schede"
  - "schede, aggiunta alla classe CTabCtrl"
ms.assetid: 7f3d9340-e3c7-4c71-9912-be57534ecc78
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di schede a un controllo Tab
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dopo aver creato il controllo Struttura a schede \([CTabCtrl](../mfc/reference/ctabctrl-class.md)\), aggiungere tutte le schede necessari.  
  
### Per aggiungere un elemento tab  
  
1.  Preparare una struttura di [TCITEM](http://msdn.microsoft.com/library/windows/desktop/bb760554).  
  
2.  Chiamata [CTabCtrl::InsertItem](../Topic/CTabCtrl::InsertItem.md), passando la struttura.  
  
3.  Ripetere i passaggi 1 e 2 per gli elementi aggiuntivi della scheda.  
  
 Per ulteriori informazioni, vedere [Creare un controllo Struttura a schede](http://msdn.microsoft.com/library/windows/desktop/bb760550) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Vedere anche  
 [Utilizzo di CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controlli](../mfc/controls-mfc.md)