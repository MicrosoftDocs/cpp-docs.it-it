---
title: "&lt;errore&gt;: &#39;&lt;nomecostruttore1&gt;&#39; chiama &#39;&lt;nomecostruttore2&gt;&#39; | Microsoft Docs"
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
  - "vbc30297"
  - "bc30297"
helpviewer_keywords: 
  - "BC30297"
ms.assetid: dfca67d7-f4d7-4451-a937-68f22b8527d5
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;errore&gt;: &#39;&lt;nomecostruttore1&gt;&#39; chiama &#39;&lt;nomecostruttore2&gt;&#39;
Si verifica una chiamata circolare del costruttore. Un costruttore effettua una chiamata a `Me.New()` o `MyClass.New()`. L'errore può essere causato da un tentativo di chiamare un costruttore sottoposto a overload con un elenco di argomenti diverso.  
  
 **ID errore:** BC30297  
  
### Per correggere l'errore  
  
-   Usare un elenco di argomenti diverso per chiamare un costruttore sottoposto a overload.  
  
-   In assenza di overload accessibili, rimuovere la chiamata a `Me.New()` o `MyClass.New()`.  
  
## Vedere anche  
 [NOT IN BUILD: Utilizzo di costruttori e distruttori](http://msdn.microsoft.com/it-it/548eebe1-86c4-4377-b2f5-447cb8be3d90)