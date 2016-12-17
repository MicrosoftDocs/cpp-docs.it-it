---
title: "Il metodo &#39;&lt;nomeroutine&gt;&#39; per l&#39;evento &#39;&lt;nomeevento&gt;&#39; non pu&#242; essere contrassegnato come conforme a CLS perch&#233; il tipo che lo contiene &#39;&lt;nometipo&gt;&#39; non &#232; conforme a CLS | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc40053"
  - "bc40053"
helpviewer_keywords: 
  - "BC40053"
ms.assetid: 5f7aaf64-b5e6-4f97-9ebd-44cd4c7e8bf5
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il metodo &#39;&lt;nomeroutine&gt;&#39; per l&#39;evento &#39;&lt;nomeevento&gt;&#39; non pu&#242; essere contrassegnato come conforme a CLS perch&#233; il tipo che lo contiene &#39;&lt;nometipo&gt;&#39; non &#232; conforme a CLS
Un evento personalizzato dichiara una routine `AddHandler` o `RemoveHandler` e la contrassegna come `<CLSCompliant(True)>`, ma l'evento è definito in un tipo contrassegnato come `<CLSCompliant(False)>` o non contrassegnato.  
  
 Quando <xref:System.CLSCompliantAttribute> viene applicato a un elemento di programmazione, il parametro `isCompliant` dell'attributo viene impostato su `True` o `False` per indicare la conformità o la non conformità. L'impostazione predefinita per questo parametro non è disponibile, quindi è necessario specificare un valore.  
  
 Se a un elemento non viene applicato <xref:System.CLSCompliantAttribute>, l'elemento non sarà considerato conforme.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40053  
  
### Per correggere l'errore  
  
-   Se è necessaria la compatibilità con CLS, definire l'evento all'interno di un tipo compatibile con CLS.  
  
-   Se è necessario che l'evento rimanga all'interno del tipo che lo contiene, rimuovere <xref:System.CLSCompliantAttribute> dalla sua definizione oppure contrassegnarlo come `<CLSCompliant(False)>`.  
  
## Vedere anche  
 [How to: Declare Custom Events To Avoid Blocking](../Topic/How%20to:%20Declare%20Custom%20Events%20To%20Avoid%20Blocking%20\(Visual%20Basic\).md)   
 [How to: Declare Custom Events To Conserve Memory](../Topic/How%20to:%20Declare%20Custom%20Events%20To%20Conserve%20Memory%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: AddHandler e RemoveHandler](http://msdn.microsoft.com/it-it/a7a24bd2-519a-46fe-8a2c-2b9df2ca28ef)   
 [\<PAVE OVER\> Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3)