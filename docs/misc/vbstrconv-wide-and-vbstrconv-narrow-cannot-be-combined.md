---
title: "VbStrConv.Wide e VbStrConv.Narrow non possono essere combinati | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbrArgument_IllegalWideNarrow"
ms.assetid: a53b4e6a-36b1-4e36-b2c5-8196313ec599
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# VbStrConv.Wide e VbStrConv.Narrow non possono essere combinati
L'applicazione sta tentando di combinare i membri `Wide` e `Narrow` dell'enumerazione `VbStrConv`, che si escludono reciprocamente.  
  
### Per correggere l'errore  
  
1.  Rimuovere `VbStrConv.Wide` o `VbStrConv.Narrow`.  
  
## Vedere anche  
 <xref:System.Globalization>   
 [NOTINBUILD Enumerazione VbStrConv](http://msdn.microsoft.com/it-it/59f83dd9-6361-47df-a836-02ba9d4cb936)   
 [Introduzione alle applicazioni internazionali basate su .NET Framework](../Topic/Introduction%20to%20International%20Applications%20Based%20on%20the%20.NET%20Framework.md)