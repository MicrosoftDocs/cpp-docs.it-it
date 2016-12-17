---
title: "Avviso del compilatore (livello 4) C4429 | Microsoft Docs"
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
  - "C4429"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4429"
ms.assetid: a3e4cf1f-a869-4e47-834a-850c21eb5297
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4429
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

uno dei nomi di caratteri universali probabilmente incompleto o in formato non valido  
  
 Il compilatore ha rilevato una sequenza di caratteri che potrebbe essere un nome di caratteri universali in formato errato.  Un nome di caratteri universali è `\u` seguito da quattro cifre esadecimali oppure `\U` seguito da otto cifre esadecimali.  
  
 Il seguente codice di esempio genera l'errore C4429:  
  
```  
// C4429.cpp  
// compile with: /W4 /WX  
int \ug0e4 = 0;   // C4429  
// Try the following line instead:  
// int \u00e4 = 0;   // OK, a well-formed universal character name.  
```