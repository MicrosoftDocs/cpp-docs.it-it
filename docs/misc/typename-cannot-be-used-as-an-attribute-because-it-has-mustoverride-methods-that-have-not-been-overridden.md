---
title: "Impossibile utilizzare &#39;&lt;nometipo&gt;&#39; come attributo perch&#233; contiene i metodi &#39;MustOverride&#39; di cui non &#232; stato eseguito l&#39;override | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31507"
  - "vbc31507"
helpviewer_keywords: 
  - "BC31507"
ms.assetid: 843643d3-3e81-4ce3-b4df-278882f3954d
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile utilizzare &#39;&lt;nometipo&gt;&#39; come attributo perch&#233; contiene i metodi &#39;MustOverride&#39; di cui non &#232; stato eseguito l&#39;override
Le classi con i metodi `MustOverride` non possono essere usate come attributi.  
  
 I membri `MustOverride` delle classi di attributo possono essere usati solo dalle classi derivate che eseguono l'override di tali membri.  
  
 **ID errore:** BC31507  
  
### Per correggere l'errore  
  
1.  Rimuovere il modificatore `MustOverride` dai membri delle classi di attributo.  
  
2.  Implementare membri `MustOverride` in una classe derivata e usare tale classe come attributo.  
  
## Vedere anche  
 <xref:System.AttributeUsageAttribute>   
 [NOT IN BUILD: Attributi personalizzati in Visual Basic](http://msdn.microsoft.com/it-it/d72d8a5c-8f64-4614-b15b-cad66845d047)