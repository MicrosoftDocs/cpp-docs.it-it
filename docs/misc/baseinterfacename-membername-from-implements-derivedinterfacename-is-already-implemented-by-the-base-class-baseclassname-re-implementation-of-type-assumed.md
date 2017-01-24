---
title: "&#39;&lt;nomeinterfacciabase&gt;.&lt;nomemembro&gt;&#39; da &#39;implements &lt;nomeinterfacciaderivata&gt;&#39; &#232; gi&#224; implementata dalla classe base &#39;&lt;nomeclassebase&gt;&#39;. Prevista nuova implementazione di &lt;tipo&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc42014"
  - "vbc42014"
helpviewer_keywords: 
  - "BC42014"
ms.assetid: 95fff622-5d54-4ec8-90f0-477de1d58687
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomeinterfacciabase&gt;.&lt;nomemembro&gt;&#39; da &#39;implements &lt;nomeinterfacciaderivata&gt;&#39; &#232; gi&#224; implementata dalla classe base &#39;&lt;nomeclassebase&gt;&#39;. Prevista nuova implementazione di &lt;tipo&gt;
Una proprietà, routine o evento di una classe derivata usa una clausola `Implements` che specifica un membro dell'interfaccia derivata già implementato sull'interfaccia di base nella classe base.  
  
 Il membro implementato viene definito dall'interfaccia di base ed ereditato dall'interfaccia derivata. L'interfaccia di base viene implementata direttamente dalla classe base. L'interfaccia derivata viene implementata dalla classe derivata, che può facilmente non rendersi conto che la classe base ha già implementato il membro.  
  
 Una classe derivata può reimplementare un membro di interfaccia implementato dalla sua classe base. Questo non equivale a eseguire l'override dell'implementazione della classe base. Per altre informazioni, vedere [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md).  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42014  
  
### Per correggere l'errore  
  
-   Se si intende reimplementare il membro di interfaccia, non occorre fare nulla. Il codice della classe derivata accede al membro reimplementato a meno che non si usi la parola chiave [MyBase \- eliminazione](http://msdn.microsoft.com/it-it/52491d06-6451-4f6f-9aa6-8fab59bbc2b9) per accedere all'implementazione della classe base.  
  
-   Se non si intende reimplementare il membro di interfaccia, rimuovere la clausola `Implements` dalla dichiarazione di proprietà, routine o evento.  
  
## Vedere anche  
 [Interfaces](../Topic/Interfaces%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Parola chiave Implements e istruzione Implements](http://msdn.microsoft.com/it-it/b96560f7-6413-480f-a1e2-f80253bab5be)