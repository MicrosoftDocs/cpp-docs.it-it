---
title: "Errore matematico M6203 | Microsoft Docs"
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
  - "M6203"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "M6203"
ms.assetid: bd7fdd1c-83e4-4d6a-901e-10a0308bf5be
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore matematico M6203
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"funzione": errore \_OVERFLOW.  
  
 La funzione specificata è troppo grande per essere rappresentata.  
  
 L'errore chiama la funzione `_matherr` con il nome di funzione, gli argomenti e il tipo di errore.  È possibile riscrivere la funzione `_matherr` per personalizzare la gestione di alcuni errori matematici a virgola mobile di runtime.