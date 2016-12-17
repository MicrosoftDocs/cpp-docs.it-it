---
title: "MSBuild Error MSB3149 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateBootstrapper.NoResources"
helpviewer_keywords: 
  - "MSB3149"
ms.assetid: 63857405-d420-457d-9ba7-80e1a2a9dcb7
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3149
**MSB3149: nessuna risorsa disponibile per la compilazione di un programma di avvio automatico.**  
  
 Questo errore si verifica quando non viene trovato nessun file di risorsa di programma di avvio automatico \(setup.xml\) corrispondente a impostazioni cultura.  
  
### Per correggere l'errore  
  
-   Selezionare **Installazione applicazioni** nel **Pannello di controllo**, quindi riparare Visual Studio SDK oppure copiare i file nella directory appropriata \(\<percorso di installazione di SDK\>\\bootstrapper\\engine\\\<impostazioni cultura\>\\setup.xml\).  
  
## Vedere anche  
 [Riferimenti dello schema di prodotti e package](../Topic/Product%20and%20Package%20Schema%20Reference.md)