---
title: "R6008 errore di Runtime C | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "R6008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6008"
ms.assetid: f0f304fc-709a-4843-bc7e-bad1ae0d1649
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore R6008 del linguaggio C in fase di esecuzione 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Spazio per argomenti insufficiente.  
  
 La memoria è sufficiente al caricamento del programma ma non è sufficiente per creare la matrice **argv**.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Aumentare la quantità di memoria disponibile per il programma.  
  
2.  Ridurre il numero e la dimensione degli argomenti della riga di comando.  
  
3.  Ridurre la dimensione dell'ambiente rimuovendo le variabili non necessarie.