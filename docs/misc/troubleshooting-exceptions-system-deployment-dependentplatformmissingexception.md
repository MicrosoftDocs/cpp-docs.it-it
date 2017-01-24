---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Deployment.DependentPlatformMissingException | Microsoft Docs"
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
  - "DependentPlatformMissingException (classe)"
ms.assetid: 2343eb4f-f23f-4b6c-a65c-1f93c3e6ea36
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Deployment.DependentPlatformMissingException
Un'eccezione `T:System.Deployment.DependentPlatformMissingException` viene generata quando viene eseguito un tentativo di avviare un'applicazione in un computer non compatibile. Questa situazione può verificarsi quando nel computer di destinazione è stato installato un sistema operativo o una versione di .NET Framework non corretta.  
  
## Suggerimenti associati  
 **Assicurarsi che tutti gli assembly richiesti dall'applicazione siano installati nel computer di destinazione.**  
 Ogni installazione che tenta di utilizzare Windows Installer verifica innanzitutto se il programma di installazione è presente nel computer dell'utente e, in caso contrario, se il computer è pronto per l'installazione di Windows Installer.  
  
## Vedere anche  
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)