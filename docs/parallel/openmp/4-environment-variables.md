---
title: "4. Environment Variables | Microsoft Docs"
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
ms.assetid: 4ec7ed81-e9ca-46a1-84f8-8f9ce4587346
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 4. Environment Variables
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questo capitolo vengono descritte le variabili di ambiente di OpenMP c e C\+\+ API \(o i meccanismi specifici per la piattaforma equivalenti\) che controllo l'esecuzione del codice parallelo.  I nomi delle variabili di ambiente devono essere maiuscoli.  I valori vengono fanno distinzione tra maiuscole e minuscole e possono contenere spazi iniziale e finale.  Le modifiche ai valori dopo il programma ha avviato vengono ignorate.  
  
 Le variabili di ambiente sono i seguenti:  
  
-   **OMP\_SCHEDULE** imposta il tipo di pianificazione e la dimensione di runtime del blocco.  
  
-   **OMP\_NUM\_THREADS** imposta il numero di thread da utilizzare durante l'esecuzione.  
  
-   **OMP\_DYNAMIC** abilita o disabilita la modifica dinamica del numero di thread.  
  
-   **OMP\_NESTED** abilita o disabilita il parallelismo annidato.  
  
 Gli esempi in questo capitolo illustrato solo come queste variabili possono essere impostate in ambienti shell di UNIX C\# \(csh\).  Nella shell di Korn negli ambienti di DOS le azioni sono simili, come segue:  
  
 csh:  
 setenv OMP\_SCHEDULE “dinamico„  
  
 ksh:  
 esportazione OMP\_SCHEDULE\= " dinamica„  
  
 DOS:  
 impostare OMP\_SCHEDULE\= " dinamico„