---
title: "Creating New Toolbars | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.toolbar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "toolbars [C++], creating"
  - "Toolbar editor, creating new toolbars"
  - "Insert Resource"
ms.assetid: 1b28264b-0718-4df8-9f65-979805d2efef
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Creating New Toolbars
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### Per creare una nuova barra degli strumenti  
  
1.  Fare clic sul pulsante destro del mouse sul file RC in **Visualizzazione** risorse, quindi scegliere **Aggiungi risorsa** dal menu di scelta rapida.  Se il file RC dispone di una barra degli strumenti esistente, è sufficiente fare clic con il pulsante destro del mouse sulla cartella **Barra degli strumenti** e scegliere **Inserisci, Barra degli strumenti** dal menu di scelta rapida.  
  
     **Nota** Se il progetto non contiene un file RC, vedere [Creazione di un nuovo file di script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nella finestra di dialogo **Aggiungi risorsa**, selezionare **Barra degli strumenti** dall'elenco **Tipo di risorsa**, quindi scegliere **Nuova**.  
  
     Se accanto al tipo di risorsa **Barra degli strumenti** viene visualizzato un segno più \(\+\), significa che sono disponibili dei modelli di barra degli strumenti.  Fare clic sul segno più \(\+\) per espandere l'elenco dei modelli, selezionare un modello, quindi fare clic su **Nuovo**.  
  
     \- oppure \-  
  
3.  [Convertire una bitmap esistente in una barra degli strumenti](../mfc/converting-bitmaps-to-toolbars.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 MFC o ATL  
  
## Vedere anche  
 [Toolbar Editor](../mfc/toolbar-editor.md)