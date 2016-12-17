---
title: "&#39;#ElseIf&#39; non pu&#242; seguire &#39;#Else&#39; come parte di un blocco &#39;#If | Microsoft Docs"
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
  - "bc32030"
  - "vbc32030"
helpviewer_keywords: 
  - "BC32030"
ms.assetid: 248d6464-3019-4753-8a33-7070bbe5d2a6
caps.latest.revision: 14
caps.handback.revision: 14
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;#ElseIf&#39; non pu&#242; seguire &#39;#Else&#39; come parte di un blocco &#39;#If
Una direttiva di compilazione condizionale `#ElseIf` segue una direttiva `#Else`.`#Else` deve essere l'ultima direttiva nel blocco condizionale prima della direttiva `#End If`.  
  
 **ID errore:** BC32030  
  
### Per correggere l'errore  
  
1.  Controllare se la direttiva `#Else` deve essere `#ElseIf`.  
  
2.  Verificare che un blocco `#If` precedente termini in modo corretto e che venga avviato un nuovo blocco `#If`.  
  
3.  Se tutto il resto è corretto, spostare questa direttiva `#ElseIf` e il blocco di istruzioni corrispondente in modo che precedano il blocco `#Else`.  
  
## Vedere anche  
 [\#If...Then...\#Else Directives](../Topic/%23If...Then...%23Else%20Directives.md)