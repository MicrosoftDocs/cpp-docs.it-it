---
title: "Risoluzione dei problemi relativi alle eccezioni: System.DivideByZeroException | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "DivideByZeroException (classe)"
ms.assetid: ddc79201-3ba1-455f-8496-edaad792ccf1
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.DivideByZeroException
Un'eccezione <xref:System.DivideByZeroException> viene generata quando viene eseguito un tentativo di dividere per zero un Integer o decimale.  
  
## Suggerimenti associati  
 **Assicurarsi che il valore del denominatore non sia zero prima di eseguire un'operazione di divisione.**  
 La divisione per zero di un valore a virgola mobile può avere come risultato un valore infinito positivo, un valore infinito negativo oppure un valore non numerico in base alle regole dell'aritmetica IEEE. Le operazioni a virgola mobile non generano mai un'eccezione.  
  
## Vedere anche  
 <xref:System.DivideByZeroException>   
 [Arithmetic Operators in Visual Basic](../Topic/Arithmetic%20Operators%20in%20Visual%20Basic.md)   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)