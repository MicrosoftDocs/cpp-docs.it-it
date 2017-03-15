---
title: "Errore dell‘analizzatore di espressioni CXX0065 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0065"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0065"
  - "CXX0065"
ms.assetid: aac68f87-0b90-4c19-afa6-1c587625a5fd
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore dell‘analizzatore di espressioni CXX0065
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la variabile richiede uno stack frame  
  
 Nell'espressione è contenuta una variabile che esiste all'interno dell'area di validità corrente ma che non è stata ancora creata.  
  
 L'errore può verificarsi quando è stato eseguito il prologo di una funzione senza che per essa sia stato ancora impostato uno stack frame o quando si è eseguito il codice di uscita per la funzione stessa.  
  
 Proseguire nell'esecuzione del codice del prologo fino a che non sia impostato lo stack frame prima di valutare l'espressione.  
  
 Questo errore è identico all'errore CAN0065.