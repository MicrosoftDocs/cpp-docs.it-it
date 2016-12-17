---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Printing.PrintingCanceledException | Microsoft Docs"
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
  - "PrintingCanceledException (eccezione)"
  - "System.Printing.PrintingCanceledException (eccezione)"
ms.assetid: bec418d6-f168-4a73-962f-5ee0427600b6
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Printing.PrintingCanceledException
Quando il codice tenta di accedere a un processo di stampa annullato, si verifica un'eccezione <xref:System.Printing.PrintingCanceledException>.  
  
## Note  
 L'eccezione deve essere gestita correttamente qualora si stia creando un'applicazione WPF \(Windows Presentation Foundation\) che include una funzionalità di stampa e consente di annullare i processi di stampa. Con un'eccezione non gestita di questo tipo, l'applicazione Windows Presentation Foundation smetterà di rispondere.  
  
## Vedere anche  
 <xref:System.Printing.PrintingCanceledException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)