---
title: "MSBuild Error MSB3151 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.IncludedProductIncluded"
helpviewer_keywords: 
  - "MSB3151"
ms.assetid: e4766734-2e90-436e-850b-a8a9da535dee
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3151
**MSB3151: l'elemento '\<package\>' include già l'elemento '\<package\>'.**  
  
 Questo avviso viene generato quando sono stati selezionati due package del programma di avvio automatico ed uno è incluso nell'altro \(ad esempio, la selezione del package incluso è ridondante\).  
  
### Per correggere l'errore  
  
-   Deselezionare la casella di controllo per il package incluso in modo ridondante.