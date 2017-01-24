---
title: "Il tipo delegato &#39;&lt;nomedelegato&gt;&#39; dell&#39;evento &#39;&lt;nomeevento&gt;&#39; non &#232; conforme a CLS | Microsoft Docs"
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
  - "bc40050"
  - "vbc40050"
helpviewer_keywords: 
  - "BC40050"
ms.assetid: 92f5be26-9a82-46d4-bf97-005f2c7ca424
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo delegato &#39;&lt;nomedelegato&gt;&#39; dell&#39;evento &#39;&lt;nomeevento&gt;&#39; non &#232; conforme a CLS
Un'[Event Statement](../Topic/Event%20Statement.md) usa un delegato per specificare la sua firma, ma l'[Delegate Statement](../Topic/Delegate%20Statement.md) è contrassegnata come `<CLSCompliant(False)>` o non è contrassegnata.  
  
 Quando l'attributo <xref:System.CLSCompliantAttribute> viene applicato a un elemento di programmazione, il parametro `isCompliant` dell'attributo viene impostato su `True` o `False` per indicare la conformità o la non conformità. L'impostazione predefinita per questo parametro non è disponibile, quindi è necessario specificare un valore.  
  
 Se a un elemento non viene applicato <xref:System.CLSCompliantAttribute>, l'elemento non sarà considerato conforme.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40050  
  
### Per correggere l'errore  
  
-   Se è richiesta la conformità a CLS e si ha il controllo sulla definizione del delegato, applicare <xref:System.CLSCompliantAttribute> alla sua dichiarazione per contrassegnarlo come `<CLSCompliant(True)>`.  
  
-   Se non si ha il controllo sulla definizione del delegato o non è possibile contrassegnarlo come conforme, rimuovere l'attributo <xref:System.CLSCompliantAttribute> dall'`Event` o contrassegnarlo come `<CLSCompliant(False)>`.  
  
## Vedere anche  
 [\<PAVE OVER\> Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3)