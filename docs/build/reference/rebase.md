---
title: "/REBASE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/rebase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/REBASE (opzione editbin) [C++]"
  - "indirizzi di base [C++]"
  - "DLL [C++], collegamento"
  - "file eseguibili [C++], indirizzo di base"
  - "REBASE (opzione editbin)"
  - "-REBASE (opzione editbin)"
ms.assetid: 3f89d874-af5c-485b-974b-fd205f6e1a4b
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /REBASE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/REBASE[:modifiers]  
```  
  
## Note  
 Questa opzione consente di impostare gli indirizzi di base dei file specificati.  In EDITBIN vengono assegnati nuovi indirizzi di base in uno spazio degli indirizzi contiguo in base alla dimensione di ciascun file arrotondata a 64 KB.  Per informazioni dettagliate sugli indirizzi di base, vedere l'opzione del linker [Indirizzo di base](../../build/reference/base-base-address.md) \(\/BASE\).  
  
 Specificare i file eseguibili e le DLL del programma nell'argomento *files* sulla riga di comando di EDITBIN secondo l'ordine desiderato per l'assegnazione degli indirizzi di base.  È possibile specificare facoltativamente uno o più modificatore, separandoli con una virgola \(**,**\):  
  
|Modificatore|Azione|  
|------------------|------------|  
|BASE**\=***address*|Fornisce un indirizzo iniziale per la riassegnazione di indirizzi di base ai file.  Specificare *address* in notazione decimale o in linguaggio C.  Se BASE non è specificato, l'indirizzo di base iniziale predefinito sarà 0x400000.  Se si utilizza DOWN, sarà necessario specificare BASE. *address* imposterà il termine dell'intervallo degli indirizzi di base.|  
|BASEFILE|Consente di creare un file denominato COFFBASE.TXT, che rappresenta un file di testo nel formato previsto dall'opzione \/BASE di LINK.|  
|DOWN|Consente di richiedere a EDITBIN di riassegnare gli indirizzi di base verso il basso a partire da un indirizzo finale.  Ai file vengono riassegnati gli indirizzi nell'ordine specificato, con il primo file posizionato nel primo indirizzo disponibile dopo la fine dell'intervallo di indirizzi.  È necessario utilizzare BASE con DOWN per garantire uno spazio degli indirizzi sufficiente per l'assegnazione di indirizzi di base ai file.  Per determinare lo spazio degli indirizzi necessario per i file specificati, eseguire EDITBIN con l'opzione \/REBASE sui file e aggiungere 64 KB alla dimensione totale visualizzata.|  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)