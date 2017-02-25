---
title: "Window Panes (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.bitmap"
  - "vc.editors.icon"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "graphics editor [C++]"
  - "Image editor [C++], panes"
ms.assetid: d66ea5b3-e2e2-4fc4-aa99-f50022cc690e
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Window Panes (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella finestra dell'editor di immagini una stessa immagine viene visualizzata contemporaneamente in due riquadri separati da una barra di divisione.  Una visualizzazione mostra le dimensioni effettive dell'immagine, mentre l'altra mostra l'immagine ingrandita \(il fattore di ingrandimento predefinito è 6\).  Le visualizzazioni nei due riquadri vengono aggiornate automaticamente, ovvero le modifiche apportate in un riquadro vengono immediatamente applicate nell'altro.  I due riquadri consentono di lavorare più facilmente su una visualizzazione ingrandita dell'immagine, in cui è possibile distinguere singoli pixel, osservando allo stesso tempo il risultato delle operazioni eseguite in una visualizzazione di dimensioni effettive dell'immagine.  
  
 Il riquadro di sinistra utilizza tutto lo spazio necessario, fino a occupare metà della finestra dell'editor di immagini, per mostrare la visualizzazione predefinita dell'immagine con ingrandimento 1:1.  Nel riquadro di destra viene visualizzata l'immagine ingrandita \(l'ingrandimento predefinito è di 6:1\).  È possibile [modificare l'ingrandimento](../mfc/changing-the-magnification-factor-image-editor-for-icons.md) in ciascun riquadro utilizzando lo strumento **Ingrandisci** della [barra degli strumenti dell'editor di immagini](../mfc/toolbar-image-editor-for-icons.md) oppure i tasti di scelta rapida.  
  
 È possibile ingrandire il riquadro più piccolo della finestra dell'editor di immagini in modo da utilizzare i due riquadri per visualizzare aree diverse di una stessa immagine di grandi dimensioni.  Fare clic all'interno del riquadro per selezionarlo.  
  
 Le dimensioni relative dei riquadri possono essere modificate posizionando il puntatore del mouse sulla barra di divisione e trascinando tale barra verso destra o verso sinistra.  Se si desidera lavorare con un solo riquadro, è possibile trascinare la barra di divisione fino al lato opposto.  
  
 Se il fattore di ingrandimento del riquadro dell'editor di immagini è uguale o superiore a 4, sarà possibile [visualizzare una griglia in pixel](../mfc/displaying-or-hiding-the-pixel-grid-image-editor-for-icons.md) che delimita i singoli pixel dell'immagine.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Nessuno  
  
## Vedere anche  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)