---
title: "MSBuild Error MSB3144 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.InvalidInput"
helpviewer_keywords: 
  - "MSB3144"
ms.assetid: 955e0db3-afe2-4c03-8e95-3419878374df
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3144
**MSB3144: dati specificati per la generazione di un programma di avvio automatico non sufficienti.  Specificare un valore per almeno uno dei seguenti parametri: 'ApplicationFile' o 'BootstrapperItems'."**  
  
 Questo errore si verifica quando i dati specificati per la generazione di un programma di avvio automatico non sono sufficienti.  Il processo di compilazione crea un programma di avvio automatico vuoto senza programma di installazione dell'applicazione e senza package.  
  
### Per correggere l'errore  
  
-   Specificare un valore per almeno uno dei parametri `ApplicationFile` o `BootstrapperItems`.  
  
## Vedere anche  
 [Riferimenti dello schema di prodotti e package](../Topic/Product%20and%20Package%20Schema%20Reference.md)