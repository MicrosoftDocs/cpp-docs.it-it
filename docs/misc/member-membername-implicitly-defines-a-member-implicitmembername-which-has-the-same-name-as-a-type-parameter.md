---
title: "Il membro &#39;&lt;nomemembro&gt;&#39; definisce in modo implicito un membro &#39;&lt;nomemembroimplicito&gt;&#39; che ha lo stesso nome di un parametro di tipo | Microsoft Docs"
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
  - "BC32070"
  - "vbc32070"
helpviewer_keywords: 
  - "BC32070"
ms.assetid: cc0b3fcf-c141-47e2-9b33-d2b91c8bf2d6
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il membro &#39;&lt;nomemembro&gt;&#39; definisce in modo implicito un membro &#39;&lt;nomemembroimplicito&gt;&#39; che ha lo stesso nome di un parametro di tipo
Un membro di una classe generica genera un membro implicito con lo stesso nome di un parametro di tipo della classe.  
  
 Il compilatore di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] crea membri impliciti corrispondenti a determinati elementi di programmazione dichiarati. La tabella seguente riepiloga questi membri impliciti o *sintetici*.  
  
|Elemento dichiarato|Membri creati in modo implicito|  
|-------------------------|-------------------------------------|  
|Enumerazione|Membro `value__`|  
|Evento|Routine `add_<eventname>`<br /><br /> Routine `remove_<eventname>`<br /><br /> Campo di `<eventname>Event`<br /><br /> Delegato `<eventname>EventHandler`|  
|Proprietà|Routine `get_<propertyname>`<br /><br /> Routine `set_<propertyname>`|  
|Variabile di una raccolta `My.`|Variabile `m_<variablename>` `Static`<br /><br /> Proprietà `<variablename>`<br /><br /> Routine `get_<variablename>`<br /><br /> Routine `set_<variablename>`|  
|Variabile `WithEvents`|Variabile `_<variablename>`<br /><br /> Proprietà `<variablename>`<br /><br /> Routine `get_<variablename>`<br /><br /> Routine `set_<variablename>`|  
  
 A causa della possibilità di conflitti di nomi, è consigliabile evitare di denominare gli elementi di programmazione dichiarati usando la stessa forma di qualsiasi membro implicito. Ad esempio, è consigliabile evitare qualsiasi nome di elemento che inizia con `get_` o `set_`.  
  
 **ID errore:** BC32070  
  
### Per correggere l'errore  
  
-   Se il nome del parametro di tipo è flessibile, modificarlo per evitare conflitti con i nomi elencati nella tabella precedente.  
  
-   Se il parametro di tipo deve confermare il suo nome, modificare il nome del membro di classe per evitare conflitti con i nomi elencati nella tabella precedente.  
  
## Vedere anche  
 [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)