---
title: "Editing Control Properties | Microsoft Docs"
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
  - "controls [C++], undoing changes"
  - "controls [C++], editing properties"
  - "dialog box controls, editing properties"
ms.assetid: 9bdae21d-6dec-4344-a197-2ca4fc46d040
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Editing Control Properties
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### Per modificare le proprietà di uno o più controlli  
  
1.  Nella finestra di dialogo selezionare il controllo che si desidera modificare.  
  
    > [!NOTE]
    >  Se vengono selezionati più controlli, sarà possibile modificare soltanto le proprietà comuni a tutti i controlli.  
  
2.  Nella [finestra Proprietà](../Topic/Properties%20Window.md) modificare le proprietà del controllo.  
  
    > [!NOTE]
    >  Quando la proprietà **Bitmap** viene impostata su **True** per un pulsante, una casella di controllo o un pulsante di opzione, verrà implementato lo stile BS\_BITMAP per il controllo.  Per ulteriori informazioni, vedere [Stili dei pulsanti](../mfc/reference/button-styles.md).  Per un esempio di associazione di un'immagine bitmap a un controllo, vedere [CButton::SetBitmap](../Topic/CButton::SetBitmap.md).  Le immagini bitmap non vengono visualizzate nel controllo mentre si è all'interno dell'editor di risorse di tipo finestra.  
  
### Per annullare le modifiche apportate alle proprietà di un controllo  
  
1.  Assicurarsi che il controllo abbia lo stato attivo nell'editor finestre.  
  
2.  Scegliere **Annulla** dal menu **Modifica**. Se il controllo non ha lo stato attivo, il comando **Annulla** non sarà disponibile.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)