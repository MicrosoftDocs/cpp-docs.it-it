---
title: "Fornitura di attivazione senza sfarfallio | Microsoft Docs"
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
  - "attivazione [C++], senza sfarfallio"
  - "sfarfallio, MCF (controlli ActiveX)"
  - "controlli ActiveX MFC [C++], senza sfarfallio"
ms.assetid: bcb24b77-31d8-44a0-8c58-2ea6213b4c43
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Fornitura di attivazione senza sfarfallio
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se il controllo viene disegnato nello stato di inattività e attivi \(e non utilizza l'attivazione senza finestra\), è possibile eliminare le operazioni di disegno e lo sfarfallio visivo associata che in genere si verificano quando esegue la transizione tra gli stati di inattività e attivi.  A tale scopo, includere il flag di **noFlickerActivate** nel set di flag restituiti da [COleControl::GetControlFlags](../Topic/COleControl::GetControlFlags.md).  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/CPP/providing-flicker-free-activation_1.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#13](../mfc/codesnippet/CPP/providing-flicker-free-activation_2.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/CPP/providing-flicker-free-activation_3.cpp)]  
  
 Il codice per importare questo flag viene generato automaticamente se si seleziona l'opzione **Attivazione senza sfarfallio** nella pagina di [Impostazioni controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) durante la creazione del controllo con la Creazione guidata controllo ActiveX MFC.  
  
 Se si utilizza l'attivazione senza finestra, questa ottimizzazione non ha effetto.  
  
## Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)