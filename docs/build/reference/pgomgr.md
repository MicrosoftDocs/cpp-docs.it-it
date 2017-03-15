---
title: "pgomgr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pgomgr (programma)"
  - "ottimizzazioni PGO, pgomgr"
ms.assetid: 74589126-df18-42c9-8739-26d60e148d6a
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# pgomgr
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aggiunge i dati di profilo di uno o più file pgc al file pgd.  
  
## Sintassi  
  
```  
pgomgr [options] pgcfiles pgdfile  
```  
  
#### Parametri  
 `options`  
 Per pgomgr possono essere specificate le opzioni seguenti:  
  
 **\/help** — Visualizza tutte le opzioni di pgomgr disponibili \(abbreviazione di \/?\).  
  
 **\/clear** — Fa sì che nel file pgd vengano cancellate tutte le informazioni sul profilo.  Quando si specifica **\/clear**, non è possibile specificare un file pgc.  
  
 **\/detail** — Visualizza statistiche dettagliate, incluse informazioni sul coverage del grafico di flusso.  
  
 **\/summary** — Visualizza statistiche per funzione.  
  
 —**\/unique** — Quando utilizzata con **\/summary**, determina la visualizzazione dei nomi di funzione decorati.  Quando non si utilizza \/unique, l'impostazione predefinita prevede che vengano visualizzati i nomi di funzione non decorati.  
  
 **\/merge**\[**:***n*\] — Fa sì che i dati dei file pgc vengano aggiunti al file pgd.  Il parametro opzionale, *n*, consente di specificare che i dati devono essere aggiunti per *n* volte.  Anziché realizzare uno scenario sei volte, è ad esempio possibile realizzarlo una volta in un'esecuzione di test e quindi aggiungerlo al file pgd sei volte con **pgomgr \/merge:6**.  
  
 `pgcfiles`  
 Uno o più file pgc di cui si desidera unire i dati di profilo nel file pgd.  È possibile specificare uno o più file pgc.  Se non si specifica alcun file pgc, pgomgr unirà tutti quelli con nome uguale al file pgd.  
  
 `pgdfile`  
 File pgd in cui vengono uniti i dati dei file pgc.  
  
## Note  
  
> [!NOTE]
>  Questo strumento può essere avviato solo dal prompt dei comandi di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)],  Non è possibile avviarlo dal prompt dei comandi di sistema o da Esplora file.  
  
## Esempio  
 Nell'esempio riportato di seguito vengono eliminati i dati di profilo dal file pgd.  
  
```  
pgomgr /clear myapp.pgd  
```  
  
 Nell'esempio riportato di seguito i dati di profilo in myapp1.pgc vengono aggiunti al file pgd per tre volte.  
  
```  
pgomgr /merge:3 myapp1.pgc myapp.pgd  
```  
  
 Nell'esempio riportato di seguito i dati di profilo di ogni file myapp\#.pgc vengono aggiunti al file myapp.pgd.  
  
```  
pgomgr -merge myapp1.pgd  
```  
  
## Vedere anche  
 [Strumenti per l'ottimizzazione PGO \(Profile Guided Optimization, Ottimizzazione guidata da profilo\)](../../build/reference/tools-for-manual-profile-guided-optimization.md)