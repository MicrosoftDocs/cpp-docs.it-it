---
title: "&#39;&lt;nomeclasse&#39; non &#232; conforme a CLS perch&#233; deriva da &#39;&lt;nomeclassebase&gt;&#39;, che non &#232; conforme a CLS | Microsoft Docs"
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
  - "vbc40026"
  - "bc40026"
helpviewer_keywords: 
  - "BC40026"
ms.assetid: debcd5e4-75e7-4b14-a6cc-18f1009fe52c
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomeclasse&#39; non &#232; conforme a CLS perch&#233; deriva da &#39;&lt;nomeclassebase&gt;&#39;, che non &#232; conforme a CLS
Una classe o interfaccia è contrassegnata come `<CLSCompliant(True)>` quando deriva da o implementa un tipo contrassegnato come `<CLSCompliant(False)>` o non è contrassegnata.  
  
 Una classe o un'interfaccia è conforme con [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md) \(CLS\) se lo è anche la relativa gerarchia di ereditarietà. Ciò significa che ogni tipo da cui eredita, direttamente o indirettamente, deve essere conforme. Analogamente, se una classe implementa una o più interfacce, esse devono essere tutte conformi nelle relative gerarchie di ereditarietà.  
  
 Quando <xref:System.CLSCompliantAttribute> viene applicato a un elemento di programmazione, il parametro `isCompliant` dell'attributo viene impostato su `True` o `False` per indicare la conformità o la non conformità. L'impostazione predefinita per questo parametro non è disponibile, quindi è necessario specificare un valore.  
  
 Se a un elemento non viene applicato <xref:System.CLSCompliantAttribute>, l'elemento non sarà considerato conforme.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40026  
  
### Per correggere l'errore  
  
-   Se è necessaria la conformità a CLS, definire il tipo all'interno di uno schema di implementazione o una gerarchia di ereditarietà diversi.  
  
-   Se è necessario che questo tipo resti all'interno dello schema di implementazione o della gerarchia di ereditarietà corrente, rimuovere <xref:System.CLSCompliantAttribute> dalla relativa definizione o contrassegnarlo come `<CLSCompliant(False)>`.  
  
## Vedere anche  
 [\<PAVE OVER\> Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3)