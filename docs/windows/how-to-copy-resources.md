---
title: "How to: Copy Resources | Microsoft Docs"
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
  - "vc.resvw.resource.copying"
  - "vs.resvw.resource.copying"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "resources [Visual Studio], moving between files"
  - "resources [Visual Studio], copying"
  - "resource files, copying or moving resources between"
  - "resource files, tiling"
  - ".rc files, copying resources between"
  - "rc files, copying resources between"
ms.assetid: 65f523e8-017f-4fc6-82d1-083c56d9131f
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Copy Resources
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile copiare risorse da un file in un altro senza apportarvi modifiche oppure [modificare la lingua o la condizione di una risorsa durante la copia](../windows/how-to-change-the-language-or-condition-of-a-resource-while-copying.md).  
  
 È possibile copiare facilmente le risorse da un file eseguibile o di risorse esistente nel file di risorse corrente.  Per eseguire questa operazione, vengono aperti contemporaneamente entrambi i file contenenti le risorse e gli elementi vengono trascinati da un file all'altro oppure copiati e incollati tra i due file.  Questo metodo viene utilizzato per i file di risorse \(RC\) e di modello di risorsa \(RCT\), nonché per i file eseguibili \(EXE\).  
  
> [!NOTE]
>  Visual C\+\+ include file di risorse di esempio che è possibile utilizzare nelle applicazioni.  Per ulteriori informazioni, vedere [CLIPART: risorse comuni](http://msdn.microsoft.com/it-it/9bac2891-b6b3-49ec-a287-cec850c707e0).  
  
 È possibile utilizzare il metodo di trascinamento tra file RC aperti [all'esterno del progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  
  
### Per copiare risorse da un file a un altro mediante trascinamento  
  
1.  Aprire entrambi i file di risorse in modo autonomo. Per ulteriori informazioni, vedere [Visualizzazione di risorse in un file RC all'esterno di un progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  Aprire ad esempio Origine1.rc e Origine2.rc.  
  
2.  Nel primo file RC fare clic sulla risorsa che si desidera copiare.  Ad esempio, in Origine1.rc fare clic su IDD\_DIALOG1.  
  
3.  Tenendo premuto CTRL, trascinare la risorsa nel secondo file RC.  Trascinare ad esempio IDD\_DIALOG1 da Origine1.rc a Origine2.rc.  
  
    > [!NOTE]
    >  Se si trascina una risorsa senza tenere premuto CTRL, la risorsa viene spostata, anziché copiata.  
  
### Per copiare risorse mediante un'operazione di copia e incolla  
  
1.  Aprire entrambi i file di risorse in modo autonomo. Per ulteriori informazioni, vedere [Visualizzazione di risorse in un file RC all'esterno di un progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  Aprire ad esempio Origine1.rc e Origine2.rc.  
  
2.  Nel file di origine da cui si desidera copiare una risorsa, ad esempio Origine1.rc, fare clic con il pulsante destro del mouse sulla risorsa e scegliere **Copia** dal menu di scelta rapida.  
  
3.  Fare clic con il pulsante destro del mouse sul file di risorse in cui si desidera incollare la risorsa, ad esempio Origine2.rc.  Scegliere **Incolla** dal menu di scelta rapida.  
  
    > [!NOTE]
    >  Non è possibile eseguire operazioni di trascinamento, di copia, taglia o incolla da file di risorse inclusi nel progetto \(Visualizzazione risorse\) a file RC autonomi \(aperti in finestre di documento\).  Queste operazioni potevano invece essere eseguite nelle precedenti versioni del prodotto.  
  
    > [!NOTE]
    >  Per evitare conflitti con valori o nomi di simbolo contenuti nel file esistente, Visual C\+\+ può modificare il valore del simbolo della risorsa trasferita o il nome e il valore del simbolo quando lo si copia nel nuovo file.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [How to: Open a Resource Script File Outside of a Project \(Standalone\)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)   
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)