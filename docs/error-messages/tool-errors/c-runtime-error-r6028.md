---
title: "Errore R6028 del linguaggio C in fase di esecuzione  | Microsoft Docs"
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
  - "R6028"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6028"
ms.assetid: 81e99079-4388-4244-a4f7-4641c508871c
caps.latest.revision: 9
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore R6028 del linguaggio C in fase di esecuzione 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile inizializzare "heap"  
  
 Questo errore si verifica quando il sistema operativo non riesce a creare il pool di memoria per l'applicazione.  In particolare, il Runtime C \(CRT\) ha chiamato la funzione Win32 `HeapCreate` che ha restituito NULL \(errore\).  
  
 Se questo errore si verifica durante l'avvio dell'applicazione, il sistema potrebbe non essere in grado di soddisfare le richieste dell'heap perché sono stati caricati driver difettosi.  Verificare la disponibilità di driver aggiornati in Windows Update o sul sito Web del fornitore hardware.