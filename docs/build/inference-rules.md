---
title: "Regole di inferenza | Microsoft Docs"
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
  - "regole di inferenza in NMAKE"
  - "NMAKE (programma), regole di inferenza"
  - "regole, inferenza"
ms.assetid: caff320f-fb07-4eea-80c3-a6a2133a8492
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Regole di inferenza
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le regole di inferenza forniscono comandi che consentono di aggiornare le destinazioni e inferire i relativi dipendenti.  Le estensioni di una regola di inferenza corrispondono a un sola destinazione e a un solo dipendente con lo stesso nome di base.  Tali regole possono essere predefinite o definite dall'utente. Quelle predefinite possono essere ridefinite.  
  
 Se una dipendenza non aggiornata non presenta comandi e in [.SUFFIXES](../build/dot-directives.md) è contenuta l'estensione del dipendente, viene utilizzata una regola le cui estensioni corrispondono alla destinazione e a un file esistente nella directory corrente o in quella specificata.  Se ai file esistenti corrispondono più regole, verrà utilizzato l'elenco **.SUFFIXES** per determinare quale regola utilizzare. L'ordine di priorità dell'elenco decresce da sinistra a destra.  Se un file dipendente non è presente e non è elencato come destinazione in un altro blocco di descrizione, il dipendente mancante potrà essere creato mediante una regola di inferenza da un altro file con lo stesso nome di base.  Se la destinazione di un blocco di descrizione non presenta dipendenti né comandi, sarà possibile aggiornarla mediante una regola di inferenza.  Le regole di inferenza consentono di compilare una destinazione della riga di comando anche in assenza di un blocco di descrizione.  NMAKE consente di richiamare una regola per un dipendente dedotto anche se è stato specificato un dipendente esplicito.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Definizione di una regola](../build/defining-a-rule.md)  
  
 [Regole in modalità batch](../build/batch-mode-rules.md)  
  
 [Regole già definite](../build/predefined-rules.md)  
  
 [Dipendenti dedotti e regole](../build/inferred-dependents-and-rules.md)  
  
 [Precedenza nelle regole di inferenza](../build/precedence-in-inference-rules.md)  
  
## Vedere anche  
 [Riferimenti a NMAKE](../build/nmake-reference.md)