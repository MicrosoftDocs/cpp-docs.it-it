---
title: "Risoluzione dei problemi relativi alle eccezioni: System.CannotUnloadAppDomainException | Microsoft Docs"
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
  - "CannotUnloadAppDomainException (classe)"
ms.assetid: eeee07c3-fdbc-4c91-859b-a419d23be9ba
caps.latest.revision: 17
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.CannotUnloadAppDomainException
Un'eccezione <xref:System.CannotUnloadAppDomainException> viene generata quando viene eseguito un tentativo di scaricare uno dei seguenti domini:  
  
-   Il dominio di applicazione predefinito, che deve rimanere caricato per tutta la durata dell'applicazione  
  
-   Un dominio di applicazione con un thread in esecuzione la cui esecuzione non può essere interrotta immediatamente  
  
-   Un dominio di applicazione che è già stato scaricato  
  
## Suggerimenti associati  
 **Assicurarsi che non si stia tentando di scaricare un dominio di applicazione che corrisponda al dominio predefinito, abbia un thread in esecuzione o sia già stato scaricato.**  
 Tutte le condizioni indicate generano questa eccezione. Per altre informazioni, vedere <xref:System.AppDomain.Unload%2A>.  
  
## Vedere anche  
 <xref:System.CannotUnloadAppDomainException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)