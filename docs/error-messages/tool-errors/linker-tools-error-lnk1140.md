---
title: "Errore degli strumenti del linker LNK1140 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1140"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1140"
ms.assetid: 468d7651-a7cd-47b9-aead-5bb2fab56121
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1140
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

troppi moduli per il database del programma; effettuare il collegamento con l'opzione \/PDB:NONE  
  
 Il progetto contiene più di 4096 moduli.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Ripetere il collegamento utilizzando [\/PDB:NONE](../../build/reference/pdb-use-program-database.md).  
  
2.  Compilare alcuni moduli senza informazioni di debug.  
  
3.  Ridurre il numero di moduli.