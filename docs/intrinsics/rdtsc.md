---
title: "__rdtsc | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__rdtsc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__rdtsc (funzione intrinseca)"
  - "rdtsc (istruzione)"
  - "Read Time Stamp Counter (istruzione)"
ms.assetid: e31d0e51-c9bb-42ca-bbe9-a81ffe662387
caps.latest.revision: 17
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __rdtsc
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera l'istruzione di `rdtsc` , che restituisce il timestamp di tempo del processore.  Il timestamp di tempo del processore registra il numero di cicli di clock dall'ultima reimpostazione.  
  
## Sintassi  
  
```  
unsigned __int64 __rdtsc();  
```  
  
## Valore restituito  
 Intero senza segno a 64 bit che rappresenta un numero.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__rdtsc`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa procedura è disponibile solo come intrinseci.  
  
 Interpretazione del valore di TSC in questa generazione dell'hardware differisce da quella nelle versioni precedenti di [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)].  Vedere i manuali hardware per ulteriori informazioni.  
  
## Esempio  
  
```  
// rdtsc.cpp  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__rdtsc)  
  
int main()  
{  
    unsigned __int64 i;  
    i = __rdtsc();  
    printf_s("%I64d ticks\n", i);  
}  
```  
  
  **3363423610155519 cicli**   
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)