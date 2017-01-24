---
title: "Opening a Resource for Binary Editing | Microsoft Docs"
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
  - "vc.editors.binary"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "binary data, editing"
  - "resources [Visual Studio], opening for binary editing"
ms.assetid: d3cdb0e4-da66-410d-8e49-b29073ff2929
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Opening a Resource for Binary Editing
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### Per aprire una risorsa desktop di Windows per la modifica binaria  
  
1.  In [Visualizzazione risorse](../windows/resource-view-window.md) selezionare il file di risorse che si vuole modificare.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Fare clic con il pulsante destro del mouse sulla risorsa e scegliere **Apri dati binari** dal menu di scelta rapida.  
  
    > [!NOTE]
    >  Se si usa la finestra [Visualizzazione risorse](../windows/resource-view-window.md) per aprire una risorsa in un formato che Visual Studio non riconosce, ad esempio RCDATA o una risorsa personalizzata, la risorsa viene aperta automaticamente nell'editor binario.  
  
### Per aprire una risorsa gestita per la modifica binaria  
  
1.  In Esplora soluzioni selezionare il file di risorse specifico che si vuole modificare.  
  
2.  Fare clic con il pulsante destro del mouse sulla risorsa e scegliere **Apri con** dal menu di scelta rapida.  
  
3.  Nella finestra di dialogo **Apri con** scegliere **Editor binario**.  
  
    > [!NOTE]
    >  È possibile usare l'[Editor immagini](../mfc/image-editor-for-icons.md) e l'[Editor binario](../mfc/binary-editor.md) per usare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.  
  
    > [!NOTE]
    >  Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 ![Editor binario](../mfc/media/vcbinaryeditor2.gif "vcBinaryEditor2")  
Dati binari per una finestra di dialogo visualizzata nell'editor binario  
  
 Nell'editor binario vengono rappresentati solo alcuni valori ASCII \(da 0x20 a 0x7E\). I caratteri estesi vengono visualizzati come punti nella sezione Valore ASCII dell'editor binario \(riquadro a destra\). I caratteri "stampabili" sono valori ASCII da 32 a 126.  
  
> [!NOTE]
>  Se si vuole usare l'editor binario su una risorsa già modificata in un'altra finestra dell'editor, chiudere l'altra finestra.  
  
 **Requisiti**  
  
 Nessuno  
  
## Vedere anche  
 [Binary Editor](../mfc/binary-editor.md)