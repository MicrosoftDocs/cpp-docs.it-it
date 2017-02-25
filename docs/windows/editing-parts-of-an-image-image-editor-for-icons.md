---
title: "Editing Parts of an Image (Image Editor for Icons) | Microsoft Docs"
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
  - "Image editor [C++], editing images"
  - "Clipboard [C++], pasting"
  - "images [C++], editing"
  - "images [C++], deleting selected parts"
  - "images [C++], copying selected parts"
  - "images [C++], moving selected parts"
  - "images [C++], dragging and replicating selected parts"
  - "images [C++], pasting into"
  - "graphics [C++], editing"
ms.assetid: ff4f5fef-71a4-4fd8-825e-049399fed391
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Editing Parts of an Image (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le operazioni di modifica standard, ovvero le operazioni di taglia e copia, di rimozione e di spostamento, possono essere effettuate sulla [selezione](../mfc/selecting-an-area-of-an-image-image-editor-for-icons.md) indipendentemente dal fatto che questa corrisponda all'intera immagine o soltanto a una parte.  Poiché l'editor di immagini utilizza gli Appunti di Windows, è possibile trasferire le immagini dall'editor di immagini e altre applicazioni per Windows.  
  
 La selezione può inoltre essere ridimensionata, indipendentemente dal fatto che corrisponda all'intera immagine o soltanto a una parte.  
  
### Per tagliare la selezione corrente e spostarla negli Appunti  
  
1.  Scegliere **Taglia** dal menu **Modifica**.  
  
### Per copiare la selezione  
  
1.  Posizionare il puntatore del mouse all'interno del bordo di selezione o su qualsiasi punto del bordo a esclusione dei quadratini di ridimensionamento.  
  
2.  Tenendo premuto **CTRL**, trascinare la selezione in una nuova posizione.  L'area della selezione originale resterà invariata.  
  
3.  Per copiare la selezione nell'immagine nella posizione corrente, fare clic all'esterno del bordo di selezione.  
  
### Per incollare il contenuto degli Appunti in un'immagine  
  
1.  Scegliere **Incolla** dal menu **Modifica**.  
  
     Il contenuto degli Appunti, circondato dal bordo di selezione, verrà visualizzato nell'angolo superiore sinistro del riquadro.  
  
2.  Posizionare il puntatore del mouse all'interno del bordo di selezione e trascinare l'immagine nella posizione desiderata all'interno dell'immagine.  
  
3.  Per ancorare l'immagine nella nuova posizione, fare clic all'esterno del bordo di selezione.  
  
### Per eliminare la selezione corrente senza spostarla negli Appunti  
  
1.  Scegliere **Elimina** dal menu **Modifica**.  
  
     L'area originale della selezione verrà riempita con il colore di sfondo corrente.  
  
    > [!NOTE]
    >  È possibile accedere ai comandi Taglia, Copia, Incolla ed Elimina facendo clic con il pulsante destro del mouse nella finestra Visualizzazione risorse.  
  
### Per spostare la selezione  
  
1.  Posizionare il puntatore del mouse all'interno del bordo di selezione o su qualsiasi punto del bordo a esclusione dei quadratini di ridimensionamento.  
  
2.  Trascinare la selezione nella nuova posizione.  
  
3.  Per ancorare la selezione nell'immagine nella nuova posizione, fare clic all'esterno del bordo di selezione.  
  
 Per ulteriori informazioni sull'utilizzo della selezione nelle operazioni di disegno, vedere [Creazione di un pennello personalizzato](../mfc/creating-a-custom-brush-image-editor-for-icons.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Nessuno  
  
## Vedere anche  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)