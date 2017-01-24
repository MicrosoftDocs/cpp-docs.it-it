---
title: "Risoluzione dei problemi relativi alle eccezioni: System.DeploymentFramework.DependentPlatformMissingException | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "classe DependentPlatformMissingException, risoluzione dei problemi"
ms.assetid: fee1ca1c-0f0b-483b-b8ab-3743dfdda038
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.DeploymentFramework.DependentPlatformMissingException
Un'eccezione `T:System.DeploymentFramework.DependentPlatformMissingException` viene generata quando un'applicazione richiede un assembly non installato nel client. È ad esempio possibile che nel computer in cui si desidera distribuire l'applicazione sia installato un sistema operativo errato o una versione errata di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)].  
  
## Suggerimenti associati  
 **Assicurarsi che tutti gli assembly richiesti dall'applicazione siano installati nel computer di destinazione.**  
 Ogni installazione che tenta di utilizzare Windows Installer verifica innanzitutto se il programma di installazione è presente nel computer dell'utente e, in caso contrario, se il computer è pronto per l'installazione di Windows Installer.  
  
## Vedere anche  
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)