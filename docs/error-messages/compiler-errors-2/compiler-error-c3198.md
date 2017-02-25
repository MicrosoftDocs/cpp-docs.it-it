---
title: "Errore del compilatore C3198 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3198"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3198"
ms.assetid: ec4ecf61-0067-4aa4-b443-a91013a1e59d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3198
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

uso non valido di pragma a virgola mobile: il pragma fenv\_access funziona solo in modalità precise  
  
 Il pragma [fenv\_access](../../preprocessor/fenv-access.md) è stato utilizzato in un'impostazione [\/fp](../../build/reference/fp-specify-floating-point-behavior.md) diversa da **\/fp:precise**.  
  
 Il seguente codice di esempio genera l'errore C3198:  
  
```  
// C3198.cpp  
// compile with: /fp:fast  
#pragma fenv_access(on)   // C3198  
```