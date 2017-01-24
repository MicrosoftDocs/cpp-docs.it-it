---
title: "Non &#232; possibile applicare l&#39;attributo &#39;&lt;nomeattributo&gt;&#39; a un metodo con parametri facoltativi | Microsoft Docs"
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
  - "vbc30645"
  - "bc30645"
helpviewer_keywords: 
  - "BC30645"
ms.assetid: 4de3d2c9-5588-47c2-a6b2-e165d16106b8
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare l&#39;attributo &#39;&lt;nomeattributo&gt;&#39; a un metodo con parametri facoltativi
L'attributo può essere usato solo con metodi che usano gli argomenti obbligatori o non usano alcun argomento.  
  
 **ID errore:** BC30645  
  
### Per correggere l'errore  
  
1.  Definire il metodo senza parametri facoltativi.  
  
2.  Usare un attributo che può essere usato con metodi che hanno parametri facoltativi.  
  
3.  Definire un attributo personalizzato che può essere usato in questo contesto.  
  
## Vedere anche  
 <xref:System.AttributeUsageAttribute>   
 [NOT IN BUILD: Attributi in Visual Basic](http://msdn.microsoft.com/it-it/620bfc0e-4582-4c8b-8432-ebc5c3dccc22)