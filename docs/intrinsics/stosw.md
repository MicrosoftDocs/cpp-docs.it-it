---
title: "__stosw | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__stosw"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stosw (istruzione)"
  - "__stosw (funzione intrinseca)"
  - "rep stosw (istruzione)"
ms.assetid: 7620fd1d-dba5-40e3-8e07-01aa68895133
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# __stosw
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera un'istruzione della stringa dell'archivio \(`rep stosw`\).  
  
## Sintassi  
  
```  
void __stosw(   
   unsigned short* Dest,   
   unsigned short Data,   
   size_t Count   
);  
```  
  
#### Parametri  
 \[out\] `Dest`  
 La destinazione dell'operazione.  
  
 \[in\] `Data`  
 Dati da memorizzare.  
  
 \[in\] `Count`  
 La lunghezza del blocco di parole da scrivere.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__stosw`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Il risultato è che la parola `Data` viene scritta in un blocco di parole di `Count` nella stringa di `Dest` .  
  
 Questa procedura è disponibile solo come intrinseci.  
  
## Esempio  
  
```  
// stosw.c  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__stosw)  
  
int main()  
{  
    unsigned short val = 128;  
    unsigned short a[100];  
    memset(a, 0, sizeof(a));  
    __stosw(a+10, val, 2);  
    printf_s("%u %u %u %u", a[9], a[10], a[11], a[12]);     
}  
```  
  
  **0 128 128 0**   
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)