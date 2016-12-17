---
title: "MSBuild Error MSB3177 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.AllowPartiallyTrustedCallers"
helpviewer_keywords: 
  - "MSB3177"
ms.assetid: 0b2417d5-3bc3-4169-b69c-a4a3cbf47882
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3177
**MSB3177: il riferimento '\<riferimento\>' non consente chiamanti parzialmente attendibili.**  
  
 Questo avviso viene generato durante la generazione del manifesto dell'applicazione quando l'applicazione è parzialmente attendibile e se il *riferimento* è stato aggiunto come riferimento di progetto, ha un nome sicuro e non contiene l'attributo APTCA.  
  
### Per correggere l'errore  
  
-   Aggiungere l'attributo APTCA all'assembly con riferimento e smettere di usarlo se il primo non è possibile.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)