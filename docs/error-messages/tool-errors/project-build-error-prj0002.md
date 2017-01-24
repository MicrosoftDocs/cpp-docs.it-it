---
title: "Errore di compilazione progetto PRJ0002 | Microsoft Docs"
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
  - "PRJ0002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0002"
ms.assetid: 1c820b1f-9a24-4681-80ed-4fcbfd7caa00
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore di compilazione progetto PRJ0002
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Errore restituito da "riga di comando".  
  
 Il comando ***riga di comando***, creato dall'input dell'utente nella finestra di dialogo **Pagine delle proprietà**, ha restituito un codice di errore, ma nella finestra di output non verranno visualizzate informazioni.  
  
 La soluzione di questo errore dipende dallo strumento che ha generato l'errore.  Per MIDL, si ottiene un'idea dell'errore definendo \/o \(Reindirizza output\).  
  
 Un'altra causa del problema potrebbe essere un file batch, quale un'istruzione di compilazione personalizzata o un evento di compilazione, che non fornisce informazioni sulle condizioni di errore.