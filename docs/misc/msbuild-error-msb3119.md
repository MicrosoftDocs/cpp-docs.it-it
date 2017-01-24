---
title: "MSBuild Error MSB3119 | Microsoft Docs"
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
  - "GenerateManifest.FileAssociationExtensionMissingLeadDot"
helpviewer_keywords: 
  - "MSB3119"
ms.assetid: 52d68b0e-01d4-436f-a96c-733fd20a8c04
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3119
**MSB3119: le estensioni delle associazioni di file devono iniziare con un punto \(.\).**  
  
 Questo errore si verifica quando si configura un'associazione di file e l'estensione non inizia con un punto \(.\).  
  
### Per correggere l'errore  
  
-   Impostare l'attributo [ClickOnce Deployment Manifest](../Topic/ClickOnce%20Deployment%20Manifest.md)`extension` su un valore che inizi con un punto \(.\), ad esempio, ".doc."  
  
## Vedere anche  
 [Pagina Pubblica, Progettazione progetti](../Topic/Publish%20Page,%20Project%20Designer.md)   
 [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md)