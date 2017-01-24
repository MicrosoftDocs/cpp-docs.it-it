---
title: "Non &#232; possibile applicare &#39;Microsoft.VisualBasic.ComClassAttribute&#39; a &#39;&lt;nomeclasse1&gt;&#39; perch&#233; il relativo contenitore &#39;&lt;nomeclasse2&gt;&#39; non &#232; dichiarato come &#39;Public&#39; | Microsoft Docs"
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
  - "vbc32504"
  - "bc32504"
helpviewer_keywords: 
  - "BC32504"
ms.assetid: 4138b639-88d6-4b51-afcd-c92a1be36f1c
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare &#39;Microsoft.VisualBasic.ComClassAttribute&#39; a &#39;&lt;nomeclasse1&gt;&#39; perch&#233; il relativo contenitore &#39;&lt;nomeclasse2&gt;&#39; non &#232; dichiarato come &#39;Public&#39;
Una classe che usa un blocco di attributi `COMClassAttribute` è dichiarata all'interno di una classe che non è `Public`. Se una classe deve essere esposta come oggetto COM, tutta la sua gerarchia di contenimento deve essere dichiarata con accesso `Public`.  
  
 **ID errore:** BC32504  
  
### Per correggere l'errore  
  
-   Dichiarare tutte le classi contenitore `Public` o rimuovere il blocco di attributi `COMClassAttribute`.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi usati in Visual Basic](http://msdn.microsoft.com/it-it/22231318-8a40-49af-9245-e0aab723563b)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Classe ComClassAttribute](http://msdn.microsoft.com/it-it/5c2f0835-9210-47dc-bc59-5c1769953574)   
 [Public](../Topic/Public%20\(Visual%20Basic\).md)