---
title: "L&#39;assembly &#39;&lt;percorsofile1&gt;&#39; fa riferimento all&#39;assembly &#39;&lt;identit&#224;assembly&gt;&#39; che &#232; ambiguo tra &#39;&lt;percorsofile2&gt;&#39; (a cui fa riferimento il progetto &#39;&lt;nomeprogetto1&gt;&#39;) e &#39;&lt;percorsofile3&gt;&#39; (a cui fa riferimento il progetto &#39;&lt;nomeprogetto2&gt;&#39;) | Microsoft Docs"
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
  - "bc42204"
  - "vbc42204"
helpviewer_keywords: 
  - "BC42204"
ms.assetid: b0c3d2b6-2776-4981-b79e-2e36f03d4123
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;assembly &#39;&lt;percorsofile1&gt;&#39; fa riferimento all&#39;assembly &#39;&lt;identit&#224;assembly&gt;&#39; che &#232; ambiguo tra &#39;&lt;percorsofile2&gt;&#39; (a cui fa riferimento il progetto &#39;&lt;nomeprogetto1&gt;&#39;) e &#39;&lt;percorsofile3&gt;&#39; (a cui fa riferimento il progetto &#39;&lt;nomeprogetto2&gt;&#39;)
L'assembly '\<percorsofile1\>' fa riferimento all'assembly '\<identitàassembly\>' che è ambiguo tra '\<percorsofile2\>' \(a cui fa riferimento il progetto '\<nomeprogetto1\>'\) e '\<percorsofile3\>' \(a cui fa riferimento il progetto '\<nomeprogetto2\>'\). Verrà usato '\<percorsofile2\>'. Se entrambi gli assembly sono identici, modificare i riferimenti allo stesso percorso.  
  
 Un assembly accede a un tipo in un altro assembly con il quale ha più di un riferimento di file.  
  
 Il compilatore non può garantire che i file dei diversi percorsi contengano la stessa versione dello stesso assembly. Perciò i riferimenti ai file sono ambigui ed è necessario che il compilatore ne selezioni uno.  
  
 L'*identità dell'assembly* include il nome, la versione, la chiave pubblica e le eventuali impostazioni cultura dell'assembly. Queste informazioni identificano l'assembly in modo univoco.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42204  
  
### Per correggere l'errore  
  
1.  Determinare quale file rappresenta la scelta migliore per l'assembly. È possibile usare i criteri come la versione più recente, l'accessibilità del file e la possibilità di ottenere gli aggiornamenti quando necessario.  
  
2.  Modificare tutti i riferimenti a questo assembly in modo che usino lo stesso percorso del file per il file scelto.  
  
## Vedere anche  
 [NOT IN BUILD: Assembly](http://msdn.microsoft.com/it-it/6c5c7b30-fa78-4f40-b908-120d0743b0e6)   
 [Assembly in Common Language Runtime](../Topic/Assemblies%20in%20the%20Common%20Language%20Runtime.md)   
 [Vantaggi degli assembly](../Topic/Assembly%20Benefits.md)   
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB: Gestione dei riferimenti](http://msdn.microsoft.com/it-it/910912ce-0dc9-4569-9274-32c44a20cb2c)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)