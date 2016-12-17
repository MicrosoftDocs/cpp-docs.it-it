---
title: "&lt;messaggio&gt; Questo errore potrebbe essere dovuto anche all&#39;uso contemporaneo di un riferimento file a &#39;&lt;nomefile1&gt;&#39; nel progetto &#39;&lt;nomeprogetto1&gt;&#39; e un riferimento file a &#39;&lt;nomefile2&gt;&#39; nel progetto &#39;&lt;nomeprogetto2&gt;&#39; | Microsoft Docs"
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
  - "bc30970"
  - "vbc30970"
helpviewer_keywords: 
  - "BC30970"
ms.assetid: 81cc4f7b-cc16-46cc-9a49-74980300e158
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;messaggio&gt; Questo errore potrebbe essere dovuto anche all&#39;uso contemporaneo di un riferimento file a &#39;&lt;nomefile1&gt;&#39; nel progetto &#39;&lt;nomeprogetto1&gt;&#39; e un riferimento file a &#39;&lt;nomefile2&gt;&#39; nel progetto &#39;&lt;nomeprogetto2&gt;&#39;
\<messaggio\> Questo errore potrebbe essere dovuto anche all'uso contemporaneo di un riferimento file a '\<nomepercorsofile1\>' nel progetto '\<nomeprogetto1\>' e un riferimento file a '\<nomepercorsofile2\>' nel progetto '\<nomeprogetto2\>'.  Se gli assembly sono identici, provare a definire lo stesso percorso per entrambi i riferimenti.  
  
 Il codice del progetto accede a un membro di un altro progetto, ma la configurazione della soluzione non permette al compilatore [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] per risolvere il riferimento.  
  
 Per accedere a un tipo definito in un altro assembly, il compilatore [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] deve avere un riferimento a quell'assembly. Deve trattarsi di un riferimento unico, non ambiguo, che non generi riferimenti circolari tra i progetti.  
  
 **ID errore:** BC30970  
  
### Per correggere l'errore  
  
1.  Determinare quale progetto produce l'assembly migliore per il progetto a cui fare riferimento. Per questa decisione si potrebbero usare criteri quali la facilità di accesso al file e la frequenza di aggiornamenti.  
  
2.  Nelle proprietà del progetto aggiungere un riferimento al file contenente l'assembly che definisce il tipo in uso.  
  
## Vedere anche  
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB: Riferimento a spazi dei nomi e componenti](http://msdn.microsoft.com/it-it/568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [NOTINBUILD: Risoluzione di un riferimento quando più variabili hanno lo stesso nome](http://msdn.microsoft.com/it-it/9601e39f-1911-44e1-ace5-3f6e090408b9)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [NIB Procedura: Modificare le proprietà e le impostazioni di configurazione dei progetti](http://msdn.microsoft.com/it-it/e7184bc5-2f2b-4b4f-aa9a-3ecfcbc48b67)   
 [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md)