---
title: "__rdtscp | Microsoft Docs"
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
  - "__rdtscp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rdtscp (funzione intrinseca)"
  - "__rdtscp (funzione intrinseca)"
  - "rdtscp (istruzione)"
ms.assetid: f17d9a9c-88bb-44e0-b69d-d516bc1c93ee
caps.latest.revision: 13
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __rdtscp
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera l'istruzione di `rdtscp` , scrittura `TSC_AUX[31:0`\] alla memoria e restituisce il contatore di timestamp a 64 bit \(risultato di`TSC)` .  
  
## Sintassi  
  
```  
unsigned __int64 __rdtscp(  
   unsigned int * Aux  
);  
```  
  
#### Parametri  
 \[out\] `Aux`  
 Puntatore a una posizione che conterrà il contenuto del registro computer\-specifico `TSC_AUX[31:0]`.  
  
## Valore restituito  
 Un numero Integer senza segno a 64 bit.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__rdtscp`|Famiglia 0Fh AMD NPT o versioni successive|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa funzione intrinseca genera l'istruzione di `rdtscp` .  Per determinare il supporto hardware in questa istruzione, chiamare la funzione intrinseca di `__cpuid`con `InfoType=0x80000001` e il bit di controllo, 27 di `CPUInfo[3] (EDX)`.  Questo bit è altrimenti 1 se l'istruzione è supportata e 0.  Se si esegue il codice che utilizza questa funzione intrinseca sull'hardware che non supporta l'istruzione di `rdtscp` , i risultati sono imprevedibili.  
  
> [!CAUTION]
>  a differenza di `rdtsc`, `rdtscp` è un'istruzione serializzante; tuttavia, il compilatore può spostare il codice che delimitano questa funzione intrinseca.  
  
 Interpretazione del valore di TSC in questa generazione dell'hardware differisce da quella nelle versioni precedenti di [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)].  Vedere i manuali hardware per ulteriori informazioni.  
  
 Il significato del valore in `TSC_AUX[31:0]` dipende dal sistema operativo.  
  
## Esempio  
  
```  
#include <intrin.h>   
#include <stdio.h>  
int main()   
{  
 unsigned __int64 i;  
 unsigned int ui;  
 i = __rdtscp(&ui);  
 printf_s("%I64d ticks\n", i);  
 printf_s("TSC_AUX was %x\n", ui);  
}  
```  
  
  **3363423610155519 cicli TSC\_AUX erano 0**   
## Microsoft FINALE specifico  
 Copyright 2007 da Advanced Micro Devices, inc tutti i diritti riservati.  Riprodotto con l'autorizzazione di Advanced Micro Devices, inc  
  
## Vedere anche  
 [\_\_rdtsc](../intrinsics/rdtsc.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)