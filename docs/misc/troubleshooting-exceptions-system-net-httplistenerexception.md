---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Net.HttpListenerException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "HttpListenerException (classe)"
ms.assetid: 1595c5b6-4710-4076-9bfc-9f70f52e679a
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Net.HttpListenerException
Un'eccezione <xref:System.Net.HttpListenerException> viene generata quando si verifica un errore durante l'elaborazione di una richiesta HTTP \(HyperText Transfer Protocol\).  
  
## Suggerimenti associati  
 Assicurarsi che non si stia tentando di registrare un prefisso URI già registrato.  
 Se il prefisso URI è già registrato, verrà generata questa eccezione.  
  
 Assicurarsi che la richiesta HTTP sia valida.  
 Questa eccezione viene generata dalla classe <xref:System.Net.HttpListener> e dalle classi associate quando si verifica un errore durante l'inizializzazione di <xref:System.Net.HttpListener> oppure durante la creazione di una richiesta HTTP o l'invio di una risposta a una richiesta HTTP.  
  
 Se si utilizza il metodo `HttpListenerPrefixCollection.Add`, assicurarsi che il prefisso `uriPrefix` non sia già stato aggiunto.  
 Se un altro <xref:System.Net.HttpListener> ha già aggiunto il prefisso `uriPrefix`, verrà generata questa eccezione.  
  
## Vedere anche  
 <xref:System.Net.HttpListenerException>   
 <xref:System.Net.HttpListener>   
 <xref:System.Net.HttpListenerPrefixCollection>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)