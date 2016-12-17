---
title: "L&#39;attributo &#39;NonSerialized&#39; non avr&#224; alcun effetto su questo membro perch&#233; la classe che lo contiene non &#232; esposta come &#39;Serializable&#39; | Microsoft Docs"
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
  - "vbc30772"
  - "bc30772"
helpviewer_keywords: 
  - "BC30772"
ms.assetid: 1014e944-40c1-4078-8a38-139736ef89da
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;attributo &#39;NonSerialized&#39; non avr&#224; alcun effetto su questo membro perch&#233; la classe che lo contiene non &#232; esposta come &#39;Serializable&#39;
Per impostazione predefinita, le classi e i relativi membri sono non serializzabili. L'attributo <xref:System.NonSerializedAttribute> è necessario solo se un membro di una classe serializzabile non deve essere serializzato.  
  
 **ID errore:** BC30772  
  
### Per correggere l'errore  
  
-   Aggiungere l'attributo <xref:System.SerializableAttribute> alla classe.  
  
     \-oppure\-  
  
-   Rimuovere l'attributo <xref:System.NonSerializedAttribute> dal membro.  
  
## Vedere anche  
 <xref:System.NonSerializedAttribute>   
 <xref:System.SerializableAttribute>   
 [NOT IN BUILD: Attributi in Visual Basic](http://msdn.microsoft.com/it-it/620bfc0e-4582-4c8b-8432-ebc5c3dccc22)