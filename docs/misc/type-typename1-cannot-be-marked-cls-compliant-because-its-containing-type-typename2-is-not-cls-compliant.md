---
title: "Il tipo &#39;&lt;nometipo1&gt;&#39; non pu&#242; essere contrassegnato come conforme a CLS perch&#233; il tipo che lo contiene &#39;&lt;nometipo2&gt;&#39; non &#232; conforme a CLS | Microsoft Docs"
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
  - "vbc40030"
  - "bc40030"
helpviewer_keywords: 
  - "BC40030"
ms.assetid: f1cfcf04-2a99-46ef-ac87-34cc2099125c
caps.latest.revision: 15
caps.handback.revision: 15
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo &#39;&lt;nometipo1&gt;&#39; non pu&#242; essere contrassegnato come conforme a CLS perch&#233; il tipo che lo contiene &#39;&lt;nometipo2&gt;&#39; non &#232; conforme a CLS
Una classe o un'interfaccia è contrassegnata come `<CLSCompliant(True)>` quando è annidata in un tipo contrassegnato come `<CLSCompliant(False)>` oppure non contrassegnato.  
  
 Una classe o un'interfaccia è conforme con [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md) \(CLS\) se lo è anche la relativa gerarchia di contenimento. Di conseguenza anche tutti i tipi in cui la classe o l'interfaccia è annidata devono essere conformi.  
  
 Quando <xref:System.CLSCompliantAttribute> viene applicato a un elemento di programmazione, il parametro `isCompliant` dell'attributo viene impostato su `True` o `False` per indicare la conformità o la non conformità. L'impostazione predefinita per questo parametro non è disponibile, quindi è necessario specificare un valore.  
  
 Se a un elemento non viene applicato <xref:System.CLSCompliantAttribute>, l'elemento non sarà considerato conforme.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40030  
  
### Per correggere l'errore  
  
-   Se è necessaria la conformità CLS, definire questo tipo in un'altra gerarchia di contenimento.  
  
-   Se questo tipo deve rimanere nella gerarchia di contenimento corrente, rimuovere <xref:System.CLSCompliantAttribute> dalla definizione o contrassegnarlo come `<CLSCompliant(False)>`.  
  
## Vedere anche  
 [\<PAVE OVER\> Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3)