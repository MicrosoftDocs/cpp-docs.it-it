---
title: "Avviso del compilatore (livello 1) C4392 | Microsoft Docs"
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
  - "C4392"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4392"
ms.assetid: 817806ad-06a6-4b9e-8355-e25687c782dc
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4392
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'firma': numero non corretto di argomenti per la funzione intrinseca, previsti 'numero' argomenti  
  
 Una dichiarazione di funzione per una funzione intrinseca del compilatore contiene un numero di argomenti errato.  È possibile che l'immagine risultante non funzioni correttamente.  
  
 Per risolvere il problema, correggere la dichiarazione o eliminarla e aggiungere il file di intestazione appropriato mediante l'istruzione \#include.  
  
 Il seguente codice di esempio genera l'errore C4392:  
  
```  
// C4392.cpp  
// compile with: /W1  
// processor: x86  
// uncomment the following line and delete the line that  
// generated the warning to resolve  
// #include "xmmintrin.h"  
  
#ifdef  __cplusplus  
extern "C" {  
#endif  
  
extern void _mm_stream_pd(double *dp);   // C4392  
  
#ifdef  __cplusplus  
}  
#endif  
  
int main()  
{  
}  
```