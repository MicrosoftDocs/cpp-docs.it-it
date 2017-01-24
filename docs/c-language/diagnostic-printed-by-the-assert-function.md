---
title: "Diagnostica stampata dalla funzione assert | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
ms.assetid: 78b64200-520d-40da-9a61-71553f411d4f
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Diagnostica stampata dalla funzione assert
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 4.2** Diagnostica stampata dalla funzione **assert** e relativo comportamento di terminazione  
  
 La funzione **assert** stampa un messaggio di diagnostica e chiama la routine **abort** se l'espressione è false \(0\).  Il messaggio di diagnostica presenta la forma seguente:  
  
 **Asserzione non riuscita**: *expression***, file** *filename***, line** *linenumber*  
  
 in cui filename è il nome del file di origine e linenumber è il numero di riga dell'asserzione non riuscita nel file di origine.  Se l'espressione è true \(diversa da zero\), non viene intrapresa alcuna azione.  
  
## Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)