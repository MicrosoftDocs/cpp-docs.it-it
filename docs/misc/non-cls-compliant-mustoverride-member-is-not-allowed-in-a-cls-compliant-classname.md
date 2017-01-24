---
title: "Il membro &#39;MustOverride&#39; non conforme a CLS non &#232; consentito in una classe &lt;nomeclasse&gt; conforme a CLS | Microsoft Docs"
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
  - "bc40034"
  - "vbc40034"
helpviewer_keywords: 
  - "BC40034"
ms.assetid: 4eb36b3a-1bbe-4e99-9ecb-a12b8729b128
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il membro &#39;MustOverride&#39; non conforme a CLS non &#232; consentito in una classe &lt;nomeclasse&gt; conforme a CLS
Un classe è contrassegnata come `<CLSCompliant(True)>`, ma contiene una proprietà o routine `MustOverride` che è contrassegnata come `<CLSCompliant(False)>` o non è contrassegnata.  
  
 Quando una classe è conforme con [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md) \(CLS\), l'applicazione che usa quella classe accede soltanto ai membri che sono contrassegnati anche come `<CLSCompliant(True)>` e ignora i membri che non lo sono. Tuttavia, l'applicazione non può ignorare una proprietà o routine `MustOverride` perché deve accedervi per eseguirne l'override.  
  
 Quando <xref:System.CLSCompliantAttribute> viene applicato a un elemento di programmazione, il parametro `isCompliant` dell'attributo viene impostato su `True` o `False` per indicare la conformità o la non conformità. L'impostazione predefinita per questo parametro non è disponibile, quindi è necessario specificare un valore.  
  
 Se a un elemento non viene applicato <xref:System.CLSCompliantAttribute>, l'elemento non sarà considerato conforme.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40034  
  
### Per correggere l'errore  
  
-   Se è richiesta la conformità con CLS ed è possibile accedere al codice sorgente della classe, contrassegnare il membro come `<CLSCompliant(True)>`.  
  
-   Se è richiesta la compatibilità con CLS e non è possibile accedere al codice sorgente della classe o se esso non può essere conforme, definire il membro all'interno di una classe differente.  
  
-   Se è richiesto che il membro rimanga non conforme, rimuovere la parola chiave `MustOverride` dalla relativa definizione, rimuovere l'oggetto <xref:System.CLSCompliantAttribute> dalla definizione di classe o contrassegnare la classe come `<CLSCompliant(False)>`.  
  
## Vedere anche  
 [MustOverride](../Topic/MustOverride%20\(Visual%20Basic\).md)   
 [\<PAVE OVER\> Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3)