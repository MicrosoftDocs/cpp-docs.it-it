---
title: "Finestra di dialogo Nuova risorsa barra degli strumenti | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.newtoolbarresource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Nuova risorsa barra degli strumenti (finestra di dialogo)"
ms.assetid: 52dd01ad-e748-4ab2-b3eb-59f5df990ca6
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Finestra di dialogo Nuova risorsa barra degli strumenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La finestra di dialogo Nuova risorsa barra degli strumenti consente di specificare la larghezza e l'altezza dei pulsanti che vengono aggiunti a una risorsa barra degli strumenti.  L'impostazione predefinita è 16 × 15 pixel.  
  
 Un'immagine bitmap utilizzata per la creazione di una barra degli strumenti ha una larghezza massima di 2048.  Pertanto, se l'opzione **Larghezza pulsante** viene impostata su 512, è possibile disporre soltanto di quattro pulsanti.  Se la larghezza viene impostata su 513, è possibile disporre soltanto di tre pulsanti.  
  
 **Larghezza pulsante**  
 Consente di immettere la larghezza dei pulsanti della barra degli strumenti di cui viene effettuata la conversione da una risorsa bitmap a una risorsa barra degli strumenti.  Le icone vengono ritagliate in base alla larghezza e all'altezza specificate e i colori vengono regolati in modo da utilizzare i colori standard della barra degli strumenti \(16 colori\).  
  
 **Altezza pulsante**  
 Consente di immettere l'altezza dei pulsanti della barra degli strumenti di cui viene effettuata la conversione da una risorsa bitmap a una risorsa barra degli strumenti.  Le icone vengono ritagliate in base alla larghezza e all'altezza specificate e i colori vengono regolati in modo da utilizzare i colori standard della barra degli strumenti \(16 colori\).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 MFC o ATL  
  
## Vedere anche  
 [Toolbar Button Properties](../mfc/toolbar-button-properties.md)   
 [Converting Bitmaps to Toolbars](../mfc/converting-bitmaps-to-toolbars.md)   
 [Toolbar Editor](../mfc/toolbar-editor.md)