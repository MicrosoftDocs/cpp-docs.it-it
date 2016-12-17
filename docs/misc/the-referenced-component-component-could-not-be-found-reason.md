---
title: "The referenced component &#39;component&#39; could not be found. &lt;reason&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.referencenotfound"
ms.assetid: 35491b4d-e3e4-4e7c-8ac1-3adb09c1ef58
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The referenced component &#39;component&#39; could not be found. &lt;reason&gt;
Non è stato possibile risolvere un determinato riferimento.  Se si fa doppio clic su questo elemento dell'Elenco attività, verrà attivato Esplora soluzioni e verrà selezionato il riferimento che non è stato risolto.  
  
 Modificare la proprietà [ReferencePath](http://msdn.microsoft.com/it-it/8e549b39-7256-456a-8fd7-089b23facf9c) in modo che nel percorso siano incluse le directory appropriate.  
  
 Questo errore può verificarsi nel caso in cui un progetto venga spostato in un altro computer.  La proprietà `ReferencePath` viene memorizzata come percorso assoluto.  Se il riferimento R1 risiede in c:\\R\\R1.dll nel computer A, nel file .vbproj.user o .csproj.user c:\\R verrà memorizzato come parte della proprietà `ReferencePath`.  Tuttavia, se nel computer B R1 risiede in d:\\R\\R1.dll, il sistema del progetto non sarà in grado di trovare R1 perché d:\\R non fa parte del percorso di riferimento.  
  
 Uno scenario simile è rappresentato dal controllo del codice sorgente.  Se viene eseguito l'inserimento in un progetto, il file VBPROJ.USER o CSPROJ.USER non verrà copiato nel computer locale in quanto non è archiviato nel controllo del codice sorgente.  Pertanto, il valore iniziale della proprietà `ReferencePath` sarà vuoto e tutti i riferimenti che utilizzano `ReferencePath` per la risoluzione non verranno risolti.  Per ulteriori informazioni, vedere l'argomento relativo alla gestione delle dipendenze nella documentazione relativa allo *sviluppo in team con Visual Studio .NET and Visual SourceSafe*.  
  
 Questo errore può essere generato anche nel caso in cui un progetto a cui si fa riferimento non sia presente nella soluzione corrente.  
  
 Se l'errore si verifica, il progetto potrebbe non venire compilato.  
  
 Per ulteriori informazioni sulla risoluzione dei riferimenti agli assembly, vedere [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md).  
  
## Vedere anche  
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)