---
title: "Il membro &#39;&lt;nomemembro1&gt;&#39; &#232; in conflitto con un membro dichiarato in modo implicito per il membro &#39;&lt;nomemembro2&gt;&#39; nel tipo di base &#39;&lt;nometipobase&gt;&#39;, quindi non deve essere dichiarato &#39;Overloads&#39; | Microsoft Docs"
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
  - "vbc40023"
  - "bc40023"
helpviewer_keywords: 
  - "BC40023"
ms.assetid: 82bb29a6-8d49-47a4-8c19-b21e97dfc7de
caps.latest.revision: 13
caps.handback.revision: 13
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il membro &#39;&lt;nomemembro1&gt;&#39; &#232; in conflitto con un membro dichiarato in modo implicito per il membro &#39;&lt;nomemembro2&gt;&#39; nel tipo di base &#39;&lt;nometipobase&gt;&#39;, quindi non deve essere dichiarato &#39;Overloads&#39;
Una proprietà o una routine in una classe derivata usa lo stesso nome di un membro implicito della classe base e specifica la parola chiave [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md).  
  
 L'overload viene usato per definire più versioni di una proprietà o routine tutte appartenenti alla stessa classe. Non è possibile definire un'ulteriore versione del membro di una classe base a meno che questo non specifichi già `Overloads`. Dal momento che i membri impliciti non specificano `Overloads`, il compilatore presuppone che questa proprietà o routine [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md) sia il membro della classe base implicita.  
  
 Il compilatore di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] crea membri impliciti corrispondenti a determinati elementi di programmazione dichiarati. La tabella seguente riepiloga questi membri impliciti o *sintetici*.  
  
|Elemento dichiarato|Membri creati in modo implicito|  
|-------------------------|-------------------------------------|  
|Enumerazione|Membro `value__`|  
|Evento|Routine `add_<eventname>`<br /><br /> Routine `remove_<eventname>`<br /><br /> Campo di `<eventname>Event`<br /><br /> Delegato `<eventname>EventHandler`|  
|Proprietà|Routine `get_<propertyname>`<br /><br /> Routine `set_<propertyname>`|  
|Membro `My.Form`, membro `My.WebService` o membro di una classe contrassegnata con l'attributo <xref:Microsoft.VisualBasic.MyGroupCollectionAttribute>|Variabile `m_<variablename>` `Static`<br /><br /> Proprietà `<variablename>`<br /><br /> Routine `get_<variablename>`<br /><br /> Routine `set_<variablename>`|  
|Variabile `WithEvents`|Variabile `_<variablename>`<br /><br /> Proprietà `<variablename>`<br /><br /> Routine `get_<variablename>`<br /><br /> Routine `set_<variablename>`|  
  
 A causa del rischio di conflitti di nomi, è consigliabile evitare di denominare gli elementi di programmazione dichiarati usando la stessa forma di qualsiasi membro implicito. Ad esempio, è consigliabile evitare qualsiasi nome di elemento che inizia con `get_` o `set_`.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40023  
  
### Per correggere l'errore  
  
-   Cambiare il nome della proprietà o della routine per evitare conflitti con i nomi elencati nella tabella precedente.  
  
## Vedere anche  
 [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md)