---
title: "Riferimento indiretto all&#39;assembly &#39;&lt;nomeassembly&gt;&#39; versione &lt;numeroversioneprecedente&gt; che contiene &#39;&lt;nometipo&gt;&#39; | Microsoft Docs"
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
  - "vbc32207"
  - "bc32207"
helpviewer_keywords: 
  - "BC32207"
ms.assetid: a3de74b5-bedd-4e36-b379-485e4b3903f7
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Riferimento indiretto all&#39;assembly &#39;&lt;nomeassembly&gt;&#39; versione &lt;numeroversioneprecedente&gt; che contiene &#39;&lt;nometipo&gt;&#39;
Riferimento indiretto all'assembly '\<nomeassembly\>' versione \<numeroversioneprecedente\> che contiene '\<nometipo\>'. Questo progetto contiene un riferimento a una versione precedente dell'assembly \<nomeassembly\> \<numeroversioneprecedente\>. Per usare '\<nometipo\>', è necessario sostituire il riferimento a \<nomeassembly\> con versione \<numeroversioneprecedente\> o versione successiva.  
  
 Un'espressione contiene un riferimento indiretto a un altro progetto, che contiene un riferimento a una versione precedente dello stesso assembly.  
  
 In genere usare solo la versione più recente di un assembly.  
  
 **ID errore:** BC32207  
  
### Per correggere l'errore  
  
1.  Usare il nome del tipo citato per determinare quale progetto fa anche riferimento allo stesso assembly.  
  
2.  Determinare a quale versione dell'assembly fa riferimento 'altro progetto e modificare il progetto in modo che faccia riferimento alla stessa versione.  
  
## Vedere anche  
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md)