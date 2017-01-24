---
title: "Non &#232; possibile applicare &#39;System.Runtime.InteropServices.DispIdAttribute&#39; a &#39;&lt;nometipo&gt;&#39; perch&#233; &#39;Microsoft.VisualBasic.ComClassAttribute&#39; riserva il valore zero per la propriet&#224; predefinita. | Microsoft Docs"
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
  - "vbc32505"
  - "bc32505"
helpviewer_keywords: 
  - "BC32505"
ms.assetid: a7d5b948-2d72-48b1-8baf-bfaae36b0128
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare &#39;System.Runtime.InteropServices.DispIdAttribute&#39; a &#39;&lt;nometipo&gt;&#39; perch&#233; &#39;Microsoft.VisualBasic.ComClassAttribute&#39; riserva il valore zero per la propriet&#224; predefinita.
Un blocco di attributi <xref:System.Runtime.InteropServices.DispIdAttribute> specifica un valore DISPID pari a 0, che è riservato da `COMClassAttribute` per rappresentare la proprietà predefinita della classe a cui viene applicato.  
  
 L'ID invio \(DISPID\) viene usato in COM come argomento del metodo `IDispatch:Invoke` per accedere alle proprietà e ai metodi esposti da un oggetto COM.  
  
 **ID errore:** BC32505  
  
### Per correggere l'errore  
  
-   Specificare un valore DISPID maggiore di zero in <xref:System.Runtime.InteropServices.DispIdAttribute>.  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.DispIdAttribute>   
 [NOT IN BUILD: Attributi usati in Visual Basic](http://msdn.microsoft.com/it-it/22231318-8a40-49af-9245-e0aab723563b)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Classe ComClassAttribute](http://msdn.microsoft.com/it-it/5c2f0835-9210-47dc-bc59-5c1769953574)