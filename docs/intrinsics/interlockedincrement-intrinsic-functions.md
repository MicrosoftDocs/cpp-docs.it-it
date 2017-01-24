---
title: "Funzioni intrinseche _InterlockedIncrement | Microsoft Docs"
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
  - "_InterlockedIncrement_acq"
  - "_InterlockedIncrement16_rel_cpp"
  - "_InterlockedIncrement16_cpp"
  - "_InterlockedIncrement64_rel"
  - "_InterlockedIncrement_rel"
  - "_InterlockedIncrement64_nf"
  - "_InterlockedIncrement16_acq_cpp"
  - "_InterlockedIncrement_rel_cpp"
  - "_InterlockedIncrement64"
  - "_InterlockedIncrement64_rel_cpp"
  - "_InterlockedIncrement16_nf"
  - "_InterlockedIncrement16_rel"
  - "_InterlockedIncrement16_acq"
  - "_InterlockedIncrement_nf"
  - "_InterlockedIncrement_acq_cpp"
  - "_InterlockedIncrement64_cpp"
  - "_InterlockedIncrement64_acq_cpp"
  - "_InterlockedIncrement"
  - "_InterlockedIncrement_cpp"
  - "_InterlockedIncrement64_acq"
  - "_InterlockedIncrement16"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_InterlockedIncrement intrinseco"
  - "_InterlockedIncrement_acq intrinseco"
  - "_InterlockedIncrement_nf intrinseco"
  - "_InterlockedIncrement_rel intrinseco"
  - "_InterlockedIncrement16 intrinseco"
  - "_InterlockedIncrement16_acq intrinseco"
  - "_InterlockedIncrement16_nf intrinseco"
  - "_InterlockedIncrement16_rel intrinseco"
  - "_InterlockedIncrement64 intrinseco"
  - "_InterlockedIncrement64_acq intrinseco"
  - "_InterlockedIncrement64_nf intrinseco"
  - "_InterlockedIncrement64_rel intrinseco"
  - "InterlockedIncrement intrinseco"
  - "InterlockedIncrement_acq intrinseco"
  - "InterlockedIncrement_rel intrinseco"
  - "InterlockedIncrement16 intrinseco"
  - "InterlockedIncrement64 intrinseco"
  - "InterlockedIncrement64_acq intrinseco"
  - "InterlockedIncrement64_rel intrinseco"
ms.assetid: 37700615-f372-438b-bcef-d76e11839482
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni intrinseche _InterlockedIncrement
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Fornisce il supporto intrinseco del compilatore per la funzione Win32 [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)] [InterlockedIncrement](http://msdn.microsoft.com/library/ms683614.aspx).  
  
## Sintassi  
  
```  
long _InterlockedIncrement(  
   long * lpAddend  
);  
long _InterlockedIncrement_acq(  
   long * lpAddend  
);  
long _InterlockedIncrement_rel(  
   long * lpAddend  
);  
long _InterlockedIncrement_nf(  
   long * lpAddend  
);  
short _InterlockedIncrement16(  
   short * lpAddend  
);  
short _InterlockedIncrement16_acq(  
   short * lpAddend  
);  
short _InterlockedIncrement16_rel(  
   short * lpAddend  
);  
short _InterlockedIncrement16_nf (  
   short * lpAddend  
);  
__int64 _InterlockedIncrement64(  
   __int64 * lpAddend  
);  
__int64 _InterlockedIncrement64_acq(  
   __int64 * lpAddend  
);  
__int64 _InterlockedIncrement64_rel(  
   __int64 * lpAddend  
);   
__int64 _InterlockedIncrement64_nf(  
   __int64 * lpAddend  
);  
```  
  
#### Parametri  
 \[in, out\] `lpAddend`  
 Puntatore alla variabile da incrementare.  
  
## Valore restituito  
 Il valore restituito è il valore incrementato risultante.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|Intestazione|  
|-------------------------|------------------|------------------|  
|`_InterlockedIncrement`, `_InterlockedIncrement16`, `_InterlockedIncrement64`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_InterlockedIncrement_acq`, `_InterlockedIncrement_rel`, `_InterlockedIncrement_nf`, `_InterlockedIncrement16_acq`, `_InterlockedIncrement16_rel`, `_InterlockedIncrement16_nf`, `_InterlockedIncrement64_acq`, `_InterlockedIncrement64_rel`, `_InterlockedIncrement64_nf`|ARM|\<intrin.h\>|  
  
## Note  
 Ci sono diverse varianti di `_InterlockedIncrement` che variano in base ai tipi di dati interessati e all'uso della semantica di acquisizione o di rilascio specifica del processore.  
  
 Mentre la funzione `_InterlockedIncrement` opera su valori integer a 32 bit, `_InterlockedIncrement16` opera su valori integer a 16 bit e `_InterlockedIncrement64` opera su valori integer a 64 bit.  
  
 Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica.  Le funzioni intrinseche con suffisso `_nf` \("nessun limite"\) non fungono da barriera di memoria.  
  
 La variabile a cui punta il parametro `lpAddend` deve essere allineata a un limite a 32 bit; in caso contrario, questa funzione non andrà a buon fine su sistemi x86 multiprocessore e su qualsiasi sistema non x86.  Per altre informazioni, vedere [align](../cpp/align-cpp.md).  
  
 La funzione Win32 è dichiarata in `Wdm.h` o `Ntddk.h`.  
  
 Queste routine sono disponibili solo come funzioni intrinseche.  
  
## Esempio  
 Per un esempio di come usare `_InterlockedIncrement`, vedere [\_InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md).  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)