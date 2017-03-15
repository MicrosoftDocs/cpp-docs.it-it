---
title: "Errore dell‘analizzatore di espressioni CXX0022 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0022"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0022"
  - "CXX0022"
ms.assetid: f6b299ac-a4ee-492c-bd9f-6fff005bc537
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore dell‘analizzatore di espressioni CXX0022
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

chiamata di funzione prima di \_main  
  
 All'analizzatore di espressioni di C non è consentito una funzione prima che il debugger sia entrato nella funzione **\_main**.  Il programma non è inizializzato correttamente finché **\_main** non è stata chiamata.  
  
 Questo errore è identico all'errore CAN0022.