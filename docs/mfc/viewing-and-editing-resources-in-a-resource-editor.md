---
title: "Viewing and Editing Resources in a Resource Editor | Microsoft Docs"
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
  - "vs.resourceview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "resources [Visual Studio], viewing"
  - "rc files, viewing resources"
  - "Resource View pane"
  - "layouts, previewing resource"
  - "code, viewing resources"
  - "resource editors, viewing resources"
  - ".rc files, viewing resources"
  - "resources [Visual Studio], editing"
ms.assetid: ba8bdc07-3f60-43c7-aa5c-d5dd11f0966e
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Viewing and Editing Resources in a Resource Editor
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ogni tipo di risorsa dispone di un editor di risorse specifico per il tipo di risorsa.  Tramite l'editor associato è possibile riordinare, ridimensionare, aggiungere controlli e funzionalità o modificare altrimenti gli aspetti di una risorsa.  È anche possibile modificare una risorsa in [formato testo](../windows/how-to-open-a-resource-script-file-in-text-format.md) e in [formato binario](../mfc/opening-a-resource-for-binary-editing.md).  
  
 Alcuni tipi di risorsa, quali le bitmap, le icone, i cursori, le barre degli strumenti e i file HTML, sono singoli file che è possibile importare e utilizzare in diversi modi.  Tali risorse dispongono di nomi di file e di [identificatori di risorsa](../mfc/symbols-resource-identifiers.md).  Altre risorse, quali le finestre di dialogo, i menu e le tabelle di stringhe in progetti Win32, sono disponibili solo all'interno di un file di script di risorsa \(RC\) o di modello di risorsa \(RCT\).  
  
> [!NOTE]
>  È possibile modificare le proprietà di una risorsa tramite [la finestra Proprietà](../windows/changing-the-properties-of-a-resource.md).  
  
## Risorse Win32  
 È possibile accedere alle risorse Win32 nel riquadro [Visualizzazione risorse](../windows/resource-view-window.md).  
  
#### Per visualizzare una risorsa Win32 in un editor di risorse  
  
1.  Scegliere **Visualizzazione risorse** dal menu **Visualizza**.  
  
2.  Se la finestra Visualizzazione risorse non è in primo piano, fare clic sulla scheda **Visualizzazione risorse** per portarla in primo piano.  
  
3.  Nel riquadro Visualizzazione risorse espandere la cartella del progetto contenente le risorse che si desidera visualizzare.  Se, ad esempio, si desidera visualizzare una risorsa finestra di dialogo, espandere la cartella Dialog.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere [Creazione di un nuovo file di script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
4.  Fare doppio clic sulla risorsa, ad esempio su IDD\_ABOUTBOX.  
  
     La risorsa verrà aperta nell'editor appropriato.  Per le risorse finestra di dialogo, ad esempio, la risorsa verrà aperta all'interno dell'editor finestra.  
  
     È inoltre possibile [visualizzare le risorse contenute in un file script di risorsa \(RC\) anche quando non è aperto alcun progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  
  
#### Per eliminare una risorsa Win 32 esistente  
  
1.  In Visualizzazione risorse espandere il nodo relativo a un tipo di risorsa.  
  
2.  Fare clic con il pulsante destro del mouse sulla risorsa che si desidera eliminare e scegliere **Elimina** dal menu di scelta rapida.  
  
    > [!NOTE]
    >  È possibile eliminare una risorsa utilizzando lo stesso comando del menu di scelta rapida quando il file RC è aperto nella finestra di un documento all'esterno di un progetto.  
  
## Risorse in progetti gestiti  
 Poiché i progetti gestiti non utilizzano i file di script di risorse, è necessario aprire le risorse da **Esplora soluzioni**.  È possibile utilizzare l'[editor di immagini](../mfc/image-editor-for-icons.md) e l'[editor binario](../mfc/binary-editor.md) per utilizzare i file di risorse nei progetti gestiti.  Per modificare le risorse gestite è necessario che siano collegate.  Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
#### Per visualizzare una risorsa gestita in un editor di risorse  
  
1.  In Esplora soluzioni fare doppio clic sulla risorsa, ad esempio, Bitmap1.bmp.  
  
     La risorsa verrà aperta nell'editor appropriato.  
  
#### Per eliminare una risorsa gestita esistente  
  
1.  In Esplora soluzioni fare clic con il pulsante destro del mouse sulla risorsa che si desidera eliminare e scegliere **Elimina** dal menu di scelta rapida.  
  
### Requisiti  
 Nessuno  
  
## Vedere anche  
 [Resource Editors](../mfc/resource-editors.md)