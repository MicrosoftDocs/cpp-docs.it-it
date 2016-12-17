---
title: "MSBuild Error MSB3145 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.InvalidUrl"
helpviewer_keywords: 
  - "MSB3145"
ms.assetid: 183d4e7e-bdc6-402f-a1b6-531505be605f
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3145
**MSB3145: il parametro di input per la compilazione '\<property\>\=\<value\>' non è un URL Web o una condivisione UNC.**  
  
 Questo errore viene generato quando il valore della proprietà di progetto `SupportUrl`, `ComponentsUrl` o `ApplicationUrl` non è valido.  Il valore deve essere un percorso URL o UNC valido.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)