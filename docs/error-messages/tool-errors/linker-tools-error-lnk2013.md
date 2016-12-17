---
title: "Errore degli strumenti del linker LNK2013 | Microsoft Docs"
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
  - "LNK2013"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2013"
ms.assetid: 21408e2d-3f56-4d1f-a031-00df70785ed4
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK2013
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

overflow della correzione tipo correzione.La destinazione 'nome simbolo' non è inclusa nell'intervallo  
  
 L'indirizzo o l'offset necessario non può essere adattato dal linker nell'istruzione data poiché il simbolo di destinazione è troppo distante dalla posizione dell'istruzione.  
  
 Per risolvere questo problema, creare più immagini o utilizzare l'opzione [\/ORDER](../../build/reference/order-put-functions-in-order.md) in modo da avvicinare l'istruzione alla destinazione.  
  
 Quando il nome del simbolo è un simbolo definito dall'utente e non generato dal compilatore, è inoltre possibile tentare le seguenti soluzioni per l'errore:  
  
-   Modifica della funzione da static a non static.  
  
-   Ridenominazione della sezione di codice contenente la funzione static affinché corrisponda al chiamante.  
  
 Per verificare se una funzione è statica, utilizzare `DUMPBIN /SYMBOLS`.