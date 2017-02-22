---
title: "Avviso del compilatore (livello 1) C4391 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4391"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4391"
ms.assetid: 95c6182c-fae9-4174-8f7b-98aa352e68ca
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4391
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'firma': tipo restituito non corretto per la funzione intrinseca, previsto 'tipo'  
  
 Una dichiarazione di funzione per una funzione intrinseca del compilatore contiene il tipo restituito errato.  È possibile che l'immagine risultante non funzioni correttamente.  
  
 Per risolvere il problema, correggere la dichiarazione o eliminarla e aggiungere il file di intestazione appropriato mediante l'istruzione \#include.  
  
 Il seguente codice di esempio genera l'errore C4391:  
  
```  
// C4391.cpp  
// compile with: /W1  
// processor: x86  
// uncomment the following line and delete the line that  
// generated the warning to resolve  
// #include "xmmintrin.h"  
  
#ifdef  __cplusplus  
extern "C" {  
#endif  
  
extern void _mm_load_ss(float *p);   // C4391  
  
#ifdef  __cplusplus  
}  
#endif  
  
int main()  
{  
}  
```