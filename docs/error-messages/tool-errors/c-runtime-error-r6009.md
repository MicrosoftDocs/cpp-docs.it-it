---
title: "Errore R6009 del linguaggio C in fase di esecuzione  | Microsoft Docs"
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
  - "R6009"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6009"
ms.assetid: edfb1f8b-3807-48f4-a994-318923b747ae
caps.latest.revision: 7
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore R6009 del linguaggio C in fase di esecuzione 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Spazio per ambiente insufficiente.  
  
 La memoria è sufficiente al caricamento del programma ma non è sufficiente per creare la matrice **envp**.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Aumentare la quantità di memoria disponibile per il programma.  
  
2.  Ridurre il numero e la dimensione degli argomenti della riga di comando.  
  
3.  Ridurre la dimensione dell'ambiente rimuovendo le variabili non necessarie.