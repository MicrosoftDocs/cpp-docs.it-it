---
title: "Creazione di un file SBR | Microsoft Docs"
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
  - ".sbr (file)"
  - "BSCMAKE, file di input"
  - "simboli locali nelle informazioni di visualizzazione"
  - "SBR (file)"
  - "file browser di origine"
  - "simboli"
ms.assetid: bdb4b93c-a88a-441a-84fd-01087d03be25
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Creazione di un file SBR
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

BSCMAKE utilizza come input i file sbr.  Con il compilatore viene creato un file sbr per ciascun file oggetto \(obj\) che viene compilato.  Durante la compilazione o l'aggiornamento del file di informazioni di visualizzazione, tutti i file sbr del progetto devono essere disponibili sul disco.  
  
 Per creare un file sbr con tutte le informazioni possibili, specificare [\/FR](../../build/reference/fr-fr-create-dot-sbr-file.md).  
  
 Per creare un file sbr che non contenga simboli locali, specificare [\/Fr](../../build/reference/fr-fr-create-dot-sbr-file.md).  Se i file sbr contengono simboli locali, è comunque possibile ometterli dal file bsc utilizzando l'opzione [\/El](../../build/reference/bscmake-options.md)`.` di BSCMAKE.  
  
 Per creare un file sbr non è necessario eseguire una compilazione completa.  Specificando, ad esempio, l'opzione \/Zs viene eseguito un controllo della sintassi dal compilatore e generato un file sbr se si specifica l'opzione \/FR o \/Fr.  
  
 Il processo di compilazione può essere più efficiente se in prima istanza i file sbr vengono compressi per eliminare tutte le definizioni senza riferimenti.  I file sbr vengono automaticamente compressi dal compilatore.  
  
## Vedere anche  
 [Compilazione di un file BSC](../../build/reference/building-a-dot-bsc-file.md)