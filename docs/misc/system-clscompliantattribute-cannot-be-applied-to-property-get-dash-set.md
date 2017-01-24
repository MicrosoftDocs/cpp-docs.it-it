---
title: "Non &#232; possibile applicare System.CLSCompliantAttribute alla propriet&#224; &#39;Get&#39; o &#39;Set&#39; | Microsoft Docs"
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
  - "vbc40043"
  - "BC40043"
helpviewer_keywords: 
  - "BC40043"
ms.assetid: 2ff45c09-32be-4ca9-b42a-63ce2536db7d
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare System.CLSCompliantAttribute alla propriet&#224; &#39;Get&#39; o &#39;Set&#39;
Una definizione di proprietà applica l'attributo <xref:System.CLSCompliantAttribute> alla relativa istruzione `Get` o `Set`.  
  
 Affinché una proprietà sia conforme a [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md) \(CLS\), è necessario che l'intera proprietà sia contrassegnata come `<CLSCompliant(True)>`. Occorre applicare <xref:System.CLSCompliantAttribute> all'[Property Statement](../Topic/Property%20Statement.md), non all'istruzione `Get` o `Set`.  
  
 Quando <xref:System.CLSCompliantAttribute> viene applicato a un elemento di programmazione, il parametro `isCompliant` dell'attributo viene impostato su `True` o `False` per indicare la conformità o la non conformità. L'impostazione predefinita per questo parametro non è disponibile, quindi è necessario specificare un valore.  
  
 Se a un elemento non viene applicato <xref:System.CLSCompliantAttribute>, l'elemento non sarà considerato conforme.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40043  
  
### Per correggere l'errore  
  
-   Rimuovere <xref:System.CLSCompliantAttribute> dall'istruzione `Get` o `Set`.  
  
-   Se la proprietà deve essere conforme a CLS, contrassegnare l'istruzione `Property` come `<CLSCompliant(True)>`.  
  
## Vedere anche  
 [\<PAVE OVER\> Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3)   
 [Get Statement](../Topic/Get%20Statement.md)   
 [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md)