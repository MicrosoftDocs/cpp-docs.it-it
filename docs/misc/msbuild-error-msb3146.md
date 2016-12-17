---
title: "MSBuild Error MSB3146 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.MissingDependency"
helpviewer_keywords: 
  - "MSB3146"
ms.assetid: 717fd649-3024-427d-a068-cff8034ffc0a
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3146
**MSB3146: l'elemento '\<package\>' richiesto da '\<package\>' non è stato incluso.**  
  
 Questo errore viene generato quando un package di programma di avvio automatico dipende da un altro ma è stato scelto di installare solo il package dipendente.  Ad esempio, il package B dipende dal package A, ma è installato solo il B.  
  
### Per correggere l'errore  
  
-   Includere il package richiesto.