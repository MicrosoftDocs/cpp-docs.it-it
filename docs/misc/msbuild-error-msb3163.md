---
title: "MSBuild Error MSB3163 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.InvalidComponentsLocation"
helpviewer_keywords: 
  - "MSB3163"
ms.assetid: 35c5efbf-2fd7-478c-bb8e-3c4eabb3e4d4
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3163
**MSB3163: parametro di input per la compilazione 'ComponentsLocation'\=\<ComponentsLocation\>' non valido.  Il valore deve essere 'HomeSite', 'Relative' o 'Absolute'.  Verrà utilizzato il valore predefinito 'HomeSite'.**  
  
 Questo errore si verifica quando il valore specificato per la proprietà `ComponentsLocation` \(quella da cui vengono installati i prerequisiti\) non è valido.  La proprietà `ComponentsLocation` deve avere uno dei tre valori: `HomeSite`, `Relative` o `Absolute`.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)