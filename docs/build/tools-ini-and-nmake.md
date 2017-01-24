---
title: "Tools.ini e NMAKE | Microsoft Docs"
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
  - "NMAKE (programma), lettura di file"
  - "Tools.ini e NMake"
ms.assetid: ebd5eab6-ddf4-430e-bf4a-1db5bb84e344
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Tools.ini e NMAKE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il file Tools.ini viene letto prima dei makefile a meno che non sia stata specificata l'opzione \/R.  Tools.ini verrà cercato prima nella directory corrente, quindi nella directory specificata dalla variabile di ambiente INIT.  La sezione contenente le impostazioni relative a NMAKE nel file di inizializzazione inizia con `[NMAKE]` e può contenere qualsiasi informazione sul makefile.  Specificare i commenti in righe separate che iniziano con il simbolo di cancelletto \(\#\).  
  
## Vedere anche  
 [Esecuzione di NMAKE](../build/running-nmake.md)