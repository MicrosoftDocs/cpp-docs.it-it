---
title: "Avviso del compilatore (livello 1) C4556 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "xml"
  - "C4556"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4556"
ms.assetid: e4c0e296-b747-4db1-9608-30b8b74feac2
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4556
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

valore di argomento intrinseco immediato 'valore' non compreso nell'intervallo 'limite inferiore \- limite superiore'  
  
 Un argomento intrinseco corrisponde a un'istruzione hardware.  Quest'ultima dispone di un numero fisso di bit per la codifica della costante.  Se ***valore*** non è compreso nell'intervallo, la codifica non sarà corretta  e i bit supplementari verranno troncati.  
  
 Il seguente codice di esempio genera l'errore C4556:  
  
```  
// C4556.cpp  
// compile with: /W1  
// processor: x86 IPF  
#include <xmmintrin.h>  
void test()  
{  
   __m64 m;  
   _m_pextrw(m, 5);   // C4556  
}  
int main()  
{  
}  
```