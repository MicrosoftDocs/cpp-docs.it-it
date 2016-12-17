---
title: "&#39;&lt;costruttore&gt;&#39; nel tipo &#39;&lt;tipo&gt;&#39; generato dalla finestra di progettazione deve chiamare il metodo InitializeComponent | Microsoft Docs"
ms.custom: ""
ms.date: "10/25/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc40054"
  - "bc40054"
helpviewer_keywords: 
  - "BC40054"
ms.assetid: beac93b0-d427-4df6-9582-fd69c7a53673
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;costruttore&gt;&#39; nel tipo &#39;&lt;tipo&gt;&#39; generato dalla finestra di progettazione deve chiamare il metodo InitializeComponent
Un costruttore in un tipo generato dalla finestra di progettazione non chiama il metodo `InitializeComponent` del tipo.  
  
 Ogni costruttore in un tipo generato dalla finestra di progettazione deve chiamare il metodo `InitializeComponent` del tipo.  
  
 **ID errore:** BC40054  
  
### Per correggere l'errore  
  
-   Aggiungere una chiamata al metodo `InitializeComponent` nel costruttore.  
  
## Vedere anche  
 <xref:Microsoft.VisualBasic.CompilerServices.DesignerGeneratedAttribute>   
 [NOT IN BUILD: Utilizzo di costruttori e distruttori](http://msdn.microsoft.com/it-it/548eebe1-86c4-4377-b2f5-447cb8be3d90)