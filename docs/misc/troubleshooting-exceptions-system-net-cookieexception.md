---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Net.CookieException | Microsoft Docs"
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
  - "CookieException (classe)"
ms.assetid: 7db6b962-cc5e-4b63-be65-894a8f186b38
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Net.CookieException
Un'eccezione <xref:System.Net.CookieException> viene generata quando viene commesso un errore durante l'aggiunta di un cookie a un contenitore di cookie.  
  
## Suggerimenti associati  
 **Verificare che la dimensione del cookie non superi il valore massimo consentito dal contenitore di cookie.**  
 Questa eccezione viene generata quando viene eseguito un tentativo di aggiungere un <xref:System.Net.Cookie> con una dimensione superiore a <xref:System.Net.CookieContainer.MaxCookieSize%2A> a un <xref:System.Net.CookieContainer>. Per impostazione predefinita, la dimensione massima di un cookie è 4096 byte.  
  
 **Quando si imposta la proprietà Name di un cookie, assicurarsi di non utilizzare come valore un riferimento null o una stringa vuota.**  
 È necessario inizializzare la proprietà <xref:System.Net.Cookie.Name%2A> prima di utilizzare un'istanza della classe <xref:System.Net.Cookie>. I seguenti caratteri sono riservati e non possono essere utilizzati per il valore di questo attributo: segno di uguale, punto e virgola, virgola, nuova riga \(\\n\), ritorno a capo \(\\r\), tabulazione \(\\t\). Inoltre, non è possibile utilizzare il segno di dollaro \($\) come primo carattere.  
  
 **Quando si imposta la proprietà Port di un cookie, assicurarsi di utilizzare un valore valido e di racchiuderlo tra virgolette.**  
 L'attributo <xref:System.Net.Cookie.Port%2A> consente di limitare le porte alle quali può essere inviato un cookie. Il valore predefinito non prevede alcuna limitazione. Se si imposta questa proprietà su una stringa vuota \(""\), il cookie potrà essere inviato solo alla porta utilizzata nella risposta HTTP. Se si desidera specificare uno o più valori, utilizzare una stringa racchiusa tra virgolette contenente i valori delle porte delimitati da virgola.  
  
 **Quando si imposta la proprietà Value di un cookie, assicurarsi di non utilizzare un valore null.**  
 I seguenti caratteri sono riservati e non possono essere utilizzati per questa proprietà: punto e virgola, virgola.  
  
## Vedere anche  
 <xref:System.Net.CookieException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [How to: Write a Cookie](../Topic/How%20to:%20Write%20a%20Cookie.md)