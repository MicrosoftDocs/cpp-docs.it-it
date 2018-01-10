---
title: _InterlockedAddLargeStatistic | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _InterlockedAddLargeStatistic
- _InterlockedAddLargeStatistic_cpp
dev_langs: C++
helpviewer_keywords:
- _InterlockedAddLargeStatistic intrinsic
- InterlockedAddLargeStatistic intrinsic
ms.assetid: 2802e74b-bcee-46e4-b562-894908d44409
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1d9e61abc6ac531fe489465b1d81e167bdde5242
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="interlockedaddlargestatistic"></a>_InterlockedAddLargeStatistic
**Sezione specifica Microsoft**  
  
 Esegue un'aggiunta interlocked in cui il primo operando è un valore a 64 bit.  
  
## <a name="syntax"></a>Sintassi  
  
```  
long _InterlockedAddLargeStatistic(  
   __int64 volatile * Addend,  
   long Value  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in, out] `Addend`  
 Puntatore al primo operando per l'operazione di aggiunta. Il valore a cui puntato viene sostituito dal risultato dell'addizione.  
  
 [in] `Value`  
 Il secondo operando; valore da aggiungere al primo operando.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore del secondo operando.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_InterlockedAddLargeStatistic`|x86|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questa funzione intrinseca non è atomica perché viene implementata come due distinti istruzioni bloccate. Un valore non coerente letto potrebbe causare una lettura 64-bit atomica che si verifica in un altro thread durante l'esecuzione di questa funzione intrinseca.  
  
 Questa funzione si comporta come una barriera di lettura / scrittura. Per ulteriori informazioni, vedere [_ReadWriteBarrier](../intrinsics/readwritebarrier.md).  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)