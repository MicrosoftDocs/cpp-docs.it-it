---
title: "Risoluzione dei problemi relativi alle eccezioni: System.MethodAccessException | Microsoft Docs"
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
  - "MethodAccessException (classe)"
ms.assetid: 1c276666-e451-489e-8b95-25d737787030
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.MethodAccessException
Un'eccezione <xref:System.MethodAccessException> viene generata quando viene eseguito un tentativo non valido di accedere a un metodo privato o protetto all'interno di una classe.  
  
## Suggerimenti associati  
 **Se il livello di accesso di un metodo di una libreria di classi è stato modificato, ricompilare ogni assembly che fa riferimento alla libreria.**  
 Questa eccezione si verifica in genere quando il chiamante non dispone dell'autorizzazione di accesso al membro.  
  
## Vedere anche  
 <xref:System.MethodAccessException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)