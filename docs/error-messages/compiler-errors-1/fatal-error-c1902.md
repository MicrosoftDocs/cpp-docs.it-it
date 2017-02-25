---
title: "Errore irreversibile C1902 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1902"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1902"
ms.assetid: 2dc066cc-fcb1-4725-8bcb-9f44dd0905b7
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Errore irreversibile C1902
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestore database di programma incompatibile. Verificare l'installazione  
  
 Un file di database di programma \(.pdb\) è stato creato utilizzando una versione più recente di mspdb*XX*.dll di quella rilevata nel sistema dal compilatore.  In genere questo errore indica che manca il file mspdbsrv.exe o il file mspdbcore.dll o che tali file hanno una versione diversa da mspdb*XX*.dll. \(Il segnaposto *XX* nel nome del file mspdb*XX*.dll cambia con ogni versione del prodotto.  Ad esempio, in [!INCLUDE[vsprvslong](../../error-messages/compiler-errors-1/includes/vsprvslong_md.md)] il nome del file è mspdb80.dll.  
  
 Assicurarsi che nel computer siano installate versioni corrispondenti di mspdbsrv.exe, mspdbcore.dll e mspdb*XX*.dll.  Assicurarsi che non siano state copiate versioni non corrispondenti nella directory che contiene il compilatore e gli strumenti di collegamento per la piattaforma di destinazione.  È possibile, ad esempio, che siano stati copiati i file in modo da richiamare il compilatore o lo strumento di collegamento dal prompt dei comandi senza aver impostato contestualmente la variabile di ambiente **PATH**.