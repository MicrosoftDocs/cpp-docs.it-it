---
title: "Previsto &#39;If&#39;, &#39;ElseIf&#39;, &#39;Else&#39;, &#39;End If&#39; o &#39;Const&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30248"
  - "bc30248"
helpviewer_keywords: 
  - "BC30248"
ms.assetid: fa3bf591-8036-459c-8c29-ed7784e444f6
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Previsto &#39;If&#39;, &#39;ElseIf&#39;, &#39;Else&#39;, &#39;End If&#39; o &#39;Const&#39;
Una riga di origine inizia con un carattere `#`, ma `#` non è seguito direttamente da una direttiva di compilazione condizionale valida. Le direttive valide includono `#Const`, `#ExternalSource`, `#If`, `#Else`, `#ElseIf`, `#End If` e `#Region`.  
  
 **ID errore:** BC30248  
  
### Per correggere l'errore  
  
1.  Controllare che la direttiva di compilazione condizionale sia stata scritta correttamente.  
  
2.  Verificare che non ci siano spazi tra il carattere `#` e la direttiva.  
  
3.  Rimuovere il carattere `#` oppure aggiungere una direttiva valida subito dopo di esso.  
  
## Vedere anche  
 [Directives](../Topic/Directives%20\(Visual%20Basic\).md)