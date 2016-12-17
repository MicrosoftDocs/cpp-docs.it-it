---
title: "Errore del compilatore di risorse RC2001 | Microsoft Docs"
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
  - "RC2001"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC2001"
ms.assetid: 92bfb4c0-1879-4606-bb9f-ef7368707b4a
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore di risorse RC2001
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

nuova riga nella costante  
  
 Una costante di stringa continua nella riga successiva senza la presenza di una barra rovesciata \(**\\**\) o di virgolette doppie di chiusura e di apertura \(**"**\).  
  
 Per interrompere una costante di stringa che si estende su due righe nel file di origine, effettuare una delle seguenti operazioni:  
  
-   Terminare la prima riga con un carattere di continuazione di riga, ovvero una barra rovesciata.  
  
-   Chiudere la stringa nella prima riga con un segno di virgolette doppie e aprire la stringa sulla riga successiva con un altro segno di virgolette doppie.  
  
 Non è sufficiente terminare la prima riga con \\n, ovvero la sequenza di escape per l'incorporazione di un carattere di nuova riga in una costante di stringa.