---
title: "Il membro &#39;&lt;nomemembro1&gt;&#39; dichiara in modo implicito &#39;&lt;nomemembroimplicito&gt;&#39;, che &#232; in conflitto con un membro nella classe base &#39;&lt;nomeclassebase&gt;&#39; | Microsoft Docs"
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
  - "vbc40022"
  - "bc40022"
helpviewer_keywords: 
  - "BC40022"
ms.assetid: be5bb2ee-2274-42b2-b843-179b14127b34
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il membro &#39;&lt;nomemembro1&gt;&#39; dichiara in modo implicito &#39;&lt;nomemembroimplicito&gt;&#39;, che &#232; in conflitto con un membro nella classe base &#39;&lt;nomeclassebase&gt;&#39;
Il membro '\<nomemembro1\>' dichiara in modo implicito '\<nomemembroimplicito\>', che è in conflitto con un membro nella classe base '\<nomeclassebase\>' e quindi il membro non deve essere dichiarato 'Overloads'  
  
 Una proprietà in una classe derivata genera un membro implicito con lo stesso nome di un membro della classe base e specifica la parola chiave [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md).  
  
 L'overload viene usato per definire più versioni di una proprietà o routine tutte appartenenti alla stessa classe. Non è possibile definire un'ulteriore versione del membro di una classe base a meno che questo non specifichi già `Overloads`. Dal momento che il membro della classe base in conflitto non specifica `Overloads`, il compilatore presuppone che questa proprietà [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md) sia il membro della classe base implicita.  
  
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
  
 **ID errore:** BC40022  
  
### Per correggere l'errore  
  
-   Se si prevede di nascondere il membro della classe base, sostituire la parola chiave [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md) con la parola chiave [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md) nella dichiarazione della proprietà.  
  
-   Se non si intende nascondere il membro della classe base, modificare il nome della proprietà per evitare conflitti con i nomi elencati nella tabella precedente.  
  
## Vedere anche  
 [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md)