---
title: "Aggiunta di elementi al controllo Header | Microsoft Docs"
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
  - "CHeaderCtrl (classe), aggiunta di elementi"
  - "controlli [MFC], intestazione"
  - "controlli intestazione, aggiunta di elementi"
ms.assetid: 2e9a28b1-7302-4a93-8037-c5a4183e589a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Aggiunta di elementi al controllo Header
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dopo aver creato il controllo intestazione \([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)\) nella finestra padre, aggiungere tutti gli "elementi intestazione" necessari: in genere uno per colonna.  
  
### Per aggiungere una voce di intestazione  
  
1.  Preparare una struttura [HD\_ITEM](http://msdn.microsoft.com/library/windows/desktop/bb775247).  
  
2.  Chiamare [CHeaderCtrl::InsertItem](../Topic/CHeaderCtrl::InsertItem.md), passando la struttura.  
  
3.  Ripetere i passaggi 1 e 2 per gli elementi aggiuntivi.  
  
 Per ulteriori informazioni, vedere [Aggiungere un elemento ad un controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775238) nel [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)