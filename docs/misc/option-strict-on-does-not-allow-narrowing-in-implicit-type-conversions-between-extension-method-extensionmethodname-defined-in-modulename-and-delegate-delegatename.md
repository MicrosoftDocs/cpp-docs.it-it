---
title: "Option Strict On non consente la riduzione in conversioni implicite di tipi tra il metodo di estensione &#39;&lt;nomemetodoestensione&gt;&#39; definito in &#39;&lt;nomemodulo&gt;&#39; e il delegato &#39;&lt;nomedelegato&gt;&#39; | Microsoft Docs"
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
  - "bc36709"
  - "vbc36709"
helpviewer_keywords: 
  - "BC36709"
ms.assetid: 95d8c833-3525-411b-98e8-b7d3f61f75c9
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On non consente la riduzione in conversioni implicite di tipi tra il metodo di estensione &#39;&lt;nomemetodoestensione&gt;&#39; definito in &#39;&lt;nomemodulo&gt;&#39; e il delegato &#39;&lt;nomedelegato&gt;&#39;
Con `Option Strict` non è possibile avere una conversione verso un tipo di dati più piccolo dal tipo di dati di un parametro a un delegato nel parametro corrispondente parametro di un metodo di estensione assegnato a una variabile di quel tipo di delegato. Il tipo di dati del parametro del delegato deve ampliarsi nel tipo di dati del metodo di estensione.  
  
 **ID errore:** BC36709  
  
### Per correggere l'errore  
  
-   Modificare il tipo di dati del parametro nel delegato o nel metodo di estensione in modo che sia presente la relazione obbligatoria di conversione verso un tipo di dati più grande.  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Relaxed Delegate Conversion](../Topic/Relaxed%20Delegate%20Conversion%20\(Visual%20Basic\).md)   
 [Delegates](../Topic/Delegates%20\(Visual%20Basic\).md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Delegati e operatore AddressOf](http://msdn.microsoft.com/it-it/7b2ed932-8598-4355-b2f7-5cedb23ee86f)