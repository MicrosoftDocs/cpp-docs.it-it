---
title: "Utilizzo di un contesto di dispositivo integro | Microsoft Docs"
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
  - "MFC (controlli ActiveX), contesto di periferica integro"
ms.assetid: 9c020063-73da-4803-bf7b-2e1fd950c9ed
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di un contesto di dispositivo integro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se è assolutamente certi che il controllo non disegna all'esterno del rettangolo client, è possibile eseguire un piccolo ma rilevabile aumento di velocità disattivando la chiamata a `IntersectClipRect` effettuata da `COleControl`.  A tale scopo, rimuovere i flag di **clipPaintDC** dal set di flag restituiti da [COleControl::GetControlFlags](../Topic/COleControl::GetControlFlags.md).  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/CPP/using-an-unclipped-device-context_1.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#14](../mfc/codesnippet/CPP/using-an-unclipped-device-context_2.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/CPP/using-an-unclipped-device-context_3.cpp)]  
  
 Il codice per rimuovere questo flag viene generato automaticamente se si seleziona l'opzione **Contesto di dispositivo integro** nella pagina di [Impostazioni controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) durante la creazione del controllo con la Creazione guidata controllo ActiveX MFC.  
  
 Se si utilizza l'attivazione senza finestra, questa ottimizzazione non ha effetto.  
  
## Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)