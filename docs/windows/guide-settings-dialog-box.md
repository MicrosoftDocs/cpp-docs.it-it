---
title: "Finestra di dialogo Impostazioni guide | Microsoft Docs"
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
  - "DLU (Dialog Unit - unità delle finestre di dialogo)"
  - "Editor di finestre, blocco sulle guide"
  - "spaziatura di griglia"
  - "guide, impostazioni"
  - "unità delle finestre di dialogo (DLU - Dialog Unit)"
  - "griglia di layout nell'editor finestre"
  - "blocca sulle guide (editor finestre)"
  - "controlli [C++], blocco su guide/griglia"
  - "Impostazioni guide (finestra di dialogo dell'editor finestre)"
ms.assetid: 55381e1c-146a-4fa7-b1b3-b1492817615f
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Finestra di dialogo Impostazioni guide
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Guide layout  
 Consente di visualizzare le impostazioni delle guide di layout.  
  
 **Nessuno**  
  
 Consente di nascondere gli strumenti di layout.  
  
 **Righelli e guide**  
  
 Se attivata, questa opzione consente di aggiungere i righelli agli strumenti di layout. È possibile inserire le guide nei righelli.  Le guide predefinite sono i margini, che è possibile spostare mediante trascinamento.  Per inserire una guida, fare clic sui righelli.  I controlli vengono "bloccati" sulle guide quando vengono spostati sopra o in prossimità di queste ultime.  I controlli vengono inoltre spostati con la guida a cui sono associati.  Se un controllo è associato a una guida su ciascun lato e una delle guide viene spostata, il controllo viene ridimensionato.  
  
 **Grid**  
  
 Consente di creare una griglia di layout.  I nuovi controlli vengono automaticamente allineati alla griglia.  
  
## Spaziatura griglia  
 Consente di visualizzare le impostazioni relative alla spaziatura della griglia, espresse in unità della finestra di dialogo \(DLU, Dialog Unit\).  
  
 **Larghezza: DLU**  
  
 Consente di impostare la larghezza della griglia di layout in DLU.  Una DLU orizzontale corrisponde alla larghezza media del carattere nella finestra di dialogo divisa per quattro.  
  
 **Altezza: DLU**  
  
 Consente di impostare l'altezza della griglia di layout in DLU.  Una DLU verticale corrisponde all'altezza media del carattere nella finestra di dialogo divisa per otto.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Modifying the Layout Grid](../mfc/modifying-the-layout-grid.md)   
 [Dialog Editor States \(Guides and Grids\)](../mfc/dialog-editor-states-guides-and-grids.md)