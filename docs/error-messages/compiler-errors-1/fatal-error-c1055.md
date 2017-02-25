---
title: "Errore irreversibile C1055 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1055"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1055"
ms.assetid: a9fb9190-d7eb-4d5f-b1a2-a41e584a28c1
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore irreversibile C1055
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

limite del compilatore: chiavi insufficienti  
  
 Il file di origine contiene troppi simboli.  Le chiavi hash per la tabella di simboli sono state esaurite nel compilatore.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Suddividere il file di origine in file più piccoli.  
  
2.  Eliminare i file di intestazione non necessari.  
  
3.  Riutilizzare le variabili temporanee e globali anziché crearne di nuove.