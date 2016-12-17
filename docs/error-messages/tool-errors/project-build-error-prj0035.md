---
title: "Errore di compilazione progetto PRJ0035 | Microsoft Docs"
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
  - "PRJ0035"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0035"
ms.assetid: 0667116d-338c-40a4-972c-da875f778cb5
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore di compilazione progetto PRJ0035
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile convertire il contenuto Unicode del file XML "file" nella tabella codici ANSI dell'utente.  
  
 ***Contenuto UNICODE del file***  
  
 ***file***  è il file XML creato come riga di comando per lo strumento di distribuzione Web.  
  
 In una proprietà della pagina delle proprietà dello strumento di distribuzione Web sono stati trovati caratteri Unicode non convertibili in modo corretto in ANSI.  
  
 Per correggere l'errore, aggiornare il contenuto della proprietà in modo da utilizzare ANSI oppure installare la tabella codici nel computer in uso e impostarla in base all'impostazione predefinita per il sistema.