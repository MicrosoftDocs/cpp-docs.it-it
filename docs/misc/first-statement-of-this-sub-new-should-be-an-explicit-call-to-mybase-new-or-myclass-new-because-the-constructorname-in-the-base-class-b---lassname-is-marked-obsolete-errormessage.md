---
title: "La prima istruzione di questo &#39;Sub New&#39; deve essere una chiamata esplicita a &#39;MyBase.New&#39; o a &#39;MyClass.New&#39; perch&#233; &#39;&lt;nomecostruttore&gt;&#39; nella classe base &#39;&lt;nomeclassebase&gt;&#39; di &#39;&lt;nomeclassederivata&gt;&#39; &#232; contrassegnato come obsoleto: &#39;&lt;messaggioerrore&gt;&#39; | Microsoft Docs"
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
  - "bc41004"
  - "vbc41004"
helpviewer_keywords: 
  - "BC41004"
ms.assetid: 61185283-d43d-46ae-bfa0-6fe3e1d0982a
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La prima istruzione di questo &#39;Sub New&#39; deve essere una chiamata esplicita a &#39;MyBase.New&#39; o a &#39;MyClass.New&#39; perch&#233; &#39;&lt;nomecostruttore&gt;&#39; nella classe base &#39;&lt;nomeclassebase&gt;&#39; di &#39;&lt;nomeclassederivata&gt;&#39; &#232; contrassegnato come obsoleto: &#39;&lt;messaggioerrore&gt;&#39;
Un costruttore di classe non chiama esplicitamente un costruttore della classe base e il costruttore della classe base implicita è contrassegnato con l'attributo <xref:System.ObsoleteAttribute> e la direttiva di considerarlo come un avviso.  
  
 Quando un costruttore della classe derivata non chiama un costruttore della classe base, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] prova a generare una chiamata implicita a un costruttore della classe base senza parametri. Se non è presente alcun costruttore accessibile nella classe base che può essere chiamato senza argomenti, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non può generare una chiamata implicita. In questo caso, il costruttore obbligatorio è contrassegnato con l'attributo <xref:System.ObsoleteAttribute>, per cui [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non può chiamarlo.  
  
 È possibile contrassegnare qualsiasi elemento di programmazione come non più in uso applicando <xref:System.ObsoleteAttribute> a tale elemento. In questo caso, è possibile impostare la proprietà <xref:System.ObsoleteAttribute.IsError%2A> dell'attributo su `True` o `False`. Se si imposta la proprietà su `True`, il compilatore considera il tentativo di usare l'elemento come un errore. Se si imposta la proprietà su `False`, o si lascia l'impostazione predefinita `False`, il compilatore genera un avviso se si prova a usare l'elemento.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso perché la proprietà <xref:System.ObsoleteAttribute.IsError%2A> di <xref:System.ObsoleteAttribute> è `False`. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC41004  
  
### Per correggere l'errore  
  
1.  Esaminare il messaggio di errore tra virgolette e intraprendere l'azione appropriata.  
  
2.  Includere una chiamata a `MyBase.New()` o `MyClass.New()` come prima istruzione di `Sub New` nella classe derivata.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi usati in Visual Basic](http://msdn.microsoft.com/it-it/22231318-8a40-49af-9245-e0aab723563b)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)