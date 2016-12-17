---
title: "L&#39;attributo &#39;&lt;nomeattributo&gt;&#39; non pu&#242; essere specificato pi&#249; di una volta nel progetto, anche con valori di parametro identici | Microsoft Docs"
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
  - "bc41000"
  - "vbc41000"
helpviewer_keywords: 
  - "BC41000"
ms.assetid: 7e846177-7b89-44da-8f17-cdc8606ef148
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;attributo &#39;&lt;nomeattributo&gt;&#39; non pu&#242; essere specificato pi&#249; di una volta nel progetto, anche con valori di parametro identici
Un attributo personalizzato è specificato più volte nello stesso elemento di programmazione, ma all'attributo personalizzato è applicato un oggetto <xref:System.AttributeUsageAttribute> e la relativa proprietà <xref:System.AttributeUsageAttribute.AllowMultiple%2A> è impostata su `False`.<xref:System.AttributeUsageAttribute.AllowMultiple%2A> controlla se l'attributo è multiuso.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC41000  
  
### Per correggere l'errore  
  
-   Rimuovere la specificazione aggiuntiva dell'attributo personalizzato o impostare <xref:System.AttributeUsageAttribute.AllowMultiple%2A> su `True` nell'oggetto <xref:System.AttributeUsageAttribute> applicato.  
  
## Vedere anche  
 <xref:System.AttributeUsageAttribute>   
 <xref:System.AttributeUsageAttribute.AllowMultiple%2A>   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)