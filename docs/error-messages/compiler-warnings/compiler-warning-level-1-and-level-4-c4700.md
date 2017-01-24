---
title: "Avviso del compilatore (livelli 1 e 4) C4700 | Microsoft Docs"
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
  - "C4700"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4700"
ms.assetid: 2da0deb4-77dd-4b05-98d3-b78d74ac4ca7
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livelli 1 e 4) C4700
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata variabile locale 'nome' non inizializzata  
  
 La variabile locale *nome* è stata utilizzata senza che le fosse stato assegnato prima un valore. Questa situazione può provocare risultati imprevisti.  
  
 Il seguente codice di esempio genera l'errore C4700:  
  
```  
// C4700.cpp  
// compile with: /W1  
int main() {  
   int i;  
   return i;   // C4700  
}  
```  
  
 In [\/clr:safe](../../build/reference/clr-common-language-runtime-compilation.md) questo avviso è di livello 4.  Il seguente codice di esempio genera l'errore C4700:  
  
```  
// C4700b.cpp  
// compile with: /W4 /clr:safe /c  
using namespace System;  
int main() {  
   Int32^ bi;  
   return *bi;   // C4700  
}  
```