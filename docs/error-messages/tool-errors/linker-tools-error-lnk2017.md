---
title: "Errore degli strumenti del linker LNK2017 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2017"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2017"
ms.assetid: f7c21733-b0fb-4888-a295-9b453ba6ee77
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore degli strumenti del linker LNK2017
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la rilocazione 'simbolo' in 'segmento' non è valida senza \/LARGEADDRESSAWARE:NO  
  
 Si sta tentando di compilare un'immagine a 64 bit con indirizzi a 32 bit.  A tal fine, è necessario:  
  
-   Utilizzare un indirizzo di caricamento fisso.  
  
-   Limitare l'immagine a 3 GB.  
  
-   Specificare [\/largeaddressaware:no](../../build/reference/largeaddressaware-handle-large-addresses.md).