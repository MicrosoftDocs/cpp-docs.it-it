---
title: "Funzioni intrinseche_InterlockedAdd | Microsoft Docs"
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
  - "_InterlockedAdd64_acq_cpp"
  - "_InterlockedAdd64_acq"
  - "_InterlockedAdd_acq"
  - "_InterlockedAdd_nf"
  - "_InterlockedAdd64_rel"
  - "_InterlockedAdd64"
  - "_InterlockedAdd_cpp"
  - "_InterlockedAdd_rel_cpp"
  - "_InterlockedAdd_rel"
  - "_InterlockedAdd64_rel_cpp"
  - "_InterlockedAdd64_cpp"
  - "_InterlockedAdd_acq_cpp"
  - "_InterlockedAdd64_nf"
  - "_InterlockedAdd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_InterlockedAdd intrinseco"
  - "_InterlockedAdd_acq intrinseco"
  - "_InterlockedAdd_nf intrinseco"
  - "_InterlockedAdd_rel intrinseco"
  - "_InterlockedAdd64 intrinseco"
  - "_InterlockedAdd64_acq intrinseco"
  - "_InterlockedAdd64_nf intrinseco"
  - "_InterlockedAdd64_rel intrinseco"
ms.assetid: 3d319603-ea9c-4fdd-ae61-e52430ccc3b1
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni intrinseche_InterlockedAdd
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Eseguire un'aggiunta atomica, che assicura che l'operazione abbia esito positivo quando più thread hanno accesso a una variabile condivisa.  
  
## Sintassi  
  
```  
long _InterlockedAdd(    long volatile * Addend,    long Value ); long _InterlockedAdd_acq(    long volatile * Addend,    long Value ); long _InterlockedAdd_nf(    long volatile * Addend,    long Value ); long _InterlockedAdd_rel(    long volatile * Addend,    long Value ); __int64 _InterlockedAdd64(    __int64 volatile * Addend,    __int64 Value ); __int64 _InterlockedAdd64_acq(    __int64 volatile * Addend,    __int64 Value ); __int64 _InterlockedAdd64_nf (    __int64 volatile * Addend,    __int64 Value ); __int64 _InterlockedAdd64_rel(    __int64 volatile * Addend,    __int64 Value );  
```  
  
#### Parametri  
 \[in, out\] `Addend`  
 Puntatore al valore integer da aggiungere a; sostituito dal risultato dell'addizione.  
  
 \[in\] `Value`  
 Il valore da aggiungere.  
  
## Valore restituito  
 Entrambe le funzioni restituiscono il risultato dell'addizione.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|  
|-------------------------|------------------|  
|`_InterlockedAdd`|ARM|  
|`_InterlockedAdd_acq`|ARM|  
|`_InterlockedAdd_nf`|ARM|  
|`_InterlockedAdd_rel`|ARM|  
|`_InterlockedAdd64`|ARM|  
|`_InterlockedAdd64_acq`|ARM|  
|`_InterlockedAdd64_nf`|ARM|  
|`_InterlockedAdd64_rel`|ARM|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Le versioni di queste funzioni con il suffisso `_acq` o `_rel` eseguono un'aggiunta interlocked in base alla semantica di acquisizione o rilascio.  Semantica di acquisizione significa che il risultato dell'operazione viene reso visibile a tutti i thread e processori prima di qualsiasi successiva lettura o scrittura nella memoria.  L'acquisizione è utile quando si entra in una sezione critica.  Semantica di rilascio significa che a tutte le letture e scritture in memoria viene imposto di essere rese visibili a tutti i thread e processori prima che sia reso visibile il risultato dell'operazione stessa.  Il rilascio è utile quando si esce da una sezione critica.  Le funzioni intrinseche con suffisso `_nf` \("nessun limite"\) non fungono da barriera di memoria.  
  
 Queste routine sono disponibili solo come funzioni intrinseche.  
  
## Esempio  
  
```  
// interlockedadd.cpp  
// Compile with: /Oi /EHsc  
// processor: ARM  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(_InterlockedAdd)  
  
int main()  
{  
        long data1 = 0xFF00FF00;  
        long data2 = 0x00FF0000;  
        long retval;  
        retval = _InterlockedAdd(&data1, data2);  
        printf("0x%x 0x%x 0x%x", data1, data2, retval);  
}  
```  
  
## Output  
  
```  
0xffffff00 0xff0000 0xffffff00  
```  
  
## Esempio  
  
```  
// interlockedadd64.cpp  
// compile with: /Oi /EHsc  
// processor: ARM  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
#pragma intrinsic(_InterlockedAdd64)  
  
int main()  
{  
        __int64 data1 = 0x0000FF0000000000;  
        __int64 data2 = 0x00FF0000FFFFFFFF;  
        __int64 retval;  
        cout << hex << data1 << " + " << data2 << " = " ;  
        retval = _InterlockedAdd64(&data1, data2);  
        cout << data1 << endl;  
        cout << "Return value: " << retval << endl;  
}  
```  
  
## Output  
  
```  
ff0000000000 + ff0000ffffffff = ffff00ffffffff  
Return value: ffff00ffffffff  
```  
  
### Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)