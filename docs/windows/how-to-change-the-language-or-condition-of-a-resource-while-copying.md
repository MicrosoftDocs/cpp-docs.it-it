---
title: "How to: Change the Language or Condition of a Resource While Copying | Microsoft Docs"
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
  - "vc.resvw.resource.changing"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Language property"
  - "condition property of resource"
ms.assetid: 8f622ab0-bac2-468f-ae70-78911afc4759
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Change the Language or Condition of a Resource While Copying
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Durante la copia in una risorsa, è possibile modificarne la proprietà relativa alla lingua o alla condizione oppure entrambe.  
  
-   La lingua della risorsa identifica semplicemente la lingua relativa alla risorsa,  che viene utilizzata da [FindResource](http://msdn.microsoft.com/library/windows/desktop/ms648042) per identificare la risorsa cercata.  Le risorse tuttavia possono presentare per ciascuna lingua differenze non riguardanti il testo, come nel caso di tasti di scelta rapida funzionanti solo su una tastiera giapponese, di una bitmap appropriata solo per compilazioni in lingua cinese e così via.  
  
-   La condizione di una risorsa è un simbolo definito che identifica una condizione in cui è necessario usare questa particolare copia della risorsa.  
  
 La lingua e la condizione di una risorsa vengono visualizzate tra parentesi dopo il nome della risorsa nella finestra Area di lavoro.  Nell'esempio che segue, la risorsa denominata IDD\_AboutBox usa come lingua il finlandese e la condizione è XX33.  
  
```  
IDD_AboutBox (Finnish – XX33)  
```  
  
### Per copiare una risorsa esistente e modificarne la lingua e la condizione  
  
1.  Nel file RC o nella finestra [Visualizzazione risorse](../windows/resource-view-window.md) fare clic con il pulsante destro del mouse sulla risorsa che si vuole copiare.  
  
2.  Scegliere **Inserisci copia** dal menu di scelta rapida.  
  
3.  Nella finestra di dialogo **Inserisci copia risorsa** effettuare le seguenti operazioni:  
  
    -   Selezionare la lingua dalla casella di riepilogo **Lingua**.  
  
    -   Digitare la condizione nella casella **Condizione**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [How to: Copy Resources](../windows/how-to-copy-resources.md)   
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)