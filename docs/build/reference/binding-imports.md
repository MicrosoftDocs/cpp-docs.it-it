---
title: "Associazione di importazioni | Microsoft Docs"
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
  - "/DELAY:NOBIND (opzione del linker)"
  - "DELAY:NOBIND (opzione del linker)"
ms.assetid: bb766038-deb1-41b1-bcbc-29a30e8c1e2a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Associazione di importazioni
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il comportamento predefinito del linker prevede la creazione di una tabella di indirizzi di importazione \(IAT\) associabili per la DLL a caricamento ritardato.  Se la DLL è associata, la funzione di supporto tenterà di utilizzare le informazioni associate anziché chiamare **GetProcAddress** su ciascuna delle importazioni a cui si fa riferimento.  Se il timestamp o l'indirizzo preferito non corrisponde a quello della DLL caricata, la tabella degli indirizzi di importazione associati verrà considerata obsoleta e verrà ignorata dalla funzione di supporto.  
  
 Se non si prevede di associare le importazioni a caricamento ritardato della DLL, è possibile evitare la generazione di una tabella di indirizzi di importazione associati e il consumo di spazio nel file di immagine specificando l'opzione [\/delay](../../build/reference/delay-delay-load-import-settings.md):nobind sulla riga di comando del linker.  
  
## Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)