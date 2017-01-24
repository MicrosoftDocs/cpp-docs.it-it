---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Net.WebException | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
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
  - "WebException (classe)"
ms.assetid: 6cd69a2c-c52b-420d-be47-a4e34eaec6f3
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Net.WebException
Un'eccezione <xref:System.Net.WebException> viene generata quando si verifica un errore durante l'accesso alla rete tramite un protocollo innestabile.  
  
## Suggerimenti associati  
 **Controllare la proprietà Response dell'eccezione per determinare perchè la richiesta non è riuscita.**  
 Quando un'eccezione <xref:System.Net.WebException> viene generata da un discendente della classe <xref:System.Net.WebRequest>, la proprietà <xref:System.Net.WebException.Response%2A> fornisce la risposta Internet all'applicazione.  
  
 **Controllare la proprietà Status dell'eccezione per determinare perchè la richiesta non è riuscita.**  
 La proprietà <xref:System.Net.WebException.Status%2A> dell'eccezione fornisce informazioni sullo stato relative all'errore. Per altre informazioni, vedere <xref:System.Net.WebExceptionStatus>.  
  
 **Se si verifica un timeout durante l'esecuzione di istruzioni in un servizio Web XML, impostare il valore di timeout per la chiamata al sevizio Web XML su infinito.**  
 Per altre informazioni, vedere [Errore: timeout durante il debug dei servizi Web](../Topic/Error:%20Timeout%20While%20Debugging%20Web%20Services.md).  
  
## Vedere anche  
 <xref:System.Net.WebException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Procedura: Inviare dati con la classe WebRequest](../Topic/How%20to:%20Send%20Data%20Using%20the%20WebRequest%20Class.md)   
 [Procedura: Richiedere dati con la classe WebRequest](../Topic/How%20to:%20Request%20Data%20Using%20the%20WebRequest%20Class.md)   
 [Procedura: Recuperare un oggetto WebResponse specifico del protocollo corrispondente a un oggetto WebRequest](../Topic/How%20to:%20Retrieve%20a%20Protocol-Specific%20WebResponse%20that%20Matches%20a%20WebRequest.md)