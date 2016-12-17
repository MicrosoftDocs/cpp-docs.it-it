---
title: "L&#39;attributo &#39;WebMethod&#39; non avr&#224; alcun effetto su questo membro perch&#233; la classe che lo contiene non &#232; esposta come servizio Web | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30771"
  - "bc30771"
helpviewer_keywords: 
  - "BC30771"
ms.assetid: 20b09f6a-b61a-4d89-9ca5-4632b5e68e65
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;attributo &#39;WebMethod&#39; non avr&#224; alcun effetto su questo membro perch&#233; la classe che lo contiene non &#232; esposta come servizio Web
Con l'attributo <xref:System.Web.Services.WebMethodAttribute>, un metodo diventa chiamabile dai client Web remoti, ma solo quando la classe del metodo deriva da <xref:System.Web.Services.WebService>.  
  
 **ID errore:** BC30771  
  
### Per correggere l'errore  
  
-   Modificare la classe in modo che derivi da <xref:System.Web.Services.WebService>.  
  
     oppure  
  
-   Rimuovere l'attributo <xref:System.Web.Services.WebMethodAttribute> dal metodo.  
  
## Vedere anche  
 [NIB: Procedura dettagliata: Creazione di un servizio Web mediante Visual Basic o Visual C\#](http://msdn.microsoft.com/it-it/295f4c3f-9540-4bd1-b1cc-3e9cb9675cc7)