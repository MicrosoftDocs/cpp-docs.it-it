---
title: __rdtscp | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- __rdtscp
dev_langs:
- C++
helpviewer_keywords:
- rdtscp intrinsic
- __rdtscp intrinsic
- rdtscp instruction
ms.assetid: f17d9a9c-88bb-44e0-b69d-d516bc1c93ee
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ea7e8089f0678b89976a4c1e58ab6f3a364ac695
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="rdtscp"></a>__rdtscp
**Sezione specifica Microsoft**  
  
 Genera il `rdtscp` istruzione scrive `TSC_AUX[31:0`] in memoria e restituisce 64-bit Time Stamp Counter (`TSC)` risultato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned __int64 __rdtscp(  
   unsigned int * Aux  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `Aux`  
 Puntatore a un percorso che conterrà il contenuto del Registro di specifiche del computer `TSC_AUX[31:0]`.  
  
## <a name="return-value"></a>Valore restituito  
 Conteggio un intero senza segno a 64 bit.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__rdtscp`|Famiglia di processori AMD TNP 0Fh o versioni successive|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questo intrinseco genera il `rdtscp` istruzione. Per determinare il supporto hardware per questa istruzione, chiamare il `__cpuid` intrinseco con `InfoType=0x80000001` e i bit di controllo 27 di `CPUInfo[3] (EDX)`. Questo bit è 1 se l'istruzione è supportata e 0 in caso contrario.  Se si esegue il codice che utilizza questa funzione intrinseca nell'hardware che non supporta il `rdtscp` (istruzione), i risultati sono imprevedibili.  
  
> [!CAUTION]
>  A differenza di `rdtsc`, `rdtscp` è un'istruzione di serializzazione, tuttavia, il compilatore può spostare codice il problema intrinseco.  
  
 L'interpretazione del valore TSC in questa generazione di hardware è diverso da quello nelle versioni precedenti di [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)].  Manuali dell'hardware per altre informazioni, vedere.  
  
 Il significato del valore di `TSC_AUX[31:0]` dipende dal sistema operativo.  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
3363423610155519 ticks  
TSC_AUX was 0  
```  
  
**Fine sezione specifica Microsoft**  
 Copyright 2007 by Advanced Micro Devices, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione di Advanced Micro dispositivi, Inc.  
  
## <a name="see-also"></a>Vedere anche  
 [__rdtsc](../intrinsics/rdtsc.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)