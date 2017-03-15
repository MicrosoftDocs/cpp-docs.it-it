---
title: "Errore BK1517 di BSCMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "BK1517"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK1517"
ms.assetid: 24391f42-0a3e-40a9-9991-c8b9a6a7b1c7
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore BK1517 di BSCMAKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

file di origine per "sbrfile" compilato sia con \/Yc che con \/Yu  
  
 Il file SBR fa riferimento a se stesso.  Probabilmente è stato ricompilato con \/Yu dopo essere già stato compilato con \/Yc.  Reimpostare l'opzione del compilatore per il file di origine su \/Yc, quindi scegliere **Ricompila** per generare nuovi file SBR.  Non ricompilare il file di origine con \/Yu.