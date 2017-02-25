---
title: "Errore matematico M6201 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "M6201"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "M6201"
ms.assetid: 4041c331-d9aa-4dd4-b565-7dbe0218538c
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore matematico M6201
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"funzione": errore \_DOMAIN  
  
 Un argomento della funzione specificata è esterno al dominio dei valori di input ammessi per la funzione.  
  
## Esempio  
  
```  
result = sqrt(-1.0)   // C statement  
result = SQRT(-1.0)   !  FORTRAN statement  
```  
  
 L'errore chiama la funzione `_matherr` con il nome di funzione, gli argomenti e il tipo di errore.  È possibile riscrivere la funzione `_matherr` per personalizzare la gestione di alcuni errori matematici a virgola mobile di runtime.