---
title: "MSBuild Error MSB3125 | Microsoft Docs"
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
  - "GenerateManifest.FileAssociationsNoEntryPoint"
helpviewer_keywords: 
  - "MSB3125"
ms.assetid: f8a08b05-1946-4788-8577-ceefde785e95
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3125
**MSB3125: l'applicazione utilizza associazioni di file ma non dispone di un parametro di compilazione EntryPoint.**  
  
 Questo errore si verifica quando non è presente alcun parametro entryPoint.  Quando si configura un'applicazione per utilizzare le associazioni di file, nel manifesto dell'applicazione deve essere presente un parametro di compilazione entryPoint.  L'elemento \<entryPoint\> identifica l'assembly che deve essere utilizzato quando l'applicazione viene eseguita.  
  
### Per correggere l'errore  
  
-   Impostare l'[\<entryPoint\> Element](../Topic/%3CentryPoint%3E%20Element%20\(ClickOnce%20Application\).md) su un valore valido.  Per ulteriori informazioni, vedere [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md).  
  
## Vedere anche  
 [Pagina Pubblica, Progettazione progetti](../Topic/Publish%20Page,%20Project%20Designer.md)   
 [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md)