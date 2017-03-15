---
title: "Selezione di un oggetto grafico in un contesto di dispositivo | Microsoft Docs"
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
  - "contesti di dispositivo, oggetti grafici"
  - "contesti di dispositivo, selezione di oggetti grafici in"
  - "GDI (oggetti) [C++], contesti di dispositivo"
  - "oggetti grafici, selezione in contesto di dispositivo"
  - "durata, oggetti grafici"
  - "SelectObject (metodo)"
ms.assetid: cf54a330-63ef-421f-83eb-90ec7bd82eef
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Selezione di un oggetto grafico in un contesto di dispositivo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo a utilizzare oggetti grafici nel contesto di dispositivo di una finestra.  Dopo avere [creare un oggetto drawing](../mfc/one-stage-and-two-stage-construction-of-objects.md), è necessario selezionarlo nel contesto di dispositivo anziché l'oggetto predefinito memorizzato presente:  
  
 [!code-cpp[NVC_MFCDocViewSDI#7](../mfc/codesnippet/CPP/selecting-a-graphic-object-into-a-device-context_1.cpp)]  
  
## Durata degli oggetti grafici  
 L'oggetto grafico restituito da [SelectObject](../Topic/CDC::SelectObject.md) è "temporaneo". Ovvero verrà eliminata dalla funzione membro di [OnIdle](../Topic/CWinApp::OnIdle.md) di classe `CWinApp` la successiva esecuzione del programma ottiene il tempo di inattività.  Mentre si utilizza l'oggetto restituito da `SelectObject` in una singola funzione senza restituire il controllo al ciclo di messaggi principale, non sarà problema.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Oggetti grafici](../mfc/graphic-objects.md)  
  
-   [Costruzione a uno stadio e in due fasi di oggetti grafici](../mfc/one-stage-and-two-stage-construction-of-objects.md)  
  
-   [Contesti di periferica](../mfc/device-contexts.md)  
  
-   [Disegnare una visualizzazione](../mfc/drawing-in-a-view.md)  
  
## Vedere anche  
 [Oggetti grafici](../mfc/graphic-objects.md)