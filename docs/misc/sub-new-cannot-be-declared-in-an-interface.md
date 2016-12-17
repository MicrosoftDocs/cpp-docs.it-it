---
title: "&#39;Sub New&#39; non pu&#242; essere dichiarato in un&#39;interfaccia | Microsoft Docs"
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
  - "bc30363"
  - "vbc30363"
helpviewer_keywords: 
  - "BC30363"
ms.assetid: 371d9aa8-a935-48ce-ada2-0a69ba20e070
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Sub New&#39; non pu&#242; essere dichiarato in un&#39;interfaccia
Si è provato a dichiarare `Sub New` all'interno di un'interfaccia. Trattandosi di un costruttore, `Sub New` può essere eseguito solo una volta alla creazione di una classe. Non può essere chiamato in modo esplicito da alcun punto che non sia la prima riga di codice in un altro costruttore, nella stessa classe o in una classe derivata.  
  
 **ID errore:** BC30363  
  
### Per correggere l'errore  
  
-   Rimuovere `Sub New` o spostarlo in una posizione più appropriata nel codice.  
  
## Vedere anche  
 [NOT IN BUILD: Utilizzo di costruttori e distruttori](http://msdn.microsoft.com/it-it/548eebe1-86c4-4377-b2f5-447cb8be3d90)