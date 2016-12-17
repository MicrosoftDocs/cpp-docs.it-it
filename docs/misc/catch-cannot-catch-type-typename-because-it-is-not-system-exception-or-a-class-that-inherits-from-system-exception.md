---
title: "&#39;Catch&#39; non pu&#242; intercettare il tipo &#39;&lt;nometipo&gt;&#39; perch&#233; non &#232; &#39;System.Exception&#39; o una classe che eredita da &#39;System.Exception&#39;. | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30392"
  - "bc30392"
helpviewer_keywords: 
  - "BC30392"
ms.assetid: 1d513d1d-38f5-4b4e-95bb-9f1209553803
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Catch&#39; non pu&#242; intercettare il tipo &#39;&lt;nometipo&gt;&#39; perch&#233; non &#232; &#39;System.Exception&#39; o una classe che eredita da &#39;System.Exception&#39;.
`Catch` può solo intercettare le eccezioni e si è tentato di intercettare un elemento che non è derivato da un'eccezione.  
  
 **ID errore:** BC30392  
  
### Per correggere l'errore  
  
1.  Rimuovere l'istruzione `Catch` o modificare la destinazione di `Catch` in un'eccezione effettiva.  
  
## Vedere anche  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Cenni preliminari sulla gestione strutturata delle eccezioni per Visual Basic](http://msdn.microsoft.com/it-it/bb81af80-a735-4873-9711-6151a48e418a)