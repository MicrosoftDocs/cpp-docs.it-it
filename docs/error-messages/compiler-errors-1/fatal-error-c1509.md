---
title: "Errore irreversibile C1509 | Microsoft Docs"
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
  - "C1509"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1509"
ms.assetid: 40dd100d-c6ba-451c-bd26-2c99ec1c36d6
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1509
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

limite del compilatore: troppi stati di gestione delle eccezioni nella funzione 'funzione'. semplificare la funzione  
  
 Nel codice è stato superato un limite interno sugli stati di gestione delle eccezioni \(32.768 stati\).  
  
 Solitamente questa situazione si verifica quando la funzione contiene un'espressione complessa con variabili di classi definite dall'utente e operatori aritmetici.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Semplificare le espressioni assegnando le sottoespressioni comuni a variabili temporanee.  
  
2.  Suddividere la funzione in funzioni più piccole.