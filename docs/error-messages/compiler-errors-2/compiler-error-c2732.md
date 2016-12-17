---
title: "Errore del compilatore C2732 | Microsoft Docs"
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
  - "C2732"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2732"
ms.assetid: 01b7ad2c-93cf-456f-a4c0-c5f2fdc7c07c
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2732
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

le specifiche di collegamento contraddicono le precedenti specifiche di 'function'  
  
 La funzione è già stata dichiarata con un identificatore di collegamento diverso.  
  
 Questo errore può essere causato da file di inclusione con identificatori di collegamento diversi.  
  
 Per correggere l'errore, modificare le istruzioni `extern` in modo che i collegamenti concordino.  In particolare, non eseguire il wrapping di direttive `#include` in blocchi `extern "C"`.  
  
## Esempio  
 L'esempio seguente genera l'errore C2732:  
  
```  
// C2732.cpp  
extern void func( void );   // implicit C++ linkage  
extern "C" void func( void );   // C2732  
```