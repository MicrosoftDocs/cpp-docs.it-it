---
title: "SimplifiedChinese e VbStrConv.TraditionalChinese non possono essere combinati | Microsoft Docs"
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
  - "vbrArgument_StrConvSCandTC"
ms.assetid: d8e6a11b-f549-43b5-8337-0594340e1325
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# SimplifiedChinese e VbStrConv.TraditionalChinese non possono essere combinati
L'applicazione sta tentando di combinare i membri `SimplifiedChinese` e `TraditionalChinese` dell'enumerazione `VbStrConv`, che si escludono reciprocamente.  
  
### Per correggere l'errore  
  
-   Rimuovere  `VbStrConv.SimplifiedChinese` o `VbStrConv.TraditionalChinese`.  
  
## Vedere anche  
 <xref:System.Globalization>   
 [NOTINBUILD Enumerazione VbStrConv](http://msdn.microsoft.com/it-it/59f83dd9-6361-47df-a836-02ba9d4cb936)   
 [Introduzione alle applicazioni internazionali basate su .NET Framework](../Topic/Introduction%20to%20International%20Applications%20Based%20on%20the%20.NET%20Framework.md)