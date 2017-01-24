---
title: "MSBuild Error MSB3148 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateBootstrapper.NoOutputPath"
helpviewer_keywords: 
  - "MSB3148"
ms.assetid: 389b335f-5760-4dcc-9146-c52d6d7ac81f
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3148
**MSB3148: nessun percorso di output specificato nelle impostazioni di compilazione.**  
  
 Questo errore si verifica quando viene specificato un percorso di output nullo o non valido; ad esempio, `OutputPath=""` nel file di progetto.  Il valore predefinito del percorso di output è `CurrentDirectory`.  
  
### Per correggere l'errore  
  
-   Verificare che `OutputPath` non sia vuoto o che non sia incluso nel file di progetto.  
  
## Vedere anche  
 [Riferimenti dello schema di prodotti e package](../Topic/Product%20and%20Package%20Schema%20Reference.md)