---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Exception | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "System.Exception (eccezione)"
  - "classi base, eccezioni"
  - "eccezioni, classe base"
ms.assetid: fc15931a-9323-47c6-a42f-55d0534b939a
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Exception
Rappresenta gli errori che si verificano durante l'esecuzione dell'applicazione. ed è la classe base per tutte le eccezioni.  
  
## Suggerimenti associati  
 **Per ulteriori informazioni, consultare la proprietà InnerException.**  
 Per correggere l'errore, potrebbero essere necessarie informazioni sull'eccezione interna \(o precedente\) che ha provocato l'eccezione corrente. La proprietà <xref:System.Exception.InnerException%2A> dell'eccezione corrente contiene l'eccezione interna. È possibile utilizzare il collegamento **Visualizza dettagli** nella finestra di dialogo **Informazioni sulle eccezioni** per accedere alla proprietà <xref:System.Exception.InnerException%2A>.  
  
 **Disattivare temporaneamente il debug Just My Code.**  
 L'eccezione potrebbe essersi verificata in codice non scritto personalmente. Per eseguire il debug di tale codice, potrebbe essere necessario disattivare il debug Just My Code. Per altre informazioni, vedere [Generale, Debug, finestra di dialogo Opzioni](../Topic/General,%20Debugging,%20Options%20Dialog%20Box.md).  
  
## Vedere anche  
 <xref:System.Exception>   
 <xref:System.Exception.InnerException%2A>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Procedura: interrompere l'esecuzione in caso di eccezione](../misc/how-to-break-when-an-exception-is-thrown.md)   
 [Generale, Debug, finestra di dialogo Opzioni](../Topic/General,%20Debugging,%20Options%20Dialog%20Box.md)