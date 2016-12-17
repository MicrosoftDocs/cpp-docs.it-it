---
title: "&#200; stato specificato &#39;Microsoft.VisualBasic.ComClassAttribute&#39; per la classe &#39;&lt;nomeclasse&gt;&#39;, ma non ha membri pubblici che possano essere esposti a COM, pertanto non sono state generate interfacce COM | Microsoft Docs"
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
  - "bc40011"
  - "vbc40011"
helpviewer_keywords: 
  - "BC40011"
ms.assetid: 39aed273-bf27-4667-8116-022c4dd8f3c5
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; stato specificato &#39;Microsoft.VisualBasic.ComClassAttribute&#39; per la classe &#39;&lt;nomeclasse&gt;&#39;, ma non ha membri pubblici che possano essere esposti a COM, pertanto non sono state generate interfacce COM
Una classe che usa un blocco di attributi `COMClassAttribute` non definisce proprietà o metodi `Public`. Se una classe deve essere esposta come oggetto COM, le sue proprietà e i suoi metodi devono essere dichiarati con accesso `Public`.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40011  
  
### Per correggere l'errore  
  
-   Aggiungere la parola chiave `Public` a una o più proprietà o metodi nella classe oppure rimuovere il blocco di attributi `COMClassAttribute`.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi usati in Visual Basic](http://msdn.microsoft.com/it-it/22231318-8a40-49af-9245-e0aab723563b)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Public](../Topic/Public%20\(Visual%20Basic\).md)   
 [Classe ComClassAttribute](http://msdn.microsoft.com/it-it/5c2f0835-9210-47dc-bc59-5c1769953574)