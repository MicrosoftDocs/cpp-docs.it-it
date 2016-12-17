---
title: "Errore degli strumenti del linker LNK2008 | Microsoft Docs"
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
  - "LNK2008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2008"
ms.assetid: bbcd83c5-c8ae-439e-a033-63643a5bb373
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK2008
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Destinazione della correzione non allineata 'nome\_simbolo'  
  
 Nel file oggetto è stata rilevata una destinazione di correzione non allineata correttamente.  
  
 Questo errore può essere causato da un allineamento di sezione personalizzato \(ad esempio, \#pragma [pack](../../preprocessor/pack.md)\), dal modificatore [align](../../cpp/align-cpp.md) o dall'utilizzo di linguaggio assembly che modifica l'allineamento della sezione.  
  
 Se nel codice non viene utilizzato nessuno degli elementi indicati sopra, l'errore può essere causato dal compilatore.