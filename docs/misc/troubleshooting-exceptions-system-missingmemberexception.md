---
title: "Risoluzione dei problemi relativi alle eccezioni: System.MissingMemberException | Microsoft Docs"
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
  - "MissingMemberException (classe)"
ms.assetid: c4cf497b-0554-47fe-b2e9-81ee3eb9ec04
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.MissingMemberException
Un'eccezione <xref:System.MissingMemberException> viene generata quando viene eseguito un tentativo di accesso dinamico a un membro inesistente di una classe.  
  
## Suggerimenti associati  
 **Se un membro di una libreria di classi è stato rimosso, ricompilare ogni assembly che fa riferimento alla libreria.**  
 Normalmente, questa eccezione viene generata quando un campo o un metodo viene eliminato o rinominato in un assembly e la modifica non viene aggiornata in un secondo assembly che tenta di accedere al membro mancante.  
  
 **Se si sta tentando di accedere a membri di una variabile oggetto per cui è prevista l'associazione tardiva, assicurarsi che la variabile sia dichiarata Public.**  
 `Protected`, `Friend` e `Private` non possono essere variabili per cui è prevista l'associazione tardiva in Visual Basic.  
  
## Vedere anche  
 <xref:System.MissingMemberException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)