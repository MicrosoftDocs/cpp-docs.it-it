---
title: "Errore di compilazione progetto PRJ0025 | Microsoft Docs"
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
  - "PRJ0025"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0025"
ms.assetid: 57725c78-bc63-44f3-9667-2969b2d7c41d
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore di compilazione progetto PRJ0025
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile convertire il contenuto Unicode del file batch "file" nella tabella codici ANSI dell'utente.  
  
 ***Contenuto UNICODE del file***  
  
 Il sistema del progetto ha trovato in una regola di compilazione personalizzata o in un evento di compilazione contenuto Unicode che non è possibile convertire correttamente nella tabella codici ANSI corrente dell'utente.  
  
 Per correggere l'errore, aggiornare il contenuto della regola o dell'evento di compilazione in modo da utilizzare ANSI oppure installare la tabella codici nel computer in uso e impostarla come predefinita per il sistema.  
  
 Per ulteriori informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione, vedere [Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../../ide/understanding-custom-build-steps-and-build-events.md).