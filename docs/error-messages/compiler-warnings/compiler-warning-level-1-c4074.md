---
title: "Avviso del compilatore (livello 1) C4074 | Microsoft Docs"
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
  - "C4074"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4074"
ms.assetid: cd510e66-c338-4a86-a4d7-bfa1df9b16c3
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4074
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

inizializzatori inseriti nell'area di inizializzazione riservata del compilatore  
  
 L'area di inizializzazione del compilatore, specificata da [\#pragma init\_seg](../../preprocessor/init-seg.md), è riservata a Microsoft.  Il codice di quest'area può essere eseguito prima dell'inizializzazione della libreria di runtime C.  
  
 Il seguente codice di esempio genera l'errore C4074:  
  
```  
// C4074.cpp  
// compile with: /W1  
#pragma init_seg( compiler )   // C4074  
  
// try this line to resolve the warning  
// #pragma init_seg(user)  
  
int main() {  
}  
```