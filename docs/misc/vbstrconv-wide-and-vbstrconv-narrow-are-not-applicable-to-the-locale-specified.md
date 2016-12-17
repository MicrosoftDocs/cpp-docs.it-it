---
title: "VbStrConv.Wide e VbStrConv.Narrow non possono essere usati con le impostazioni locali specificate | Microsoft Docs"
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
  - "vbrArgument_WideNarrowNotApplicable"
ms.assetid: 5811098c-b124-4caf-8a2b-f81f12f1d5f5
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# VbStrConv.Wide e VbStrConv.Narrow non possono essere usati con le impostazioni locali specificate
L'applicazione sta tentando di usare i membri di enumerazione `VbStrConv``Wide` o `Narrow`, che non sono applicabili alle impostazioni locali specificate.  
  
### Per correggere l'errore  
  
1.  Rimuovere `VbStrConv.Wide` o `VbStrConv.Narrow`.  
  
## Vedere anche  
 <xref:System.Globalization>   
 [NOTINBUILD Enumerazione VbStrConv](http://msdn.microsoft.com/it-it/59f83dd9-6361-47df-a836-02ba9d4cb936)   
 [Introduzione alle applicazioni internazionali basate su .NET Framework](../Topic/Introduction%20to%20International%20Applications%20Based%20on%20the%20.NET%20Framework.md)