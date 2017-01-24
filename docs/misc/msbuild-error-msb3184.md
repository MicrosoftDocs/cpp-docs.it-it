---
title: "MSBuild Error MSB3184 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.InvalidInputManifest"
helpviewer_keywords: 
  - "MSB3184"
ms.assetid: 2be9f8e9-04ee-4299-b79f-965ee57a1a34
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3184
**MSB3184: il manifesto immesso non è valido.**  
  
 Questo errore viene generato quando il processo di compilazione tenta di caricare un file, prevedendo che contenga un manifesto di applicazione o un manifesto di distribuzione, ma contiene qualcos'altro, ad esempio un altro manifesto o dei dati danneggiati.  
  
### Per correggere l'errore  
  
-   Verificare che i manifesti del progetto siano validi e appropriati.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)