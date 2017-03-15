---
title: "Using a Drawing Tool (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.image.drawing"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Image editor [C++], selecting drawing tools"
  - "Image editor [C++], toolbar"
  - "drawing tools"
ms.assetid: 1f8c6eef-7760-45a9-a5cb-9e15c6f91245
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Using a Drawing Tool (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli strumenti di disegno a mano libera e gli strumenti di cancellazione dell'editor di immagini presentano lo stesso funzionamento, ovvero si seleziona lo strumento e se necessario si effettua la [selezione dei colori di primo piano e di sfondo](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md) e delle opzioni relative alle dimensioni e alla forma.  Si sposta quindi il puntatore del mouse sull'immagine e si fa clic o si trascina il puntatore per eseguire le operazioni di disegno o di cancellazione desiderate.  
  
 Quando si seleziona lo strumento **Gomma**, **Pennello** o **Aerografo**, nel selettore di opzioni vengono visualizzate le opzioni disponibili per tale strumento.  
  
> [!TIP]
>  Anziché utilizzare lo strumento **Gomma**, è possibile disegnare nel colore di sfondo utilizzando uno degli strumenti di disegno.  
  
 È possibile selezionare gli strumenti di disegno dalla barra degli strumenti dell'**Editor immagini** oppure dal menu **Immagine**.  
  
### Per selezionare e utilizzare uno strumento di disegno dalla barra degli strumenti dell'editor di immagini  
  
1.  Fare clic su un pulsante sulla barra degli strumenti dell'**Editor immagini**.  
  
    -   Facendo clic con il pulsante sinistro del mouse e tenendo premuto tale pulsante, lo strumento **Gomma** consente di disegnare sopra l'immagine utilizzando il colore di sfondo corrente.  
  
    -   Lo strumento **Matita** consente di disegnare a mano libera con uno spessore costante di un pixel.  
  
    -   La **dimensione e la forma dello strumento Pennello sono determinate dal selettore di opzioni**.  
  
    -   Lo strumento **Aerografo** distribuisce in modo casuale pixel di colore intorno al centro del pennello.  
  
        > [!TIP]
        >  Quando si passa il cursore sui pulsanti della [barra degli strumenti dell'editor di immagini](../mfc/toolbar-image-editor-for-icons.md), vengono visualizzate le relative descrizioni comandi.  che consentono di identificare facilmente i vari pulsanti descritti in questo argomento.  
  
2.  Se necessario, selezionare i colori e un pennello.  
  
    -   Nella [tavolozza Colori](../windows/colors-window-image-editor-for-icons.md) fare clic con il pulsante sinistro del mouse per selezionare un colore di primo piano oppure fare clic con il pulsante destro per selezionare un colore di sfondo.  
  
    -   Nel [selettore di opzioni](../mfc/toolbar-image-editor-for-icons.md) fare clic sulla forma che rappresenta il pennello che si desidera utilizzare.  
  
3.  Posizionare il puntatore del mouse nel punto dell'immagine in cui si desidera iniziare a disegnare.  Il puntatore assume una forma diversa a seconda dello strumento selezionato.  
  
4.  Fare clic con il pulsante sinistro del mouse per utilizzare il colore di primo piano oppure fare clic con il pulsante destro per utilizzare il colore di sfondo, quindi tenere premuto tale pulsante mentre si esegue l'operazione di disegno.  
  
### Per selezionare e utilizzare uno strumento di disegno dal menu Immagine  
  
1.  Scegliere l'opzione **Strumenti** dal menu **Immagine**.  
  
2.  Scegliere lo strumento che si desidera utilizzare dal sottomenu.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Nessuno  
  
## Vedere anche  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)   
 [Working with Color](../mfc/working-with-color-image-editor-for-icons.md)