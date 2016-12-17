---
title: "Il tipo &#39;&lt;nometipo&gt;&#39; non pu&#242; essere un tipo di elemento di matrice, un tipo restituito, un tipo di campo, un tipo di argomento generics, un tipo di parametro &#39;ByRef&#39; o il tipo di un&#39;espressione convertito in &#39;Object&#39; o &#39;ValueType&#39; | Microsoft Docs"
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
  - "vbc31396"
  - "BC31396"
helpviewer_keywords: 
  - "BC31396"
ms.assetid: 56998a2c-a705-482e-87ee-5eff707f8a48
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo &#39;&lt;nometipo&gt;&#39; non pu&#242; essere un tipo di elemento di matrice, un tipo restituito, un tipo di campo, un tipo di argomento generics, un tipo di parametro &#39;ByRef&#39; o il tipo di un&#39;espressione convertito in &#39;Object&#39; o &#39;ValueType&#39;
Un'espressione dichiara una variabile, un parametro di routine, un parametro di tipo, un tipo restituito dalla funzione o una matrice come elementi di tipo limitato.  
  
 Common Language Runtime \(CLR\) espone determinati tipi esclusivamente ai fini di un supporto speciale del linguaggio e non dovrebbero quindi essere usati come tipi di dati nell'applicazione. Questi tipi comprendono le strutture <xref:System.ArgIterator>, <xref:System.RuntimeArgumentHandle> e <xref:System.TypedReference>.  
  
 **ID errore:** BC31396  
  
### Per correggere l'errore  
  
-   Non usare la struttura limitata come tipo di dati dichiarato.  
  
## Vedere anche  
 <xref:System.ArgIterator>   
 <xref:System.RuntimeArgumentHandle>   
 <xref:System.TypedReference>