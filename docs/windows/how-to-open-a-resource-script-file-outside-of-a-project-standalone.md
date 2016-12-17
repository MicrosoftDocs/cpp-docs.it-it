---
title: "How to: Open a Resource Script File Outside of a Project (Standalone) | Microsoft Docs"
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
  - "vc.editors.resource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "resources [Visual Studio], viewing"
  - "rc files, viewing resources"
  - ".rc files, viewing resources"
  - "resource script files, viewing resources"
ms.assetid: bc350c60-178d-4c5d-9a7e-6576b0c936e4
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Open a Resource Script File Outside of a Project (Standalone)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile visualizzare le risorse in un file RC anche se non è aperto alcun progetto.  Il file RC verrà aperto in una finestra del documento, anziché nella finestra [Visualizzazione risorse](../windows/resource-view-window.md), come avviene quando il file viene aperto all'interno di un progetto.  
  
> [!NOTE]
>  Questa distinzione è importante poiché alcuni comandi sono disponibili solo quando il file viene aperto in modo autonomo, all'esterno di un progetto.  È possibile, ad esempio, salvare un file in un diverso formato o con un diverso nome di file solo quando il file viene aperto all'esterno di un progetto. Il comando **Salva con nome** non è disponibile quando un file viene aperto all'interno di un progetto.  
  
### Per aprire un file RC all'esterno di un progetto  
  
1.  Scegliere **Apri** dal menu **File** e quindi fare clic su **File**.  
  
2.  Nella finestra di dialogo **Apri file** passare al file script di risorsa che si vuole visualizzare, evidenziare il file e fare clic su **Apri**.  
  
    > [!NOTE]
    >  Se viene aperto prima il progetto\(**File**, **Apri**, **Progetto**\), alcuni comandi non saranno disponibili.  Aprire un file "in modo autonomo" significa aprirlo senza caricare il progetto.  
  
 Per aprire e visualizzare il file di risorsa in formato testo, vedere la pagina relativa alla [modifica di un file script di ricorsa \(RC\)](../windows/how-to-open-a-resource-script-file-in-text-format.md).  
  
#### Per aprire più file RC all'esterno di un progetto  
  
1.  Aprire entrambi i file di risorsa in modo autonomo.  Ad esempio, aprire Origine1.rc e Origine2.rc.  
  
    1.  Scegliere **Apri** dal menu **File** e quindi fare clic su **File**.  
  
    2.  Nella finestra di dialogo **Apri file** passare al primo file script di risorsa che si vuole aprire \(Origine1.rc\), evidenziare il file e fare clic su **Apri**.  
  
    3.  Ripetere il passaggio predente per aprire il secondo file RC \(Origine2.rc\).  
  
         I file RC verranno quindi aperti in finestre del documento separate.  
  
2.  Quando entrambi i file RC sono aperti, affiancare le finestra in modo da visualizzarle contemporaneamente:  
  
    -   Scegliere **Nuovo gruppo di schede orizzontali** o **Nuovo gruppo di schede verticali** dal menu **Finestra**.  
  
         \-oppure\-  
  
    -   Fare clic con il pulsante destro del mouse su uno dei file RC e scegliere **Nuovo gruppo di schede orizzontali** o **Nuovo gruppo di schede verticali** dal menu di scelta rapida.  
  
> [!NOTE]
>  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
### Requisiti  
 Win32  
  
## Vedere anche  
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)