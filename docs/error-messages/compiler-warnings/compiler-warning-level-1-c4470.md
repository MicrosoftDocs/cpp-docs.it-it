---
title: "Avviso del compilatore (livello 1) C4470 | Microsoft Docs"
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
  - "C4470"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4470"
ms.assetid: f52a3eaa-a235-4747-a47d-9ec4ad4cb0ea
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4470
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

pragma di controllo a virgola mobile ignorati in \/clr  
  
 I pragma a virgola mobile:  
  
-   [fenv\_access](../../preprocessor/fenv-access.md)  
  
-   [float\_control](../../preprocessor/float-control.md)  
  
-   [fp\_contract](../../preprocessor/fp-contract.md)  
  
 non sono attivi in [\/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 Il seguente codice di esempio genera l'errore C4470:  
  
```  
// C4470.cpp  
// compile with: /clr /W1 /LD  
#pragma float_control(except, on)   // C4470  
```