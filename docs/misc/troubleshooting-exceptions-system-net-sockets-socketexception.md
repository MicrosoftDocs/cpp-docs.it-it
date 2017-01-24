---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Net.Sockets.SocketException | Microsoft Docs"
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
  - "SocketException (classe)"
ms.assetid: 89e8194d-83b0-450f-91f5-548e5c13944d
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Net.Sockets.SocketException
Un'eccezione <xref:System.Net.Sockets.SocketException> viene generata dalle classi <xref:System.Net.Sockets.Socket> e <xref:System.Net.Dns> quando si verifica un errore relativo alla rete.  
  
## Suggerimenti associati  
 **Controllare la proprietà ErrorCode per determinare perché si è verificato l'errore socket.**  
 Il costruttore predefinito per la classe <xref:System.Net.Sockets.SocketException> imposta la proprietà <xref:System.Net.Sockets.SocketException.ErrorCode%2A> sull'ultimo errore relativo a un socket del sistema operativo che si è verificato.  
  
## Vedere anche  
 <xref:System.Net.Sockets.SocketException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Uso di Secure Sockets Layer](../Topic/Using%20Secure%20Sockets%20Layer.md)