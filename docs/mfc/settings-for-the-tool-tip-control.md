---
title: "Impostazioni per il controllo ToolTip | Microsoft Docs"
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
  - "descrizioni comandi [C++], attivazione"
  - "classe CToolTipCtrl, impostazioni"
ms.assetid: ff8c5c46-2047-403a-bd98-ffec3d21ee3a
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Impostazioni per il controllo ToolTip
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile impostare il controllo di descrizione comando \([CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)\) su attivo o inattivo. Se si imposta su attivo, il controllo di descrizione comando viene visualizzato quando il cursore si trova in uno strumento. Se si imposta su inattivo, il controllo di descrizione comando non viene visualizzato, anche quando il cursore si trova in uno strumento. Chiamare [Attiva](../Topic/CToolTipCtrl::Activate.md) per attivare o disattivare un controllo di descrizione comandi.  
  
 È possibile impostare una descrizione comando attiva per visualizzare la descrizione comando quando il cursore si trova in uno strumento, indipendentemente dal fatto che la finestra proprietaria del controllo di descrizione comando sia attiva o inattiva, usando lo stile **TTS\_ALWAYSTIP**. Se non si usa questo stile, il controllo di descrizione comando viene visualizzato solo quando la finestra proprietaria dello strumento è attiva.  
  
 La maggior parte delle applicazioni contiene barre degli strumenti con strumenti che corrispondono ai comandi di menu. Per questi strumenti è utile che il controllo di descrizione comando visualizzi lo stesso testo della voce di menu corrispondente. Il sistema elimina automaticamente i caratteri di scelta rapida e commerciale \(&\) da tutte le stringhe passate a un controllo di descrizione comando, a meno che il controllo non contenga lo stile **TTS\_NOPREFIX**.  
  
## Vedere anche  
 [Utilizzo di CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controlli](../mfc/controls-mfc.md)