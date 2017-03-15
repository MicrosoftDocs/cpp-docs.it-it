---
title: "Errore di compilazione progetto PRJ0024 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0024"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0024"
ms.assetid: 8bde6368-6c1b-4e04-bc5e-3c6d0b8fa1d7
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore di compilazione progetto PRJ0024
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile convertire il percorso Unicode "percorso" nella tabella codici ANSI dell'utente.  
  
 ***percorso***  è la versione Unicode originale della stringa di percorso.  Questo errore si può verificare quando un percorso Unicode non può essere convertito direttamente in ANSI per la tabella codici del sistema corrente.  
  
 Può inoltre verificarsi se si utilizza un progetto sviluppato su un sistema che utilizza una tabella codici non presente nel computer in uso.  
  
 Per correggere l'errore, aggiornare il percorso per utilizzare il testo ANSI oppure installare la tabella codici nel computer in uso e impostarla come predefinita per il sistema.