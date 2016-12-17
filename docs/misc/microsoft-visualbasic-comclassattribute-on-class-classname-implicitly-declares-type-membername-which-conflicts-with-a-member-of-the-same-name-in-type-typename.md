---
title: "&#39;Microsoft.VisualBasic.ComClassAttribute&#39; nella classe &#39;&lt;nomeclasse&gt;&#39; dichiara in modo implicito &lt;tipo&gt; &#39;&lt;nomemembro&gt;&#39;, che &#232; in conflitto con un membro con lo stesso nome in &lt;tipo&gt; &#39;&lt;nometipo&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "BC42101"
ms.assetid: 001c8eaa-19b6-44fa-8056-4186ecffbda8
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Microsoft.VisualBasic.ComClassAttribute&#39; nella classe &#39;&lt;nomeclasse&gt;&#39; dichiara in modo implicito &lt;tipo&gt; &#39;&lt;nomemembro&gt;&#39;, che &#232; in conflitto con un membro con lo stesso nome in &lt;tipo&gt; &#39;&lt;nometipo&gt;&#39;
'Microsoft.VisualBasic.ComClassAttribute' nella classe '\<nomeclasse\>' dichiara in modo implicito \<tipo\> '\<nomemembro\>', che è in conflitto con un membro con lo stesso nome in \<tipo\> '\<nometipo\>'. Usare 'Microsoft.VisualBasic.ComClassAttribute\(InterfaceShadows:\=True\)' se si vuole nascondere il nome nel '\<nometipo\>' di base.  
  
 Una classe che usa un blocco di attributi `COMClassAttribute` definisce implicitamente un'interfaccia con lo stesso nome di un membro della classe base. In questo caso l'elemento dell'interfaccia deve nascondere il membro della classe base.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42101  
  
### Per correggere l'errore  
  
1.  Se si intende nascondere il membro della classe base, impostare `InterfaceShadows:=True` nel blocco di attributi `ComClassAttribute`.  
  
2.  Se non si intende nascondere il membro della classe base, cambiare il nome della classe.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi usati in Visual Basic](http://msdn.microsoft.com/it-it/22231318-8a40-49af-9245-e0aab723563b)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Classe ComClassAttribute](http://msdn.microsoft.com/it-it/5c2f0835-9210-47dc-bc59-5c1769953574)   
 [Proprietà ComClassAttribute. InterfaceShadows](http://msdn.microsoft.com/it-it/0fae25bd-e0ba-4755-a76c-3b526b1ac795)