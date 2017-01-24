---
title: "MSBuild Error MSB3150 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateBootstrapper.NoStringsForCulture"
helpviewer_keywords: 
  - "MSB3150"
ms.assetid: 90d86aef-f4df-4070-8ecc-173eb40668aa
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3150
**MSB3150: nessuna risorsa di tipo stringa disponibile per la compilazione di un programma di avvio automatico in impostazioni cultura '{0}'.**  
  
 Questo errore viene generato quando il file setup.xml viene trovato, ma non contiene il nodo delle stringhe.  Ugualmente, il file XML è stato danneggiato.  
  
### Per correggere l'errore  
  
-   Selezionare **Installazione applicazioni** nel **Pannello di controllo**, quindi riparare Visual Studio SDK oppure copiare i file nella directory appropriata \(\<percorso di installazione di SDK\>\\bootstrapper\\engine\\\<impostazioni cultura\>\\setup.xml\).