---
title: "Avviso degli strumenti del linker LNK4219 | Microsoft Docs"
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
  - "LNK4219"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4219"
ms.assetid: 363fedf4-b10c-4985-811a-55a9fba688d6
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4219
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Overflow della correzione nome correzione.La destinazione 'nome simbolo destinazione' non è inclusa nell'intervallo, verrà inserito il thunk  
  
 È stato inserito un thunk in una situazione in cui l'indirizzo o l'offset non può essere adattato nell'istruzione specificata poiché il simbolo di destinazione è troppo distante dalla posizione dell'istruzione.  
  
 Può essere utile riordinare l'immagine, ad esempio con l'opzione [\/ORDER](../../build/reference/order-put-functions-in-order.md), per evitare un livello supplementare di riferimento indiretto.