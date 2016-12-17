---
title: "La classe &#39;&lt;nomeclasse1&gt;&#39; deve dichiarare un elemento &#39;Sub New&#39; perch&#233; la relativa classe base &#39;&lt;nomeclasse2&gt;&#39; contiene pi&#249; di un elemento &#39;Sub New&#39; accessibile che pu&#242; essere chiamato senza argomenti | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc32036"
  - "vbc32036"
helpviewer_keywords: 
  - "BC32036"
ms.assetid: 9b96387e-337e-4b2a-b49f-783c7e13811a
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La classe &#39;&lt;nomeclasse1&gt;&#39; deve dichiarare un elemento &#39;Sub New&#39; perch&#233; la relativa classe base &#39;&lt;nomeclasse2&gt;&#39; contiene pi&#249; di un elemento &#39;Sub New&#39; accessibile che pu&#242; essere chiamato senza argomenti
Una classe derivata non dichiara un costruttore e [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non può generarne uno perché non può determinare quale costruttore della classe base chiamare.  
  
 Quando una classe derivata non dichiara un costruttore, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] prova a generare un costruttore senza parametri che chiama `MyBase.New()`. Se non è presente alcun costruttore accessibile nella classe base che può essere chiamato senza argomenti oppure se è presente più di un costruttore, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non può generare un costruttore implicito.  
  
 Questa situazione può verificarsi, ad esempio, se un costruttore di classe base ha un singolo argomento `Optional` e un altro ha un singolo argomento `ParamArray`. Ciascuno di essi può essere chiamato senza argomenti.  
  
 **ID errore:** BC32036  
  
### Per correggere l'errore  
  
1.  Dichiarare e implementare almeno un costruttore `Sub New` in un punto qualsiasi della classe derivata.  
  
2.  Aggiungere una chiamata a un costruttore della classe base, `MyBase.New()`, come la prima riga di ogni `Sub New`.  
  
## Vedere anche  
 [Object Lifetime: How Objects Are Created and Destroyed](../Topic/Object%20Lifetime:%20How%20Objects%20Are%20Created%20and%20Destroyed%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Utilizzo di costruttori e distruttori](http://msdn.microsoft.com/it-it/548eebe1-86c4-4377-b2f5-447cb8be3d90)   
 [Optional](../Topic/Optional%20\(Visual%20Basic\).md)   
 [ParamArray](../Topic/ParamArray%20\(Visual%20Basic\).md)   
 [Optional Parameters](../Topic/Optional%20Parameters%20\(Visual%20Basic\).md)   
 [Parameter Arrays](../Topic/Parameter%20Arrays%20\(Visual%20Basic\).md)