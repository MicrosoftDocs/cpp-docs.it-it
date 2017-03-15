---
title: "Drawing Lines or Closed Figures (Image Editor for Icons) | Microsoft Docs"
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
  - "closed figures, drawing"
  - "lines [C++], painting"
  - "lines [C++], drawing"
  - "Image editor [C++], drawing lines"
  - "shapes, drawing"
ms.assetid: 7edd86db-77b1-451f-8001-bbfed9c6304f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Drawing Lines or Closed Figures (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli strumenti dell'editor di immagini per il disegno di linee e di figure chiuse presentano lo stesso funzionamento, ovvero è sufficiente posizionare il puntatore del mouse nel punto di inserimento e trascinare verso un altro punto.  Nel caso di linee, tali punti rappresentano gli endpoint,  mentre nel caso di figure chiuse, rappresentano gli angoli opposti di un rettangolo che delimita la figura in questione.  
  
 Lo spessore delle linee tracciate è determinato dal pennello correntemente selezionato, mentre quello delle figure profilate è determinato dallo spessore correntemente selezionato.  Le linee e tutte le figure, sia profilate che piene, vengono disegnate nel colore di primo piano corrente se si fa clic con il pulsante sinistro del mouse oppure nel colore di sfondo corrente se si fa clic con il pulsante destro.  
  
### Per disegnare una linea  
  
1.  Selezionare lo strumento **Linea** sulla [barra degli strumenti dell'editor di immagini](../mfc/toolbar-image-editor-for-icons.md) o mediante l'opzione **Strumenti** del menu **Immagine**.  
  
2.  Se necessario, selezionare i colori e un pennello.  
  
    -   Nella [tavolozza Colori](../windows/colors-window-image-editor-for-icons.md) fare clic con il pulsante sinistro del mouse per selezionare un colore di primo piano oppure fare clic con il pulsante destro per selezionare un colore di sfondo.  
  
    -   Nel [selettore di opzioni](../mfc/toolbar-image-editor-for-icons.md) fare clic sulla forma che rappresenta il pennello che si desidera utilizzare.  
  
3.  Posizionare il puntatore del mouse in corrispondenza del punto iniziale della linea.  
  
4.  Trascinare il puntatore fino all'endpoint della linea.  
  
### Per disegnare una figura chiusa  
  
1.  Selezionare uno strumento per il **disegno di figure chiuse** sulla barra degli strumenti dell'**Editor immagini** o mediante l'opzione **Strumenti** del menu **Immagine**.  
  
     Gli strumenti per il **disegno di figure chiuse** consentono di creare le figure indicate sui rispettivi pulsanti.  
  
2.  Se necessario, selezionare i colori e uno spessore di linea.  
  
3.  Spostare il puntatore del mouse in corrispondenza di un angolo dell'area del rettangolo in cui si desidera disegnare la figura.  
  
4.  Trascinare il puntatore nell'angolo diagonalmente opposto.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Nessuno  
  
## Vedere anche  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)   
 [Working with Color](../mfc/working-with-color-image-editor-for-icons.md)