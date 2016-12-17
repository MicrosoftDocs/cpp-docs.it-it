---
title: "Risoluzione dei problemi relativi alle eccezioni: System.MissingFieldException | Microsoft Docs"
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
  - "MissingFieldException (classe)"
ms.assetid: afa4d669-7d08-4b14-8341-36717a5054d6
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.MissingFieldException
Un'eccezione <xref:System.MissingFieldException> viene generata quando viene eseguito un tentativo di accesso dinamico a un campo inesistente.  
  
## Suggerimenti associati  
 **Se un campo di una libreria di classi è stato rimosso, ricompilare ogni assembly che fa riferimento alla libreria.**  
 Questa eccezione viene generata quando viene eseguito un tentativo di accesso dinamico a un campo eliminato o rinominato di un assembly al quale non viene fatto riferimento tramite il nome sicuro.  
  
## Vedere anche  
 <xref:System.MissingFieldException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)