---
title: "__stosq | Microsoft Docs"
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
  - "__stosq"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rep stosq (istruzione)"
  - "stosq (istruzione)"
  - "__stosq (funzione intrinseca)"
ms.assetid: 3ea28297-4369-4c2d-bf0c-91fa539ce209
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __stosq
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera un'istruzione della stringa dell'archivio \(`rep stosq`\).  
  
## Sintassi  
  
```  
void __stosb(   
   unsigned __int64* Dest,   
   unsigned __int64 Data,   
   size_t Count   
);  
```  
  
#### Parametri  
 \[out\] `Dest`  
 La destinazione dell'operazione.  
  
 \[in\] `Data`  
 Dati da memorizzare.  
  
 \[in\] `Count`  
 La lunghezza del blocco di quadwords da scrivere.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__stosq`|AMD64|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Il risultato è che il quadword `Data` viene scritto in un blocco di quadwords di `Count` nella stringa di `Dest` .  
  
 Questa procedura è disponibile solo come intrinseci.  
  
## Esempio  
  
```  
// stosq.c  
// processor: x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__stosq)  
  
int main()  
{  
   unsigned __int64 val = 0xFFFFFFFFFFFFI64;  
   unsigned __int64 a[10];  
   memset(a, 0, sizeof(a));  
   __stosq(a+1, val, 2);  
   printf("%I64x %I64x %I64x %I64x", a[0], a[1], a[2], a[3]);   
}  
```  
  
## Output  
  
```  
0 ffffffffffff ffffffffffff 0  
```  
  
### Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)