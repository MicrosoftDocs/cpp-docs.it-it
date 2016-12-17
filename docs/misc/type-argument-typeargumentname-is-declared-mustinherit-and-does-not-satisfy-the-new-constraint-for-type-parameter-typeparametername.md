---
title: "L&#39;argomento di tipo &#39;&lt;nomeargomentotipo&gt;&#39; &#232; dichiarato &#39;MustInherit&#39; e non soddisfa il vincolo &#39;New&#39; per il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; | Microsoft Docs"
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
  - "vbc32082"
  - "BC32082"
helpviewer_keywords: 
  - "BC32082"
ms.assetid: 597e5944-a61b-4858-ada5-efb80b27f26b
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;argomento di tipo &#39;&lt;nomeargomentotipo&gt;&#39; &#232; dichiarato &#39;MustInherit&#39; e non soddisfa il vincolo &#39;New&#39; per il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39;
Un tipo generico viene richiamato con una classe `MustInherit` come argomento di tipo, ma il parametro di tipo corrispondente viene dichiarato con il vincolo `New`.  
  
 Il vincolo `New` richiede che il tipo passato nell'argomento di tipo corrispondente debba supportare la creazione di oggetti. Tuttavia, una classe *astratta*, ovvero una classe dichiarata come `MustInherit`, non espone alcun costruttore perché non è possibile creare tutti gli oggetti in base ad essa.  
  
 **ID errore:** BC32082  
  
### Per correggere l'errore  
  
1.  Se la classe usata nell'argomento di tipo non deve essere astratta, rimuovere la parola chiave `MustInherit` dalla relativa dichiarazione.  
  
2.  Se la classe usata nell'argomento di tipo deve essere astratta, ma non è necessario usarla per costruire il tipo generico, passare una classe diversa nell'argomento di tipo.  
  
3.  Se il parametro di tipo corrispondente non deve creare alcun oggetto in base al tipo passato, rimuovere il vincolo `New` dalla relativa dichiarazione.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md)   
 [MustInherit](../Topic/MustInherit%20\(Visual%20Basic\).md)