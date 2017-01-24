---
title: "La classe &#39;&lt;nomeclasse&gt;&#39; deve dichiarare un &#39;Sub New&#39; perch&#233; &#39;&lt;nomecostruttore&gt;&#39; nella relativa classe base &#39;&lt;nomeclassebase&gt;&#39; &#232; contrassegnato come obsoleto | Microsoft Docs"
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
  - "vbc30917"
  - "bc30917"
helpviewer_keywords: 
  - "BC30917"
ms.assetid: 764d222d-e058-40ad-a354-29b956a8027b
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La classe &#39;&lt;nomeclasse&gt;&#39; deve dichiarare un &#39;Sub New&#39; perch&#233; &#39;&lt;nomecostruttore&gt;&#39; nella relativa classe base &#39;&lt;nomeclassebase&gt;&#39; &#232; contrassegnato come obsoleto
Una dichiarazione di classe non include un costruttore e il costruttore della classe base è contrassegnato con l'attributo <xref:System.ObsoleteAttribute> e la direttiva di considerarlo come un errore.  
  
 Quando una classe derivata non dichiara un costruttore, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] prova a generare un costruttore senza parametri che chiama `MyBase.New()`. Se nella classe base non è presente alcun costruttore accessibile che può essere chiamato senza argomenti, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non può generare un costruttore implicito. In questo caso, il costruttore obbligatorio è contrassegnato con l'attributo <xref:System.ObsoleteAttribute>, per cui [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non può chiamarlo.  
  
 È possibile contrassegnare qualsiasi elemento di programmazione come non più in uso applicando <xref:System.ObsoleteAttribute> a tale elemento. In questo caso, è possibile impostare la proprietà <xref:System.ObsoleteAttribute.IsError%2A> dell'attributo su `True` o `False`. Se si imposta la proprietà su `True`, il compilatore considera il tentativo di usare l'elemento come un errore. Se si imposta la proprietà su `False`, o si lascia l'impostazione predefinita `False`, il compilatore genera un avviso se si prova a usare l'elemento.  
  
 **ID errore:** BC30917  
  
### Per correggere l'errore  
  
-   Usare `Sub New` per dichiarare un costruttore nella classe derivata.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi usati in Visual Basic](http://msdn.microsoft.com/it-it/22231318-8a40-49af-9245-e0aab723563b)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)