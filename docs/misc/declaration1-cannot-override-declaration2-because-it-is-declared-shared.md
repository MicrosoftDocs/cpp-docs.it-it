---
title: "&#39;&lt;dichiarazione1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;dichiarazione2&gt;&#39; perch&#233; &#232; dichiarato &#39;Shared&#39; | Microsoft Docs"
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
  - "vbc30268"
  - "bc30268"
helpviewer_keywords: 
  - "BC30268"
ms.assetid: d011fb26-6236-462e-9173-622f8bbeb536
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;dichiarazione1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;dichiarazione2&gt;&#39; perch&#233; &#232; dichiarato &#39;Shared&#39;
Una dichiarazione di proprietà o routine tenta di eseguire l'override di un elemento ereditato con lo stesso nome, ma quest'ultimo è specificato come `Shared`. Gli elementi condivisi non sono associati a nessuna istanza di classe, pertanto non possono essere sottoposti a override.  
  
 **ID errore:** BC30268  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `Shared` dall'elemento ereditato oppure rimuovere la dichiarazione di override.  
  
## Vedere anche  
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)