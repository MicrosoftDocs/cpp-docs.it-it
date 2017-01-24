---
title: "Risoluzione dei problemi relativi alle eccezioni: System.FieldAccessException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
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
  - "FieldAccessException (classe)"
ms.assetid: 47a72daf-500e-494c-b2fe-374edad2e9cd
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.FieldAccessException
Un'eccezione <xref:System.FieldAccessException> viene generata quando viene eseguito un tentativo non valido di accedere a un campo privato o protetto all'interno di una classe.  
  
## Suggerimenti associati  
 **Se il livello di accesso di un campo di una libreria di classi è stato modificato, ricompilare ogni assembly che fa riferimento alla libreria.**  
 Normalmente, questa eccezione viene generata quando il livello di accesso \(`Public`, `Private` e così via\) di un campo di una libreria di classi è stato modificato e uno o più assembly che fanno riferimento alla libreria non sono stati ricompilati.  
  
## Vedere anche  
 <xref:System.FieldAccessException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)