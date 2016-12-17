---
title: "Non &#232; possibile applicare &#39;System.Runtime.InteropServices.DispIdAttribute&#39; a &#39;&lt;nometipo&gt;&#39; perch&#233; &#39;Microsoft.VisualBasic.ComClassAttribute&#39; riserva valori minori di zero. | Microsoft Docs"
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
  - "bc32506"
  - "vbc32506"
helpviewer_keywords: 
  - "BC32506"
ms.assetid: c6f52e1d-45d8-45cb-9ecb-a2f23b3ca779
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare &#39;System.Runtime.InteropServices.DispIdAttribute&#39; a &#39;&lt;nometipo&gt;&#39; perch&#233; &#39;Microsoft.VisualBasic.ComClassAttribute&#39; riserva valori minori di zero.
Un blocco di attributi <xref:System.Runtime.InteropServices.DispIdAttribute> specifica un valore DISPID minore di 0, che è riservato da `COMClassAttribute` per funzioni speciali sulla classe a cui viene applicato.  
  
 L'ID invio \(DISPID\) viene usato in COM come argomento del metodo `IDispatch:Invoke` per accedere alle proprietà e ai metodi esposti da un oggetto COM.  
  
 **ID errore:** BC32506  
  
### Per correggere l'errore  
  
-   Specificare un valore DISPID maggiore di zero in `DispIdAttribute`.  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.DispIdAttribute>   
 [NOT IN BUILD: Attributi usati in Visual Basic](http://msdn.microsoft.com/it-it/22231318-8a40-49af-9245-e0aab723563b)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Classe ComClassAttribute](http://msdn.microsoft.com/it-it/5c2f0835-9210-47dc-bc59-5c1769953574)