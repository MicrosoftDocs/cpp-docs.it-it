---
title: "MSBuild Error MSB3180 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.DuplicateComDefinition"
helpviewer_keywords: 
  - "MSB3180"
ms.assetid: 98d8cb76-6176-4121-82ee-8a297d9deebc
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3180
**MSB3180: il componente COM '\<assembly\>' è definito sia in '\<file\>' che in '\<file\>', clsid\/tlbid\="'\<assembly\>'".**  
  
 Questo errore viene generato dal processo di generazione del manifesto di applicazione quando vengono trovati riferimenti COM doppi \(a classi o a librerie di tipi\) nei riferimenti di file o nei manifesti dipendenti.  
  
 È possibile che venga visualizzato questo errore, ad esempio, se viene aggiunto un riferimento a un oggetto COM con un manifesto esterno e un riferimento allo stesso oggetto COM con un manifesto interno.  
  
### Per correggere l'errore  
  
-   Rimuovere uno dei riferimenti COM duplicati.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)