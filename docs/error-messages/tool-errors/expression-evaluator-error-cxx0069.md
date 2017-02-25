---
title: "Errore dell‘analizzatore di espressioni CXX0069 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0069"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CXX0069"
ms.assetid: cf334b23-1e17-4d37-acc5-18597ee84164
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore dell‘analizzatore di espressioni CXX0069
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la variabile richiede uno stack frame  
  
 L'analizzatore di espressioni non è in grado di analizzare la variabile perché quest'ultima non compare in uno stack frame.  L'errore può essere causato da variabili dichiarate come parti di una funzione inline.