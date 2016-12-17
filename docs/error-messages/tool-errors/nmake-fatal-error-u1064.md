---
title: "Errore irreversibile U1064 di NMAKE  | Microsoft Docs"
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
  - "U1064"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1064"
ms.assetid: 7141e66e-cde6-4173-84df-a391f3ebcdd1
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile U1064 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

MAKEFILE non trovato. Nessuna destinazione specificata.  
  
 La riga di comando di NMAKE non specifica un makefile o una destinazione e la directory corrente non contiene un file denominato MAKEFILE.  
  
 NMAKE richiede un makefile o una destinazione dalla riga di comando \(o entrambi\).  Per rendere un makefile disponibile a NMAKE, specificare l'opzione \/F oppure posizionare nella directory corrente un file denominato MAKEFILE.  Se non è disponibile alcun makefile, NMAKE crea una destinazione di riga di comando utilizzando una regola di inferenza.