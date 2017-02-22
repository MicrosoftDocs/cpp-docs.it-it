---
title: "Viewing and Adding ActiveX Controls to a Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.controls.activex"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dialog boxes [C++], adding ActiveX controls"
  - "Insert ActiveX Control command"
  - "ActiveX controls [C++], adding to dialog boxes"
ms.assetid: e1c2e3ae-e1b0-40d3-9766-623007073856
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Viewing and Adding ActiveX Controls to a Dialog Box
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visual Studio consente di inserire controlli ActiveX nella finestra di dialogo.  
  
### Per visualizzare i controlli ActiveX disponibili  
  
1.  Aprire una finestra di dialogo nell'editor finestre.  
  
2.  Fare clic con il pulsante destro del mouse in un punto qualsiasi della finestra di dialogo.  
  
3.  Scegliere **Inserisci controllo ActiveX** dal menu di scelta rapida.  
  
     Nella [finestra di dialogo Inserisci controllo ActiveX](../mfc/insert-activex-control-dialog-box.md) che viene visualizzata sono presenti tutti i controlli ActiveX nel sistema. Nella parte inferiore della finestra di dialogo è indicato il percorso del file del controllo ActiveX.  
  
### Per aggiungere un controllo ActiveX a una finestra di dialogo  
  
1.  Nella [finestra di dialogo Inserisci controllo ActiveX](../mfc/insert-activex-control-dialog-box.md) selezionare il controllo da aggiungere alla finestra di dialogo, quindi fare clic su **OK**.  
  
     Il controllo viene visualizzato nella finestra di dialogo, in cui è possibile modificarlo o creare i relativi gestori, come per qualsiasi altro controllo.  
  
    > [!NOTE]
    >  È possibile aggiungere controlli ActiveX alla [finestra Casella degli strumenti](../Topic/Toolbox.md). Per altre informazioni, vedere [Gestione di elementi e schede nella Casella degli strumenti](http://msdn.microsoft.com/it-it/21285050-cadd-455a-b1f5-a2289a89c4db).  
  
    > [!CAUTION]
    >  Potrebbe non essere legalmente consentito distribuire tutti i controlli ActiveX nel sistema. Fare riferimento al contratto di licenza del software che ha installato i controlli o contattare il produttore del software.  
  
     È possibile inserire controlli nella finestra Casella degli strumenti per semplificare l'accesso. Per altre informazioni, vedere [Finestra di dialogo Personalizza Casella degli strumenti](http://msdn.microsoft.com/it-it/bd07835f-18a8-433e-bccc-7141f65263bb).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)   
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)