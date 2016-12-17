---
title: "Il tipo di vincolo &lt;nometipo&gt; per il parametro generico non &#232; conforme a CLS | Microsoft Docs"
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
  - "bc40040"
  - "vbc40040"
helpviewer_keywords: 
  - "BC40040"
ms.assetid: c640dd59-56a9-43ed-b199-32a60f7b9b06
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo di vincolo &lt;nometipo&gt; per il parametro generico non &#232; conforme a CLS
Un tipo generico viene contrassegnato come `<CLSCompliant(True)>`, ma un vincolo su uno dei suoi parametri di tipo consente di specificare un tipo contrassegnato come `<CLSCompliant(False)>`, non contrassegnato o che non si qualifica in quanto è di tipo non compatibile.  
  
 Perché un tipo sia compatibile con le [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md) deve usare solo i tipi non compatibili con CLS. Questo vale anche per i vincoli sui parametri di tipo di un tipo generico.  
  
 I tipi di dati di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] seguenti non sono compatibili con CLS:  
  
-   [SByte Data Type](../Topic/SByte%20Data%20Type%20\(Visual%20Basic\).md)  
  
-   [UInteger Data Type](../Topic/UInteger%20Data%20Type.md)  
  
-   [ULong Data Type](../Topic/ULong%20Data%20Type%20\(Visual%20Basic\).md)  
  
-   [UShort Data Type](../Topic/UShort%20Data%20Type%20\(Visual%20Basic\).md)  
  
 Quando l'attributo <xref:System.CLSCompliantAttribute> viene applicato a un elemento di programmazione, il parametro `isCompliant` dell'attributo viene impostato su `True` o `False` per indicare la conformità o la non conformità. L'impostazione predefinita per questo parametro non è disponibile, quindi è necessario specificare un valore.  
  
 Se a un elemento non viene applicato <xref:System.CLSCompliantAttribute>, l'elemento non sarà considerato conforme.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40040  
  
### Per correggere l'errore  
  
-   Se il tipo generico deve prendere un parametro di tipo vincolato da questo tipo particolare, rimuovere <xref:System.CLSCompliantAttribute>. Il tipo non può essere compatibile con CLS.  
  
-   Se il tipo generico deve essere compatibile con CLS, modificare il tipo di questo vincolo al tipo con una compatibilità con CLS più vicina. Al posto di `UInteger` ad esempio può essere possibile usare `Integer` se non è necessario l'intervallo di valore al di sopra di 2.147.483.647. Se è necessario l'intervallo esteso, è possibile sostituire `UInteger` con `Long`.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [\<PAVE OVER\> Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3)