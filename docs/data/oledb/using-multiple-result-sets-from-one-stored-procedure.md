---
title: "Utilizzo di pi&#249; set di risultati di un&#39;unica stored procedure | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set di risultati multipli"
  - "stored procedure, restituzione di set di risultati"
ms.assetid: c450c12c-a76c-4ae4-9675-071a41eeac05
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di pi&#249; set di risultati di un&#39;unica stored procedure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La maggior parte delle stored procedure restituisce più gruppi di risultati.  Tali stored procedure includono in genere una o più istruzioni di selezione.  Il consumer deve considerare questa caratteristica per gestire tutti i gruppi di risultati.  
  
### Per gestire più gruppi di risultati  
  
1.  Creare una classe `CCommand` con `CMultipleResults` come argomento del modello e con la funzione di accesso desiderata.  In genere, si tratta di una funzione di accesso dinamica o manuale.  Se si utilizza un altro tipo di funzione di accesso, potrebbe risultare impossibile determinare le colonne di output per ogni rowset.  
  
2.  Eseguire la stored procedure normalmente e associare le colonne. Per informazioni, vedere [Recupero dei dati](../../data/oledb/fetching-data.md).  
  
3.  Utilizzare i dati.  
  
4.  Chiamare `GetNextResult` sulla classe `CCommand`.  Se è disponibile un altro rowset di risultati, `GetNextResult` restituirà S\_OK e sarà necessario riassociare le colonne se si sta utilizzando una funzione di accesso manuale.  Se `GetNextResult` restituisce un errore, non saranno disponibili altri gruppi di risultati.  
  
## Vedere anche  
 [Utilizzo delle stored procedure](../../data/oledb/using-stored-procedures.md)