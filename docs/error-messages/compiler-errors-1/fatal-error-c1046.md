---
title: "Errore irreversibile C1046 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1046"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1046"
ms.assetid: 822ec5f5-b0b0-4711-99e1-fc237b619af6
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore irreversibile C1046
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

limite del compilatore: strutture eccessivamente annidate  
  
 Il limite di annidamento di 15 livelli è stato superato dalla struttura, unione o classe.  Riscrivere la definizione in modo da ridurre il livello di annidamento.  Suddividere la struttura, l'unione o la classe in due o più parti utilizzando `typedef` per definire una o più strutture annidate.