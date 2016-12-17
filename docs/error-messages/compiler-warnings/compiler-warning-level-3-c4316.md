---
title: "Avviso del compilatore (livello 3) C4316 | Microsoft Docs"
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
  - "C4316"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4316"
ms.assetid: 10371f01-aeb8-40ac-a290-59e63efa5ad4
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4316
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'oggetto allocato nell'heap non può essere allineato per questo tipo.  
  
 Un oggetto allineato allocato utilizzando `operator new` potrebbe non presentare l'allineamento specificato.  Eseguire l'override dell'[operatore new](../../c-runtime-library/operator-new-crt.md) e dell'[operator delete](../../c-runtime-library/operator-delete-crt.md) per i tipi sovrallineati in modo che utilizzino routine di allocazione allineata, ad esempio [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md) e [\_aligned\_free](../../c-runtime-library/reference/aligned-free.md).  Il seguente codice di esempio genera l'errore C4316:  
  
```cpp  
// C4316.cpp  
// Test: cl /W3 /c C4316.cpp  
  
__declspec(align(32)) struct S {}; // C4324  
  
int main() {  
    new S; // C4316  
}  
```