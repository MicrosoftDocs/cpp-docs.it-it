---
title: "MSBuild Error MSB3120 | Microsoft Docs"
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
  - "GenerateManifest.FileAssociationExtensionTooLong"
helpviewer_keywords: 
  - "MSB3120"
ms.assetid: 20bc64f5-aadc-4eec-9915-a87a3d7f81ea
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3120
**MSB3120: l'estensione di associazione di file '\<estensione\>' supera la lunghezza massima consentita di \<lunghezzamassima\>.**  
  
 Il numero di caratteri nell'estensione dell'associazione di file non deve superare il valore indicato.  
  
### Per correggere l'errore  
  
-   Impostare l'attributo [ClickOnce Deployment Manifest](../Topic/ClickOnce%20Deployment%20Manifest.md)`extension` su un valore che non contenga più caratteri di quanti consentiti dal sistema operativo di destinazione.  
  
## Vedere anche  
 [Pagina Pubblica, Progettazione progetti](../Topic/Publish%20Page,%20Project%20Designer.md)   
 [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md)