---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Security.VerificationException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHVerification"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "VerificationException (classe)"
ms.assetid: b7b1a4c2-6769-46bd-8912-ebbfe226bfb3
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Security.VerificationException
Un'eccezione <xref:System.Security.VerificationException> viene generata quando i criteri di sicurezza richiedono l'utilizzo di codice indipendente dai tipi e il processo di verifica non è in grado di verificare la presenza di questo requisito.  
  
## Suggerimenti associati  
 Assicurarsi che l'applicazione non stia caricando due versioni in conflitto di una libreria di classi.  
 Durante il processo di verifica, viene controllato che MSIL \(Microsoft Intermediate Language\) sia indipendente dai tipi per garantire che gli oggetti siano isolati l'uno dall'altro e non esistano quindi rischi di danneggiamento involontario o a scopo di pirateria. Per altre informazioni, vedere [Indipendenza dai tipi e sicurezza](http://msdn.microsoft.com/it-it/095cd1f6-d8db-4c0e-bce2-83ccb34dd5dc).  
  
## Vedere anche  
 <xref:System.Security.VerificationException>   
 <xref:System.Security.Permissions.SecurityPermissionAttribute.SkipVerification%2A>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)