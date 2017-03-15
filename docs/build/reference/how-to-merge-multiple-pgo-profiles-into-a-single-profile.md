---
title: "Procedura: unire pi&#249; profili PGO in un unico profilo | Microsoft Docs"
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
  - "unione profili"
  - "ottimizzazioni PGO, unione profili"
ms.assetid: aab686b5-59dd-40d1-a04b-5064690f65a6
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Procedura: unire pi&#249; profili PGO in un unico profilo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'ottimizzazione PGO \(Profile\-guided optimization\) è uno strumento altamente funzionale per la creazione di file binari ottimizati in base a uno scenario con profilo.  È tuttavia interessante analizzare le possibili soluzioni e le modalità di creazione di un singolo profilo che potrà essere utilizzato da PGO per più scenari diversi nel caso in cui si disponga di un'applicazione con numerosi scenari importanti, ma distinti.  In Visual Studio queste attività vengono eseguite automaticamente da Microsoft PGO Manager \(Pgomgr.exe\).  
  
 La sintassi per l'unione dei profili è la seguente:  
  
```  
pgomgr /merge[:num] [.pgc_files] .pgd_files  
```  
  
 in cui `num` rappresenta un peso facoltativo utilizzato per questa unione.  I pesi sono comunemente utilizzati in presenza di scenari più importanti rispetto ad altri o in presenza di scenari che devono essere eseguiti più volte.  
  
> [!NOTE]
>  Microsoft PGO Manager non potrà essere utilizzato con dati di profilo non aggiornati.  Per unire un file pgc in un file pgd, è necessario che il file pgc sia generato da un eseguibile creato tramite la stessa chiamata al collegamento con cui era stato generato il file pgd.  
  
## Esempio  
 Nell'esempio riportato di seguito, Microsoft PGO Manager aggiungerà pgcFile.pgc a pgdFile.pgd sei volte.  
  
```  
pgomgr /merge:6 pgcFile.pgc pgdFile.pgd  
```  
  
## Esempio  
 Nell'esempio riportato di seguito, Microsoft PGO Manager aggiungerà pgcFile1.pgc e pgcFile2.pgc a pgdFile.pgd, due volte per ogni file pgc.  
  
```  
pgomgr /merge:2 pgcFile1.pgc pgcFile2.pgc pgdFile.pgd  
```  
  
## Esempio  
 Se Microsoft PGO Manager viene eseguito senza un file pgc, cercherà nella directory locale tutti i file pgc aventi lo stesso nome del file pgd contrassegnato da un punto esclamativo \(\!\) seguito da caratteri arbitrari.  Se nella directory locale sono presenti file test.pgd, test\!1.pgc, test2.pgc e test\!hello.pgc e il comando successivo viene eseguito dalla directory locale, test\!1.pgc e test\!hello.pgc verranno uniti in test.pgd.  
  
```  
pgomgr /merge test.pgd  
```  
  
## Vedere anche  
 [Ottimizzazioni guidate da profilo \(PGO\)](../../build/reference/profile-guided-optimizations.md)