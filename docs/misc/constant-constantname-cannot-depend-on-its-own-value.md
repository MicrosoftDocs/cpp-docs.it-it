---
title: "La costante &#39;&lt;nomecostante&gt;&#39; non pu&#242; dipendere dal proprio valore | Microsoft Docs"
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
  - "bc30500"
  - "vbc30500"
helpviewer_keywords: 
  - "BC30500"
ms.assetid: 0dad89bc-9196-492f-acd9-7777757362f7
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La costante &#39;&lt;nomecostante&gt;&#39; non pu&#242; dipendere dal proprio valore
È stata creata una dipendenza circolare nel codice, in cui una costante dipende dal proprio valore. Ad esempio `Const a = Const b; Const b = Const a`.  
  
 **ID errore:** BC30500  
  
### Per correggere l'errore  
  
1.  Controllare il codice per verificare il punto in cui la costante viene valutata e modificarla di conseguenza.  
  
## Vedere anche  
 [NOTINBUILD Cenni preliminari sulle costanti](http://msdn.microsoft.com/it-it/5c7f57fb-48b2-4a2f-afee-79d8e3adf15b)