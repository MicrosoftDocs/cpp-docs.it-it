---
title: "Errore del compilatore C2006 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2006"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2006"
ms.assetid: caaed6f7-ceb9-4742-8820-d66657c0b04d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2006
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'direttiva': previsto un nome file. Trovato 'token'  
  
 Le direttive quali [\#include](../../preprocessor/hash-include-directive-c-cpp.md) o [\#import](../../preprocessor/hash-import-directive-cpp.md) richiedono un nome di file.  Per correggere l'errore, accertarsi che *token* sia un nome di file valido.  Inserire inoltre il nome di file tra virgolette doppie o parentesi angolari.  
  
 Il seguente codice di esempio genera l'errore C2006:  
  
```  
// C2006.cpp  
#include stdio.h   // C2006  
```  
  
 Possibile soluzione:  
  
```  
// C2006b.cpp  
// compile with: /c  
#include <stdio.h>  
```