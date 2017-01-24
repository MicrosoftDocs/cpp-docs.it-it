---
title: "SafeIntException::SafeIntException | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "SafeIntException"
  - "SafeIntException.SafeIntException"
  - "SafeIntException::SafeIntException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeIntException, costruttore"
ms.assetid: 8e5a0c24-a56b-4c80-9ee8-876604b1e7dc
caps.latest.revision: 6
caps.handback.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# SafeIntException::SafeIntException
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un oggetto `SafeIntException`.  
  
## Sintassi  
  
```  
SafeIntException();  
  
SafeIntException(  
   SafeIntError code  
);  
```  
  
#### Parametri  
 \[in\] `code`  
 Un valore di dati enumerato che descrive l'errore che si è verificato.  
  
## Note  
 I valori possibili per `code` sono definiti nel file Safeint.h.  Per comodità, i valori possibili sono elencati di seguito.  
  
-   `SafeIntNoError`  
  
-   `SafeIntArithmeticOverflow`  
  
-   `SafeIntDivideByZero`  
  
## Requisiti  
 **Intestazione:** safeint.h  
  
 msl::utilities di**Spazio dei nomi:**  
  
## Vedere anche  
 [Libreria SafeInt](../windows/safeint-library.md)   
 [Classe SafeIntException](../windows/safeintexception-class.md)   
 [Classe SafeInt](../windows/safeint-class.md)