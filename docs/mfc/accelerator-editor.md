---
title: "Accelerator Editor | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.accelerator.F1"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "accelerator tables [C++], editing"
  - "tables [Visual Studio], accelerator key"
  - "accelerator keys"
  - "resource editors, Accelerator editor"
  - "keyboard shortcuts [C++], Accelerator editor"
  - "Accelerator editor"
ms.assetid: 013c30b6-5d61-4f1c-acef-8bd15bed7060
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Accelerator Editor
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una tabella di tasti di scelta rapida è una risorsa di Windows che contiene un elenco di tasti di scelta rapida e gli identificatori di comando associati. Un programma può avere più tabelle di tasti di scelta rapida.  
  
 In genere i tasti di scelta rapida vengono usati per i comandi di programma disponibili anche in un menu o in una barra degli strumenti. Tuttavia, è possibile usare la tabella di tasti di scelta rapida per definire le combinazioni di tasti per i comandi che non hanno un oggetto dell'interfaccia utente associato.  
  
 È possibile usare [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925) per associare i comandi dei tasti di scelta rapida al codice.  
  
 Con l'editor tasti di scelta rapida è possibile:  
  
-   [Impostare le proprietà dei tasti di scelta rapida](../windows/setting-accelerator-properties.md)  
  
-   [Associare un tasto di scelta rapida a una voce di menu](../windows/associating-an-accelerator-key-with-a-menu-item.md)  
  
-   [Modificare le tabelle di tasti di scelta rapida](../windows/editing-accelerator-tables.md)  
  
-   [Usare i tasti di scelta rapida predefiniti](../windows/predefined-accelerator-keys.md)  
  
    > [!TIP]
    >  Quando si usa l'editor tasti di scelta rapida, è possibile fare clic con il pulsante destro del mouse per visualizzare un menu di scelta rapida dei comandi usati frequentemente. I comandi disponibili dipendono dalla destinazione a cui fa riferimento il puntatore.  
  
    > [!NOTE]
    >  Windows non consente di creare tabelle di tasti di scelta rapida vuote. Se si crea una tabella di tasti di scelta rapida priva di voci, questa verrà eliminata automaticamente al salvataggio della tabella.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Resource Editors](../mfc/resource-editors.md)