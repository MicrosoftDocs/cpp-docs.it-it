---
title: "Converting Bitmaps to Toolbars | Microsoft Docs"
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
  - "bitmaps [C++], converting to toolbars"
  - "Toolbar editor, converting bitmaps"
  - "toolbars [C++], converting bitmaps"
ms.assetid: 971c181b-40f5-44be-843d-677a7c235667
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Converting Bitmaps to Toolbars
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile creare una nuova barra degli strumenti mediante la conversione di una bitmap.  Gli elementi grafici della bitmap vengono convertiti nelle icone dei pulsanti di una barra degli strumenti.  Una singola bitmap contiene in genere più icone di pulsanti, con un'icona per ciascun pulsante.  Le icone possono essere di qualsiasi dimensione. La dimensione predefinita corrisponde a 16 pixel di larghezza e all'altezza dell'immagine.  È possibile specificare la dimensione delle icone dei pulsanti nella [finestra di dialogo Nuova risorsa barra degli strumenti](../mfc/new-toolbar-resource-dialog-box.md) scegliendo Editor barra degli strumenti dal menu **Immagine** all'interno dell'editor di immagini.  
  
### Per convertire bitmap in una barra degli strumenti  
  
1.  Aprire una risorsa bitmap esistente nell'[editor di immagini](../mfc/image-editor-for-icons.md).  Se la bitmap non è già inclusa nel file RC, fare clic con il pulsante destro del mouse sul file RC, scegliere **Importa** dal menu di scelta rapida, selezionare la bitmap che si desidera aggiungere al file RC, quindi scegliere **Apri**.  
  
2.  Scegliere **Editor barra degli strumenti** dal menu **Immagine**.  
  
     Verrà visualizzata la [finestra di dialogo Nuova risorsa barra degli strumenti](../mfc/new-toolbar-resource-dialog-box.md).  È possibile modificare la larghezza e l'altezza delle icone in modo che corrispondano a quelle della bitmap.  L'immagine della barra degli strumenti verrà quindi visualizzata nell'editor barra degli strumenti.  
  
3.  Per terminare la conversione, modificare l'**ID** di comando del pulsante mediante la [finestra Proprietà](../Topic/Properties%20Window.md).  Digitare il nuovo **ID** oppure selezionare un **ID** dalla casella di riepilogo a discesa.  
  
    > [!TIP]
    >  Nella barra del titolo della finestra Proprietà è disponibile un pulsante che raffigura una puntina da disegno.  Facendo clic su questo pulsante è possibile abilitare o disabilitare l'opzione Nascondi automaticamente relativa alla finestra.  Per scorrere tutte le proprietà dei pulsanti della barra degli strumenti senza che sia necessario riaprire le singole finestre delle proprietà, disattivare l'opzione Nascondi automaticamente, in modo che la finestra Proprietà sia sempre visibile.  
  
 È inoltre possibile modificare gli ID di comando dei pulsanti della nuova barra degli strumenti mediante la [finestra Proprietà](../Topic/Properties%20Window.md).  Per ulteriori informazioni sulla modifica della nuova barra degli strumenti, vedere [Creazione, spostamento e modifica dei pulsanti delle barre degli strumenti](../mfc/creating-moving-and-editing-toolbar-buttons.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 MFC o ATL  
  
## Vedere anche  
 [Creating New Toolbars](../mfc/creating-new-toolbars.md)   
 [Toolbar Editor](../mfc/toolbar-editor.md)