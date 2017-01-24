---
title: "Avviso del compilatore (livello 1) C4730 | Microsoft Docs"
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
  - "C4730"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4730"
ms.assetid: 11303e3f-162b-4b19-970a-479686123a68
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4730
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'main': le espressioni miste \_m64 e a virgola mobile possono generare codice non corretto  
  
 In una funzione vengono utilizzati i tipi [\_\_m64](../../cpp/m64.md) e **float**\/**double**.  Poiché i registri MMX e a virgola mobile condividono lo stesso spazio fisico di registro, non possono essere utilizzati contemporaneamente. L'impiego di tipi `__m64` e **float**\/**double** nella stessa funzione può provocare il danneggiamento dei dati e generare un'eccezione.  
  
 Per utilizzare in modo sicuro i tipi `__m64` e a virgola mobile nella stessa funzione, è necessario separare ciascuna funzione in cui è presente uno dei tipi tramite la funzione intrinseca **\_m\_empty\(\)** \(per MMX\) o **\_m\_femms\(\)** \(per 3DNow\!\).  
  
 Il seguente codice di esempio genera l'errore C4730:  
  
```  
// C4730.cpp  
// compile with: /W1  
// processor: x86  
#include "mmintrin.h"  
  
void func(double)  
{  
}  
  
int main(__m64 a, __m64 b)  
{  
   __m64 m;  
   double f;  
   f = 1.0;  
   m = _m_paddb(a, b);  
   // uncomment the next line to resolve C4730  
   // _m_empty();  
   func(f * 3.0);   // C4730  
}  
```