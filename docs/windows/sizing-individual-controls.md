---
title: "Sizing Individual Controls | Microsoft Docs"
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
  - "C++"
helpviewer_keywords: 
  - "Size to Content command"
  - "size, controls"
  - "text, autosizing controls to fit text"
  - "controls [C++], sizing"
ms.assetid: 14ccba02-7171-463a-a121-7018cf1e2e5a
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Sizing Individual Controls
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per ridimensionare un controllo, utilizzare i quadratini di ridimensionamento.  Quando viene posizionato su un quadratino di ridimensionamento, il puntatore assume una forma diversa in modo da indicare le direzioni in cui è possibile ridimensionare il controllo.  I quadratini di ridimensionamento attivi sono pieni. Se un quadratino di ridimensionamento è vuoto, non sarà possibile ridimensionare il controllo lungo quell'asse.  
  
 È inoltre possibile modificare la dimensione di un controllo bloccando il controllo su guide o margini oppure allontanando un controllo bloccato e la guida da un altro.  
  
### Per ridimensionare un controllo  
  
1.  Selezionare il controllo.  
  
2.  Trascinare i quadratini di ridimensionamento in modo da modificare la dimensione del controllo:  
  
    -   I quadratini di ridimensionamento nella parte superiore e sui lati modificano la dimensione orizzontale o verticale.  
  
    -   I quadratini di ridimensionamento posti negli angoli modificano sia la dimensione orizzontale che quella verticale.  
  
    > [!TIP]
    >  Tenendo premuto MAIUSC e utilizzando i tasti freccia SINISTRA e freccia DESTRA, è possibile ridimensionare il controllo di un'unità della finestra di dialogo \(DLU, Dialog Unit\) alla volta.  
  
### Per ridimensionare automaticamente un controllo in base al testo contenuto  
  
1.  Scegliere **Adatta al contenuto** dal menu **Formato**.  
  
 \- oppure \-  
  
-   Fare clic con il pulsante destro del mouse sul controllo, quindi scegliere **Adatta al contenuto** dal menu di scelta rapida.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)