---
title: "Errore R6017 del linguaggio C in fase di esecuzione  | Microsoft Docs"
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
  - "R6017"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6017"
ms.assetid: df3ec5f5-6771-4648-ba06-0e26c6a1cc6a
caps.latest.revision: 7
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore R6017 del linguaggio C in fase di esecuzione 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Errore di blocco multithread imprevisto.  
  
 Si è verificato un errore imprevisto durante il tentativo di accedere a una risorsa sottoposta a blocco dalle librerie di runtime multithread del linguaggio C.  
  
 L'errore si verifica in genere quando il processo modifica inavvertitamente i dati dell'heap di runtime.  Tuttavia, esso può anche essere causato da un errore interno al codice di runtime o del sistema operativo.