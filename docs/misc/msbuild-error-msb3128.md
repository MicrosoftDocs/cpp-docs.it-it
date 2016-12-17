---
title: "MSBuild Error MSB3128 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GenerateManifest.ManifestsSignedHashExcluded"
helpviewer_keywords: 
  - "MSB3128"
ms.assetid: e8612a4b-4016-48d2-b5f0-a1091bfe8cb1
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3128
**MSB3128: impossibile firmare i manifesti  ClickOnce perché contengono uno o più riferimenti per cui non è stato eseguito l'hashing.**  
  
 Quando si pubblica un'applicazione con un manifesto firmato, è necessario che tutti i file siano inclusi nell'hash.  
  
### Per correggere l'errore  
  
1.  Aprire la pagina **Pubblica** di **Progettazione progetti**.  
  
2.  Fare clic su **File applicazione**.  
  
3.  Impostare il valore **Hash** su **Includi** per tutti i file che devono essere pubblicati.  
  
## Vedere anche  
 [Pagina Pubblica, Progettazione progetti](../Topic/Publish%20Page,%20Project%20Designer.md)