---
title: "Il membro &#39;&lt;nomemembro1&gt;&#39; dichiara in modo implicito &#39;&lt;nomemembroimplicito&gt;&#39;, che &#232; in conflitto con un membro dichiarato in modo implicito per il membro &#39;&lt;nomemembro2&gt;&#39; nella classe base &#39;&lt;nomeclassebase&gt;&#39; | Microsoft Docs"
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
  - "vbc40018"
  - "bc40018"
helpviewer_keywords: 
  - "BC40018"
ms.assetid: 43844e55-9ce1-4b88-9aa8-839b37f30e5a
caps.latest.revision: 13
caps.handback.revision: 13
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il membro &#39;&lt;nomemembro1&gt;&#39; dichiara in modo implicito &#39;&lt;nomemembroimplicito&gt;&#39;, che &#232; in conflitto con un membro dichiarato in modo implicito per il membro &#39;&lt;nomemembro2&gt;&#39; nella classe base &#39;&lt;nomeclassebase&gt;&#39;
Il membro '\<nomemembro1\>' dichiara in modo implicito '\<nomemembroimplicito\>', che è in conflitto con un membro dichiarato in modo implicito per il membro '\<nomemembro2\>' nella classe base '\<nomeclassebase\>'. Quindi, il membro deve essere dichiarato 'Shadows'.  
  
 Un membro di una classe derivata genera un membro implicito con lo stesso nome di un membro implicito della classe base. Dal momento che i membri impliciti non specificano [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md), il compilatore presuppone che questo membro [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md) sia il membro della classe base implicita. Il codice risulta più leggibile e meno soggetto a errori, se si specifica esplicitamente la parola chiave `Shadows` per questo membro.  
  
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
  
 **ID errore:** BC40018  
  
### Per correggere l'errore  
  
-   Se si prevede di nascondere il membro implicito della classe base, includere la parola chiave [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md) nella dichiarazione del membro della classe derivata.  
  
-   Se non si intende nascondere il membro implicito della classe base, modificare il nome del membro della classe derivata per evitare conflitti con i nomi elencati nella tabella precedente.  
  
## Vedere anche  
 [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md)