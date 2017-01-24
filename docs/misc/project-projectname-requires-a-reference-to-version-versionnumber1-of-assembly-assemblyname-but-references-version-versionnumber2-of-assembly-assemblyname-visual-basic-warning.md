---
title: "Il progetto &#39;&lt;nomeprogetto&gt;&#39; richiede un riferimento alla versione &#39;&lt;numeroversione1&gt;&#39; dell&#39;assembly &#39;&lt;nomeassembly&gt;&#39; ma fa riferimento alla versione &#39;&lt;numeroversione2&gt;&#39; dell&#39;assembly &#39;&lt;nomeassembly&gt;&#39; (avviso di Visual Basic) | Microsoft Docs"
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
  - "vbc42203"
  - "bc42203"
helpviewer_keywords: 
  - "BC42203"
ms.assetid: 26a3fa34-ec5d-4817-a947-3959446a924a
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il progetto &#39;&lt;nomeprogetto&gt;&#39; richiede un riferimento alla versione &#39;&lt;numeroversione1&gt;&#39; dell&#39;assembly &#39;&lt;nomeassembly&gt;&#39; ma fa riferimento alla versione &#39;&lt;numeroversione2&gt;&#39; dell&#39;assembly &#39;&lt;nomeassembly&gt;&#39; (avviso di Visual Basic)
Il progetto '\<nomeprogetto\>' richiede un riferimento alla versione '\<numeroversione1\>' dell'assembly '\<nomeassembly\>' ma fa riferimento alla versione '\<numeroversione2\>' dell'assembly '\<nomeassembly\>'. Fare riferimento alla versione '\<numeroversione1\>' generata.  
  
 Un progetto contiene un riferimento indiretto a un assembly definito altrove, ma ha anche un riferimento diretto a una versione precedente di quell'assembly.  
  
 Per agevolare l'accesso ai tipi e alla programmazione di elementi definiti nella versione successiva ma non in quella precedente, il compilatore usa il riferimento indiretto alla versione successiva durante la risoluzione degli accessi.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42203  
  
### Per correggere l'errore  
  
-   Rimuovere il riferimento diretto alla versione precedente dell'assembly oppure modificarlo per fare riferimento alla versione successiva.  
  
## Vedere anche  
 [Assembly in Common Language Runtime](../Topic/Assemblies%20in%20the%20Common%20Language%20Runtime.md)   
 [NIB: Riferimento a spazi dei nomi e componenti](http://msdn.microsoft.com/it-it/568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB: gestione dei riferimenti](http://msdn.microsoft.com/it-it/910912ce-0dc9-4569-9274-32c44a20cb2c)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)