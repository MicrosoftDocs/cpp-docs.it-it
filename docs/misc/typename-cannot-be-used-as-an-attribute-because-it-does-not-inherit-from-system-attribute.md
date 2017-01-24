---
title: "Non &#232; possibile usare &#39;&lt;nometipo&gt;&#39; come attributo perch&#233; non eredita da &#39;System.Attribute&#39; | Microsoft Docs"
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
  - "vbc31504"
  - "bc31504"
helpviewer_keywords: 
  - "BC31504"
ms.assetid: 37517623-5099-4db9-a461-f2f5daa4957b
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare &#39;&lt;nometipo&gt;&#39; come attributo perch&#233; non eredita da &#39;System.Attribute&#39;
Si è provato a usare una classe che non è derivata da `System.Attribute`.  
  
 **ID errore:** BC31504  
  
### Per correggere l'errore  
  
1.  Definire gli attributi personalizzati come classi che derivano da `System.Attribute` aggiungendo un'istruzione `Imports` per la prima riga di codice nella classe.  
  
## Vedere anche  
 <xref:System.AttributeUsageAttribute>   
 [NOT IN BUILD: Attributi personalizzati in Visual Basic](http://msdn.microsoft.com/it-it/d72d8a5c-8f64-4614-b15b-cad66845d047)