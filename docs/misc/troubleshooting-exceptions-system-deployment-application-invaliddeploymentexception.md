---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Deployment.Application.InvalidDeploymentException | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "InvalidDeploymentException (classe)"
ms.assetid: 4361e053-8eaf-44e3-b8ac-95516d8d1832
caps.latest.revision: 22
caps.handback.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Deployment.Application.InvalidDeploymentException
Un'eccezione <xref:System.Deployment.Application.InvalidDeploymentException> viene generata quando l'applicazione o i relativi manifesti di applicazione o di distribuzione non sono validi.  
  
## Suggerimenti associati  
 **Assicurarsi che i manifesti per l'applicazione siano validi.**  
 Un manifesto di applicazione è un file XML nel quale vengono descritti e identificati gli assembly side\-by\-side condivisi e privati con i quali un'applicazione deve stabilire un'associazione in fase di esecuzione. Le versioni di questi assembly devono corrispondere a quelle utilizzate per testare l'applicazione. I manifesti di applicazione possono inoltre contenere una descrizione dei metadati di file privati dell'applicazione.  
  
 **Utilizzare la funzionalità ClickOnce per distribuire l'applicazione.**  
 Utilizzare ClickOnce per pubblicare applicazioni Windows in un server Web o una condivisione di file di rete per semplificare l'installazione. Per altre informazioni, vedere [ClickOnce Security and Deployment](../Topic/ClickOnce%20Security%20and%20Deployment.md).  
  
## Vedere anche  
 <xref:System.Deployment.Application.InvalidDeploymentException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Troubleshooting ClickOnce Deployments](../Topic/Troubleshooting%20ClickOnce%20Deployments.md)   
 [ClickOnce Deployment for Windows Forms](../Topic/ClickOnce%20Deployment%20for%20Windows%20Forms.md)