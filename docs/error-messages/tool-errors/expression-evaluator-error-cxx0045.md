---
title: "Errore dell‘analizzatore di espressioni CXX0045 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0045"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0045"
  - "CXX0045"
ms.assetid: 32181bc8-e79c-4ad7-a82f-47c62ec06d7d
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore dell‘analizzatore di espressioni CXX0045
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

non è una funzione  
  
 È stato fornito un elenco di argomenti per un simbolo, interno al programma, che non corrisponde al nome di una funzione.  
  
## Esempio  
  
```  
queue( alpha, beta )  
```  
  
 dove `queue`  non rappresenta una funzione.  
  
 Questo errore è identico all'errore CAN0045.