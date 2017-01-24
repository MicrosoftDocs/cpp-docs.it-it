---
title: "Errore del compilatore C2812 | Microsoft Docs"
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
  - "C2812"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2812"
ms.assetid: 22aadb8c-7232-489d-a3ad-60662dda30a8
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2812
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\#import non supportato con \/clr:pure e \/clr:safe  
  
 La [Direttiva \#import](../../preprocessor/hash-import-directive-cpp.md) non è supportata con **\/clr:pure** e **\/clr:safe** poiché `#import` richiede l'utilizzo di librerie di supporto del compilatore nativo.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2812:  
  
```  
// C2812.cpp  
// compile with: /clr:pure /c  
#import "importlib.tlb"   // C2812  
```