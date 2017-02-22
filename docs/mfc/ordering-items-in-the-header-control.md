---
title: "Ordinamento degli elementi nel controllo Header | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DS_DRAGDROP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DS_DRAGDROP (notifica)"
  - "GetOrderArray (metodo)"
  - "controlli intestazione, ordinamento di elementi"
  - "OrderToIndex (metodo)"
  - "sequenza"
  - "sequenza, elementi del controllo intestazione"
  - "SetOrderArray (metodo)"
ms.assetid: 5aaef872-75b5-49c5-8fed-6f9a81fca812
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Ordinamento degli elementi nel controllo Header
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dopo aver [elementi aggiunti a un controllo intestazione](../mfc/adding-items-to-the-header-control.md), è possibile modificare o ottenere informazioni sul relativo ordine con le seguenti funzioni:  
  
-   [CHeaderCtrl::GetOrderArray](../Topic/CHeaderCtrl::GetOrderArray.md) e [CHeaderCtrl::SetOrderArray](../Topic/CHeaderCtrl::SetOrderArray.md)  
  
     Recupera o imposta l'ordine da sinistra a destra delle voci di intestazione.  
  
-   [CHeaderCtrl::OrderToIndex](../Topic/CHeaderCtrl::OrderToIndex.md).  
  
     Recupera il valore di indice per una voce di intestazione specifica.  
  
 Oltre alle funzioni membro precedenti, lo stile di `HDS_DRAGDROP` consente all'utente di trascinare le voci di intestazione all'interno del controllo intestazione.  Per ulteriori informazioni, vedere [Fornendo supporto trascinamento per le voci di intestazione](../mfc/providing-drag-and-drop-support-for-header-items.md).  
  
## Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)